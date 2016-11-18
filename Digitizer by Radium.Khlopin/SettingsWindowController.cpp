#include "SettingsWindowController.h"
#include "mainwindow.h"
#include <fstream>


SettingsWindowController::SettingsWindowController(QWidget *parent)
	: QMainWindow(parent) {
	ui.setupUi(this);
	this->setFixedSize(630, 350);

		//make active wdf visible
	ui.WDF1->setCheckState(static_cast<MainWindow*>(parent)->getVME().WDFIsEnabled[0] ? Qt::Checked : Qt::Unchecked);
	ui.WDF2->setCheckState(static_cast<MainWindow*>(parent)->getVME().WDFIsEnabled[1] ? Qt::Checked : Qt::Unchecked);
	ui.WDF3->setCheckState(static_cast<MainWindow*>(parent)->getVME().WDFIsEnabled[2] ? Qt::Checked : Qt::Unchecked);
	ui.WDF4->setCheckState(static_cast<MainWindow*>(parent)->getVME().WDFIsEnabled[3] ? Qt::Checked : Qt::Unchecked);
	ui.WDF5->setCheckState(static_cast<MainWindow*>(parent)->getVME().WDFIsEnabled[4] ? Qt::Checked : Qt::Unchecked);
	ui.WDF6->setCheckState(static_cast<MainWindow*>(parent)->getVME().WDFIsEnabled[5] ? Qt::Checked : Qt::Unchecked);
	ui.WDF7->setCheckState(static_cast<MainWindow*>(parent)->getVME().WDFIsEnabled[6] ? Qt::Checked : Qt::Unchecked);
	ui.WDF8->setCheckState(static_cast<MainWindow*>(parent)->getVME().WDFIsEnabled[7] ? Qt::Checked : Qt::Unchecked);
	ui.WDF9->setCheckState(static_cast<MainWindow*>(parent)->getVME().WDFIsEnabled[8] ? Qt::Checked : Qt::Unchecked);
}


SettingsWindowController::~SettingsWindowController()
{
}

void SettingsWindowController::acceptedSlot() {
	//apply settings
	static_cast<MainWindow*>(this->parent())->getVME().WDFIsEnabled[0] = ui.WDF1->isChecked();
	static_cast<MainWindow*>(this->parent())->getVME().WDFIsEnabled[1] = ui.WDF2->isChecked();
	static_cast<MainWindow*>(this->parent())->getVME().WDFIsEnabled[2] = ui.WDF3->isChecked();
	static_cast<MainWindow*>(this->parent())->getVME().WDFIsEnabled[3] = ui.WDF4->isChecked();
	static_cast<MainWindow*>(this->parent())->getVME().WDFIsEnabled[4] = ui.WDF5->isChecked();
	static_cast<MainWindow*>(this->parent())->getVME().WDFIsEnabled[5] = ui.WDF6->isChecked();
	static_cast<MainWindow*>(this->parent())->getVME().WDFIsEnabled[6] = ui.WDF7->isChecked();
	static_cast<MainWindow*>(this->parent())->getVME().WDFIsEnabled[7] = ui.WDF8->isChecked();
	static_cast<MainWindow*>(this->parent())->getVME().WDFIsEnabled[8] = ui.WDF9->isChecked();

	//write settings to file
	ofstream settingsOut("settings.txt");
	if (settingsOut) {
		settingsOut << ui.WDF1->isChecked() << " ";
		settingsOut << ui.WDF2->isChecked() << " ";
		settingsOut << ui.WDF3->isChecked() << " ";
		settingsOut << ui.WDF4->isChecked() << " ";
		settingsOut << ui.WDF5->isChecked() << " ";
		settingsOut << ui.WDF6->isChecked() << " ";
		settingsOut << ui.WDF7->isChecked() << " ";
		settingsOut << ui.WDF8->isChecked() << " ";
		settingsOut << ui.WDF9->isChecked() << endl;
		//write other settings
		this->close();
	}
}
