#pragma once
#include "VMECommunication.h"

class DataAnalyzer
{
	VMECommunication&			vmeComm;
	CAEN_DGTZ_UINT16_EVENT_t*	currentEvent;
public:
	explicit DataAnalyzer(VMECommunication& vmeCommunication);
	~DataAnalyzer();

	void readData();
	void writeData();

	CAEN_DGTZ_UINT16_EVENT_t*	getEvent() const;
};