#pragma once
#include <Resources/CAENDigitizerType.h>
#include <vector>
#include <mutex>

class EventHandler
{
	std::vector<std::vector<CAEN_DGTZ_UINT8_EVENT_t>>	events;

	/**
	 * \brief Глобальная папка для записи данных
	 */
	std::string								writingPath;
	/**
	 * \brief Локальная папка для записи данных (конкретных записей)
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
	 * \brief Получает ивент, сохраненный в данном объекте.
	 * \param boardNumber Номер оцифровщика, для которого необходимо получить ивент.
	 * \param eventNumber Номер события, которое необходимо получить.
	 * \return Ссылка на событие.
	 */
	CAEN_DGTZ_UINT8_EVENT_t&				getEvent(uint16_t boardNumber, uint16_t eventNumber);
	/**
	* \brief Получает последний ивент, сохраненный в данном объекте.
	* \param boardNumber Номер оцифровщика, для которого необходимо получить ивент.
	* \return Ссылка на событие.
	*/
	CAEN_DGTZ_UINT8_EVENT_t&				getLastEvent(uint16_t boardNumber);
	/**
	 * \brief Позволяет узнать количество ивентов, сохранном в данном объекте для данной платы.
	 * \param boardNumber Номер платы, для которой нужно получить данные.
	 * \return Количество событий на заданную плату.
	 */
	uint16_t								getNumberOfEventsForBoard(uint16_t boardNumber);
	/**
	 * \brief Показывает, активен ли выбранный канал.
	 * \param channelNumber Номер канала, для которого необходимо получить данные.
	 * \return Бит активности канала.
	 */
	bool									channelIsActive(uint16_t boardNumber, uint16_t channelNumber);
	/**
	 * \brief Позволяет получить текущее значение порога для всех плат.
	 * \return Двумерный вектор для всех плат со значениями порогов [0; 255] = [-1В;+1В]
	 */
	std::vector<std::vector<int16_t>>&		getAllThresholds();
	/**
	* \brief Позволяет получить текущее значение порога для конкретного канала конкретной платы.
	* \param boardNumber Номер платы
	* \param channelNumber Номер канала
	* \return Значение порога [0; 255] = [-1В;+1В]
	*/
	int16_t									getThreshold(uint16_t boardNumber, uint16_t channelNumber);
	/**
	 * \brief Показывает, активна ли выбранная плата.
	 * \param boardNumber Номер платы-оцифровщика.
	 * \return Бит активности оцифровщика.
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
	* \brief Устанавливает минимальное число событий для записи в файл.
	* \param fileSize Минимальный размер файла (в событиях)
	*/
	static void								setFileSize(uint32_t fileSize);
	/**
	 * \brief Очищает внутреннее хранилище хэндлера и освобождает память. Ивенты удаляются начиная с самого старшего.
	 * \param numberOfEvents Количество ивентов, подлежащих удалению. По умолчанию удаляются все ивенты.
	 */
	void									deleteEvents(uint32_t numberOfEvents = 0);
	void									writeToFile();
};
