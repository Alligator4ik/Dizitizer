#include "DataAnalyzer.h"

DataAnalyzer::DataAnalyzer(VMECommunication& vmeCommunication):
vmeComm(vmeCommunication){
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
	CAEN_DGTZ_ErrorCode error;
	char* bufferToReadIn = nullptr;
	uint32_t sizeOfBufferInBytes;
	auto WDFIdentificators = vmeComm.getWDFIdentificators();
	for (auto boardNumber = 0; boardNumber < WDFIdentificators.size(); boardNumber++) {
		if (vmeComm.WDFIsEnabled[boardNumber]) {
			//maybe add lock to vmelib here?
			if ((error = CAEN_DGTZ_MallocReadoutBuffer(WDFIdentificators[boardNumber], &bufferToReadIn, &sizeOfBufferInBytes)) != CAEN_DGTZ_Success) {
				vmeComm.addTimeOfBoardError(boardNumber);
				vmeComm.addBoardError(boardNumber, error);
				continue;
			};
			if ((error = CAEN_DGTZ_ReadData(WDFIdentificators[boardNumber], CAEN_DGTZ_SLAVE_TERMINATED_READOUT_MBLT, bufferToReadIn, &sizeOfBufferInBytes)) != CAEN_DGTZ_Success) {
				vmeComm.addTimeOfBoardError(boardNumber);
				vmeComm.addBoardError(boardNumber, error);
				continue;
			}
			uint32_t numberOfEventsStored;
			if ((error = CAEN_DGTZ_GetNumEvents(WDFIdentificators[boardNumber], bufferToReadIn, sizeOfBufferInBytes, &numberOfEventsStored)) != CAEN_DGTZ_Success) {
				vmeComm.addTimeOfBoardError(boardNumber);
				vmeComm.addBoardError(boardNumber, error);
				continue;
			}
			if (numberOfEventsStored > 0) {
				numberOfEventsStored--;
				CAEN_DGTZ_EventInfo_t eventInfo;
				char* eventPointer = nullptr;
				if ((error = CAEN_DGTZ_GetEventInfo(WDFIdentificators[boardNumber], bufferToReadIn, sizeOfBufferInBytes, numberOfEventsStored, &eventInfo, &eventPointer)) != CAEN_DGTZ_Success) {
					vmeComm.addTimeOfBoardError(boardNumber);
					vmeComm.addBoardError(boardNumber, error);
					continue;
				}
				if ((error = CAEN_DGTZ_DecodeEvent(WDFIdentificators[boardNumber], eventPointer, reinterpret_cast<void**>(&currentEvent))) != CAEN_DGTZ_Success) {
					vmeComm.addTimeOfBoardError(boardNumber);
					vmeComm.addBoardError(boardNumber, error);
					continue;
				}
			}
			if ((error = CAEN_DGTZ_FreeReadoutBuffer(&bufferToReadIn)) != CAEN_DGTZ_Success) {
				vmeComm.addTimeOfBoardError(boardNumber);
				vmeComm.addBoardError(boardNumber, error);
			}
		}
	}
}

void DataAnalyzer::writeData() {
}

CAEN_DGTZ_UINT16_EVENT_t* DataAnalyzer::getEvent() const {
	return currentEvent;
}