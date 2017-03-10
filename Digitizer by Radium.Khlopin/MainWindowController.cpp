#include "MainWindowController.h"
#include <fstream>
#include <algorithm>
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

	//connect threshold lines drawing button
	auto thresholdIsVisibleButtons = ui.settingsBlock->findChildren<QPushButton*>(QRegExp("thresholdIsDrawingButton"), Qt::FindChildrenRecursively);
	for each (auto button in thresholdIsVisibleButtons)
		connect(button, &QPushButton::clicked, this, &MainWindow::thresholdVisibilityChangedSlot);

	//connect replot slot to replotting graph in main thread
	connect(this, &MainWindow::replot, this, &MainWindow::replotGraph, Qt::BlockingQueuedConnection);

	//connect threshold line drawing process to main thread 
	connect(this, &MainWindow::drawThresholdLine, this, &MainWindow::drawThresholdLineSlot, Qt::BlockingQueuedConnection);

	connect(this, &MainWindow::stopSingleTrigger, this, &MainWindow::startStopSlot);

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
		//write graph colours
		for (auto WDF = 0; WDF < vme.numberOfWDF; WDF++) {
			for (auto channelNumber = 0; channelNumber < 8; channelNumber++)
				settingsOut << channelsColors[WDF][channelNumber] << " ";
			settingsOut << endl;
		}
		//write visibility of thresholds
		for (auto WDF = 0; WDF < vme.numberOfWDF; WDF++) {
			for (auto channelNumber = 0; channelNumber < 8; channelNumber++)
				settingsOut << thresholdsIsVisible[WDF][channelNumber] << " ";
			settingsOut << endl;
		}
		//write autotrigger time interval
		settingsOut << vme.autoTriggerTimeInMilliseconds << endl;
		//write thresholds
		for (auto boardNumber = 0; boardNumber < vme.numberOfWDF; boardNumber++) {
			for (auto channelNumber = 0; channelNumber < 8; channelNumber++)
				settingsOut << vme.getChannelThreshold(boardNumber, channelNumber) << " ";
			settingsOut << endl;
		}
		//write other settings
	}
}

VMECommunication& MainWindow::getVME() {
	return vme;
}

vector<vector<string>>& MainWindow::getChannelColors() {
	return channelsColors;
}

void MainWindow::updateData() {
	vme.startAcquisition();
	auto vmeData = new DataAnalyzer(vme);
	while (acquisitionWasStarted) {
		if (vmeData->readData()) {					//if we have smth to show or analyze
			if (ui.recordButton->isChecked())
				vmeData->writeData();
			if (ui.drawButton->isChecked()) {
				drawSignal(vmeData->getEventForDraw());
				if (acquisitionMutex.try_lock()) {
					emit replot();	//todo: fix deadlock
					acquisitionMutex.unlock();
				}
			}
			if (ui.amplifySpectrumButton->isChecked()) {
				drawAmplifySpectrum(*vmeData);
				if (acquisitionMutex.try_lock()) {
					emit replot();	//todo: fix deadlock
					acquisitionMutex.unlock();
				}
			}
			if (ui.rossiAlphaSpectrumButton->isChecked()) {
				
			}
			//todo: make single trigger stoppable (call start-stop slot maybe)
			if (vme.singleTriggerWasStarted) {
				vme.singleTriggerWasStarted = false;
				emit stopSingleTrigger();
				break;
			}
		}
	}
	//proceed to stop phase
	makeSoftwareTriggerSlot();
	if (!vme.stopAcquisition())
		this->pulseErrorButton();
	delete vmeData;
}

void MainWindow::drawSignal(CAEN_DGTZ_UINT8_EVENT_t * eventToDraw) {
	//starting initialize
	auto graphNumber = 0;
	auto eventSize = *max_element(eventToDraw->ChSize, eventToDraw->ChSize + 8);
	QVector<QCPGraphData> graphData(eventSize);
	//current initialization
	for (auto numberOfBoard = 0; numberOfBoard < vme.numberOfWDF; numberOfBoard++)												//по всем доскам
		if (vme.WDFIsEnabled[numberOfBoard])																					//если доска включена
			for (auto channelNumber = 0; channelNumber < vme.getWDFInfo(numberOfBoard).Channels; channelNumber++)				//по всем каналам этой доски
				if (eventToDraw->ChSize[channelNumber] != 0)																	//если на канале что-то есть
					if (ui.WDFTabWidget->findChild<QPushButton*>(QString("channelIsDrawingButton_" + QString::number(numberOfBoard + 1) + "_" + QString::number(channelNumber)))->isChecked()) {	//если нажата кнопка отображения сигнала
						//initializing the graph
						auto graphDataContainer = ui.signalWidget->graph(graphNumber)->data().data();
						auto it = graphData.begin();
						const auto itEnd = graphData.end();
						auto sample = 0;
						while (it != itEnd) {
							it->key = 2 * sample;
							it->value = eventToDraw->DataChannel[channelNumber][sample] * 3.92 - 500;		//from [0;255] to [-500;500]
							++it;
							++sample;
						}
						graphDataContainer->set(graphData, true);
						//graph's visual setup
						colorBrushMutex.lock();
							auto colorOfLines = QColor(channelsColors[numberOfBoard][channelNumber].c_str());
							ui.signalWidget->graph(graphNumber)->setPen(QPen(colorOfLines));
							ui.signalWidget->graph(graphNumber++)->setName(QString("Channel %1").arg(channelNumber));
							if (vme.channelTriggerEnableMask[numberOfBoard] & 1 << channelNumber)
								if (acquisitionMutex.try_lock()) {
									emit drawThresholdLine(channelNumber, numberOfBoard, DataAnalyzer::convertFromVMECountsTomV(vme.getChannelThreshold(numberOfBoard, channelNumber)), vme.getRecordLength(), &colorOfLines);
									acquisitionMutex.unlock();
								} //todo: fix deadlock
						colorBrushMutex.unlock();
					}
					else {
						ui.signalWidget->graph(graphNumber++)->setVisible(false);
					}
	ui.signalWidget->legend->setVisible(true);
}

void MainWindow::drawAmplifySpectrum(DataAnalyzer& vmeData) {
	auto graphNumber = 0;
	for (auto numberOfBoard = 0; numberOfBoard < vme.numberOfWDF; numberOfBoard++)												//по всем доскам
		if (vme.WDFIsEnabled[numberOfBoard])																					//если доска включена
			for (auto channelNumber = 0; channelNumber < vme.getWDFInfo(numberOfBoard).Channels; channelNumber++)				//по всем каналам этой доски
				if (vme.channelActiveEnableMask[numberOfBoard] & 1 << channelNumber)											//если канал включен
					if (ui.WDFTabWidget->findChild<QPushButton*>(QString("channelIsDrawingButton_" + QString::number(numberOfBoard + 1) + "_" + QString::number(channelNumber)))->isChecked()) {	//если нажата кнопка отображения
						auto amplitudes = vmeData.getApmlitudesForSpectre(numberOfBoard, channelNumber);
						//каждый 4ый вольтаж изменяем, а боковые (+-1, +-2 и +-3) подравниваем
						for (auto amplitude : amplitudes)
							if (amplitude > 8) {
								auto graphDataContainer = ui.spectrumWidget->graph(graphNumber)->data().data();
								graphDataContainer->at(amplitude	)->value += 1;
								graphDataContainer->at(amplitude - 1)->value += 0.75;
								graphDataContainer->at(amplitude + 1)->value += 0.75;
								graphDataContainer->at(amplitude - 2)->value += 0.5;
								graphDataContainer->at(amplitude + 2)->value += 0.5;
								graphDataContainer->at(amplitude - 3)->value += 0.25;
								graphDataContainer->at(amplitude + 3)->value += 0.25;
								colorBrushMutex.lock();
									auto colorOfLines = QColor(channelsColors[numberOfBoard][channelNumber].c_str());
									ui.spectrumWidget->graph(graphNumber)->setPen(QPen(colorOfLines));
									ui.spectrumWidget->graph(graphNumber)->setName(QString("Channel %1").arg(channelNumber));
								colorBrushMutex.unlock();
							}
						graphNumber++;
					}
}

void MainWindow::drawRossiAlphaSpectrum() {
	//Not implemented
}

void MainWindow::readSettings() {
	ifstream settingsStream("settings.cfg");
	if (settingsStream) {
		//read active boards
		bool boardIsActive;
		for (auto boardNumber = 0; boardNumber < vme.numberOfWDF; boardNumber++)
			if (settingsStream >> boardIsActive)
				vme.WDFIsEnabled.push_back(boardIsActive);
		//read graph colors
		channelsColors.resize(vme.numberOfWDF);
		string color;
		for (auto boardNumber = 0; boardNumber < vme.numberOfWDF; boardNumber++)
			for (auto channelNumber = 0; channelNumber < 8; channelNumber++)
				if (settingsStream >> color)
					channelsColors[boardNumber].push_back(color);
		//read visibility of threshold lines
		thresholdLinesPointers.resize(vme.numberOfWDF);
		for (auto boardNumber = 0; boardNumber < vme.numberOfWDF; boardNumber++)
			thresholdLinesPointers[boardNumber].resize(8);
		thresholdsIsVisible.resize(vme.numberOfWDF);
		bool thresholdLineIsVisible;
		for (auto boardNumber = 0; boardNumber < vme.numberOfWDF; boardNumber++)
			for (auto channelNumber = 0; channelNumber < 8; channelNumber++)
				if (settingsStream >> thresholdLineIsVisible) {
					thresholdsIsVisible[boardNumber].push_back(thresholdLineIsVisible);
					if (thresholdLineIsVisible) {
						auto buttonName = QString("thresholdIsDrawingButton_%1_%2").arg(boardNumber + 1).arg(channelNumber);
						auto button = ui.settingsBlock->findChild<QPushButton*>(buttonName);
						button->setChecked(true);
					}
				}
		//read autotrigger time interval
		uint16_t triggerTimeInterval;
		if (settingsStream >> triggerTimeInterval)
			vme.autoTriggerTimeInMilliseconds = triggerTimeInterval;
		//read thresholds
		int16_t threshold;
		for (auto boardNumber = 0; boardNumber < vme.numberOfWDF; boardNumber++)
			for (auto channelNumber = 0; channelNumber < 8; channelNumber++)
				if (settingsStream >> threshold) {
					vme.setChannelThreshold(boardNumber, channelNumber, DataAnalyzer::convertFromVMECountsTomV(threshold));
					auto thresholdSpinBoxName = QString("thresholdSpinBox_%1_%2").arg(boardNumber + 1).arg(channelNumber);
					auto spinBox = ui.settingsBlock->findChild<QSpinBox*>(thresholdSpinBoxName);
					spinBox->setValue(DataAnalyzer::convertFromVMECountsTomV(threshold));
				}
		//read other settings
	}
}

void MainWindow::pulseErrorButton() {
	//Not implemented
}

void MainWindow::setControlsEnabledOnStartStop(bool enabled) const {
	ui.startStopButton->setChecked(!enabled);
	ui.startStopButton->setToolTip(toRussian(enabled ? "Старт" : "Стоп"));
	ui.connectButton->setEnabled(enabled);
	ui.exitButton->setEnabled(enabled);
	ui.bufferComboBox->setEnabled(enabled);
	ui.polarityBox->setEnabled(enabled);
	ui.postTriggerBox->setEnabled(!enabled);
	//triggerBox options
	ui.forceTriggerButton->setEnabled(!enabled);
	ui.autoTriggerButton->setEnabled(!enabled);
	ui.externalTriggerButton->setEnabled(!enabled);
	ui.singleTriggerButton->setEnabled(enabled);
}

void MainWindow::setControlsEnabledOnConnectDisconnect(bool enabled) const {
	ui.connectButton->setToolTip(toRussian(enabled ? "Отключить" : "Включить"));
	ui.startStopButton->setEnabled(enabled);
	ui.drawButton->setEnabled(enabled);
	ui.recordButton->setEnabled(enabled);
	ui.triggerSettingBox->setEnabled(enabled);
	ui.triggerOptionsBox->setEnabled(enabled);
	ui.bufferComboBox->setEnabled(enabled);
	ui.singleTriggerButton->setEnabled(enabled);
}

void MainWindow::connectSlot() {
	if (!vme.isConnected()) {
		vme.connect();
		if (vme.isConnected()) {
			setControlsEnabledOnConnectDisconnect(true);
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
		setControlsEnabledOnConnectDisconnect(false);
		//disable WDF tabs
		for (auto tabNumber = 0; tabNumber < vme.numberOfWDF; tabNumber++)
			ui.WDFTabWidget->setTabEnabled(tabNumber, false);
		//disconnect from VME
		vme.disconnect();
	}
}

void MainWindow::startStopSlot() {
	if (!acquisitionWasStarted) {
		acquisitionWasStarted = true;
		setControlsEnabledOnStartStop(false);
		for (auto i = 0; i < activeChannelsCount; i++)
			ui.signalWidget->addGraph();
		ui.signalWidget->yAxis->setRange(-300, 100);
		ui.signalWidget->xAxis->setRange(0, 2048*(static_cast<uint16_t>(pow(2, ui.bufferComboBox->currentIndex() + 1))));
		acquisitionThread = async(launch::async, &MainWindow::updateData, this);
	} else {
		acquisitionWasStarted = false;
		//отключаем автотриггер, если он был включен
		if (ui.autoTriggerButton->isChecked()) {
			ui.autoTriggerButton->setChecked(false);
			autoTriggerSlot();
		}
		//отключаем одиночный триггер, если он был включен
		if (ui.singleTriggerButton->isChecked())
			ui.singleTriggerButton->setChecked(false);
		//заканчиваем считывание
		acquisitionMutex.lock();
			acquisitionThread.get();
		acquisitionMutex.unlock();
		ui.signalWidget->clearGraphs();
		setControlsEnabledOnStartStop(true);
	}
}

void MainWindow::startStopWritingDataSlot() {
	if (!(ui.recordButton->isChecked()))
		vme.clearData();
}

void MainWindow::openSettingsSlot() {
	settings_window_controller = new SettingsWindowController(this);
	settings_window_controller->show();
}

void MainWindow::openErrorsSlot() {
	error_log_window_controller = new ErrorLogWindowController(this, vme.getboardErrors(), vme.getTimeOfBoardErrors(), vme.getStringErrors());
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
	auto recieverName = senderName.replace("ResetButton", "SpinBox") + QString("_") + WDFNumber + QString("_") + channelNumber;
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
	if (!autoTriggerTimer) {
		autoTriggerTimer = new QTimer(this);
		connect(autoTriggerTimer, &QTimer::timeout, this, &MainWindow::makeSoftwareTriggerSlot);
	}
	if (!autoTriggerTimer->isActive()) {
		autoTriggerTimer->start(vme.autoTriggerTimeInMilliseconds);
	} else {
		autoTriggerTimer->stop();
	}
	vme.autoTriggerEnabled = !vme.autoTriggerEnabled;
}

void MainWindow::singleTriggerSlot() {
	vme.singleTriggerWasStarted = true;
	startStopSlot();
}

void MainWindow::amplifySpectrumSlot() const {
	if (static_cast<QPushButton*>(sender())->isChecked()) {
		auto maxAmplitude = 1000;
		QVector<double_t> keys(maxAmplitude);
		for (auto i = 0; i < maxAmplitude; i++)
			keys[i] = i;
		QVector<double_t> values(maxAmplitude, 0);
		for (auto i = 0; i < activeChannelsCount; i++) {
			ui.spectrumWidget->addGraph();
			ui.spectrumWidget->graph(i)->setData(keys, values, true);
		}
		ui.spectrumWidget->yAxis->setRange(0, 1000);					//max 1000 одинаковых значений амплитуды
		ui.spectrumWidget->xAxis->setRange(0, maxAmplitude);			//max 1000 mV
		ui.spectrumWidget->replot();
	} else {
		ui.spectrumWidget->clearGraphs();
	}
	ui.settingsBlock->setEnabled(!ui.settingsBlock->isEnabled());
}

void MainWindow::changePolaritySlot() {
	vme.changePolarity();
}

void MainWindow::thresholdVisibilityChangedSlot() {
	auto button = static_cast<QPushButton*>(sender());
	auto buttonNameList = button->objectName().split("_");
	auto WDFNumber = buttonNameList[1].toInt() - 1;
	auto channelNumber = buttonNameList[2].toInt();

	thresholdsIsVisible[WDFNumber][channelNumber] = button->isChecked();

}

void MainWindow::drawThresholdLineSlot(int channelNumber, int boardNumber, int threshold, int recordLength, QColor* colorOfLine) {
	if (!thresholdLinesPointers[boardNumber][channelNumber])
		thresholdLinesPointers[boardNumber][channelNumber] = new QCPItemLine(ui.signalWidget);
	thresholdLinesPointers[boardNumber][channelNumber]->start->setCoords(0, threshold);
	thresholdLinesPointers[boardNumber][channelNumber]->end->setCoords(2*recordLength, threshold);
	QPen pencil(*colorOfLine);
	pencil.setStyle(Qt::DotLine);
	thresholdLinesPointers[boardNumber][channelNumber]->setPen(pencil);
	thresholdLinesPointers[boardNumber][channelNumber]->setVisible(thresholdsIsVisible[boardNumber][channelNumber]);
}

void MainWindow::replotGraph() const {
	ui.signalWidget->replot();
	ui.spectrumWidget->replot();
}
