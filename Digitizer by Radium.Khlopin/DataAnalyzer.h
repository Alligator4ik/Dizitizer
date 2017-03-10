#pragma once
#include "VMECommunication.h"
#include <future>

class DataAnalyzer
{
	VMECommunication&							vmeComm;

	CAEN_DGTZ_UINT8_EVENT_t*					currentEvent;
	vector<vector<CAEN_DGTZ_UINT8_EVENT_t*>>	currentEvents;
	/**
	 * \brief Вектор. Содержит только размеры буфера, в который выполняется чтение (на ПК), в байтах.
	 */
	vector<uint32_t>							sizeOfBufferInBytes; 
	/**
	 * \brief Вектор, в который выполняется запись сырых данных, пришедших со всех плат.
	 */
	vector<char*>								bufferToReadIn;

	/**
	 * \brief Вектор, содержащий значения, возвращенные асинхронным вызовом медода readDataOnBoard().
	 */
	vector<future<bool>>						boardThreads;

	/**
	* \brief
	* \param event ивент, который необходимо исследовать.
	* \param channelNumber канал в ивенте, для которого нужно найти нулевой уровень.
	* \return Возвращает нулевой уровень (или 127, если нулевого уровня не удалось найти).
	*/
	uint8_t										getZeroLevel(CAEN_DGTZ_UINT8_EVENT_t &event, uint8_t channelNumber) const;
public:
	explicit DataAnalyzer(VMECommunication& vmeCommunication);
	~DataAnalyzer();

	/**
	 * \brief Метод производит асинхронное чтение со всех активных плат.
	 * \return Возвращает правду, если удалось прочитать хотя бы один ивент.
	 */
	bool										readData();
	/**
	 * \brief Считывает данные с конкретной платы и возвращает истину, если на выбранной плате есть данные для обработки.
	 * \param boardID Номер платы, с которой нужно произвести чтение.
	 * \return Вернет истину, если с данной платы есть, что считывать.
	 */
	bool										readDataOnBoard(uint32_t boardID);
	void										writeData();
	/**
	 * \brief 
	 * \return Везвращает событие для отрисовки (самое первое с первой платы).
	 */
	CAEN_DGTZ_UINT8_EVENT_t*					getEventForDraw() const;
	/**
	 * \brief 
	 * \param boardNumber Номер платы, для которой нужно прочитать все ивенты.
	 * \return Вовращает vector&, содержащий указатели на ивенты .
	 */
	vector<CAEN_DGTZ_UINT8_EVENT_t*>&			getEvents(uint8_t boardNumber);
	/**
	 * \brief Используется для получения максимальной амплитуды сигнала.
	 * \param boardNumber Номер платы
	 * \param channel Номер канала
	 * \return Возвращает амплитуды.
	 */
	vector<uint16_t>							getApmlitudesForSpectre(uint8_t boardNumber, uint8_t channel);
	/**
	 * \brief Конвертирует отсчеты оцифровщика из диапазона [0; 255] в диапазон [-1; 1] вольт.
	 * \param counts Отсчет оцифровщика из диапазона [0; 255]. Значение будет округлено до ближайшего целого.
	 * \return Возвращает значение в милливольтах.
	 */
	static int16_t								convertFromVMECountsTomV(uint8_t counts);
};