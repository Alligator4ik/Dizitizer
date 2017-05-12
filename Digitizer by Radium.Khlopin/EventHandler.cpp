#include "EventHandler.h"
#include <fstream>
#include <string>
#include <future>
#include <sstream>
#include <qlogging.h>
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
			events[boardNumber].push_back(event);
			enabledWDFs[boardNumber] = true;
			eventsStored++;
	}
}

void EventHandler::deleteEvents() {
	for (auto event : events)
		event.clear();
	eventsStored = 0;
	eventsAddedAtLastIteration = 0;
}

uint32_t EventHandler::getRecordLength() const {
	return this->recordLength;
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
		auto name = nameOfFile.c_str();
		outData = fopen(name, "w");
		//write record length
		fprintf_s(outData, "%i\n", events[0][0].ChSize[0]);
		//write number of the event's
		fprintf_s(outData, "%i\n", eventsStored);
		//write mask of active channels
		fprintf_s(outData, "%i%i%i%i%i%i%i%i\n", channelActiveEnableMask[0], channelActiveEnableMask[1], channelActiveEnableMask[2], channelActiveEnableMask[3], channelActiveEnableMask[4], channelActiveEnableMask[5], channelActiveEnableMask[6], channelActiveEnableMask[7]);
		//write mask of trigger channels
		fprintf_s(outData, "%i%i%i%i%i%i%i%i\n", channelTriggerEnableMask[0], channelTriggerEnableMask[1], channelTriggerEnableMask[2], channelTriggerEnableMask[3], channelTriggerEnableMask[4], channelTriggerEnableMask[5], channelTriggerEnableMask[6], channelTriggerEnableMask[7]);
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
	};
	std::thread writingThread(writingFunc, events, eventsStored);
	writingThread.detach();
	fileNumber++;
	deleteEvents();
}
