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
	uint32_t								numberOfBlocksTransferredDuringCycle = 0xf;
	/**
	 * \brief Длина записи в точках.
	 */
	uint32_t								recordLength = 2048;

	/**
	 * \brief Выполняет предстартовую подготовку платы к прослушке и выставляет все ее служенбные регистры.
	 * \param boardNumber Номер платы
	 * \return Вовзращает код ошибки, возникший в результате настройки данной платы, или 0, если настройка прошла успешно.
	 */
	CAEN_DGTZ_ErrorCode	setup(uint16_t boardNumber);
public:
	/**
	 * \brief Флаг периодической триггерации.
	 */
	bool									autoTriggerEnabled = false;
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
	 * \brief Пороговое значение импульса для каждого канала каждой платы. Принимает значения от 0 до 255, где 0 - -1В, а 255 - +1В.
	 */
	vector<vector<ushort>>					threshold;
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

	bool									setRecordLength(int32_t newRecordLength, int32_t postTriggerSize);
	bool									setPostTriggerLength(int32_t postTriggerSize);
	bool									setChannelThreshold(ushort board, ushort channel, int16_t newThreshold);
	bool									setChannelSample(ushort board, ushort channel, ushort newSample);
	bool									setChannelOffset(ushort board, ushort channel, int16_t newOffsetInmV);
	void									addTimeOfBoardError(ushort board);
	void									addBoardError(ushort board, CAEN_DGTZ_ErrorCode errorCode);
	void									addStringError(uint16_t board, QString functionDescription);

	CAEN_DGTZ_BoardInfo_t					getWDFInfo(ushort numberOfBoard);
};
