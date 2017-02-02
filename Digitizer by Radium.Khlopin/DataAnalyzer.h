#pragma once
#include "VMECommunication.h"
#include <future>

class DataAnalyzer
{
	VMECommunication&							vmeComm;

	CAEN_DGTZ_UINT8_EVENT_t*					currentEvent;
	vector<vector<CAEN_DGTZ_UINT8_EVENT_t*>>	currentEvents;
	/**
	 * \brief ¬ектор. —одержит только размеры буфера, в который выполн€етс€ чтение (на ѕ ), в байтах.
	 */
	vector<uint32_t>							sizeOfBufferInBytes; 
	/**
	 * \brief ¬ектор, в который выполн€етс€ запись сырых данных, пришедших со всех плат.
	 */
	vector<char*>								bufferToReadIn;

	/**
	 * \brief ¬ектор, содержащий значени€, возвращенные асинхронным вызовом медода readDataOnBoard().
	 */
	vector<future<bool>>						boardThreads;

	/**
	* \brief
	* \param event ивент, который необходимо исследовать.
	* \param channelNumber канал в ивенте, дл€ которого нужно найти нулевой уровень.
	* \return ¬озвращает нулевой уровень (или 127, если нулевого уровн€ не удалось найти).
	*/
	uint8_t										getZeroLevel(CAEN_DGTZ_UINT8_EVENT_t &event, uint8_t channelNumber) const;
public:
	explicit DataAnalyzer(VMECommunication& vmeCommunication);
	~DataAnalyzer();

	/**
	 * \brief ћетод производит асинхронное чтение со всех активных плат.
	 * \return ¬озвращает правду, если удалось прочитать хот€ бы один ивент.
	 */
	bool readData();							//return true if there is something to read on any board
	/**
	 * \brief —читывает данные с конкретной платы и возвращает истину, если на выбранной плате есть данные дл€ обработки.
	 * \param boardID Ќомер платы, с которой нужно произвести чтение.
	 * \return ¬ернет истину, если с данной платы есть, что считывать.
	 */
	bool readDataOnBoard(uint32_t boardID);
	void writeData();

	/**
	 * \brief 
	 * \return ¬езвращает событие дл€ отрисовки (самое первое с первой платы).
	 */
	CAEN_DGTZ_UINT8_EVENT_t*					getEventForDraw() const;
	/**
	 * \brief 
	 * \param boardNumber Ќомер платы, дл€ которой нужно прочитать все ивенты.
	 * \return ¬овращает vector&, содержащий указатели на ивенты .
	 */
	vector<CAEN_DGTZ_UINT8_EVENT_t*>&			getEvents(uint8_t boardNumber);
	/**
	 * \brief 
	 * \param boardNumber Ќомер платы
	 * \param channel Ќомер канала
	 * \return ¬озвращает амплитуды.
	 */
	vector<uint16_t>							getApmlitudesForSpectre(uint8_t boardNumber, uint8_t channel);
};