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
	future<void>					acquisitionThread;
	mutex							acquisitionMutex;
	/**
	* \brief ������, ����������� ���������� �������.
	*/
	QTimer*							autoTriggerTimer = nullptr;

	void							updateData();
	void							drawSignal(CAEN_DGTZ_UINT8_EVENT_t* eventToDraw);
	void							drawSpectrum(DataAnalyzer& vmeData);
	void							readSettings();
	void							pulseErrorButton();
	void							setControlsEnabled(bool enabled) const;
signals:
	void							drawThresholdLine(uint8_t channelNumber, uint8_t boardNumber ,int32_t threshold, uint64_t recordLength, QColor* colorOfLine);
	void							replot(void);
private slots:
	void							connectSlot();
	void							startStopSlot();
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
	void							amplifySpectrumSlot() const;
	void							changePolaritySlot();
	void							thresholdVisibilityChangedSlot();
public slots:
	void							drawThresholdLineSlot(uint8_t channelNumber, uint8_t boardNumber, int32_t threshold, uint64_t recordLength, QColor* colorOfLine);
	void							replotGraph() const;
};
