#include "VMECommunication.h"
#include "Resources/CAENDigitizer.h"
#include <iostream>
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
		threshold[i] = vector<ushort>(8, 20);						//8 - number of channels, 20 - default threshold
	sample.resize(numberOfWDF);
	for (auto i = 0; i < 8; i++)
		sample[i] = vector<ushort>(8, 10);							//8 - number of channels, 10 - default sample
	DCOffset.resize(numberOfWDF);
	for (auto i = 0; i < 8; i++)
		DCOffset[i] = vector<ushort>(8, 0x7FFF);					//8 - number of channels, 0x7FFF - default offset
	numberOfBlocksTransferredDuringCycle = 0x2;
	recordLength = 2048;
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
				return error;
			}
			connectionToWDFIsActive = true;
		}
	}
	return connectionToWDFIsActive;
}

void VMECommunication::disconnect() {
	if (connectionToWDFIsActive) {
		for (auto i = 0; i < numberOfWDF; i++)
			CAEN_DGTZ_CloseDigitizer(WDFIdentificators[i]);
		connectionToWDFIsActive = false;
	}
}

CAEN_DGTZ_ErrorCode	VMECommunication::setup(uint16_t boardNumber) {
	CAEN_DGTZ_ErrorCode error;

	//reset the board
	if ((error = CAEN_DGTZ_Reset(WDFIdentificators[boardNumber])) != CAEN_DGTZ_Success) {
		timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
		boardErrors[boardNumber].push_back(error);
		return error;
	}
	//write number of blocks transferred during cycle
	if ((error = CAEN_DGTZ_WriteRegister(WDFIdentificators[boardNumber],
										CAEN_DGTZ_BLT_EVENT_NUM_ADD,
										numberOfBlocksTransferredDuringCycle)) != CAEN_DGTZ_Success) {
		timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
		boardErrors[boardNumber].push_back(error);
		return error;
	}
	//write channels can generate self-board and OUT_EXT trigger mask
	if ((error = CAEN_DGTZ_SetChannelSelfTrigger(WDFIdentificators[boardNumber],
												CAEN_DGTZ_TRGMODE_ACQ_AND_EXTOUT,
												channelTriggerEnableMask[boardNumber])) != CAEN_DGTZ_Success){
		timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
		boardErrors[boardNumber].push_back(error);
		return error;
	}
	//write channels' activated (are currently acuistited) mask
	if ((error = CAEN_DGTZ_SetChannelEnableMask(WDFIdentificators[boardNumber],
		channelActiveEnableMask[boardNumber])) != CAEN_DGTZ_Success){
		timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
		boardErrors[boardNumber].push_back(error);
		return error;
	}
	//write thresholds
	for (auto channel = 0; channel < numberOfChannels[boardNumber]; channel++)
		if ((error = setChannelThreshold(boardNumber, channel, threshold[boardNumber][channel])) != CAEN_DGTZ_Success) {
			timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
			boardErrors[boardNumber].push_back(error);
			return error;
		}
	//write polarity (rising or falling edge)
	for (auto channel = 0; channel < numberOfChannels[boardNumber]; channel++)
		if ((error = CAEN_DGTZ_SetTriggerPolarity(WDFIdentificators[boardNumber], 
													channel, polarity)) != CAEN_DGTZ_Success) {
			timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
			boardErrors[boardNumber].push_back(error);
			return error;
		}
	//all is good
	return error;
}

CAEN_DGTZ_ErrorCode	VMECommunication::startAcquisition() {
	auto error = CAEN_DGTZ_Success;
	for (auto boardNumber = 0; boardNumber < numberOfWDF; boardNumber++)
		if (WDFIsEnabled[boardNumber])
			if (setup(boardNumber) == CAEN_DGTZ_Success)
				if ((error = CAEN_DGTZ_SWStartAcquisition(WDFIdentificators[boardNumber])) != CAEN_DGTZ_Success) {
					timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
					boardErrors[boardNumber].push_back(error);
					return error;
				}
	//if succeed
	return error;
}

void VMECommunication::stopAcquisition() {
	CAEN_DGTZ_ErrorCode error;
	for (auto boardNumber = 0; boardNumber < WDFIdentificators.size(); boardNumber++)
		if ((error = CAEN_DGTZ_SWStopAcquisition(WDFIdentificators[boardNumber])) != CAEN_DGTZ_Success) {
			timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
			boardErrors[boardNumber].push_back(error);
		}
}

void VMECommunication::createSoftwareTrigger() {
	CAEN_DGTZ_ErrorCode error;
	for (auto boardNumber = 0; boardNumber < WDFIdentificators.size(); boardNumber++)
		if (WDFIsEnabled[boardNumber])
			if ((error = CAEN_DGTZ_SendSWtrigger(WDFIdentificators[boardNumber])) != CAEN_DGTZ_Success) {
				timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
				boardErrors[boardNumber].push_back(error);
			}
}

void VMECommunication::changeExternalTrigger(bool externalTriggerIsActive) {
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
			}
		}
}

void VMECommunication::clearData() {
	CAEN_DGTZ_ErrorCode error;
	for (auto boardNumber = 0; boardNumber < WDFIdentificators.size(); boardNumber++)
		if ((error = CAEN_DGTZ_ClearData(WDFIdentificators[boardNumber])) != CAEN_DGTZ_Success) {
			timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
			boardErrors[boardNumber].push_back(error);
		}
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

vector<vector<string>>& VMECommunication::getStringErrors() {
	return stringErrors;
}

vector<int32_t>& VMECommunication::getWDFIdentificators() {
	return this->WDFIdentificators;
}

void VMECommunication::setRecordLength(int newRecordLength, int postTriggerSize) {
	auto multiplier = 1024;									//depends on base frenquency
	unsigned int samples = newRecordLength*multiplier;		//from KB to samples
	recordLength = samples;
	CAEN_DGTZ_ErrorCode error;
	for (auto boardNumber = 0; boardNumber < numberOfWDF; boardNumber++)
		if (WDFIsEnabled[boardNumber])
			if ((error = CAEN_DGTZ_SetRecordLength(WDFIdentificators[boardNumber], recordLength)) != CAEN_DGTZ_Success) {
				timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
				boardErrors[boardNumber].push_back(error);
			} else
				this->setPostTriggerLength(postTriggerSize);
}

void VMECommunication::setPostTriggerLength(int postTriggerSize) {
	CAEN_DGTZ_ErrorCode error;
	for (auto boardNumber = 0; boardNumber < numberOfWDF; boardNumber++)
		if (WDFIsEnabled[boardNumber])
			if ((error = CAEN_DGTZ_SetPostTriggerSize(WDFIdentificators[boardNumber], postTriggerSize)) != CAEN_DGTZ_Success) {
				timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
				boardErrors[boardNumber].push_back(error);
			}
}

CAEN_DGTZ_ErrorCode VMECommunication::setChannelThreshold(uint16_t board, ushort channel, ushort newThreshold) {
	threshold[board][channel] = newThreshold;
	return CAEN_DGTZ_SetChannelTriggerThreshold(WDFIdentificators[board], channel, newThreshold);
}

CAEN_DGTZ_ErrorCode VMECommunication::setChannelSample(ushort board, ushort channel, ushort newSample) {
	sample[board][channel] = newSample;
	return CAEN_DGTZ_WriteRegister(WDFIdentificators[board], CAEN_DGTZ_CHANNEL_OV_UND_TRSH_BASE_ADDRESS, newSample);
}

CAEN_DGTZ_ErrorCode VMECommunication::setChannelOffset(ushort board, ushort channel, ushort newOffsetInmV) {
	DCOffset[board][channel] = newOffsetInmV;
	auto newOffset = static_cast<ushort>(65535*(0.5-newOffsetInmV/1000)); //32767 = 0x7FFF => [-Vpp/2; Vpp/2]; from mV to hex
	return CAEN_DGTZ_SetChannelDCOffset(WDFIdentificators[board], channel, newOffset);
}

CAEN_DGTZ_BoardInfo_t VMECommunication::getWDFInfo(unsigned short numberOfBoard) {
	return WDFInfo[numberOfBoard];
}
