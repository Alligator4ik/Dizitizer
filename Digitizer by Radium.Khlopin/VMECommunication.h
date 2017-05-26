#pragma once
#include <vector>
#include "Resources/CAENDigitizer.h"
#include <QTime>
using namespace std;

class VMECommunication {
	/**
	 * \brief Состояние соединения с платами оцифровщика. Истина, если есть соединение хотя бы с одной платой.
	 */
	bool									connectionToWDFIsActive = false;
	/**
	 * \brief Хранит идентификаторы плат-оцифровщиков.
	 */
	vector<int32_t>							WDFIdentificators;
	/**
	 * \brief Хранит количество каналов для каждой платы-оцифровщика.
	 */
	vector<uint32_t>						numberOfChannels;
	/**
	 * \brief Хранит служебную информацию каждой платы-оцифровщика.
	 */
	vector<CAEN_DGTZ_BoardInfo_t>			WDFInfo;
	/**
	 * \brief Коды ошибок по платам.
	 */
	vector<vector<CAEN_DGTZ_ErrorCode>>		boardErrors;
	/**
	 * \brief Время ошибок по платам.
	 */
	vector<vector<QTime>>					timeOfBoardErrors;
	/**
	 * \brief Описания процедур, в ходе которых возникли ошибки.
	 */
	vector<vector<QString>>					stringErrors;
	vector<vector<QTime>>					timeOfStringErrors;
	/**
	 * \brief Максимальное количество ивентов, которое может быть передано за цикл чтения.
	 */
	uint16_t								numberOfBlocksTransferredDuringCycle = 0x1;
	/**
	 * \brief Длина записи в точках.
	 */
	uint32_t								recordLength = 2048;
	/**
	* \brief Пост-триггер в процентах.
	*/
	uint16_t								postTrigger = 80;
	/**
	* \brief Пороговое значение импульса для каждого канала каждой платы. Принимает значения от 0 до 255, где 0 - -1В, а 255 - +1В.
	*/
	vector<vector<int16_t>>					threshold;
	/**
	 * \brief Выполняет предстартовую подготовку платы к прослушке и выставляет все ее служенбные регистры.
	 * \param boardNumber Номер платы
	 * \return Вовзращает код ошибки, возникший в результате настройки данной платы, или 0, если настройка прошла успешно.
	 */
	CAEN_DGTZ_ErrorCode						setup(uint16_t boardNumber);
public:
	/**
	 * \brief Флаг периодической триггерации.
	 */
	bool									autoTriggerEnabled = false;
	/**
	* \brief Интервал срабатывания автотриггера в миллисекундах.
	*/
	uint32_t								autoTriggerTimeInMilliseconds = 10;
	/**
	* \brief Показывает, был ли запущен процесс прослушки в качестве одиночного импульса.
	*/
	bool									singleTriggerWasStarted = false;
	/**
	 * \brief Максимальное количество плат, которое возможно установить в мост VME.
	 */
	uint16_t								numberOfWDF = 9;
	/**
	 * \brief Количество записанных в память платы-оцифровщика ивентов, необходимое для запуска цикла чтения с платы.
	 */
	uint8_t									eventNumberToInterrupt = 1;
	/**
	 * \brief Содержит выключатели для плат-оцифровщиков.
	 */
	vector<bool>							WDFIsEnabled;
	/**
	 * \brief Двоичная маска, в которой записываются триггерующие каналы.
	 */
	vector<int32_t>							channelTriggerEnableMask;
	/**
	 * \brief Двоичная маска, в которую записываются каналы, для которых необходимо вести запись.
	 */
	vector<int32_t>							channelActiveEnableMask;
	/**
	 * \brief Длина имульса, необходимого для запуска триггера, для каждого канала каждой платы.
	 */
	vector<vector<ushort>>					sample;
	/**
	 * \brief Смещение по напряжению канала платы. Принимает значения от 0 до 255, где 0 - -1В, а 255 - +1В.
	 */
	vector<vector<ushort>>					DCOffset;
	/**
	 * \brief Характер поведения сигнала для запуска триггера. Может быть падающим (уменьшение напряжения при импульсе) или возрастающим (увеличение напряжения при импульсе).
	 */
	CAEN_DGTZ_TriggerPolarity_t				polarity;

	VMECommunication();
	~VMECommunication();

	/**
	 * \brief Производит попытку соединения с платами.
	 * \return Вовращает истину, если удалось соединиться хотя бы с одной платой.
	 */
	bool									connect();
	/**
	 * \brief Производит попытку отсоединения от плат.
	 * \return Возвращает истину, если отсоединение прошло без ошибок.
	 */
	bool									disconnect();
	/**
	 * \brief Финально настраивает платы и запускает на них прослушку сигналов.
	 * \return Возвращает истину, если описанные действия прошли без ошибок.
	 */
	bool									startAcquisition();
	/**
	 * \brief Останавливает прослушку.
	 * \return Возвращает истину, если остановка прослушки прошла без ошибок.
	 */
	bool									stopAcquisition();
	/**
	 * \brief Генерирует триггер для всех плат.
	 * \return Возвращает истину, если генерация прошла без ошибок.
	 */
	bool									createSoftwareTrigger();
	/**
	 * \brief Изменяет состояние прослушки внешнего триггера.
	 * \param externalTriggerIsActive нужно ли учитывать внешний триггер.
	 * \return Возвращает истину, если изменение состояния внешнего триггера прошло без ошибок.
	 */
	bool									changeExternalTrigger(bool externalTriggerIsActive);
	/**
	 * \brief Изменяет ожидаемое поведение сигнала. Параметр необходим для работы триггерующих каналов.
	 */
	void									changePolarity();
	/**
	 * \brief Очищает внутренний буфер плат-оцифровщиков.
	 * \return Возвращает истину, если очистка прошла успешно.
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
	* \brief Позволяет получить текущее значение порогов для всей платы.
	* \param boardNumber Номер платы
	* \return Массив со значениями порогов [0; 255] = [-1В;+1В]
	*/
	vector<int16_t>&						getBoardThresholds(uint16_t boardNumber);
	/**
	 * \brief Позволяет получить текущее значение порога для конкретного канала конкретной платы.
	 * \param boardNumber Номер платы
	 * \param channelNumber Номер канала
	 * \return Значение порога [0; 255] = [-1В;+1В]
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
	 * \brief Устанавливает значение буффера для его записи в память оцифровщика. 
	 * Ничего не делает, если соединение с оцифровщиком уже установлено - используйте setRecordLength(int32_t, int32_t).
	 * \param samples Длина записи в отсчетах.
	 */
	void									setBufferInSamples(uint32_t samples);
	/**
	 * \brief Устанавливает новое число BLT.
	 * \param newBLTNumber Маскимальное количество событий, которое оцифровщик можит передать за один такт чтения.
	 */
	void									setBLTNumber(uint16_t newBLTNumber);
	void									addTimeOfBoardError(ushort board);
	void									addBoardError(ushort board, CAEN_DGTZ_ErrorCode errorCode);
	void									addStringError(uint16_t board, QString functionDescription);
};
