#pragma once
#include <vector>
#include "Resources/CAENDigitizer.h"
#include <QTime>
using namespace std;

class VMECommunication {
	bool								connectionToWDFIsActive = false;
	vector<int32_t>						WDFIdentificators;
	vector<uint32_t>					numberOfChannels;
	vector<CAEN_DGTZ_BoardInfo_t>		WDFInfo;
	vector<vector<CAEN_DGTZ_ErrorCode>>	boardErrors;
	vector<vector<QTime>>				timeOfBoardErrors;
	vector<vector<string>>				stringErrors;
	vector<vector<QTime>>				timeOfStringErrors;
	uint32_t							numberOfBlocksTransferredDuringCycle;
	uint32_t							recordLength;

	CAEN_DGTZ_ErrorCode	setup(uint16_t boardNumber);
public:
	uint16_t							numberOfWDF = 9;
	vector<bool>						WDFIsEnabled;
	vector<int32_t>						channelTriggerEnableMask;
	vector<int32_t>						channelActiveEnableMask;
	vector<vector<ushort>>				threshold;
	vector<vector<ushort>>				sample;
	vector<vector<ushort>>				DCOffset;
	CAEN_DGTZ_TriggerPolarity_t			polarity;

	VMECommunication();
	~VMECommunication();

	bool									connect();
	void									disconnect();
	CAEN_DGTZ_ErrorCode						startAcquisition();
	void									stopAcquisition();
	void									createSoftwareTrigger();
	void									changeExternalTrigger(bool externalTriggerIsActive);
	void									clearData();

	bool									isConnected() const;
	vector<vector<QTime>>&					getTimeOfBoardErrors();
	vector<vector<CAEN_DGTZ_ErrorCode>>&	getboardErrors();
	vector<vector<QTime>>&					getTimeOfStringErrors();
	vector<vector<string>>&					getStringErrors();
	vector<int32_t>&						getWDFIdentificators();

	void									setRecordLength(int32_t newRecordLength, int32_t postTriggerSize);
	void									setPostTriggerLength(int32_t postTriggerSize);
	CAEN_DGTZ_ErrorCode						setChannelThreshold(ushort board, ushort channel, ushort newThreshold);
	CAEN_DGTZ_ErrorCode						setChannelSample(ushort board, ushort channel, ushort newSample);
	CAEN_DGTZ_ErrorCode						setChannelOffset(ushort board, ushort channel, ushort newOffsetInmV);
	void									addTimeOfBoardError(ushort board);
	void									addBoardError(ushort board, CAEN_DGTZ_ErrorCode errorCode);

	CAEN_DGTZ_BoardInfo_t					getWDFInfo(ushort numberOfBoard);
};
