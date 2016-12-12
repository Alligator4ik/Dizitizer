#pragma once
#include "VMECommunication.h"
#include <thread>

class DataAnalyzer
{
	VMECommunication&			vmeComm;
	CAEN_DGTZ_UINT8_EVENT_t*	currentEvent;
	vector<std::thread>			boardThreads;
public:
	explicit DataAnalyzer(VMECommunication& vmeCommunication);
	~DataAnalyzer();

	void readData();
	void readDataOnBoard(uint32_t boardID);
	void writeData();

	CAEN_DGTZ_UINT8_EVENT_t*	getEvent() const;
};