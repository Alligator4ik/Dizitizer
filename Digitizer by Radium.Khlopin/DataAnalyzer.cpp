#include "DataAnalyzer.h"
#include <QDebug>
#include <fstream>

DataAnalyzer::DataAnalyzer(VMECommunication& vmeCommunication):
vmeComm(vmeCommunication){
	boardThreads.resize(vmeComm.numberOfWDF);
	CAEN_DGTZ_ErrorCode error;
	auto WDFIdentificators = vmeComm.getWDFIdentificators();
	for (auto boardNumber = 0; boardNumber < WDFIdentificators.size(); boardNumber++)
		if (vmeComm.WDFIsEnabled[boardNumber])
			if ((error = CAEN_DGTZ_AllocateEvent(WDFIdentificators[boardNumber], reinterpret_cast<void**>(&currentEvent))) != CAEN_DGTZ_Success) {
				vmeComm.addTimeOfBoardError(boardNumber);
				vmeComm.addBoardError(boardNumber, error);
			}
}

DataAnalyzer::~DataAnalyzer() {
	CAEN_DGTZ_ErrorCode error;
	auto WDFIdentificators = vmeComm.getWDFIdentificators();
	for (auto boardNumber = 0; boardNumber < WDFIdentificators.size(); boardNumber++)
		if (vmeComm.WDFIsEnabled[boardNumber])
			if ((error = CAEN_DGTZ_FreeEvent(WDFIdentificators[boardNumber], reinterpret_cast<void**>(&currentEvent))) != CAEN_DGTZ_Success) {
				vmeComm.addTimeOfBoardError(boardNumber);
				vmeComm.addBoardError(boardNumber, error);
			}
}

void DataAnalyzer::readData() {
	auto WDFIdentificators = vmeComm.getWDFIdentificators();
	//start acquistition cycle on all enabled boards
	for (auto boardNumber = 0; boardNumber < WDFIdentificators.size(); boardNumber++) {
		if (vmeComm.WDFIsEnabled[boardNumber]) {
			boardThreads[boardNumber] = thread(&DataAnalyzer::readDataOnBoard, this, WDFIdentificators[boardNumber]);
		}
	}
	//stop acquistition cycle on all enabled boards
	for (auto boardNumber = 0; boardNumber < WDFIdentificators.size(); boardNumber++) {
		if (vmeComm.WDFIsEnabled[boardNumber]) {
			boardThreads[boardNumber].join();
		}
	}
}

void DataAnalyzer::readDataOnBoard(uint32_t boardID) {
	CAEN_DGTZ_ErrorCode error;
	char* bufferToReadIn = nullptr;
	uint32_t sizeOfBufferInBytes;
	if ((error = CAEN_DGTZ_IRQWait(boardID, 500)) != CAEN_DGTZ_Success) {
		if (error == CAEN_DGTZ_Timeout) {
			return;
		}
		vmeComm.addTimeOfBoardError(boardID);
		vmeComm.addBoardError(boardID, error);
	}
	//maybe add lock to vmelib here?
	if ((error = CAEN_DGTZ_MallocReadoutBuffer(boardID, &bufferToReadIn, &sizeOfBufferInBytes)) != CAEN_DGTZ_Success) {
		vmeComm.addTimeOfBoardError(boardID);
		vmeComm.addBoardError(boardID, error);
		return;
	};
	if ((error = CAEN_DGTZ_ReadData(boardID, CAEN_DGTZ_SLAVE_TERMINATED_READOUT_MBLT, bufferToReadIn, &sizeOfBufferInBytes)) != CAEN_DGTZ_Success) {
		vmeComm.addTimeOfBoardError(boardID);
		vmeComm.addBoardError(boardID, error);
		return;
	}
	uint32_t numberOfEventsStored;
	if ((error = CAEN_DGTZ_GetNumEvents(boardID, bufferToReadIn, sizeOfBufferInBytes, &numberOfEventsStored)) != CAEN_DGTZ_Success) {
		vmeComm.addTimeOfBoardError(boardID);
		vmeComm.addBoardError(boardID, error);
		return;
	}
	if (numberOfEventsStored > 0) {
		//numberOfEventsStored--;
		CAEN_DGTZ_EventInfo_t eventInfo;
		char* eventPointer = nullptr;
		qInfo() << "Get " << numberOfEventsStored-- << " events!";
		if ((error = CAEN_DGTZ_GetEventInfo(boardID, bufferToReadIn, sizeOfBufferInBytes, numberOfEventsStored, &eventInfo, &eventPointer)) != CAEN_DGTZ_Success) {
			vmeComm.addTimeOfBoardError(boardID);
			vmeComm.addBoardError(boardID, error);
			return;
		}
		uint32_t size;
		CAEN_DGTZ_GetRecordLength(boardID, &size);
		if ((error = CAEN_DGTZ_DecodeEvent(boardID, eventPointer, reinterpret_cast<void**>(&currentEvent))) != CAEN_DGTZ_Success) {
			vmeComm.addTimeOfBoardError(boardID);
			vmeComm.addBoardError(boardID, error);
			return;
		}
		ofstream dataStream("lalala.txt");
		for (auto channel = 0; channel < MAX_UINT8_CHANNEL_SIZE; channel++)
			for (auto sample = 0; sample < currentEvent->ChSize[channel]; sample++) {
				int16_t sampl = currentEvent->DataChannel[channel][sample];
				dataStream << sampl << endl;
			}
	}
	if ((error = CAEN_DGTZ_FreeReadoutBuffer(&bufferToReadIn)) != CAEN_DGTZ_Success) {
		vmeComm.addTimeOfBoardError(boardID);
		vmeComm.addBoardError(boardID, error);
	}
}

void DataAnalyzer::writeData() {
}

CAEN_DGTZ_UINT8_EVENT_t* DataAnalyzer::getEvent() const {
	return currentEvent;
}