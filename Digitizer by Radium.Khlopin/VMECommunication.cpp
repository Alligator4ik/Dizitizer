#include "VMECommunication.h"
#include "Resources/CAENDigitizer.h"
#include <iostream>
#include <QTime>


VMECommunication::VMECommunication() {
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
		threshold[i] = vector<int>(8, 20);							//8 - number of channels, 20 - default threshold
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

void VMECommunication::setup(short boardNumber) {
	CAEN_DGTZ_ErrorCode error;

	//reset the board
	if ((error = CAEN_DGTZ_Reset(WDFIdentificators[boardNumber])) != CAEN_DGTZ_Success) {
		timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
		boardErrors[boardNumber].push_back(error);
	}
	//write number of blocks transferred during cycle
	if ((error = CAEN_DGTZ_WriteRegister(WDFIdentificators[boardNumber],
										CAEN_DGTZ_BLT_EVENT_NUM_ADD,
										numberOfBlocksTransferredDuringCycle)) != CAEN_DGTZ_Success) {
		timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
		boardErrors[boardNumber].push_back(error);
	}
	//write channels' trigger mask
	if ((error = CAEN_DGTZ_WriteRegister(WDFIdentificators[boardNumber],
										CAEN_DGTZ_TRIGGER_SRC_ENABLE_ADD,
										channelTriggerEnableMask[boardNumber])) != CAEN_DGTZ_Success){
		timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
		boardErrors[boardNumber].push_back(error);
	}
	//write channels can generate self-board and OUT_EXT trigger mask
	if ((error = CAEN_DGTZ_SetChannelSelfTrigger(WDFIdentificators[boardNumber],
												CAEN_DGTZ_TRGMODE_ACQ_AND_EXTOUT,
												channelTriggerEnableMask[boardNumber])) != CAEN_DGTZ_Success){
		timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
		boardErrors[boardNumber].push_back(error);
	}
	//write channels' activated (are currently acuistited) mask
	if ((error = CAEN_DGTZ_SetChannelEnableMask(WDFIdentificators[boardNumber],
		channelActiveEnableMask[boardNumber])) != CAEN_DGTZ_Success){
		timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
		boardErrors[boardNumber].push_back(error);
	}
	//write thresholds
	for (auto channel = 0; channel < numberOfChannels[boardNumber]; channel++)
		if ((error = CAEN_DGTZ_SetChannelTriggerThreshold(WDFIdentificators[boardNumber],
														channel, threshold[boardNumber][channel])) != CAEN_DGTZ_Success) {
			
			timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
			boardErrors[boardNumber].push_back(error);
			break;
		}
	//write polarity (rising or falling edge)
	for (auto channel = 0; channel < numberOfChannels[boardNumber]; channel++)
		if ((error = CAEN_DGTZ_SetTriggerPolarity(WDFIdentificators[boardNumber], 
													channel, polarity)) != CAEN_DGTZ_Success) {
			timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
			boardErrors[boardNumber].push_back(error);
			break;
		}
	//set record length
	if ((error = CAEN_DGTZ_SetRecordLength(WDFIdentificators[boardNumber], recordLength)) != CAEN_DGTZ_Success) {
		timeOfBoardErrors[boardNumber].push_back(QTime::currentTime());
		boardErrors[boardNumber].push_back(error);
	}
}

void VMECommunication::startAcquisition() {
	for (auto boardNumber = 0; boardNumber < numberOfWDF; boardNumber++)
		if (WDFIsEnabled[boardNumber]) {
			setup(boardNumber);
		}
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

void VMECommunication::setRecordLength(int newRecordLength, int postTriggerSize) {
	auto multiplier = 1024;									//depends on base frenquency
	unsigned int samples = newRecordLength*multiplier;		//from KB to samples
	recordLength = samples;
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

CAEN_DGTZ_BoardInfo_t VMECommunication::getWDFInfo(unsigned short numberOfBoard) {
	return WDFInfo[numberOfBoard];
}
