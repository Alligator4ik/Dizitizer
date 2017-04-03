#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_settingswindow.h"
#include <mutex>

class SettingsWindowController : public QMainWindow
{
	Q_OBJECT

public:
	SettingsWindowController(QWidget *parent = 0);
	~SettingsWindowController();

private:
	Ui::SettingsWindowController				ui;
	std::vector<std::vector<Qt::PenStyle>>&		stylesOfThresholdLines;
	std::mutex&									thresholdlineStyleMutex;

private slots:
	void acceptedSlot();
	void WDFChangedInChannelTabSlot(int newWDFIndex) const;
	void changeColorSlot() const;
};
