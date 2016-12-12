#pragma once
#include "ui_mainwindow.h"
#include "SettingsWindowController.h"
#include "ErrorLogWindowController.h"
#include "VMECommunication.h"
#include <thread>
#include "qcustomplot.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = nullptr);
	~MainWindow();
	VMECommunication& getVME();

private:
	int								identifier;
	Ui::MainWindowClass				ui;
	SettingsWindowController*		settings_window_controller;
	ErrorLogWindowController*		error_log_window_controller;
	VMECommunication				vme;
	bool							acquisitionWasStarted = false;
	vector<vector<bool>>			samplesSpinboxIsDisabled;
	std::thread						acquisitionThread;

	void							updateData();
	void							drawSignal(CAEN_DGTZ_UINT8_EVENT_t* eventToDraw);
	void							readSettings();
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
	void							changeEdgeSettingSlot(int indexOfEdge);
	void							bufferChangedSlot(int newBufferSizeIndex);
	void							setPostTriggerLengthSlot(int newPostTriggerInPercent);
	void							makeSoftwareTriggerSlot();
	void							changeExternalTriggerSlot();
};
