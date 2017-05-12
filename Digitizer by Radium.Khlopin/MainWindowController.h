#pragma once
#include "ui_mainwindow.h"
#include "SettingsWindowController.h"
#include "ErrorLogWindowController.h"
#include "VMECommunication.h"
#include <thread>
#include "qcustomplot.h"
#include <mutex>
#include <future>

class DataAnalyzer;

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = nullptr);
	~MainWindow();
	VMECommunication&				getVME();
	DataAnalyzer&					getAnalyzer();
	vector<vector<string>>&			getChannelColors();
	vector<vector<Qt::PenStyle>>&	getStylesOfThresholdLines();
	vector<vector<uint16_t>>&		getCrop();

	/**
	* \brief Метод заменяет текущий кроп на новый. Кроп изменится только при перезапуске прослушки.
	* \param newCrop Новый кроп-фактор.
	*/
	void							setCrop(vector<vector<uint16_t>> newCrop);

	mutex							colorBrushMutex;
	mutex							thresholdLineStyleMutex;
	/**
	 * \brief Временное окно в микросекундах.
	 */
	uint32_t						timeWindow = 1000;
private:
	Ui::MainWindowClass				ui;
	SettingsWindowController*		settings_window_controller;
	ErrorLogWindowController*		error_log_window_controller;

	VMECommunication				vme;
	DataAnalyzer*					vmeData;
	bool							acquisitionWasStarted = false;
	/**
	 * \brief Флаг, показывающий, что необходимо обновить оси графика, так как сменился буфер.
	 */
	bool							recordLengthHasBeenChanged = true;
	/**
	 * \brief Количество включенных каналов со всех плат-оцифровщиков.
	 */
	uint16_t						activeChannelsCount = 0;
	/**
	* \brief Множитель, который учитывается при записи данных (помогает существенно сократить объем данных).
	*/
	vector<vector<uint16_t>>		cropFactorToWrite;
	/**
	 * \brief Поле, содержащее указатель на линию, разделяющую предтриггерное пространство и посттриггерное
	 */
	QCPItemLine*					postTriggerLine = nullptr;
	vector<vector<QCPItemLine*>>	thresholdLinesPointers;
	vector<vector<bool>>			samplesSpinboxIsDisabled;
	vector<vector<bool>>			thresholdsIsVisible;
	vector<vector<string>>			channelsColors;
	vector<vector<Qt::PenStyle>>	stylesOfThresholdLines;
	future<void>					acquisitionThread;
	/**
	* \brief Таймер, запускающий софтверный триггер.
	*/
	QTimer*							autoTriggerTimer = nullptr;

	/**
	 * \brief Основной бэкраунд-метод прослушки.
	 */
	void							updateData();
	/**
	 * \brief Отрисовывает сигнал.
	 * \param vmeData Ссылка на обработчик данных, использующийся в данный момент.
	 */
	void							drawSignal(DataAnalyzer& vmeData);
	/**
	* \brief Отрисовывает амплитудный спектр.
	* \param vmeData Ссылка на обработчик данных, использующийся в данный момент.
	*/
	void							drawAmplifySpectrum(DataAnalyzer& vmeData);
	/**
	* \brief Отрисовывает распределение Росси-Альфа.
	* \param vmeData Ссылка на обработчик данных, использующийся в данный момент.
	*/
	void							drawRossiAlphaSpectrum(DataAnalyzer& vmeData);
	/**
	 * \brief Метод считывает настройки программы из файла настроек и задает параметры программы этими данными.
	 */
	void							readSettings();
	void							pulseErrorButton();
	/**
	 * \brief Метод конфигурирует интерфейс при старте/остановке прослушки.
	 * \param enabled Принимается равным true, если необходимо сконфигурировать интерфейс при остановке прослушки.
	 */
	void							setControlsEnabledOnStartStop(bool enabled) const;
	/**
	* \brief Метод конфигурирует интерфейс при подключении или отключении от оцифровщика.
	* \param enabled Принимается равным true, если необходимо сконфигурировать интерфейс при подключении.
	*/
	void							setControlsEnabledOnConnectDisconnect(bool enabled) const;
	/**
	 * \brief Метод очищает графики. Прямой вызов этого метода запрещен, используйте механизм сигналов-слотов!
	 */
	void							clearGraphs() const;
signals:
	void							drawThresholdLine(int channelNumber, int boardNumber , int threshold, int recordLength, QColor& colorOfLine);
	void							drawPostTriggerLine();
	void							replot();
	void							stopSingleTrigger();
private slots:
	void							connectSlot();
	void							startStopWritingDataSlot();
	void							openSettingsSlot();
	void							openErrorsSlot();
	void							changeTriggerSettingsSlot();
	void							changeThresholdSlot(double newThreshold);
	void							changeSampleSlot(int newSample);
	void							changeDCOffsetSlot(int newOffset);
	void							resetParameterSlot() const;
	void							bufferChangedSlot(int newBufferSizeIndex);
	void							setPostTriggerLengthSlot(int newPostTriggerInPercent);
	void							makeSoftwareTriggerSlot();
	void							changeExternalTriggerSlot();
	void							autoTriggerSlot();
	void							singleTriggerSlot();
	void							amplifySpectrumSlot() const;
	void							rossiAlphaSpectrumSlot() const;
	void							changePolaritySlot();
	void							thresholdVisibilityChangedSlot();
	void							graphVisibilityChangedSlot() const;
public slots:
	void							mouseZoomSlot(QWheelEvent* wheelEvent) const;
	void							drawThresholdLineSlot(int channelNumber, int boardNumber, int threshold, int recordLength, QColor& colorOfLine);
	void							drawPostTriggerLineSlot();
	void							replotGraph() const;
	void							startStopSlot();
};
