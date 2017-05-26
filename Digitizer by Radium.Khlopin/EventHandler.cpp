#include "EventHandler.h"
#include <string>
#include <future>
#include <fstream>
#include <sstream>
#include <ctime>
#include <iomanip>

EventHandler::EventHandler() {
	this->channelActiveEnableMask.resize(9);
	this->channelTriggerEnableMask.resize(9);
	this->enabledWDFs.resize(9);
	this->thresholds.resize(9);
}

EventHandler::EventHandler(std::vector<int32_t> activeMask, std::vector<int32_t> triggerMask, std::vector<std::vector<int16_t>> thresholds) {
	this->events.resize(9);
	this->channelActiveEnableMask	= activeMask;
	this->channelTriggerEnableMask	= triggerMask;
	this->thresholds				= thresholds;
	this->enabledWDFs.resize(9);
}

EventHandler::EventHandler(std::vector<std::vector<CAEN_DGTZ_UINT8_EVENT_t>> event, std::vector<int32_t> activeMask, std::vector<int32_t> triggerMask, std::vector<std::vector<int16_t>> thresholds, std::vector<bool> enabledWDFs) {
	this->events					= event;
	eventsStored = 0;
	for (auto currEvent : events)
		eventsStored += currEvent.size();
	this->channelActiveEnableMask	= activeMask;
	this->channelTriggerEnableMask	= triggerMask;
	this->thresholds				= thresholds;
	this->enabledWDFs				= enabledWDFs;
}

EventHandler::~EventHandler()
{
}

EventHandler EventHandler::createHandlerWithFile(const char* name) {
	EventHandler handler;
	std::ifstream fileToRead(name);
	std::vector<int32_t> activeMask, triggerMask;
	std::vector<bool> activeWDFs;
	std::vector<std::vector<CAEN_DGTZ_UINT8_EVENT_t>> eventsData;
	activeWDFs.resize(9);
	activeMask.resize(9);
	triggerMask.resize(9);
	uint32_t recordLen, events;
	std::vector<CAEN_DGTZ_UINT8_EVENT_t> readEvents;
	//reading...
	if (fileToRead) {
		fileToRead >> recordLen;
		fileToRead >> events;
		char state;
		//to read end of previous line
		fileToRead.get(state);
		//read activated boards
		for (auto wdfNum = 0; wdfNum < 9; wdfNum++) {
			fileToRead.get(state);
			activeWDFs[wdfNum] = state - '0';
		}
		//to read end of previous line
		fileToRead.get(state);
		//read active channels
		for (auto boardNumber = 0; boardNumber < 9; boardNumber ++) 
			if (activeWDFs[boardNumber]) {
					fileToRead.get(state);
					activeMask[boardNumber] = state - '0';
				}
		//to read end of previous line
		fileToRead.get(state);
		//read triggered channels
		for (auto boardNumber = 0; boardNumber < 9; boardNumber++)
			if (activeWDFs[boardNumber]) {
					fileToRead.get(state);
					triggerMask[boardNumber] = state - '0';
				}
		//read the event data
		CAEN_DGTZ_UINT8_EVENT_t readEvent;
		//reading the data
		for (auto eventNumber = 0; eventNumber < events; eventNumber++) {
			//finding the start of the event
			char breakline[10];
			do {
				fileToRead.getline(breakline, 10);
			} while (strcmp("new event", breakline) != 0);
			//reading the event
			char value;
			//todo: reading many boards
			for (auto channelNumber = 0; channelNumber < 8; channelNumber++)
				if (activeMask[0] & 1 << channelNumber) {									//если канал был включен, то считываем его
					readEvent.ChSize[channelNumber] = recordLen;
					readEvent.DataChannel[channelNumber] = new uint8_t[readEvent.ChSize[channelNumber]];
					for (auto valueNumber = 0; valueNumber < readEvent.ChSize[channelNumber]; valueNumber++) {
						fileToRead.get(value);
						readEvent.DataChannel[channelNumber][valueNumber] = value;
					}
					//to read end of previous line
					fileToRead.get(value);
				} else {
					readEvent.ChSize[channelNumber] = 0;
					readEvent.DataChannel[channelNumber] = nullptr;
				}
			readEvents.push_back(readEvent);
		}
		
	}
	//constructing handler...
	handler.recordLength				= recordLen;
	handler.eventsStored				= events;
	handler.enabledWDFs					= activeWDFs;
	handler.channelActiveEnableMask		= activeMask;
	handler.channelTriggerEnableMask	= triggerMask;
	handler.events.resize(9); //number of boards
	for (auto boardNumber = 0; boardNumber < 9; boardNumber++) {
		if (activeWDFs[boardNumber]) {
			handler.events[boardNumber] = readEvents;
		}
	}
	return handler;
}

CAEN_DGTZ_UINT8_EVENT_t& EventHandler::getEvent(uint16_t boardNumber, uint16_t eventNumber) {
	return this->events[boardNumber][eventNumber];
}

CAEN_DGTZ_UINT8_EVENT_t& EventHandler::getLastEvent(uint16_t boardNumber) {
	return this->events[boardNumber].back();
}

uint16_t EventHandler::getNumberOfEventsForBoard(uint16_t boardNumber) {
	return this->events[boardNumber].size();
}

bool EventHandler::channelIsActive(uint16_t boardNumber, uint16_t channelNumber) {
	return this->channelActiveEnableMask[boardNumber] & 1 << channelNumber;
}

std::vector<std::vector<int16_t>>& EventHandler::getAllThresholds() {
	return thresholds;
}

int16_t EventHandler::getThreshold(uint16_t boardNumber, uint16_t channelNumber) {
	return thresholds[boardNumber][channelNumber];
}

bool EventHandler::WDFIsEnabled(uint16_t boardNumber) {
	return enabledWDFs[boardNumber];
}

void EventHandler::setChannelMask(uint16_t boardNumber, int32_t mask) {
	if (boardNumber >= 0 && boardNumber < 9)
		this->channelActiveEnableMask[boardNumber] = mask;
}

void EventHandler::setThresholds(uint16_t boardNumber, std::vector<int16_t> threshold) {
	if (boardNumber >= 0 && boardNumber < 9)
		this->thresholds[boardNumber] = threshold;
}

void EventHandler::setEnabledWDFs(std::vector<bool> enabledWDFs) {
	this->enabledWDFs = enabledWDFs;
}

void EventHandler::addEvent(uint16_t boardNumber, std::vector<int32_t> mask, CAEN_DGTZ_UINT8_EVENT_t event, std::vector<int16_t> thresholds) {
	if (boardNumber >= 0 && boardNumber < 9 &&
		this->channelActiveEnableMask == mask &&
		this->thresholds[boardNumber] == thresholds) {
		CAEN_DGTZ_UINT8_EVENT_t temp;
		for (auto channelNumber = 0; channelNumber < 8; channelNumber++) {
			memcpy(&temp.ChSize[channelNumber], &event.ChSize[channelNumber], 4);									//нужно скопировать uint32_t, который занимает в 4 раза больше места, чем char
			if (event.ChSize[channelNumber] != 0) {
				temp.DataChannel[channelNumber] = new uint8_t[temp.ChSize[channelNumber]];
				memcpy(temp.DataChannel[channelNumber], event.DataChannel[channelNumber], temp.ChSize[channelNumber]);
			} else
				temp.DataChannel[channelNumber] = nullptr;
		}
			events[boardNumber].push_back(temp);
			enabledWDFs[boardNumber] = true;
			eventsStored++;
	}
}

void EventHandler::deleteEvents() {
	for (auto boardNumber = 0; boardNumber < events.size(); boardNumber++) {
		for (auto eventNumber = 0; eventNumber < events[boardNumber].size(); eventNumber++)
			for (auto channelNumber = 0; channelNumber < 8; channelNumber++) {
				delete[] events[boardNumber][eventNumber].DataChannel[channelNumber];
				events[boardNumber][eventNumber].DataChannel[channelNumber] = nullptr;
			}
		events[boardNumber].clear();
	}
	eventsStored = 0;
	eventsAddedAtLastIteration = 0;
}

uint32_t EventHandler::getRecordLength() const {
	return this->recordLength;
}

uint32_t EventHandler::getNumberOfStartImpulses() const {
	return numberOfStartImpulses;
}

void EventHandler::setRecordLength(uint32_t samples) {
	this->recordLength = samples;
}

void EventHandler::writeToFile() {
	//try to find current date
	auto t = time(nullptr);
	tm tm;
	localtime_s(&tm, &t);
	std::ostringstream date;
	date << std::put_time(&tm, "%d%m%Y-%H%M");
	if (pathName != date.str())
		fileNumber = 0;
	pathName = date.str();
	auto writingFunc = [&](auto events, auto eventsStored) {
		FILE* outData; 
		//todo: сделать запись в папку
		auto nameOfFile = /*"D:/DigitizerWriteData/" + ".\\" + pathName + */".\\" + std::to_string(fileNumber) + ".drkdata";
		fopen_s(&outData, nameOfFile.c_str(), "w");
		//write record length
		fprintf_s(outData, "%i\n", events[0][0].ChSize[0]);
		//write number of the event's
		fprintf_s(outData, "%i\n", eventsStored);
		//write active boards
		fprintf_s(outData, "%i%i%i%i%i%i%i%i%i\n", static_cast<int>(enabledWDFs[0]), static_cast<int>(enabledWDFs[1]), static_cast<int>(enabledWDFs[2]), static_cast<int>(enabledWDFs[3]), static_cast<int>(enabledWDFs[4]), static_cast<int>(enabledWDFs[5]), static_cast<int>(enabledWDFs[6]), static_cast<int>(enabledWDFs[7]), static_cast<int>(enabledWDFs[8]));
		//write mask of active channels
		fprintf_s(outData, "%i%i%i%i%i%i%i%i%i\n", channelActiveEnableMask[0], channelActiveEnableMask[1], channelActiveEnableMask[2], channelActiveEnableMask[3], channelActiveEnableMask[4], channelActiveEnableMask[5], channelActiveEnableMask[6], channelActiveEnableMask[7], channelActiveEnableMask[8]);
		//write mask of trigger channels
		fprintf_s(outData, "%i%i%i%i%i%i%i%i%i\n", channelTriggerEnableMask[0], channelTriggerEnableMask[1], channelTriggerEnableMask[2], channelTriggerEnableMask[3], channelTriggerEnableMask[4], channelTriggerEnableMask[5], channelTriggerEnableMask[6], channelTriggerEnableMask[7], channelTriggerEnableMask[8]);
		//write data
		for (auto eventNumber = 0; eventNumber < eventsStored; eventNumber++) {
			fwrite("new event\n", sizeof(uint8_t), 10, outData);
			for (auto boardNumber = 0; boardNumber < 9; boardNumber++)
				if (enabledWDFs[boardNumber])
					for (auto channelNumber = 0; channelNumber < 8; channelNumber++)
						if (channelActiveEnableMask[boardNumber] & 1 << channelNumber) {
							fwrite(events[boardNumber][eventNumber].DataChannel[channelNumber], sizeof(uint8_t), events[boardNumber][eventNumber].ChSize[channelNumber], outData);
							fwrite("\n", sizeof(uint8_t), 1, outData);
						}
			fwrite("\n", sizeof(uint8_t), 1, outData);
		}
		fclose(outData);
		deleteEvents();
	};
	//todo: сделать запись в файл отдельным потоком
	/*std::thread writingThread(*/writingFunc( events, eventsStored);
	//writingThread.detach();
	fileNumber++;
}

void EventHandler::addSomeStartImpulses(uint32_t numberOfImpulses) {
	this->numberOfStartImpulses += numberOfImpulses;
}
