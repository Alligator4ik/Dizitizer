#include "SettingsWindowController.h"
#include "mainwindow.h"


SettingsWindowController::SettingsWindowController(QWidget *parent)
	: QMainWindow(parent) {
	ui.setupUi(this);
	ui.VMECommSetting->setColumnWidth(0, 24);
	ui.ColorSetting->setColumnWidth(0, 55);
	ui.ColorSetting->setColumnWidth(2, 75);
	ui.ColorSetting->setColumnWidth(3, 130);

	
	//make active wdf visible
	auto tabNumber = 0;
	auto WDFTabs = ui.activeWDFs->findChildren<QCheckBox*>(QString(), Qt::FindChildrenRecursively);
	for each (auto tab in WDFTabs)
		tab->setCheckState(static_cast<MainWindow*>(parent)->getVME().WDFIsEnabled[tabNumber++] ? Qt::Checked : Qt::Unchecked);
}

SettingsWindowController::~SettingsWindowController()
{
}

void SettingsWindowController::acceptedSlot() {
	//apply active WDFs
	auto tabNumber = 0;
	auto WDFTabs = ui.activeWDFs->findChildren<QCheckBox*>(QString(), Qt::FindChildrenRecursively);
	for each (auto WDFCheckBox in WDFTabs)
		static_cast<MainWindow*>(this->parent())->getVME().WDFIsEnabled[tabNumber++] = WDFCheckBox->isChecked();
	//apply other settings
	this->close();
}
