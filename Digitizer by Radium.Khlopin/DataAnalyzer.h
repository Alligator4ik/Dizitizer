#pragma once
#include "VMECommunication.h"
#include <future>
#include "EventHandler.h"

struct Point {
	uint32_t x;
	uint16_t y;
};

class DataAnalyzer
{
	VMECommunication&							vmeComm;

	CAEN_DGTZ_UINT8_EVENT_t*					currentEvent;
	chrono::microseconds						timeWindow;
	vector<EventHandler>*						eventHandler;
	/**
	 * \brief ������. �������� ������ ������� ������, � ������� ����������� ������ (�� ��), � ������.
	 */
	vector<uint32_t>							sizeOfBufferInBytes; 
	/**
	 * \brief ������, � ������� ����������� ������ ����� ������, ��������� �� ���� ����.
	 */
	vector<char*>								bufferToReadIn;
	/**
	 * \brief ������, ���������� ��������, ������������ ����������� ������� ������ readDataOnBoard().
	 */
	vector<future<bool>>						boardThreads;
	/**
	* \brief ����� ������������ ��������� �������� ������.
	* \param event �����, ������� ���������� �����������.
	* \param channelNumber ����� � ������, ��� �������� ����� ����� ������� �������.
	* \return ���������� ������� ������� (��� 127, ���� �������� ������ �� ������� �����).
	*/
	static uint8_t								getZeroLevel(CAEN_DGTZ_UINT8_EVENT_t &event, uint8_t channelNumber);
	/**
	* \brief ����� ��������� ����� � ������� � ������� ��� ��������, ������� ���������� ���� �����.
	* \param eventHandler ��������� �������, � ������� ���������� ����� ��������.
	* \return ������, ���������� ������� ������ ������� �������� � �������� (�� �� ��������� ��������!).
	*/
	vector<uint32_t>							getImpulsesInEventHandler(EventHandler& eventHandler) const;
public:
	explicit DataAnalyzer(VMECommunication& vmeCommunication);
	~DataAnalyzer();

	/**
	 * \brief ����� ���������� ����������� ������ �� ���� �������� ����.
	 * \return ���������� ������, ���� ������� ��������� ���� �� ���� �����.
	 */
	bool										readData();
	/**
	 * \brief ��������� ������ � ���������� ����� � ���������� ������, ���� �� ��������� ����� ���� ������ ��� ���������.
	 * \param boardID ����� �����, � ������� ����� ���������� ������.
	 * \return ������ ������, ���� � ������ ����� ����, ��� ���������.
	 */
	bool										readDataOnBoard(uint32_t boardID, uint16_t boardNumber);
	/**
	 * \brief ���������� ������ ����� ��������� ������ � ����.
	 * \param numberOfEventsInOneFile ���������� ������, ����������� ��� ������ ������. ����� �������,
	 * ����� ��������� numberOfEventsInOneFile ������� - ����� ����������� ������.
	 * \param now True, ���� ���������� �������� ������ � ����� ������ (���������� �������� ���������� �����������)
	 */
	void										writeData(bool now) const;
	chrono::microseconds						getTimeWindow() const;
	/**
	 * \brief ���������� ������ �� ��������� ������������ �������.
	 */
	EventHandler&								getHandler() const;
	/**
	 * \brief 
	 * \return ���������� ������� ��� ��������� (����� ������ � ������ �����).
	 */
	CAEN_DGTZ_UINT8_EVENT_t*					getEventForDraw() const;
	/**
	 * \brief ������������ ��� ��������� ������������ ��������� �������.
	 * \param boardNumber ����� �����
	 * \param channel ����� ������
	 * \return ���������� ���������.
	 */
	vector<uint16_t>							getApmlitudesForSpectre(uint8_t boardNumber, uint8_t channel) const;
	/**
	 * \brief ������������ ������� ����������� �� ��������� [0; 255] � �������� [-1; 1] �����.
	 * \param counts ������ ����������� �� ��������� [0; 255]. �������� ����� ��������� �� ���������� ������.
	 * \return ���������� �������� � ������������.
	 */
	static int16_t								convertFromVMECountsTomV(uint8_t counts);
	/**
	 * \brief ������������ ��������� ������� ����� �������� ����� �� ���� �������.
	 * \return ��������� ������� ����� ��������� ������ � �������������.
	 */
	vector<chrono::microseconds>				getTimeStepsBetweenPeaks();
	/**
	 * \brief ������������� ����� ��������� ���� ��� ������ �������� �����.
	 * \param newTimeWindow ����� ��������� ����, � ������� ����� ������� ����� �������� ���������.
	 */
	void										setTimeWindow(chrono::milliseconds newTimeWindow);
	/**
	 * \brief ������������� ����� ���� ��� ������ ������ ������.
	 * \param path ������ ���� �� �����, � ������� ��������� ����� ������.
	 */
	void										setPath(string &path);
	void										addHandler(EventHandler handler);
};