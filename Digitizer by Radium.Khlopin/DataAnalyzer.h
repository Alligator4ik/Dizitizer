#pragma once
#include "VMECommunication.h"
#include <future>

class DataAnalyzer
{
	VMECommunication&							vmeComm;
	vector<vector<CAEN_DGTZ_UINT8_EVENT_t*>>	currentEvents;
	CAEN_DGTZ_UINT8_EVENT_t*					currentEvent;
	vector<future<bool>>						boardThreads;
public:
	explicit DataAnalyzer(VMECommunication& vmeCommunication);
	~DataAnalyzer();

	bool readData();
	bool readDataOnBoard(uint32_t boardID);
	void writeData();

	CAEN_DGTZ_UINT8_EVENT_t*					getEventForDraw() const;
	vector<CAEN_DGTZ_UINT8_EVENT_t*>&			getEvents(uint8_t boardNumber);
	vector<uint8_t>								getApmlitudesForSpectre(uint8_t boardNumber, uint8_t channel);
};
