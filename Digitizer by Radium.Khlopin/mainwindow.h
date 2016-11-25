#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include "ui_mainwindow.h"
#include "SettingsWindowController.h"
#include "ErrorLogWindowController.h"
#include "VMECommunication.h"
#include <thread>

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();
	VMECommunication& getVME();

private:
	Ui::MainWindowClass				ui;
	SettingsWindowController*		settings_window_controller;
	ErrorLogWindowController*		error_log_window_controller;
	VMECommunication				vme;
	bool							acquisitionWasStarted = false;
	vector<vector<bool>>			samplesSpinboxIsDisabled;
	std::thread						acquisitionThread;

	void readSettings();

private slots:
	void connectSlot();
	void startStopSlot();
	void openSettingsSlot();
	void openErrorsSlot();
	void changeTriggerSettingsSlot();
	void changeThresholdSlot(int newThreshold);
	void changeEdgeSettingSlot(int indexOfEdge);
	void bufferChangedSlot(int newBufferSizeIndex);
	void makeSoftwareTriggerSlot();
};

#endif // MAINWINDOW_H
