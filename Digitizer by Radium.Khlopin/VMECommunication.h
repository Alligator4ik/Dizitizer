#pragma once
#include <vector>
#include "Resources/CAENDigitizer.h"
#include <QTime>
using namespace std;

class VMECommunication {
	bool								connectionToWDFIsActive = false;
	vector<int>							WDFIdentificators;
	vector<unsigned int>				numberOfChannels;
	vector<CAEN_DGTZ_BoardInfo_t>		WDFInfo;
	vector<vector<CAEN_DGTZ_ErrorCode>>	boardErrors;
	vector<vector<QTime>>				timeOfBoardErrors;
	vector<vector<string>>				stringErrors;
	vector<vector<QTime>>				timeOfStringErrors;
	unsigned int						numberOfBlocksTransferredDuringCycle;
	unsigned int						recordLength;

	void setup(short boardNumber);
public:
	unsigned short						numberOfWDF = 9;
	vector<bool>						WDFIsEnabled;
	vector<int>							channelTriggerEnableMask;
	vector<int>							channelActiveEnableMask;
	vector<vector<int>>					threshold;
	CAEN_DGTZ_TriggerPolarity_t			polarity;

	VMECommunication();
	~VMECommunication();

	bool									connect();
	void									disconnect();
	void									startAcquisition();
	void									stopAcquisition();
	void									createSoftwareTrigger();

	bool									isConnected() const;
	vector<vector<QTime>>&					getTimeOfBoardErrors();
	vector<vector<CAEN_DGTZ_ErrorCode>>&	getboardErrors();
	vector<vector<QTime>>&					getTimeOfStringErrors();
	vector<vector<string>>&					getStringErrors();

	void									setRecordLength(int newRecordLength, int postTriggerSize);
	void									setPostTriggerLength(int postTriggerSize);

	CAEN_DGTZ_BoardInfo_t getWDFInfo(unsigned short numberOfBoard);
};
