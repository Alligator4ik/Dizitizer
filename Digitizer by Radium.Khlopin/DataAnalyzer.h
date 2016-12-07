#pragma once
#include "VMECommunication.h"

class DataAnalyzer
{
	VMECommunication&	vmeComm;
public:
	explicit DataAnalyzer(VMECommunication& vmeCommunication);
	~DataAnalyzer();

	void getData();
};