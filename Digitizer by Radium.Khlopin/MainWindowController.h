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
	vector<vector<string>>&			getChannelColors();
	vector<vector<Qt::PenStyle>>&	getStylesOfThresholdLines();
	mutex							colorBrushMutex;
	mutex							thresholdLineStyleMutex;
private:
	Ui::MainWindowClass				ui;
	SettingsWindowController*		settings_window_controller;
	ErrorLogWindowController*		error_log_window_controller;

	VMECommunication				vme;
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

	void							updateData();
	void							drawSignal(CAEN_DGTZ_UINT8_EVENT_t* eventToDraw);
	void							drawAmplifySpectrum(DataAnalyzer& vmeData);
	void							drawRossiAlphaSpectrum();
	void							readSettings();
	void							pulseErrorButton();
	void							setControlsEnabledOnStartStop(bool enabled) const;
	void							setControlsEnabledOnConnectDisconnect(bool enabled) const;
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
	void							changePolaritySlot();
	void							thresholdVisibilityChangedSlot();
	void							graphVisibilityChangedSlot() const;
public slots:
	void							drawThresholdLineSlot(int channelNumber, int boardNumber, int threshold, int recordLength, QColor& colorOfLine);
	void							drawPostTriggerLineSlot();
	void							replotGraph() const;
	void							startStopSlot();
};
