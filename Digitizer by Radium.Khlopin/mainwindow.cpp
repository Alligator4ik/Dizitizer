#include "mainwindow.h"
#include <fstream>
#include <thread>

MainWindow::MainWindow(QWidget *parent)
: QMainWindow(parent, Qt::CustomizeWindowHint | Qt::WindowTitleHint | Qt::WindowMinMaxButtonsHint) {
	ui.setupUi(this);
	readSettings();

	//disable tabs
	for (auto tabNumber = 0; tabNumber < vme.numberOfWDF; tabNumber++)
		ui.WDFTabWidget->setTabEnabled(tabNumber, false);
	
	//connect changeTriggerButtons
	auto changeTriggerButtons = ui.WDFTabWidget->findChildren<QPushButton*>(QRegExp("changeTriggerButton"), Qt::FindChildrenRecursively);
	for each (auto button in changeTriggerButtons)
		connect(button, SIGNAL(clicked()), this, SLOT(changeTriggerSettingsSlot()));

	//connect threshold spinboxes
	auto thresholdSpinBoxes = ui.WDFTabWidget->findChildren<QSpinBox*>(QRegExp("thresholdSpinBox"), Qt::FindChildrenRecursively);
	for each (auto spinBox in thresholdSpinBoxes)
		connect(spinBox, SIGNAL(valueChanged(int)), this, SLOT(changeThresholdSlot(int)));
}

MainWindow::~MainWindow() {
	//write settings to file
	ofstream settingsOut("settings.txt");
	if (settingsOut) {
		//write active WDFs
		for (auto WDF = 0; WDF < vme.WDFIsEnabled.size(); WDF++)
			settingsOut << vme.WDFIsEnabled[WDF] << " ";
		settingsOut << endl;
		//write other settings
	}
}

VMECommunication& MainWindow::getVME() {
	return vme;
}

void MainWindow::readSettings() {
	ifstream settingsStream("settings.txt");
	if (settingsStream) {
		//read active boards
		bool WDFIsActive;
		for (auto WDF = 0; WDF < vme.numberOfWDF; WDF++)
			if (settingsStream >> WDFIsActive)
				vme.WDFIsEnabled.push_back(WDFIsActive);
		//read other settings
	}
}

void MainWindow::connectSlot() {
	if (!vme.isConnected()) {
		vme.connect();
		if (vme.isConnected()) {
			//enable control buttons
			ui.connectButton->setToolTip("Disconnect");
			ui.startStopButton->setEnabled(true);
			ui.drawSignalsButton->setEnabled(true);
			ui.recordButton->setEnabled(true);
			ui.postTriggerBox->setEnabled(true);
			ui.bufferBox->setEnabled(true);
			//enable WDF tabs
			for (auto i = 0; i < vme.numberOfWDF; i++) {
				if (vme.WDFIsEnabled[i]) {
					QString modelName = vme.getWDFInfo(i).ModelName;
					modelName += QChar('-') + QString::number(vme.getWDFInfo(i).SerialNumber);
					ui.WDFTabWidget->setTabEnabled(i, true);
					ui.WDFTabWidget->setTabText(i, modelName);
				}
			}
		}
	}
	else {
		//disable control buttons
		ui.connectButton->setToolTip("Connect");
		ui.startStopButton->setEnabled(false);
		ui.drawSignalsButton->setEnabled(false);
		ui.recordButton->setEnabled(false);
		ui.postTriggerBox->setEnabled(false);
		ui.bufferBox->setEnabled(false);
		//disable WDF tabs
		for (auto tabNumber = 0; tabNumber < vme.numberOfWDF; tabNumber++)
			ui.WDFTabWidget->setTabEnabled(tabNumber, false);
		//disconnect from VME
		vme.disconnect();
	}
}

void startAcq(bool& acquisitionWasStarted, Ui::MainWindowClass& ui) {
	auto i = 0;
	while (acquisitionWasStarted) {
		qInfo("acquisitionWasStarted %i times\n", i++);
		Sleep(1);
	}
}

void MainWindow::startStopSlot() {
	if (!acquisitionWasStarted) {
		acquisitionWasStarted = true;
		ui.startStopButton->setToolTip("Stop");
		ui.connectButton->setEnabled(false);
		ui.exitButton->setEnabled(false);
		ui.bufferBox->setEnabled(false);
		//vme.startAcquisition();
		acquisitionThread = std::thread(startAcq, std::ref(acquisitionWasStarted), std::ref(ui));
		acquisitionThread.detach();
	}
	else {
		//vme.stopAcquisition();
		acquisitionWasStarted = false;
		ui.startStopButton->setToolTip("Start");
		ui.connectButton->setEnabled(true);
		ui.exitButton->setEnabled(true);
		ui.bufferBox->setEnabled(true);
	}
}

void MainWindow::openSettingsSlot() {
	settings_window_controller = new SettingsWindowController(this);
	settings_window_controller->show();
}

void MainWindow::openErrorsSlot() {
	error_log_window_controller = new ErrorLogWindowController(this, vme.getboardErrors(), vme.getTimeOfBoardErrors());
	error_log_window_controller->show();
}

void MainWindow::changeTriggerSettingsSlot() {
	auto buttonPressed = static_cast<QPushButton*>(sender());
	//get color of button
	auto color = buttonPressed->palette().background().color().red() * 1000000 + 
		buttonPressed->palette().background().color().green() * 1000 + 
		buttonPressed->palette().background().color().blue();
	auto buttonNameList = buttonPressed->objectName().split("_");
	auto WDFNumber = buttonNameList[1].toInt()-1;
	auto channelNumber = buttonNameList[2].toInt();

	//������� ����� ������ (� �������� ����� ���-�� ����� 0000 0001 ��� 0 ������, ���� �� �������)
	auto channelMask = static_cast<int>(pow(2, channelNumber));

	auto channelBoxName = "chanel" + std::to_string(channelNumber) + "SettingsBox_" + std::to_string(WDFNumber+1);
	auto channelButtonsBox = ui.WDFTabWidget->findChildren<QObject*>(QString(channelBoxName.c_str()), Qt::FindChildrenRecursively);
	auto channelButtons = channelButtonsBox[0]->findChildren<QWidget*>(QRegExp("^(?!.*changeTriggerButton|samplesSpinBox).*$"), Qt::FindDirectChildrenOnly);
	auto blockSamplesButton = channelButtonsBox[0]->findChildren<QPushButton*>(QRegExp("blockSamplesButton"), Qt::FindDirectChildrenOnly);
	auto samplesSpinBox = channelButtonsBox[0]->findChildren<QSpinBox*>(QRegExp("samplesSpinBox"), Qt::FindDirectChildrenOnly);

	switch (color) {
			//if red
		case 255000000: {
							//make channel buttons active
							for each (auto button in channelButtons)
								button->setEnabled(true);
							if (!(blockSamplesButton[0]->isChecked()))
								samplesSpinBox[0]->setEnabled(true);
							buttonPressed->setText("Active");
							buttonPressed->setStyleSheet("background-color: lime");
							vme.channelActiveEnableMask[WDFNumber] = vme.channelActiveEnableMask[WDFNumber] ^ channelMask;
							break;
		}
			//if green
		case 255000: {
							buttonPressed->setText("Trigger");
							buttonPressed->setStyleSheet("background-color: yellow");
							vme.channelTriggerEnableMask[WDFNumber] = vme.channelTriggerEnableMask[WDFNumber] ^ channelMask;
							break;
		}
			//if yellow
		case 255255000: {
							//make channel buttons inactive
							for each (auto button in channelButtons)
								button->setEnabled(false);
							samplesSpinBox[0]->setEnabled(false);
							buttonPressed->setText("Inactive");
							buttonPressed->setStyleSheet("background-color: red");
							vme.channelActiveEnableMask[WDFNumber] = vme.channelActiveEnableMask[WDFNumber] ^ channelMask;
							vme.channelTriggerEnableMask[WDFNumber] = vme.channelTriggerEnableMask[WDFNumber] ^ channelMask;
							break;
		}
		default: break;
	}
}

void MainWindow::changeThresholdSlot(int newThreshold) {
	auto spinBox = static_cast<QSpinBox*>(sender());
	auto spinBoxNameList = spinBox->objectName().split("_");
	auto WDFNumber = spinBoxNameList[1].toInt() - 1;
	auto channelNumber = spinBoxNameList[2].toInt();
	vme.threshold[WDFNumber][channelNumber] = newThreshold;
}

void MainWindow::changeEdgeSettingSlot(int indexOfEdge) {
	switch (indexOfEdge) {
		case 0: {
					vme.polarity = CAEN_DGTZ_TriggerOnFallingEdge;
					break;
		}
		case 1: {
					vme.polarity = CAEN_DGTZ_TriggerOnRisingEdge;
					break;
		}
		default: break;
	}
}

void MainWindow::bufferChangedSlot(int newBufferSizeIndex) {
	auto newRecordLength = static_cast<int>(pow(2, newBufferSizeIndex+1));	//from index to KB
	vme.setRecordLength(newRecordLength, ui.postTriggerSpinBox->value());
}

void MainWindow::makeSoftwareTriggerSlot() {
	vme.createSoftwareTrigger();
}