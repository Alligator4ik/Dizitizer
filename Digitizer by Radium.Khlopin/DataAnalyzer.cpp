#include "DataAnalyzer.h"
#include <algorithm>
#include <QDebug>
#include <fstream>
#include "ToRussianTextForQString.h"

DataAnalyzer::DataAnalyzer(VMECommunication& vmeCommunication):
vmeComm(vmeCommunication){
	boardThreads.resize(vmeComm.numberOfWDF);
	currentEvents.resize(vmeComm.numberOfWDF);
	sizeOfBufferInBytes.resize(vmeComm.numberOfWDF);
	bufferToReadIn.resize(vmeComm.numberOfWDF);
	CAEN_DGTZ_ErrorCode error;
	auto WDFIdentificators = vmeComm.getWDFIdentificators();
	for (auto boardNumber = 0; boardNumber < WDFIdentificators.size(); boardNumber++)
		if (vmeComm.WDFIsEnabled[boardNumber]) {
			if ((error = CAEN_DGTZ_AllocateEvent(WDFIdentificators[boardNumber], reinterpret_cast<void**>(&currentEvent))) != CAEN_DGTZ_Success) {
				vmeComm.addTimeOfBoardError(boardNumber);
				vmeComm.addBoardError(boardNumber, error);
				vmeComm.addStringError(boardNumber, toRussian("Создании ивентов"));
			}
			if ((error = CAEN_DGTZ_MallocReadoutBuffer(WDFIdentificators[boardNumber], &bufferToReadIn[boardNumber], &sizeOfBufferInBytes[boardNumber])) != CAEN_DGTZ_Success) {
				vmeComm.addTimeOfBoardError(boardNumber);
				vmeComm.addBoardError(boardNumber, error);
				vmeComm.addStringError(boardNumber, toRussian("Аллоцировании памяти"));
			}
		}
}

DataAnalyzer::~DataAnalyzer() {
	CAEN_DGTZ_ErrorCode error;
	auto WDFIdentificators = vmeComm.getWDFIdentificators();
	for (auto boardNumber = 0; boardNumber < WDFIdentificators.size(); boardNumber++)
		if (vmeComm.WDFIsEnabled[boardNumber]) {
			if ((error = CAEN_DGTZ_FreeReadoutBuffer(&bufferToReadIn[boardNumber])) != CAEN_DGTZ_Success) {
				vmeComm.addTimeOfBoardError(boardNumber);
				vmeComm.addBoardError(boardNumber, error);
				vmeComm.addStringError(boardNumber, toRussian("Деаллоцировании памяти"));
			}
			if ((error = CAEN_DGTZ_FreeEvent(WDFIdentificators[boardNumber], reinterpret_cast<void**>(&currentEvent))) != CAEN_DGTZ_Success) {
				vmeComm.addTimeOfBoardError(boardNumber);
				vmeComm.addBoardError(boardNumber, error);
				vmeComm.addStringError(boardNumber, toRussian("Уничтожении ивентов"));
			}
		}
}

//return true if there is something to read on any board
bool DataAnalyzer::readData() {
	auto WDFIdentificators = vmeComm.getWDFIdentificators();
	//start acquistition cycle on all enabled boards
	for (auto boardNumber = 0; boardNumber < WDFIdentificators.size(); boardNumber++) {
		if (vmeComm.WDFIsEnabled[boardNumber]) {
			boardThreads[boardNumber] = async(launch::async, &DataAnalyzer::readDataOnBoard, this, WDFIdentificators[boardNumber]);
		}
	}
	auto result = false;
	//stop acquistition cycle on all enabled boards
	for (auto boardNumber = 0; boardNumber < WDFIdentificators.size(); boardNumber++) {
		if (vmeComm.WDFIsEnabled[boardNumber]) {
			result |= boardThreads[boardNumber].get();
		}
	}
	return result;		//if there is anything to read
}

//return true if there is something to read on board with ID boardID
bool DataAnalyzer::readDataOnBoard(uint32_t boardID) {
	CAEN_DGTZ_ErrorCode error;
	if ((error = CAEN_DGTZ_IRQWait(boardID, 500)) != CAEN_DGTZ_Success) {
		if (error == CAEN_DGTZ_Timeout)
			return false;			//if thire is nothing to read
		vmeComm.addTimeOfBoardError(boardID);
		vmeComm.addBoardError(boardID, error);
		vmeComm.addStringError(boardID, toRussian("Ожидании прерывания"));
		return false;
	}
	if ((error = CAEN_DGTZ_RearmInterrupt(boardID)) != CAEN_DGTZ_Success) {
		vmeComm.addTimeOfBoardError(boardID);
		vmeComm.addBoardError(boardID, error);
		vmeComm.addStringError(boardID, toRussian("Обновлении прерывания"));
		return false;
	}
	if ((error = CAEN_DGTZ_ReadData(boardID, CAEN_DGTZ_SLAVE_TERMINATED_READOUT_MBLT, bufferToReadIn[boardID], &sizeOfBufferInBytes[boardID])) != CAEN_DGTZ_Success) {
		vmeComm.addTimeOfBoardError(boardID);
		vmeComm.addBoardError(boardID, error);
		vmeComm.addStringError(boardID, toRussian("Непосредственном чтении"));
		return false;
	}
	uint32_t numberOfEventsStored;
	if ((error = CAEN_DGTZ_GetNumEvents(boardID, bufferToReadIn[boardID], sizeOfBufferInBytes[boardID], &numberOfEventsStored)) != CAEN_DGTZ_Success) {
		vmeComm.addTimeOfBoardError(boardID);
		vmeComm.addBoardError(boardID, error);
		vmeComm.addStringError(boardID, toRussian("Получении кол-ва ивентов"));
		return false;
	}
	//every event from buffer will be storred in currentEvents
	if (numberOfEventsStored > 0) {
		CAEN_DGTZ_EventInfo_t eventInfo;
		char* eventPointer = nullptr;
		qInfo() << "Get " << numberOfEventsStored << " event(s)!";
		currentEvents[boardID].resize(numberOfEventsStored);
		for (auto eventNumber = 0; eventNumber < numberOfEventsStored; eventNumber++) {
			if ((error = CAEN_DGTZ_GetEventInfo(boardID, bufferToReadIn[boardID], sizeOfBufferInBytes[boardID], eventNumber, &eventInfo, &eventPointer)) != CAEN_DGTZ_Success) {
				vmeComm.addTimeOfBoardError(boardID);
				vmeComm.addBoardError(boardID, error);
				vmeComm.addStringError(boardID, toRussian("Получении информации о %1 ивенте").arg(eventNumber));
				return false;
			}
			if ((error = CAEN_DGTZ_DecodeEvent(boardID, eventPointer, reinterpret_cast<void**>(&currentEvent))) != CAEN_DGTZ_Success) {
				vmeComm.addTimeOfBoardError(boardID);
				vmeComm.addBoardError(boardID, error);
				vmeComm.addStringError(boardID, toRussian("Раскодировании %1 ивента").arg(eventNumber));
				return false;
			}
			currentEvents[boardID][eventNumber] = currentEvent;
		}
	}
	return true;		//if information read successfully
}

void DataAnalyzer::writeData() {
	ofstream dataStream("lalala.txt");
	for (auto channel = 0; channel < MAX_UINT8_CHANNEL_SIZE; channel++)
		for (auto sample = 0; sample < currentEvent->ChSize[channel]; sample++) {
			int16_t sampl = currentEvent->DataChannel[channel][sample];
			dataStream << sampl << '\n';
		}
}

//returns first event of first board
CAEN_DGTZ_UINT8_EVENT_t* DataAnalyzer::getEventForDraw() const {
	return currentEvents[0][0];
}

vector<CAEN_DGTZ_UINT8_EVENT_t*>& DataAnalyzer::getEvents(uint8_t boardNumber) {
	return currentEvents[boardNumber];
}

uint8_t minElement(uint8_t* array, uint32_t size) {
	auto minElement = array[0];
	for (auto i = 1; i < size; i++)
		if (array[i] < minElement)
			minElement = array[i];
	return minElement;
}

vector<uint16_t> DataAnalyzer::getApmlitudesForSpectre(uint8_t boardNumber, uint8_t channel) {
	vector<uint16_t> amplitudes;
	//todo: fast find zero level
	for (auto event : currentEvents[boardNumber]) {
		uint8_t amp;
		if (vmeComm.polarity == CAEN_DGTZ_TriggerOnFallingEdge)
			amp = minElement(event->DataChannel[channel], event->ChSize[channel]);
		//else
			//amp = max_element(event->DataChannel[channel], event->DataChannel[channel] + static_cast<uint8_t>(event->ChSize[channel]));
		amplitudes.push_back(abs((127-amp) * 3.92));		//from counts to mV
	}
	return amplitudes;
}