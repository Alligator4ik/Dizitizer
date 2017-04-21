#include "EventHandler.h"

EventHandler::EventHandler() {
	this->channelActiveEnableMask.resize(9);
	this->channelTriggerEnableMask.resize(9);
	this->enabledWDFs.resize(9);
	this->thresholds.resize(9);
}

EventHandler::EventHandler(std::vector<int32_t> mask, std::vector<std::vector<int16_t>> thresholds) {
	this->events.resize(9);
	this->channelActiveEnableMask = mask;
	this->thresholds = thresholds;
	this->enabledWDFs.resize(9);
}

EventHandler::EventHandler(std::vector<std::vector<CAEN_DGTZ_UINT8_EVENT_t>> event, std::vector<int32_t> mask, std::vector<std::vector<int16_t>> thresholds, std::vector<bool> enabledWDFs) {
	this->events					= event;
	eventsStored = 0;
	for (auto currEvent : events)
		eventsStored += currEvent.size();
	this->channelActiveEnableMask	= mask;
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
}

uint32_t EventHandler::getRecordLength() const {
	return this->recordLength;
}

void EventHandler::setRecordLength(uint32_t samples) {
	this->recordLength = samples;
}
