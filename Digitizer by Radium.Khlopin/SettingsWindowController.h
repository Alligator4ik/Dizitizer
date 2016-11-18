#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_settingswindow.h"

class SettingsWindowController : public QMainWindow
{
	Q_OBJECT

public:
	SettingsWindowController(QWidget *parent = 0);
	~SettingsWindowController();

private:
	Ui::SettingsWindowController		ui;

private slots:
	void acceptedSlot();
};

