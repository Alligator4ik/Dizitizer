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
	* \brief Метод рассчитывает положение нулевого уровня.
	* \param event Ивент, который необходимо исследовать.
	* \param channelNumber Канал в ивенте, для которого нужно найти нулевой уровень.
	* \return Возвращает нулевой уровень (или 127, если нулевого уровня не удалось найти).
	*/
	static uint8_t								getZeroLevel(CAEN_DGTZ_UINT8_EVENT_t &event, uint8_t channelNumber);
	/**
	* \brief Метод выполняет поиск в собитии и находит все импульсы, которые преодолели свой порог.
	* \param eventHandler Держатель события, в котором необходимо найти импульсы.
	* \return Вектор, содержащий позиции начала каждого импульса в отсчетах (не во временных единицах!).
	*/
	vector<uint32_t>							getImpulsesInEventHandler(EventHandler& eventHandler) const;
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
	bool										readDataOnBoard(uint32_t boardID, uint16_t boardNumber);
	/**
	 * \brief Производит запись сырых считанных данных в файл.
	 * \param numberOfEventsInOneFile Количество данных, необходимое для старта записи. Иными словами,
	 * когда накопится numberOfEventsInOneFile событий - будет произведена запись.
	 * \param now True, если необходимо записать данные в любом случае (предыдущий параметр становится бесполезным)
	 */
	void										writeData(bool now) const;
	chrono::microseconds						getTimeWindow() const;
	/**
	 * \brief Возвращает ссылку на последний используемый хэндлер.
	 */
	EventHandler&								getHandler() const;
	/**
	 * \brief 
	 * \return Везвращает событие для отрисовки (самое первое с первой платы).
	 */
	CAEN_DGTZ_UINT8_EVENT_t*					getEventForDraw() const;
	/**
	 * \brief Используется для получения максимальной амплитуды сигнала.
	 * \param boardNumber Номер платы
	 * \param channel Номер канала
	 * \return Возвращает амплитуды.
	 */
	vector<uint16_t>							getApmlitudesForSpectre(uint8_t boardNumber, uint8_t channel) const;
	/**
	 * \brief Конвертирует отсчеты оцифровщика из диапазона [0; 255] в диапазон [-1; 1] вольт.
	 * \param counts Отсчет оцифровщика из диапазона [0; 255]. Значение будет округлено до ближайшего целого.
	 * \return Возвращает значение в милливольтах.
	 */
	static int16_t								convertFromVMECountsTomV(uint8_t counts);
	/**
	 * \brief Рассчитывает временные отрезки между началами пиков по всем каналам.
	 * \return Временные отрезки между соседними пиками в микросекундах.
	 */
	vector<chrono::microseconds>				getTimeStepsBetweenPeaks();
	/**
	 * \brief Устанавливает новое временное окно для поиска соседних пиков.
	 * \param newTimeWindow Новое временное окно, в котором будет вестить поиск соседних импульсов.
	 */
	void										setTimeWindow(chrono::milliseconds newTimeWindow);
	/**
	 * \brief Устанавливает новый путь для записи файлов данных.
	 * \param path Полный путь до папки, в которой создаются новые данные.
	 */
	void										setPath(string &path);
	void										addHandler(EventHandler handler);
};