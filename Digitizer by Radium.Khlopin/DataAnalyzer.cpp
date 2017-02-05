#include "DataAnalyzer.h"
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
				vmeComm.addStringError(boardNumber, toRussian("—оздании ивентов"));
			}
			if ((error = CAEN_DGTZ_MallocReadoutBuffer(WDFIdentificators[boardNumber], &bufferToReadIn[boardNumber], &sizeOfBufferInBytes[boardNumber])) != CAEN_DGTZ_Success) {
				vmeComm.addTimeOfBoardError(boardNumber);
				vmeComm.addBoardError(boardNumber, error);
				vmeComm.addStringError(boardNumber, toRussian("јллоцировании пам€ти"));
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
				vmeComm.addStringError(boardNumber, toRussian("ƒеаллоцировании пам€ти"));
			}
			if ((error = CAEN_DGTZ_FreeEvent(WDFIdentificators[boardNumber], reinterpret_cast<void**>(&currentEvent))) != CAEN_DGTZ_Success) {
				vmeComm.addTimeOfBoardError(boardNumber);
				vmeComm.addBoardError(boardNumber, error);
				vmeComm.addStringError(boardNumber, toRussian("”ничтожении ивентов"));
			}
		}
}

uint8_t DataAnalyzer::getZeroLevel(CAEN_DGTZ_UINT8_EVENT_t& event, uint8_t channelNumber) const {
	uint8_t zeroLevel = 127;				//изначально, 127 - это ноль (в идеальном случае)
	auto zeroLevelWasFound = false;
	//обрабатываем по 500 значений
	//если они все примерно одинаковые (не отличаютс€ на единицу)
	//тогда мы нашли ноль! найдем среднее и вернем его
	for (auto i = 0; i < event.ChSize[channelNumber]; i++) {
		if (zeroLevelWasFound)
			break;
		zeroLevel = *event.DataChannel[500 * i];
		auto summaryForMiddle = 0;
		for (auto currentValue = 500 * i; currentValue < 500 * (i+1); currentValue++) {
			//если случилось так, что за 500 значений уровень изменилс€ больше чем на 4 м¬
			//то это точно не ноль! берем следующие 500 значений
			if (*event.DataChannel[currentValue] - zeroLevel > 1)
				break;
			summaryForMiddle += *event.DataChannel[currentValue];
			if (i == 499) {
				zeroLevelWasFound = true;
				zeroLevel = summaryForMiddle / 500;
			}
		}
	}
	return zeroLevel;
}

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

bool DataAnalyzer::readDataOnBoard(uint32_t boardID) {
	CAEN_DGTZ_ErrorCode error;
	if ((error = CAEN_DGTZ_IRQWait(boardID, 500)) != CAEN_DGTZ_Success) {
		if (error == CAEN_DGTZ_Timeout)
			return false;			//if thire is nothing to read
		vmeComm.addTimeOfBoardError(boardID);
		vmeComm.addBoardError(boardID, error);
		vmeComm.addStringError(boardID, toRussian("ќжидании прерывани€"));
		return false;
	}
	if ((error = CAEN_DGTZ_RearmInterrupt(boardID)) != CAEN_DGTZ_Success) {
		vmeComm.addTimeOfBoardError(boardID);
		vmeComm.addBoardError(boardID, error);
		vmeComm.addStringError(boardID, toRussian("ќбновлении прерывани€"));
		return false;
	}
	if ((error = CAEN_DGTZ_ReadData(boardID, CAEN_DGTZ_SLAVE_TERMINATED_READOUT_MBLT, bufferToReadIn[boardID], &sizeOfBufferInBytes[boardID])) != CAEN_DGTZ_Success) {
		vmeComm.addTimeOfBoardError(boardID);
		vmeComm.addBoardError(boardID, error);
		vmeComm.addStringError(boardID, toRussian("Ќепосредственном чтении"));
		return false;
	}
	uint32_t numberOfEventsStored;
	if ((error = CAEN_DGTZ_GetNumEvents(boardID, bufferToReadIn[boardID], sizeOfBufferInBytes[boardID], &numberOfEventsStored)) != CAEN_DGTZ_Success) {
		vmeComm.addTimeOfBoardError(boardID);
		vmeComm.addBoardError(boardID, error);
		vmeComm.addStringError(boardID, toRussian("ѕолучении кол-ва ивентов"));
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
				vmeComm.addStringError(boardID, toRussian("ѕолучении информации о %1 ивенте").arg(eventNumber));
				return false;
			}
			if ((error = CAEN_DGTZ_DecodeEvent(boardID, eventPointer, reinterpret_cast<void**>(&currentEvent))) != CAEN_DGTZ_Success) {
				vmeComm.addTimeOfBoardError(boardID);
				vmeComm.addBoardError(boardID, error);
				vmeComm.addStringError(boardID, toRussian("–аскодировании %1 ивента").arg(eventNumber));
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

uint8_t maxElement(uint8_t* array, uint32_t size) {
	auto minElement = array[0];
	for (auto i = 1; i < size; i++)
		if (array[i] > minElement)
			minElement = array[i];
	return minElement;
}

vector<uint16_t> DataAnalyzer::getApmlitudesForSpectre(uint8_t boardNumber, uint8_t channel) {
	vector<uint16_t> amplitudes;
	for (auto event : currentEvents[boardNumber]) {
		uint8_t amp;
		if (vmeComm.polarity == CAEN_DGTZ_TriggerOnFallingEdge)
			amp = minElement(event->DataChannel[channel], event->ChSize[channel]);
		else
			amp = maxElement(event->DataChannel[channel], event->ChSize[channel]);
		amplitudes.push_back(abs((getZeroLevel(*event, channel)-amp) * 3.92));		//from counts to mV
	}
	return amplitudes;
}

int16_t DataAnalyzer::convertFromVMECountsTomV(uint8_t counts) {
	//todo: подумать над условием (когда будет доступ к устройству)
	return (counts - 127) * 7.873;
}
