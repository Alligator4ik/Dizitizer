#pragma once
#include <vector>
#include "Resources/CAENDigitizer.h"
using namespace std;

class VMECommunication {
	bool								connectionToWDFIsActive = false;								
	vector<unsigned int>				WDFBaseAdress;
	vector<int>							WDFIdentificator;
	vector<unsigned int>				numberOfChannels;
	vector<CAEN_DGTZ_BoardInfo_t>		WDFInfo;
	vector<CAEN_DGTZ_ErrorCode>			boardErrors;
	vector<string>						stringErrors;

	void setup(short boardNumber);
public:
	vector<bool>						WDFIsEnabled;
	unsigned short						numberOfWDF = 9;

	VMECommunication();
	~VMECommunication();

	void connect();
	void disconnect();
	void startAqustition();
	bool isConnected();

	CAEN_DGTZ_BoardInfo_t getWDFInfo(unsigned short numberOfBoard);
};
