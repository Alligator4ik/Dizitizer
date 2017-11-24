#pragma once
#include <Resources/CAENDigitizerType.h>
#include <vector>
#include <mutex>

class EventHandler
{
	std::vector<std::vector<CAEN_DGTZ_UINT8_EVENT_t>>	events;

	/**
	 * \brief ���������� ����� ��� ������ ������
	 */
	std::string								writingPath;
	/**
	 * \brief ��������� ����� ��� ������ ������ (���������� �������)
	 */
	std::string								pathName;
	uint32_t								numberOfStartImpulses = 0;
	uint32_t								fileNumber = 0;
	std::vector<int32_t>					channelTriggerEnableMask;
	std::vector<int32_t>					channelActiveEnableMask;
	std::vector<std::vector<int16_t>>		thresholds;
	std::vector<bool>						enabledWDFs;
	uint32_t								recordLength = 2048;
	uint16_t								numberOfActiveChannels = 0;
	void									calculateNumberOfActiveChannels();
	std::shared_ptr<std::mutex>				eventsMutex;
	static uint32_t							fileSize;
public:
	EventHandler();
	explicit EventHandler(std::vector<bool> enabledWDFs, std::vector<int32_t> activeMask, std::vector<int32_t> triggerMask, std::vector<std::vector<int16_t>> thresholds);
	explicit EventHandler(std::vector<std::vector<CAEN_DGTZ_UINT8_EVENT_t>> event, std::vector<int32_t> activeMask, std::vector<int32_t> triggerMask, std::vector<std::vector<int16_t>> thresholds, std::vector<bool> enabledWDFs);
	explicit EventHandler(const char* name); 
	~EventHandler();


	uint16_t								eventsStored = 0;
	uint16_t								eventsAddedAtLastIteration = 0;
	//getters
	/**
	 * \brief �������� �����, ����������� � ������ �������.
	 * \param boardNumber ����� �����������, ��� �������� ���������� �������� �����.
	 * \param eventNumber ����� �������, ������� ���������� ��������.
	 * \return ������ �� �������.
	 */
	CAEN_DGTZ_UINT8_EVENT_t&				getEvent(uint16_t boardNumber, uint16_t eventNumber);
	/**
	* \brief �������� ��������� �����, ����������� � ������ �������.
	* \param boardNumber ����� �����������, ��� �������� ���������� �������� �����.
	* \return ������ �� �������.
	*/
	CAEN_DGTZ_UINT8_EVENT_t&				getLastEvent(uint16_t boardNumber);
	/**
	 * \brief ��������� ������ ���������� �������, ��������� � ������ ������� ��� ������ �����.
	 * \param boardNumber ����� �����, ��� ������� ����� �������� ������.
	 * \return ���������� ������� �� �������� �����.
	 */
	uint16_t								getNumberOfEventsForBoard(uint16_t boardNumber);
	/**
	 * \brief ����������, ������� �� ��������� �����.
	 * \param channelNumber ����� ������, ��� �������� ���������� �������� ������.
	 * \return ��� ���������� ������.
	 */
	bool									channelIsActive(uint16_t boardNumber, uint16_t channelNumber);
	/**
	 * \brief ��������� �������� ������� �������� ������ ��� ���� ����.
	 * \return ��������� ������ ��� ���� ���� �� ���������� ������� [0; 255] = [-1�;+1�]
	 */
	std::vector<std::vector<int16_t>>&		getAllThresholds();
	/**
	* \brief ��������� �������� ������� �������� ������ ��� ����������� ������ ���������� �����.
	* \param boardNumber ����� �����
	* \param channelNumber ����� ������
	* \return �������� ������ [0; 255] = [-1�;+1�]
	*/
	int16_t									getThreshold(uint16_t boardNumber, uint16_t channelNumber);
	/**
	 * \brief ����������, ������� �� ��������� �����.
	 * \param boardNumber ����� �����-�����������.
	 * \return ��� ���������� �����������.
	 */
	bool									WDFIsEnabled(uint16_t boardNumber);
	uint32_t								getRecordLength() const;
	uint32_t								getNumberOfStartImpulses() const;
	/**
	* \return Number of events that are written in one file.
	*/
	static uint32_t							getFileSize();

	//setters
	void									setRecordLength(uint32_t samples);
	void									setChannelMask(uint16_t boardNumber, int32_t mask);
	void									setThresholds(uint16_t boardNumber, std::vector<int16_t> threshold);
	void									setEnabledWDFs(std::vector<bool> enabledWDFs);
	void									addEvent(uint16_t boardNumber, std::vector<int32_t> mask, CAEN_DGTZ_UINT8_EVENT_t event);
	void									addSomeStartImpulses(uint32_t numberOfImpulses);
	void									setPath(std::string& path);
	/**
	* \brief ������������� ����������� ����� ������� ��� ������ � ����.
	* \param fileSize ����������� ������ ����� (� ��������)
	*/
	static void								setFileSize(uint32_t fileSize);
	/**
	 * \brief ������� ���������� ��������� �������� � ����������� ������. ������ ��������� ������� � ������ ��������.
	 * \param numberOfEvents ���������� �������, ���������� ��������. �� ��������� ��������� ��� ������.
	 */
	void									deleteEvents(uint32_t numberOfEvents = 0);
	void									writeToFile();
};
