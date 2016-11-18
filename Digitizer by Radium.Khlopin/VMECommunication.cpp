#include "VMECommunication.h"
#include "Resources/CAENDigitizer.h"
#include <iostream>


VMECommunication::VMECommunication() {
	WDFBaseAdress.push_back(0x32100000);
	WDFBaseAdress.push_back(0x42100000);
	WDFIdentificator.resize(numberOfWDF);
	WDFInfo.resize(numberOfWDF);
	numberOfChannels.resize(numberOfWDF);
}


VMECommunication::~VMECommunication() {
	if (connectionToWDFIsActive)
		for (auto i = 0; i < numberOfWDF; i++)
			CAEN_DGTZ_CloseDigitizer(WDFIdentificator[i]);
}

void VMECommunication::connect() {
	CAEN_DGTZ_ErrorCode error;
	for (auto boardNumber = 0; boardNumber < numberOfWDF; boardNumber++) {
		if (WDFIsEnabled[boardNumber]) {
			if ((error = CAEN_DGTZ_OpenDigitizer(CAEN_DGTZ_OpticalLink, 0, boardNumber, 0, &WDFIdentificator[boardNumber])) != CAEN_DGTZ_Success) {
				boardErrors.push_back(error);
				WDFIsEnabled[boardNumber] = false;
				continue;
			}
			setup(boardNumber);
			connectionToWDFIsActive = true;
		}
	}
}

void VMECommunication::disconnect() {
	if (connectionToWDFIsActive) {
		for (auto i = 0; i < numberOfWDF; i++)
			CAEN_DGTZ_CloseDigitizer(WDFIdentificator[i]);
		connectionToWDFIsActive = false;
	}
}

void VMECommunication::setup(short boardNumber) {
	CAEN_DGTZ_ErrorCode error;

	//get info about the board
	CAEN_DGTZ_GetInfo(WDFIdentificator[boardNumber], &WDFInfo[boardNumber]);
	numberOfChannels[boardNumber] = WDFInfo[boardNumber].Channels;
	unsigned int dataRead;
	//reset the board
	if ((error = CAEN_DGTZ_Reset(WDFIdentificator[boardNumber])) != CAEN_DGTZ_Success)
		boardErrors.push_back(error);

	if ((error = CAEN_DGTZ_WriteRegister(WDFIdentificator[boardNumber], 
										WDFBaseAdress[boardNumber] + CAEN_DGTZ_BLT_EVENT_NUM_ADD, 
										0x1)) != CAEN_DGTZ_Success)
		boardErrors.push_back(error);
}

void VMECommunication::startAqustition() {
}


bool VMECommunication::isConnected() {
	return connectionToWDFIsActive;
}

CAEN_DGTZ_BoardInfo_t VMECommunication::getWDFInfo(unsigned short numberOfBoard) {
	return WDFInfo[numberOfBoard];
}
