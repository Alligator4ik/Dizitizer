#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include "ui_mainwindow.h"
#include "SettingsWindowController.h"
#include "VMECommunication.h"

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
	VMECommunication				vme;

	void getSettings();

private slots:
	void connectSlot();
	void startStopSlot();
	void openSettingsSlot();
};

#endif // MAINWINDOW_H
