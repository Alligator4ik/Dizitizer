#pragma once
#include "VMECommunication.h"
#include <future>

class DataAnalyzer
{
	VMECommunication&							vmeComm;

	CAEN_DGTZ_UINT8_EVENT_t*					currentEvent;
	vector<vector<CAEN_DGTZ_UINT8_EVENT_t*>>	currentEvents;
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
	* \brief
	* \param event �����, ������� ���������� �����������.
	* \param channelNumber ����� � ������, ��� �������� ����� ����� ������� �������.
	* \return ���������� ������� ������� (��� 127, ���� �������� ������ �� ������� �����).
	*/
	uint8_t										getZeroLevel(CAEN_DGTZ_UINT8_EVENT_t &event, uint8_t channelNumber) const;
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
	bool										readDataOnBoard(uint32_t boardID);
	void										writeData();
	/**
	 * \brief 
	 * \return ���������� ������� ��� ��������� (����� ������ � ������ �����).
	 */
	CAEN_DGTZ_UINT8_EVENT_t*					getEventForDraw() const;
	/**
	 * \brief 
	 * \param boardNumber ����� �����, ��� ������� ����� ��������� ��� ������.
	 * \return ��������� vector&, ���������� ��������� �� ������ .
	 */
	vector<CAEN_DGTZ_UINT8_EVENT_t*>&			getEvents(uint8_t boardNumber);
	/**
	 * \brief ������������ ��� ��������� ������������ ��������� �������.
	 * \param boardNumber ����� �����
	 * \param channel ����� ������
	 * \return ���������� ���������.
	 */
	vector<uint16_t>							getApmlitudesForSpectre(uint8_t boardNumber, uint8_t channel);
	/**
	 * \brief ������������ ������� ����������� �� ��������� [0; 255] � �������� [-1; 1] �����.
	 * \param counts ������ ����������� �� ��������� [0; 255]. �������� ����� ��������� �� ���������� ������.
	 * \return ���������� �������� � ������������.
	 */
	static int16_t								convertFromVMECountsTomV(uint8_t counts);
};