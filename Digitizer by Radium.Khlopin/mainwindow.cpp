#include "mainwindow.h"
#include <fstream>

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent) {
		ui.setupUi(this);
		getSettings();
		auto tabs = ui.WDFTabWidget->findChildren<QWidget*>(QString(), Qt::FindDirectChildrenOnly);
		for each (auto tab in tabs)
			tab->hide();
}

MainWindow::~MainWindow() {

}

VMECommunication& MainWindow::getVME() {
	return vme;
}

void MainWindow::getSettings() {
	ifstream settingsStream("settings.txt");
	if (settingsStream) {
		bool WDFIsActive;
		for (auto WDF = 0; WDF < 9; WDF++)
			if (settingsStream >> WDFIsActive)
				vme.WDFIsEnabled.push_back(WDFIsActive);
		//read other settings
	}
}

void MainWindow::connectSlot() {
	if (!vme.isConnected()) {
		vme.connect();
		if (vme.isConnected()) {
			QIcon startButtonIcon;
			startButtonIcon.addFile(QStringLiteral("../../../../../Desktop/CAEN-UI/Connect.png"), QSize(), QIcon::Normal, QIcon::Off);
			ui.connectButton->setIcon(startButtonIcon);
			ui.startStopButton->setEnabled(true);
			ui.drawSignalsButton->setEnabled(true);
			ui.recordButton->setEnabled(true);
			auto tabs = ui.WDFTabWidget->findChildren<QWidget*>(QString(), Qt::FindDirectChildrenOnly);
			auto tabNumberInWidget = 0;
			for (auto i = 0; i < vme.numberOfWDF; i++) {
				if (vme.WDFIsEnabled[i]) {
					tabs[i]->show();
					QString modelName = vme.getWDFInfo(i).ModelName;
					modelName += QChar('-') + QString::number(vme.getWDFInfo(i).SerialNumber);
					ui.WDFTabWidget->setTabText(tabNumberInWidget++, modelName);
				}
			}
		}
	}
	else {
		QIcon stopButtonIcon;
		stopButtonIcon.addFile(QStringLiteral("../../../../../Desktop/CAEN-UI/Connect1.png"), QSize(), QIcon::Normal, QIcon::Off);
		ui.connectButton->setIcon(stopButtonIcon);
		ui.startStopButton->setEnabled(false);
		ui.drawSignalsButton->setEnabled(false);
		ui.recordButton->setEnabled(false);
		auto tabs = ui.WDFTabWidget->findChildren<QWidget*>(QString(), Qt::FindDirectChildrenOnly);
		for each (auto tab in tabs) {
			tab->hide();
		}
		vme.disconnect();
	}
}

void MainWindow::startStopSlot() {
}

void MainWindow::openSettingsSlot() {
	settings_window_controller = new SettingsWindowController(this);
	settings_window_controller->show();
}
