#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_settingswindow.h"
#include <mutex>

class SettingsWindowController : public QMainWindow
{
	Q_OBJECT

public:
	explicit SettingsWindowController(QWidget *parent = nullptr);
	~SettingsWindowController();

private:
	Ui::SettingsWindowController				ui;
	std::vector<std::vector<Qt::PenStyle>>&		stylesOfThresholdLines;
	std::mutex&									thresholdlineStyleMutex;
	std::vector<std::vector<uint16_t>>&			cropVector;
	std::string									writingPath;

private slots:
	void acceptedSlot();
	void WDFChangedInChannelTabSlot(int newWDFIndex) const;
	void changeColorSlot() const;
	void pathChangedSlot();
};
