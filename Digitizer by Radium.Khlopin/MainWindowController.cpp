#include "MainWindowController.h"
#include <fstream>
#include <thread>
#include <ToRussianTextForQString.h>
#include "DataAnalyzer.h"

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

	//connect samples spinboxes
	auto samplesSpinBoxes = ui.WDFTabWidget->findChildren<QSpinBox*>(QRegExp("samplesSpinBox"), Qt::FindChildrenRecursively);
	for each (auto spinBox in samplesSpinBoxes)
		connect(spinBox, SIGNAL(valueChanged(int)), this, SLOT(changeSampleSlot(int)));

	//connect DC offset spinboxes
	auto DCOffsetSpinBoxes = ui.WDFTabWidget->findChildren<QSpinBox*>(QRegExp("DACOffsetSpinBox"), Qt::FindChildrenRecursively);
	for each (auto spinBox in DCOffsetSpinBoxes)
		connect(spinBox, SIGNAL(valueChanged(int)), this, SLOT(changeDCOffsetSlot(int)));

	//connect reset buttons
	auto DCResetButtons = ui.settingsBlock->findChildren<QPushButton*>(QRegExp("ResetButton"), Qt::FindChildrenRecursively);
	for each (auto button in DCResetButtons)
		connect(button, SIGNAL(clicked()), this, SLOT(resetParameterSlot()));

	//connect replot slot to replotting graph in main thread
	connect(this, &MainWindow::replot, this, &MainWindow::replotGraph, Qt::BlockingQueuedConnection);

	//set postTrigger disabled
	ui.postTriggerBox->setEnabled(false);
}

MainWindow::~MainWindow() {
	//write settings to file
	ofstream settingsOut("settings.cfg");
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

void MainWindow::updateData() {
	DataAnalyzer vmeData(vme);
	auto lastAutoTriggerSecond = static_cast<int>(time(nullptr));
	while (acquisitionWasStarted) {
		auto ready = false;
		auto currentAutoTriggerSecond = static_cast<int>(time(nullptr));
		if (vme.autoTriggerEnabled && lastAutoTriggerSecond != currentAutoTriggerSecond) {
			lastAutoTriggerSecond = currentAutoTriggerSecond;
			vme.createSoftwareTrigger();
			ready = true;
		}
		//todo: ready = (vme.readData() return value)
		//todo: eg if there is smth to read, it will return true
		if (ready) {
			vmeData.readData();
			if (ui.recordButton->isChecked())
				vmeData.writeData();
			if (ui.drawButton->isChecked()) {
				drawSignal(vmeData.getEvent());
				if (acquisitionWasStarted)
					emit replot();
			}
		}
	}
	if (!vme.stopAcquisition())
		this->pulseErrorButton();
}

void MainWindow::drawSignal(CAEN_DGTZ_UINT8_EVENT_t * eventToDraw) {
	QVector<double_t> data(static_cast<double_t>(eventToDraw->ChSize[0]));			//y axis in mV
	QVector<double_t> samples(static_cast<double_t>(eventToDraw->ChSize[0]));		//x axis in ns
	for (auto sample = 0; sample < samples.size(); sample++) {
		samples[sample] = sample * 2;
		data[sample] = static_cast<double_t>(eventToDraw->DataChannel[0][sample]);
		//memcpy(&(data[sample]), &(eventToDraw->DataChannel[0][sample]), sizeof(uint8_t));
	}
	ui.signalWidget->graph(0)->setData(samples, data);
}

void MainWindow::readSettings() {
	ifstream settingsStream("settings.cfg");
	if (settingsStream) {
		//read active boards
		bool WDFIsActive;
		for (auto WDF = 0; WDF < vme.numberOfWDF; WDF++)
			if (settingsStream >> WDFIsActive)
				vme.WDFIsEnabled.push_back(WDFIsActive);
		//read other settings
	}
}

void MainWindow::pulseErrorButton() {
}

void MainWindow::setControlsEnabled(bool enabled) const {
	ui.startStopButton->setToolTip(toRussian(enabled ? "Старт" : "Стоп"));
	ui.connectButton->setEnabled(enabled);
	ui.exitButton->setEnabled(enabled);
	ui.bufferComboBox->setEnabled(enabled);
	ui.polarityBox->setEnabled(enabled);
	ui.postTriggerBox->setEnabled(!enabled);
	ui.triggerOptionsBox->setEnabled(!enabled);
}

void MainWindow::connectSlot() {
	if (!vme.isConnected()) {
		vme.connect();
		if (vme.isConnected()) {
			//enable control buttons
			ui.connectButton->setToolTip(toRussian("Отключить"));
			ui.startStopButton->setEnabled(true);
			ui.drawButton->setEnabled(true);
			ui.recordButton->setEnabled(true);
			ui.triggerSettingBox->setEnabled(true);
			ui.bufferComboBox->setEnabled(true);
			//enable WDF tabs
			for (auto i = 0; i < vme.numberOfWDF; i++) {
				if (vme.WDFIsEnabled[i]) {
					QString modelName = vme.getWDFInfo(i).ModelName;
					modelName += QChar('-') + QString::number(vme.getWDFInfo(i).SerialNumber);
					ui.WDFTabWidget->setTabEnabled(i, true);
					ui.WDFTabWidget->setTabText(i, modelName);
				}
			}
		} else
			ui.connectButton->setChecked(false);							//if connection wasn't established
	}
	else {
			//set control buttons disabled
			ui.connectButton->setToolTip(toRussian("Включить"));
			ui.startStopButton->setEnabled(false);
			ui.drawButton->setEnabled(false);
			ui.recordButton->setEnabled(false);
			ui.triggerSettingBox->setEnabled(false);
			ui.bufferComboBox->setEnabled(false);
			//disable WDF tabs
			for (auto tabNumber = 0; tabNumber < vme.numberOfWDF; tabNumber++)
				ui.WDFTabWidget->setTabEnabled(tabNumber, false);
			//disconnect from VME
			vme.disconnect();
	}
}

void MainWindow::startStopSlot() {
	if (!acquisitionWasStarted) {
		if (vme.startAcquisition()) {
			acquisitionWasStarted = true;
			setControlsEnabled(false);
			for (auto i = 0; i < activeChannelsCount; i++)
				ui.signalWidget->addGraph();
			ui.signalWidget->yAxis->setRange(0, 130);
			ui.signalWidget->xAxis->setRange(0, 2048*(static_cast<uint16_t>(pow(2, ui.bufferComboBox->currentIndex() + 1))));
			acquisitionThread = std::thread(&MainWindow::updateData, this);
		} else
			this->pulseErrorButton();
	}
	else {
		acquisitionWasStarted = false;
		acquisitionThread.join();
		ui.signalWidget->clearGraphs();
		setControlsEnabled(true);
	}
}

void MainWindow::startStopWritingDataSlot() {
	if (!(ui.recordButton->isChecked())) {
		vme.clearData();
	}
	else {
		
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

	//возьмем маску канала (в двоичной будет что-то вроде 0000 0001 для 0 канала, если он включен)
	auto channelMask = static_cast<int>(pow(2, channelNumber));

	auto channelBoxName = "chanel" + std::to_string(channelNumber) + "SettingsBox_" + std::to_string(WDFNumber+1);
	auto channelButtonsBox = ui.WDFTabWidget->findChildren<QObject*>(QString(channelBoxName.c_str()), Qt::FindChildrenRecursively);
	auto channelButtons = channelButtonsBox[0]->findChildren<QWidget*>(QRegExp("^(?!.*changeTriggerButton|samplesSpinBox|blockSamplesButton|thresholdSpinBox|thresholdIsDrawingButton).*$"), Qt::FindDirectChildrenOnly);
	auto samplesSpinBox = channelButtonsBox[0]->findChildren<QSpinBox*>(QRegExp("samplesSpinBox"), Qt::FindDirectChildrenOnly);
	auto blockSamplesButton = channelButtonsBox[0]->findChildren<QPushButton*>(QRegExp("blockSamplesButton"), Qt::FindDirectChildrenOnly);
	auto thresholdSpinBox = channelButtonsBox[0]->findChildren<QSpinBox*>(QRegExp("thresholdSpinBox"), Qt::FindDirectChildrenOnly);
	auto thresholdIsDrawingButton = channelButtonsBox[0]->findChildren<QPushButton*>(QRegExp("thresholdIsDrawingButton"), Qt::FindDirectChildrenOnly);
		
	switch (color) {
			//if red
		case 255000000: {
							//make channel buttons active
							for each (auto button in channelButtons)
								button->setEnabled(true);
							buttonPressed->setText(toRussian("Вкл."));
							buttonPressed->setToolTip(toRussian("Включен"));
							buttonPressed->setStyleSheet("background-color: lime");
							activeChannelsCount++;
							vme.channelActiveEnableMask[WDFNumber] = vme.channelActiveEnableMask[WDFNumber] ^ channelMask;
							break;
		}
			//if green
		case 255000: {
							thresholdSpinBox[0]->setEnabled(true);
							thresholdIsDrawingButton[0]->setEnabled(true);
							blockSamplesButton[0]->setEnabled(true);
							if (!(blockSamplesButton[0]->isChecked()))
								samplesSpinBox[0]->setEnabled(true);
							buttonPressed->setText(toRussian("Триггер"));
							buttonPressed->setStyleSheet("background-color: yellow");
							vme.channelTriggerEnableMask[WDFNumber] = vme.channelTriggerEnableMask[WDFNumber] ^ channelMask;
							break;
		}
			//if yellow
		case 255255000: {
							//make channel buttons inactive
							for each (auto button in channelButtons)
								button->setEnabled(false);
							thresholdSpinBox[0]->setEnabled(false);
							thresholdIsDrawingButton[0]->setEnabled(false);
							blockSamplesButton[0]->setEnabled(false);
							samplesSpinBox[0]->setEnabled(false);
							buttonPressed->setText(toRussian("Выкл."));
							buttonPressed->setToolTip(toRussian("Выключен"));
							buttonPressed->setStyleSheet("background-color: red");
							activeChannelsCount--;
							vme.channelActiveEnableMask[WDFNumber] = vme.channelActiveEnableMask[WDFNumber] ^ channelMask;
							vme.channelTriggerEnableMask[WDFNumber] = vme.channelTriggerEnableMask[WDFNumber] ^ channelMask;
							break;
		}
		default: break;
	}
}

//todo: convert from mV to ADC counts
void MainWindow::changeThresholdSlot(int newThreshold) {
	auto spinBox = static_cast<QSpinBox*>(sender());
	auto spinBoxNameList = spinBox->objectName().split("_");
	auto WDFNumber = spinBoxNameList[1].toInt() - 1;
	auto channelNumber = spinBoxNameList[2].toInt();
	if (!vme.setChannelThreshold(WDFNumber, channelNumber, newThreshold))
		this->pulseErrorButton();
}

void MainWindow::changeSampleSlot(int newSample) {
	auto spinBox = static_cast<QSpinBox*>(sender());
	auto spinBoxNameList = spinBox->objectName().split("_");
	auto WDFNumber = spinBoxNameList[1].toInt() - 1;
	auto channelNumber = spinBoxNameList[2].toInt();
	if (!vme.setChannelSample(WDFNumber, channelNumber, newSample))
		this->pulseErrorButton();
}

void MainWindow::changeDCOffsetSlot(int newOffset) {
	auto spinBox = static_cast<QSpinBox*>(sender());
	auto spinBoxNameList = spinBox->objectName().split("_");
	auto WDFNumber = spinBoxNameList[1].toInt() - 1;
	auto channelNumber = spinBoxNameList[2].toInt();
	if (!vme.setChannelOffset(WDFNumber, channelNumber, newOffset))
		this->pulseErrorButton();
}

void MainWindow::resetParameterSlot() const {
	auto resetButton = static_cast<QPushButton*>(sender());
	auto resetButtonNameList = resetButton->objectName().split("_");
	auto senderName = resetButtonNameList[0];
	auto WDFNumber = resetButtonNameList[1];
	auto channelNumber = resetButtonNameList[2];
	QString recieverName;
	//todo
	//recieverName = senderName - "ResetButton" + "SpinBox"
	if (senderName == QString("DACOffsetResetButton"))
		recieverName = QString("DACOffsetSpinBox") + QString("_") + WDFNumber + QString("_") + channelNumber;
	if (senderName == QString("positionResetButton"))
		recieverName = QString("positionSpinBox") + QString("_") + WDFNumber + QString("_") + channelNumber;
	auto reciever = ui.settingsBlock->findChild<QSpinBox*>(recieverName, Qt::FindChildrenRecursively);
	reciever->setValue(0);
}

void MainWindow::bufferChangedSlot(int newBufferSizeIndex) {
	auto newRecordLength = static_cast<uint16_t>(pow(2, newBufferSizeIndex+1));	//from index to KB
	if (!vme.setRecordLength(newRecordLength, ui.postTriggerSpinBox->value()))
		this->pulseErrorButton();
}

void MainWindow::setPostTriggerLengthSlot(int newPostTriggerInPercent) {
	if (!vme.setPostTriggerLength(newPostTriggerInPercent))
		this->pulseErrorButton();
}

void MainWindow::makeSoftwareTriggerSlot() {
	if (!vme.createSoftwareTrigger())
		this->pulseErrorButton();
}

void MainWindow::changeExternalTriggerSlot() {
	auto button = static_cast<QPushButton*>(sender());
	if (!vme.changeExternalTrigger(button->isChecked()))
		this->pulseErrorButton();
}

void MainWindow::autoTriggerSlot() {
	vme.autoTriggerEnabled = !vme.autoTriggerEnabled;
}

void MainWindow::changePolaritySlot() {
	vme.changePolarity();
}

void MainWindow::replotGraph() const {
	ui.signalWidget->replot();
}