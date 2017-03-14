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
private:
	Ui::MainWindowClass				ui;
	SettingsWindowController*		settings_window_controller;
	ErrorLogWindowController*		error_log_window_controller;

	VMECommunication				vme;
	bool							acquisitionWasStarted = false;
	uint16_t						activeChannelsCount = 0;			//need to know graphs count (from all boards)
	vector<vector<QCPItemLine*>>	thresholdLinesPointers;
	vector<vector<bool>>			samplesSpinboxIsDisabled;
	vector<vector<bool>>			thresholdsIsVisible;
	vector<vector<string>>			channelsColors;
	vector<vector<Qt::PenStyle>>	stylesOfThresholdLines;
	future<void>					acquisitionThread;
	mutex							acquisitionMutex;
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
signals:
	void							drawThresholdLine(int channelNumber, int boardNumber , int threshold, int recordLength, QColor& colorOfLine);
	void							replot(void);
	void							stopSingleTrigger(void);
private slots:
	void							connectSlot();
	void							startStopWritingDataSlot();
	void							openSettingsSlot();
	void							openErrorsSlot();
	void							changeTriggerSettingsSlot();
	void							changeThresholdSlot(int newThreshold);
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
	void							graphVisibilityChangedSlot();
public slots:
	void							drawThresholdLineSlot(int channelNumber, int boardNumber, int threshold, int recordLength, QColor& colorOfLine);
	void							replotGraph() const;
	void							startStopSlot();
};
