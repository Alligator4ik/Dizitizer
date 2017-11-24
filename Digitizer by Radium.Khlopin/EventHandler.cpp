#include "EventHandler.h"
#include <string>
#include <future>
#include <fstream>
#include <sstream>
#include <ctime>
#include <iomanip>
#include <direct.h>
#include <qdir.h>
#include "ToRussianTextForQString.h"

#define BASIC_FILE_SIZE 20
#define NUMBER_OF_CHANNLES_IN_BOARD 8
#define MAX_NUMBER_OF_BOARDS_IN_VME 9

//initialize static fields
uint32_t EventHandler::fileSize = BASIC_FILE_SIZE;

void EventHandler::calculateNumberOfActiveChannels() {
	for (auto i = 0; i < enabledWDFs.size(); i++)
		if (WDFIsEnabled(i))
			for (auto channelNumber = 0; channelNumber < NUMBER_OF_CHANNLES_IN_BOARD; channelNumber++)
				if (channelActiveEnableMask[i] & 1 << channelNumber)
					numberOfActiveChannels++;
}

EventHandler::EventHandler() {
	this->channelActiveEnableMask.resize(MAX_NUMBER_OF_BOARDS_IN_VME);
	this->channelTriggerEnableMask.resize(MAX_NUMBER_OF_BOARDS_IN_VME);
	this->enabledWDFs.resize(MAX_NUMBER_OF_BOARDS_IN_VME);
	this->thresholds.resize(MAX_NUMBER_OF_BOARDS_IN_VME);
	calculateNumberOfActiveChannels();
	eventsMutex = std::make_shared<std::mutex>();
}

EventHandler::EventHandler(std::vector<bool> enabledWDFs, std::vector<int32_t> activeMask, std::vector<int32_t> triggerMask, std::vector<std::vector<int16_t>> thresholds) {
	this->events.resize(MAX_NUMBER_OF_BOARDS_IN_VME);
	this->channelActiveEnableMask	= activeMask;
	this->channelTriggerEnableMask	= triggerMask;
	this->thresholds				= thresholds;
	this->enabledWDFs				= enabledWDFs;
	calculateNumberOfActiveChannels();
	eventsMutex = std::make_shared<std::mutex>();
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
	calculateNumberOfActiveChannels();
	eventsMutex = std::make_shared<std::mutex>();
}

EventHandler::~EventHandler(){
	for (auto boardNumber = 0; boardNumber < events.size(); boardNumber++) {
		for (auto eventNumber = 0; eventNumber < events[boardNumber].size(); eventNumber++)
			for (auto channelNumber = 0; channelNumber < 8; channelNumber++) {
				delete[] events[boardNumber][eventNumber].DataChannel[channelNumber];
				events[boardNumber][eventNumber].DataChannel[channelNumber] = nullptr;
			}
		events[boardNumber].clear();
	}
}

EventHandler::EventHandler(const char* name) {
	std::ifstream fileToRead(name);
	events.resize(MAX_NUMBER_OF_BOARDS_IN_VME);
	enabledWDFs.resize(MAX_NUMBER_OF_BOARDS_IN_VME);
	channelActiveEnableMask.resize(MAX_NUMBER_OF_BOARDS_IN_VME);
	channelTriggerEnableMask.resize(MAX_NUMBER_OF_BOARDS_IN_VME);
	uint32_t recordLen = 0, eventsTotal = 0;
	std::vector<CAEN_DGTZ_UINT8_EVENT_t> readEvents;
	//reading...
	if (fileToRead) {
		fileToRead >> recordLen;
		fileToRead >> eventsTotal;
		char state;
		//to read end of previous line
		fileToRead.get(state);
		//read activated boards
		for (auto wdfNum = 0; wdfNum < MAX_NUMBER_OF_BOARDS_IN_VME; wdfNum++) {
			fileToRead.get(state);
			enabledWDFs[wdfNum] = state - '0';
		}
		//to read end of previous line
		fileToRead.get(state);
		//read active channels
		for (auto boardNumber = 0; boardNumber < MAX_NUMBER_OF_BOARDS_IN_VME; boardNumber ++)
			if (enabledWDFs[boardNumber]) {
					fileToRead.get(state);
					channelActiveEnableMask[boardNumber] = state - '0';
				}
		//to read end of previous line
		fileToRead.get(state);
		//read triggered channels
		for (auto boardNumber = 0; boardNumber < MAX_NUMBER_OF_BOARDS_IN_VME; boardNumber++)
			if (enabledWDFs[boardNumber]) {
					fileToRead.get(state);
					channelTriggerEnableMask[boardNumber] = state - '0';
				}
		//read the event data
		CAEN_DGTZ_UINT8_EVENT_t readEvent;
		//reading the data
		for (auto eventNumber = 0; eventNumber < eventsTotal; eventNumber++) {
			//finding the start of the event
			char breakline[10];
			do {
				fileToRead.getline(breakline, 10);
			} while (strcmp("new event", breakline) != 0);
			//reading the event
			char value;
			//todo: reading many boards
			//for (auto WDFNumber = 0; WDFNumber < 9; WDFNumber++)
			//	if (activeWDFs[WDFNumber])
			for (auto channelNumber = 0; channelNumber < NUMBER_OF_CHANNLES_IN_BOARD; channelNumber++)
				if (channelActiveEnableMask[0] & 1 << channelNumber) {									//если канал был включен, то считываем его
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
	recordLength				= recordLen;
	eventsStored				= eventsTotal;
	for (auto boardNumber = 0; boardNumber < MAX_NUMBER_OF_BOARDS_IN_VME; boardNumber++) {
		if (enabledWDFs[boardNumber]) {
			events[boardNumber] = readEvents;
		}
	}
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
	if (boardNumber >= 0 && boardNumber < MAX_NUMBER_OF_BOARDS_IN_VME)
		this->channelActiveEnableMask[boardNumber] = mask;
}

void EventHandler::setThresholds(uint16_t boardNumber, std::vector<int16_t> threshold) {
	if (boardNumber >= 0 && boardNumber < MAX_NUMBER_OF_BOARDS_IN_VME)
		this->thresholds[boardNumber] = threshold;
}

void EventHandler::setEnabledWDFs(std::vector<bool> enabledWDFs) {
	this->enabledWDFs = enabledWDFs;
}

void EventHandler::setFileSize(uint32_t fileSize) {
	EventHandler::fileSize = fileSize;
}

uint32_t EventHandler::getFileSize() {
	return EventHandler::fileSize;
}

void EventHandler::addEvent(uint16_t boardNumber, std::vector<int32_t> mask, CAEN_DGTZ_UINT8_EVENT_t event) {
	if (boardNumber >= 0 && boardNumber < MAX_NUMBER_OF_BOARDS_IN_VME &&
		this->channelActiveEnableMask == mask) {
		CAEN_DGTZ_UINT8_EVENT_t temp;
		for (auto channelNumber = 0; channelNumber < NUMBER_OF_CHANNLES_IN_BOARD; channelNumber++) {
			memcpy(&temp.ChSize[channelNumber], &event.ChSize[channelNumber], 4);									//need to copy uint32_t, which weights 4 times more than char
			if (event.ChSize[channelNumber] != 0) {
				temp.DataChannel[channelNumber] = new uint8_t[temp.ChSize[channelNumber]];
				memcpy(temp.DataChannel[channelNumber], event.DataChannel[channelNumber], temp.ChSize[channelNumber]);
			} else
				temp.DataChannel[channelNumber] = nullptr;
		}
		eventsMutex.get()->lock();
			events[boardNumber].push_back(temp);
		eventsMutex.get()->unlock();
		enabledWDFs[boardNumber] = true;
		eventsStored++;
	}
}

void EventHandler::deleteEvents(uint32_t numberOfEvents) {
	if (numberOfEvents > eventsStored || numberOfEvents == 0)
		numberOfEvents = eventsStored;
	auto numberOfDeletedEvents = numberOfEvents;
	//bug
	//delete events must be used every time when writing is going on but not everytime when writing is disabled
	//if (eventsStored*recordLength*numberOfActiveChannels / 1048576 > 512) {					//used memory in MB
		for (auto boardNumber = 0; boardNumber < events.size(); boardNumber++) {
			numberOfEvents = numberOfEvents > events[boardNumber].size() ? events[boardNumber].size() : numberOfEvents;
			for (auto eventNumber = 0; eventNumber < numberOfEvents; eventNumber++)
				for (auto channelNumber = 0; channelNumber < NUMBER_OF_CHANNLES_IN_BOARD; channelNumber++) {
					delete[] events[boardNumber][eventNumber].DataChannel[channelNumber];
					events[boardNumber][eventNumber].DataChannel[channelNumber] = nullptr;
				}
			events[boardNumber].erase(events[boardNumber].begin(), events[boardNumber].begin() + numberOfEvents);
		}
		eventsStored = eventsStored - numberOfDeletedEvents;
		eventsAddedAtLastIteration = 0;
		#ifdef _DEBUG
			qInfo("%i remains, %i file", eventsStored, fileNumber);
		#endif
	//}
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
	//making a directory to write in
	auto t = time(nullptr);
	tm tm;
	localtime_s(&tm, &t);
	std::ostringstream date;
	date << std::put_time(&tm, "%d.%m.%Y-%H_%M");
	if (fileNumber == 0)
		pathName = date.str();
	auto fullPath = writingPath + "/" + pathName;
	if (fileNumber == 0 && QDir(makeQString(fullPath.c_str())).exists()) {
		pathName = date.str() + "_one_another";
		fullPath = writingPath + "/" + pathName;
	}
	auto nameOfFile = fullPath + "/" + std::to_string(fileNumber) + ".drkdata";
	auto writingFunc = [=](std::vector<std::vector<CAEN_DGTZ_UINT8_EVENT_t>> events, uint16_t eventsStored) {
		eventsMutex.get()->lock();
		FILE* outData; 
		fopen_s(&outData, nameOfFile.c_str(), "w");
		if (!outData) {
			_mkdir(fullPath.c_str());
			fopen_s(&outData, nameOfFile.c_str(), "w");
		}
		//write record length
		fprintf_s(outData, "%i\n", events[0][0].ChSize[0]);
		//write number of the event's
		fprintf_s(outData, "%i\n", eventsStored);
		//write active boards, active channels & trigger channels
		auto writeVector = [&outData](auto& vector) {
			for (auto i = 0; i < vector.size(); i++)
				fprintf_s(outData, "%i", static_cast<int32_t>(vector[i]));
			fprintf_s(outData, "\n");
		};
		writeVector(enabledWDFs);	writeVector(channelActiveEnableMask);	writeVector(channelTriggerEnableMask);
		//write data
		for (auto eventNumber = 0; eventNumber < eventsStored; eventNumber++) {
			fwrite("new event\n", sizeof(uint8_t), 10, outData);
			for (auto boardNumber = 0; boardNumber < MAX_NUMBER_OF_BOARDS_IN_VME; boardNumber++)
				if (enabledWDFs[boardNumber])
					for (auto channelNumber = 0; channelNumber < NUMBER_OF_CHANNLES_IN_BOARD; channelNumber++)
						if (channelActiveEnableMask[boardNumber] & 1 << channelNumber) {
							fwrite(events[boardNumber][eventNumber].DataChannel[channelNumber], sizeof(uint8_t), events[boardNumber][eventNumber].ChSize[channelNumber], outData);
							fwrite("\n", sizeof(uint8_t), 1, outData);
						}
			fwrite("\n", sizeof(uint8_t), 1, outData);
		}
		fclose(outData);
			deleteEvents(eventsStored);
		eventsMutex.get()->unlock();
		fileNumber++;
	};
	if (eventsStored && eventsStored >= EventHandler::getFileSize()) {
		std::thread writingThread(writingFunc, events, eventsStored);						//usual usage
		writingThread.detach();
	} else if (eventsStored && eventsStored < EventHandler::getFileSize())
		writingFunc(events, eventsStored);													//post-wiring usage
}

void EventHandler::addSomeStartImpulses(uint32_t numberOfImpulses) {
	this->numberOfStartImpulses += numberOfImpulses;
}

void EventHandler::setPath(std::string& path) {
	writingPath = path;
}
