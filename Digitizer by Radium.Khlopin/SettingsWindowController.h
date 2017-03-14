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
	Ui::SettingsWindowController				ui;
	std::vector<std::vector<Qt::PenStyle>>&		stylesOfThresholdLines;

private slots:
	void acceptedSlot();
	void WDFChangedInChannelTabSlot(int newWDFIndex) const;
	void changeColorSlot() const;
};