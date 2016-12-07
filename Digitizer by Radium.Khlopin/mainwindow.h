#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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

	void updateData();
private:
	int								identifier;
	Ui::MainWindowClass				ui;
	SettingsWindowController*		settings_window_controller;
	ErrorLogWindowController*		error_log_window_controller;
	VMECommunication				vme;
	bool							acquisitionWasStarted = false;
	bool							writingDataWasStarted = false;
	vector<vector<bool>>			samplesSpinboxIsDisabled;
	std::thread						acquisitionThread;

	void readSettings();
private slots:
	void connectSlot();
	void startStopSlot();
	void startStopWritingDataSlot();
	void openSettingsSlot();
	void openErrorsSlot();
	void changeTriggerSettingsSlot();
	void changeThresholdSlot(int newThreshold);
	void changeSampleSlot(int newSample);
	void changeDCOffsetSlot(int newOffset);
	void resetParameterSlot() const;
	void changeEdgeSettingSlot(int indexOfEdge);
	void bufferChangedSlot(int newBufferSizeIndex);
	void setPostTriggerLengthSlot(int newPostTriggerInPercent);
	void makeSoftwareTriggerSlot();
	void changeExternalTriggerSlot();
};

#endif // MAINWINDOW_H
