#pragma once
#include <vector>
#include "Resources/CAENDigitizer.h"
#include <QTime>
using namespace std;

class VMECommunication {
	/**
	 * \brief ��������� ���������� � ������� �����������. ������, ���� ���� ���������� ���� �� � ����� ������.
	 */
	bool									connectionToWDFIsActive = false;
	/**
	 * \brief ������ �������������� ����-������������.
	 */
	vector<int32_t>							WDFIdentificators;
	/**
	 * \brief ������ ���������� ������� ��� ������ �����-�����������.
	 */
	vector<uint32_t>						numberOfChannels;
	/**
	 * \brief ������ ��������� ���������� ������ �����-�����������.
	 */
	vector<CAEN_DGTZ_BoardInfo_t>			WDFInfo;
	/**
	 * \brief ���� ������ �� ������.
	 */
	vector<vector<CAEN_DGTZ_ErrorCode>>		boardErrors;
	/**
	 * \brief ����� ������ �� ������.
	 */
	vector<vector<QTime>>					timeOfBoardErrors;
	/**
	 * \brief �������� ��������, � ���� ������� �������� ������.
	 */
	vector<vector<QString>>					stringErrors;
	vector<vector<QTime>>					timeOfStringErrors;
	/**
	 * \brief ������������ ���������� �������, ������� ����� ���� �������� �� ���� ������.
	 */
	uint16_t								numberOfBlocksTransferredDuringCycle = 0x1;
	/**
	 * \brief ����� ������ � ������.
	 */
	uint32_t								recordLength = 2048;
	/**
	* \brief ����-������� � ���������.
	*/
	uint16_t								postTrigger = 80;
	/**
	* \brief ��������� �������� �������� ��� ������� ������ ������ �����. ��������� �������� �� 0 �� 255, ��� 0 - -1�, � 255 - +1�.
	*/
	vector<vector<int16_t>>					threshold;
	/**
	 * \brief ��������� ������������� ���������� ����� � ��������� � ���������� ��� �� ���������� ��������.
	 * \param boardNumber ����� �����
	 * \return ���������� ��� ������, ��������� � ���������� ��������� ������ �����, ��� 0, ���� ��������� ������ �������.
	 */
	CAEN_DGTZ_ErrorCode						setup(uint16_t boardNumber);
public:
	/**
	 * \brief ���� ������������� �����������.
	 */
	bool									autoTriggerEnabled = false;
	/**
	* \brief �������� ������������ ������������ � �������������.
	*/
	uint32_t								autoTriggerTimeInMilliseconds = 10;
	/**
	* \brief ����������, ��� �� ������� ������� ��������� � �������� ���������� ��������.
	*/
	bool									singleTriggerWasStarted = false;
	/**
	 * \brief ������������ ���������� ����, ������� �������� ���������� � ���� VME.
	 */
	uint16_t								numberOfWDF = 9;
	/**
	 * \brief ���������� ���������� � ������ �����-����������� �������, ����������� ��� ������� ����� ������ � �����.
	 */
	uint8_t									eventNumberToInterrupt = 1;
	/**
	 * \brief �������� ����������� ��� ����-������������.
	 */
	vector<bool>							WDFIsEnabled;
	/**
	 * \brief �������� �����, � ������� ������������ ������������ ������.
	 */
	vector<int32_t>							channelTriggerEnableMask;
	/**
	 * \brief �������� �����, � ������� ������������ ������, ��� ������� ���������� ����� ������.
	 */
	vector<int32_t>							channelActiveEnableMask;
	/**
	 * \brief ����� �������, ������������ ��� ������� ��������, ��� ������� ������ ������ �����.
	 */
	vector<vector<ushort>>					sample;
	/**
	 * \brief �������� �� ���������� ������ �����. ��������� �������� �� 0 �� 255, ��� 0 - -1�, � 255 - +1�.
	 */
	vector<vector<ushort>>					DCOffset;
	/**
	 * \brief �������� ��������� ������� ��� ������� ��������. ����� ���� �������� (���������� ���������� ��� ��������) ��� ������������ (���������� ���������� ��� ��������).
	 */
	CAEN_DGTZ_TriggerPolarity_t				polarity;

	VMECommunication();
	~VMECommunication();

	/**
	 * \brief ���������� ������� ���������� � �������.
	 * \return ��������� ������, ���� ������� ����������� ���� �� � ����� ������.
	 */
	bool									connect();
	/**
	 * \brief ���������� ������� ������������ �� ����.
	 * \return ���������� ������, ���� ������������ ������ ��� ������.
	 */
	bool									disconnect();
	/**
	 * \brief �������� ����������� ����� � ��������� �� ��� ��������� ��������.
	 * \return ���������� ������, ���� ��������� �������� ������ ��� ������.
	 */
	bool									startAcquisition();
	/**
	 * \brief ������������� ���������.
	 * \return ���������� ������, ���� ��������� ��������� ������ ��� ������.
	 */
	bool									stopAcquisition();
	/**
	 * \brief ���������� ������� ��� ���� ����.
	 * \return ���������� ������, ���� ��������� ������ ��� ������.
	 */
	bool									createSoftwareTrigger();
	/**
	 * \brief �������� ��������� ��������� �������� ��������.
	 * \param externalTriggerIsActive ����� �� ��������� ������� �������.
	 * \return ���������� ������, ���� ��������� ��������� �������� �������� ������ ��� ������.
	 */
	bool									changeExternalTrigger(bool externalTriggerIsActive);
	/**
	 * \brief �������� ��������� ��������� �������. �������� ��������� ��� ������ ������������ �������.
	 */
	void									changePolarity();
	/**
	 * \brief ������� ���������� ����� ����-������������.
	 * \return ���������� ������, ���� ������� ������ �������.
	 */
	bool									clearData();

	bool									isConnected() const;
	vector<vector<QTime>>&					getTimeOfBoardErrors();
	vector<vector<CAEN_DGTZ_ErrorCode>>&	getboardErrors();
	vector<vector<QTime>>&					getTimeOfStringErrors();
	vector<vector<QString>>&				getStringErrors();
	vector<int32_t>&						getWDFIdentificators();
	uint32_t								getRecordLength();
	vector<vector<int16_t>>&				getAllThresholds();
	/**
	* \brief ��������� �������� ������� �������� ������� ��� ���� �����.
	* \param boardNumber ����� �����
	* \return ������ �� ���������� ������� [0; 255] = [-1�;+1�]
	*/
	vector<int16_t>&						getBoardThresholds(uint16_t boardNumber);
	/**
	 * \brief ��������� �������� ������� �������� ������ ��� ����������� ������ ���������� �����.
	 * \param boardNumber ����� �����
	 * \param channelNumber ����� ������
	 * \return �������� ������ [0; 255] = [-1�;+1�]
	 */
	int16_t									getChannelThreshold(uint8_t boardNumber, uint8_t channelNumber) const;
	uint16_t								getBLTNumber() const;
	CAEN_DGTZ_BoardInfo_t					getWDFInfo(ushort numberOfBoard);

	bool									setRecordLength(int32_t newRecordLength, int32_t postTriggerSize);
	bool									setPostTriggerLength(int32_t postTriggerSize);
	bool									setChannelThreshold(ushort board, ushort channel, double_t newThreshold);
	bool									setChannelSample(ushort board, ushort channel, ushort newSample);
	bool									setChannelOffset(ushort board, ushort channel, int16_t newOffsetInmV);
	/**
	 * \brief ������������� �������� ������� ��� ��� ������ � ������ �����������. 
	 * ������ �� ������, ���� ���������� � ������������ ��� ����������� - ����������� setRecordLength(int32_t, int32_t).
	 * \param samples ����� ������ � ��������.
	 */
	void									setBufferInSamples(uint32_t samples);
	/**
	 * \brief ������������� ����� ����� BLT.
	 * \param newBLTNumber ������������ ���������� �������, ������� ���������� ����� �������� �� ���� ���� ������.
	 */
	void									setBLTNumber(uint16_t newBLTNumber);
	void									addTimeOfBoardError(ushort board);
	void									addBoardError(ushort board, CAEN_DGTZ_ErrorCode errorCode);
	void									addStringError(uint16_t board, QString functionDescription);
};
