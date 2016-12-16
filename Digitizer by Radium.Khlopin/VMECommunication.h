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
	uint32_t							numberOfBlocksTransferredDuringCycle = 0x3;
	uint32_t							recordLength = 2048;

	CAEN_DGTZ_ErrorCode	setup(uint16_t boardNumber);
public:
	bool								autoTriggerEnabled = false;
	uint16_t							numberOfWDF = 9;
	uint8_t								eventNumberToInterrupt = 1;
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
	bool									disconnect();
	bool									startAcquisition();
	bool									stopAcquisition();
	bool									createSoftwareTrigger();
	bool									changeExternalTrigger(bool externalTriggerIsActive);
	void									changePolarity();
	bool									clearData();

	bool									isConnected() const;
	vector<vector<QTime>>&					getTimeOfBoardErrors();
	vector<vector<CAEN_DGTZ_ErrorCode>>&	getboardErrors();
	vector<vector<QTime>>&					getTimeOfStringErrors();
	vector<vector<string>>&					getStringErrors();
	vector<int32_t>&						getWDFIdentificators();

	bool									setRecordLength(int32_t newRecordLength, int32_t postTriggerSize);
	bool									setPostTriggerLength(int32_t postTriggerSize);
	bool									setChannelThreshold(ushort board, ushort channel, ushort newThreshold);
	bool									setChannelSample(ushort board, ushort channel, ushort newSample);
	bool									setChannelOffset(ushort board, ushort channel, int16_t newOffsetInmV);
	void									addTimeOfBoardError(ushort board);
	void									addBoardError(ushort board, CAEN_DGTZ_ErrorCode errorCode);

	CAEN_DGTZ_BoardInfo_t					getWDFInfo(ushort numberOfBoard);
};
