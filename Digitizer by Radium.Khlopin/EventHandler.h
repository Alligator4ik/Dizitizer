#pragma once
#include <CAENDigitizerType.h>
#include <vector>

class EventHandler
{
	std::vector<std::vector<CAEN_DGTZ_UINT8_EVENT_t>>	events;

	std::vector<int32_t>					channelTriggerEnableMask;
	std::vector<int32_t>					channelActiveEnableMask;
	std::vector<std::vector<int16_t>>		thresholds;
	std::vector<bool>						enabledWDFs;
	uint32_t								recordLength = 2048;
public:
	EventHandler();
	explicit EventHandler(std::vector<int32_t> mask, std::vector<std::vector<int16_t>> thresholds);
	explicit EventHandler(std::vector<std::vector<CAEN_DGTZ_UINT8_EVENT_t>> event, std::vector<int32_t> mask, std::vector<std::vector<int16_t>> thresholds, std::vector<bool> enabledWDFs);
	~EventHandler();

	bool									writingIsEnabled = false;
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

	//setters
	void									setRecordLength(uint32_t samples);
	void									setChannelMask(uint16_t boardNumber, int32_t mask);
	void									setThresholds(uint16_t boardNumber, std::vector<int16_t> threshold);
	void									setEnabledWDFs(std::vector<bool> enabledWDFs);
	void									addEvent(uint16_t boardNumber, std::vector<int32_t> mask, CAEN_DGTZ_UINT8_EVENT_t event,  std::vector<int16_t> thresholds);

	/**
	 * \brief ������� ���������� ��������� ��������.
	 */
	void									deleteEvents();
};