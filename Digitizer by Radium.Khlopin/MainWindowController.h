#pragma once
#include "ui_mainwindow.h"
#include "SettingsWindowController.h"
#include "ErrorLogWindowController.h"
#include "VMECommunication.h"
#include <thread>
#include "qcustomplot.h"
#include <mutex>

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
	vector<vector<bool>>			samplesSpinboxIsDisabled;
	vector<vector<string>>			channelsColors;
	std::thread						acquisitionThread;

	void							updateData();
	void							drawSignal(CAEN_DGTZ_UINT8_EVENT_t* eventToDraw);
	void							drawSpectrum(DataAnalyzer& vmeData);
	void							readSettings();
	void							pulseErrorButton();
	void							setControlsEnabled(bool enabled) const;
signals:
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
public slots:
	void							replotGraph() const;
};
