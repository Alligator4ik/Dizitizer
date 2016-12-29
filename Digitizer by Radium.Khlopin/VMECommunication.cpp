#include "VMECommunication.h"
#include "Resources/CAENDigitizer.h"
#include <QTime>


VMECommunication::VMECommunication() {
	//default setting, if something goes wrong
	channelTriggerEnableMask.resize(numberOfWDF);
	channelActiveEnableMask.resize(numberOfWDF);
	WDFIdentificators.resize(numberOfWDF);
	WDFInfo.resize(numberOfWDF);
	numberOfChannels.resize(numberOfWDF);
	boardErrors.resize(numberOfWDF);
	timeOfBoardErrors.resize(numberOfWDF);
	stringErrors.resize(numberOfWDF);
	timeOfStringErrors.resize(numberOfWDF);
	threshold.resize(numberOfWDF);
	for (auto i = 0; i < 8; i++)
		threshold[i] = vector<ushort>(8, 133);						//8 - number of channels, 133 - default threshold (20 mV)
	sample.resize(numberOfWDF);
	for (auto i = 0; i < 8; i++)
		sample[i] = vector<ushort>(8, 10);							//8 - number of channels, 10 - default sample
	DCOffset.resize(numberOfWDF);
	for (auto i = 0; i < 8; i++)
		DCOffset[i] = vector<ushort>(8, 0x7FFF);					//8 - number of channels, 0x7FFF - default offset
	polarity = CAEN_DGTZ_TriggerOnFallingEdge;
}

VMECommunication::~VMECommunication() {
	if (connectionToWDFIsActive)
		for (auto i = 0; i < numberOfWDF; i++)
			CAEN_DGTZ_CloseDigitizer(WDFIdentificators[i]);
}

bool VMECommunication::connect() {
	CAEN_DGTZ_ErrorCode error;
	for (auto boardNumber = 0; boardNumber < numberOfWDF; boardNumber++) {
		if (WDFIsEnabled[boardNumber]) {
			if ((error = CAEN_DGTZ_OpenDigitizer(CAEN_DGTZ_OpticalLink, 0, boardNumber, 0, &WDFIdentificators[boardNumber])) != CAEN_DGTZ_Success) {
				timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
				boardErrors[boardNumber].push_back(error);
				stringErrors[boardNumber].push_back(QString("Попытке соединения с оцифровщиком"));
				WDFIsEnabled[boardNumber] = false;
				continue;
			}	
			//get info about the board
			CAEN_DGTZ_GetInfo(WDFIdentificators[boardNumber], &WDFInfo[boardNumber]);
			numberOfChannels[boardNumber] = WDFInfo[boardNumber].Channels;
			//reset the board
			if ((error = CAEN_DGTZ_Reset(WDFIdentificators[boardNumber])) != CAEN_DGTZ_Success) {
				timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
				boardErrors[boardNumber].push_back(error);
				stringErrors[boardNumber].push_back(QString("Сбросе оцифровщика"));
				continue;
			}
			connectionToWDFIsActive = true;
		}
	}
	return connectionToWDFIsActive;
}

bool VMECommunication::disconnect() {
	if (connectionToWDFIsActive) {
		for (auto i = 0; i < numberOfWDF; i++)
			CAEN_DGTZ_CloseDigitizer(WDFIdentificators[i]);
		connectionToWDFIsActive = false;
		return true;
	}
	return false;
}

CAEN_DGTZ_ErrorCode	VMECommunication::setup(uint16_t boardNumber) {
	CAEN_DGTZ_ErrorCode error;
	//write number of blocks transferred during cycle
	if ((error = CAEN_DGTZ_WriteRegister(WDFIdentificators[boardNumber],
										CAEN_DGTZ_BLT_EVENT_NUM_ADD,
										numberOfBlocksTransferredDuringCycle)) != CAEN_DGTZ_Success) {
		timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
		boardErrors[boardNumber].push_back(error);
		stringErrors[boardNumber].push_back(QString("Установке объема передачи BLT"));
		return error;
	}
	//write channels can generate self-board trigger mask
	if ((error = CAEN_DGTZ_SetChannelSelfTrigger(WDFIdentificators[boardNumber],
												CAEN_DGTZ_TRGMODE_ACQ_ONLY,
												channelTriggerEnableMask[boardNumber])) != CAEN_DGTZ_Success){
		timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
		boardErrors[boardNumber].push_back(error);
		stringErrors[boardNumber].push_back(QString("Установке триггерной маски"));
		return error;
	}
	//write channels' activated (are currently acuistited) mask
	if ((error = CAEN_DGTZ_SetChannelEnableMask(WDFIdentificators[boardNumber],
		channelActiveEnableMask[boardNumber])) != CAEN_DGTZ_Success){
		timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
		boardErrors[boardNumber].push_back(error);
		stringErrors[boardNumber].push_back(QString("Установке маски включенных каналов"));
		return error;
	}
	//write thresholds
	for (auto channel = 0; channel < numberOfChannels[boardNumber]; channel++)
		if ((error = CAEN_DGTZ_SetChannelTriggerThreshold(WDFIdentificators[boardNumber], channel, threshold[boardNumber][channel])) != CAEN_DGTZ_Success) {
			timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
			boardErrors[boardNumber].push_back(error);
			stringErrors[boardNumber].push_back(QString("Установке порогов"));
			return error;
		}
	//write DC offset
	for (auto channel = 0; channel < numberOfChannels[boardNumber]; channel++)
		if ((error = CAEN_DGTZ_SetChannelDCOffset(WDFIdentificators[boardNumber], channel, DCOffset[boardNumber][channel])) != CAEN_DGTZ_Success) {
			timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
			boardErrors[boardNumber].push_back(error);
			stringErrors[boardNumber].push_back(QString("Установке добавочных напряжений"));
			return error;
		}
	//write polarity (rising or falling edge)
	for (auto channel = 0; channel < numberOfChannels[boardNumber]; channel++)
		if ((error = CAEN_DGTZ_SetTriggerPolarity(WDFIdentificators[boardNumber], 
													channel, polarity)) != CAEN_DGTZ_Success) {
			timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
			boardErrors[boardNumber].push_back(error);
			stringErrors[boardNumber].push_back(QString("Установке полярности"));
			return error;
		}
	if ((error = CAEN_DGTZ_SetInterruptConfig(WDFIdentificators[boardNumber], CAEN_DGTZ_ENABLE,
												1/*						we connected through CONET*/, 
												0xAAAA/*				via optical link this parameter is useless*/,
												eventNumberToInterrupt/*number of events storred to throw interrupt*/,
												CAEN_DGTZ_IRQ_MODE_ROAK)) != CAEN_DGTZ_Success) {
		timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
		boardErrors[boardNumber].push_back(error);
		stringErrors[boardNumber].push_back(QString("Настройке прерываний"));
		return error;
	}
	//all is good
	return error;
}

bool VMECommunication::startAcquisition() {
	CAEN_DGTZ_ErrorCode error;
	for (auto boardNumber = 0; boardNumber < numberOfWDF; boardNumber++)
		if (WDFIsEnabled[boardNumber])
			if (setup(boardNumber) == CAEN_DGTZ_Success)
				if ((error = CAEN_DGTZ_SWStartAcquisition(WDFIdentificators[boardNumber])) != CAEN_DGTZ_Success) {
					timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
					boardErrors[boardNumber].push_back(error);
					stringErrors[boardNumber].push_back(QString("Запуске прослушки"));
					return false;
				}
	//if succeed
	return true;
}

bool VMECommunication::stopAcquisition() {
	CAEN_DGTZ_ErrorCode error;
	for (auto boardNumber = 0; boardNumber < WDFIdentificators.size(); boardNumber++)
		if ((error = CAEN_DGTZ_SWStopAcquisition(WDFIdentificators[boardNumber])) != CAEN_DGTZ_Success) {
			timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
			boardErrors[boardNumber].push_back(error);
			stringErrors[boardNumber].push_back(QString("Остановке прослушки"));
			return false;
		}
	return clearData();
}

bool VMECommunication::createSoftwareTrigger() {
	CAEN_DGTZ_ErrorCode error;
	for (auto boardNumber = 0; boardNumber < WDFIdentificators.size(); boardNumber++)
		if (WDFIsEnabled[boardNumber])
			if ((error = CAEN_DGTZ_SendSWtrigger(WDFIdentificators[boardNumber])) != CAEN_DGTZ_Success) {
				timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
				boardErrors[boardNumber].push_back(error);
				stringErrors[boardNumber].push_back(QString("Создании цифрового триггера"));
				return false;
			}
	return true;
}

bool VMECommunication::changeExternalTrigger(bool externalTriggerIsActive) {
	CAEN_DGTZ_ErrorCode error;
	for (auto boardNumber = 0; boardNumber < WDFIdentificators.size(); boardNumber++)
		if (WDFIsEnabled[boardNumber]) {
			if (externalTriggerIsActive)
				error = CAEN_DGTZ_SetExtTriggerInputMode(WDFIdentificators[boardNumber], CAEN_DGTZ_TRGMODE_ACQ_AND_EXTOUT);
			else
				error = CAEN_DGTZ_SetExtTriggerInputMode(WDFIdentificators[boardNumber], CAEN_DGTZ_TRGMODE_DISABLED);
			if (error != CAEN_DGTZ_Success) {
				timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
				boardErrors[boardNumber].push_back(error);
				stringErrors[boardNumber].push_back(QString("Изменении параметров внешнего триггерования"));
				return false;
			}
		}
	return true;
}

void VMECommunication::changePolarity() {
	switch (polarity) {
		case CAEN_DGTZ_TriggerOnFallingEdge: {
			polarity = CAEN_DGTZ_TriggerOnRisingEdge;
			break;
		}
		case CAEN_DGTZ_TriggerOnRisingEdge: {
			polarity = CAEN_DGTZ_TriggerOnFallingEdge;
			break;
		}
		default: break;
	}
}

bool VMECommunication::clearData() {
	CAEN_DGTZ_ErrorCode error;
	for (auto boardNumber = 0; boardNumber < WDFIdentificators.size(); boardNumber++)
		if ((error = CAEN_DGTZ_ClearData(WDFIdentificators[boardNumber])) != CAEN_DGTZ_Success) {
			timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
			boardErrors[boardNumber].push_back(error);
			stringErrors[boardNumber].push_back(QString("Вычищении данных"));
			return false;
		}
	return true;
}

bool VMECommunication::isConnected() const {
	return connectionToWDFIsActive;
}

vector<vector<QTime>>& VMECommunication::getTimeOfBoardErrors() {
	return timeOfBoardErrors;
}

vector<vector<CAEN_DGTZ_ErrorCode>>& VMECommunication::getboardErrors() {
	return boardErrors;
}

vector<vector<QTime>>& VMECommunication::getTimeOfStringErrors() {
	return timeOfStringErrors;
}

vector<vector<QString>>& VMECommunication::getStringErrors() {
	return stringErrors;
}

vector<int32_t>& VMECommunication::getWDFIdentificators() {
	return this->WDFIdentificators;
}

bool VMECommunication::setRecordLength(int32_t newRecordLength, int32_t postTriggerSize) {
	auto multiplier = 1024;									//depends on base frenquency
	unsigned int samples = newRecordLength*multiplier;		//from KB to samples
	recordLength = samples;
	CAEN_DGTZ_ErrorCode error;
	for (auto boardNumber = 0; boardNumber < numberOfWDF; boardNumber++)
		if (WDFIsEnabled[boardNumber]) {
			if ((error = CAEN_DGTZ_SetRecordLength(WDFIdentificators[boardNumber], recordLength)) != CAEN_DGTZ_Success) {
				timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
				boardErrors[boardNumber].push_back(error);
				stringErrors[boardNumber].push_back(QString("Настройке буфера"));
				return false;
			}
			if (!this->setPostTriggerLength(postTriggerSize))
				return false;
		}
	return true;
}

bool VMECommunication::setPostTriggerLength(int32_t postTriggerSize) {
	CAEN_DGTZ_ErrorCode error;
	for (auto boardNumber = 0; boardNumber < numberOfWDF; boardNumber++)
		if (WDFIsEnabled[boardNumber])
			if ((error = CAEN_DGTZ_SetPostTriggerSize(WDFIdentificators[boardNumber], postTriggerSize)) != CAEN_DGTZ_Success) {
				timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
				boardErrors[boardNumber].push_back(error);
				stringErrors[boardNumber].push_back(QString("Настройке пост-триггера"));
				return false;
			}
	return true;
}

bool VMECommunication::setChannelThreshold(ushort board, ushort channel, int16_t newThresholdInmV) {
	//changing mV to ADC counts
	auto newThresholdInADCCounts = static_cast<uint32_t>((newThresholdInmV + 500)*0.255);
	threshold[board][channel] = newThresholdInADCCounts;
	CAEN_DGTZ_ErrorCode error;
	if ((error = CAEN_DGTZ_SetChannelTriggerThreshold(WDFIdentificators[board], channel, newThresholdInADCCounts)) != CAEN_DGTZ_Success) {
		timeOfBoardErrors[board].push_back(QTime::currentTime());
		boardErrors[board].push_back(error);
		stringErrors[board].push_back(QString("Настройке порога"));
		return false;
	}
	return true;
}

bool VMECommunication::setChannelSample(ushort board, ushort channel, ushort newSample) {
	sample[board][channel] = newSample;
	CAEN_DGTZ_ErrorCode error;
	if ((error = CAEN_DGTZ_WriteRegister(WDFIdentificators[board], CAEN_DGTZ_CHANNEL_OV_UND_TRSH_BASE_ADDRESS, newSample)) != CAEN_DGTZ_Success) {
		timeOfBoardErrors[board].push_back(QTime::currentTime());
		boardErrors[board].push_back(error);
		stringErrors[board].push_back(QString("Настройке крутизны изменения сигнала"));
		return false;
	}
	return true;
}

bool VMECommunication::setChannelOffset(ushort board, ushort channel, int16_t newOffsetInmV) {
	auto newOffset = static_cast<uint32_t>(65535*(0.5-newOffsetInmV/1000.0)); //32767 = 0x7FFF => [-Vpp/2; Vpp/2]; from mV to hex
	DCOffset[board][channel] = newOffset;
	CAEN_DGTZ_ErrorCode error;
	if ((error = CAEN_DGTZ_SetChannelDCOffset(WDFIdentificators[board], channel, newOffset)) != CAEN_DGTZ_Success) {
		timeOfBoardErrors[board].push_back(QTime::currentTime());
		boardErrors[board].push_back(error);
		stringErrors[board].push_back(QString("Настройке смещения по напряжению"));
		return false;
	}
	CAEN_DGTZ_GetChannelDCOffset(WDFIdentificators[board], channel, &newOffset);
	return true;
}

void VMECommunication::addTimeOfBoardError(ushort board) {
	timeOfBoardErrors[board].push_back(QTime::currentTime());
}

void VMECommunication::addBoardError(ushort board, CAEN_DGTZ_ErrorCode errorCode) {
	boardErrors[board].push_back(errorCode);
}

void VMECommunication::addStringError(uint16_t board, QString functionDescription) {
	stringErrors[board].push_back(functionDescription);
}

CAEN_DGTZ_BoardInfo_t VMECommunication::getWDFInfo(ushort numberOfBoard) {
	return WDFInfo[numberOfBoard];
}
