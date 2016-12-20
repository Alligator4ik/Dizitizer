#pragma once
#include "VMECommunication.h"
#include <future>

class DataAnalyzer
{
	VMECommunication&			vmeComm;
	CAEN_DGTZ_UINT8_EVENT_t*	currentEvent;
	vector<future<bool>>		boardThreads;
public:
	explicit DataAnalyzer(VMECommunication& vmeCommunication);
	~DataAnalyzer();

	bool readData();
	bool readDataOnBoard(uint32_t boardID);
	void writeData();

	CAEN_DGTZ_UINT8_EVENT_t*	getEvent() const;
};
