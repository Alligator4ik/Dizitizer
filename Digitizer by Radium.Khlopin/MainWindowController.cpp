#include "MainWindowController.h"
#include <fstream>
#include <algorithm>
#include <thread>
#include <ToRussianTextForQString.h>
#include "DataAnalyzer.h"
#include <iomanip>
#include <sstream>

MainWindow::MainWindow(QWidget *parent)
: QMainWindow(parent, Qt::CustomizeWindowHint | Qt::WindowTitleHint | Qt::WindowMinMaxButtonsHint) {
	ui.setupUi(this);
	readSettings();

	//change default file folder to write into
	this->writingPath = DEFAULTWRITINGPATH;
	if (!QDir("Data").exists())
		QDir().mkdir("Data");

	//disable tabs
	for (auto tabNumber = 0; tabNumber < vme.numberOfWDF; tabNumber++)
		ui.WDFTabWidget->setTabEnabled(tabNumber, false);
	
	//connect changeTriggerButtons
	auto changeTriggerButtons = ui.WDFTabWidget->findChildren<QPushButton*>(QRegExp("changeTriggerButton"), Qt::FindChildrenRecursively);
	for each (auto button in changeTriggerButtons)
		connect(button, SIGNAL(clicked()), this, SLOT(changeTriggerSettingsSlot()));

	//connect threshold spinboxes
	auto thresholdSpinBoxes = ui.WDFTabWidget->findChildren<QDoubleSpinBox*>(QRegExp("thresholdDoubleSpinBox"), Qt::FindChildrenRecursively);
	for each (auto spinBox in thresholdSpinBoxes)
		connect(spinBox, SIGNAL(valueChanged(double)), this, SLOT(changeThresholdSlot(double)));

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

	//connect stopping single trigger to main stop slot
	connect(this, &MainWindow::stopSingleTrigger, this, &MainWindow::startStopSlot);

	//connect graphs' visible buttons
	auto graphIsVisibleButtons = ui.WDFTabWidget->findChildren<QPushButton*>(QRegExp("channelIsDrawingButton"), Qt::FindChildrenRecursively);
	for (auto button : graphIsVisibleButtons)
		connect(button, &QPushButton::clicked, this, &MainWindow::graphVisibilityChangedSlot);

	//connect posttrigger line to its' drawing slot
	connect(this, &MainWindow::drawPostTriggerLine, this, &MainWindow::drawPostTriggerLineSlot); 

	//connect zooming
	connect(ui.signalWidget, &QCustomPlot::mouseWheel, this, &MainWindow::mouseZoomSlot);
	connect(ui.spectrumWidget, &QCustomPlot::mouseWheel, this, &MainWindow::mouseZoomSlot);
	connect(ui.dataWidget, &QCustomPlot::mouseWheel, this, &MainWindow::mouseZoomSlot);
	
	//enable viewer interactions
	ui.dataWidget->setInteraction(QCP::iRangeZoom);
	ui.dataWidget->setInteraction(QCP::iRangeDrag);

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
		//write threshold styles
		for (auto boardNumber = 0; boardNumber < vme.numberOfWDF; boardNumber++) {
			for (auto channelNumber = 0; channelNumber < 8; channelNumber++)
				settingsOut << stylesOfThresholdLines[boardNumber][channelNumber] << " ";
			settingsOut << endl;
		}
		//write record length
		settingsOut << ui.bufferComboBox->currentIndex() << " " << vme.getRecordLength() << endl;
		//write BLT number
		settingsOut << vme.getBLTNumber() << endl;
		//write windwoe time (for analyze)
		settingsOut << this->timeWindow;
		//write other settings
	}
}

VMECommunication& MainWindow::getVME() {
	return vme;
}

DataAnalyzer& MainWindow::getAnalyzer() {
	return *vmeData;
}

vector<vector<string>>& MainWindow::getChannelColors() {
	return channelsColors;
}

vector<vector<Qt::PenStyle>>& MainWindow::getStylesOfThresholdLines() {
	return stylesOfThresholdLines;
}

void MainWindow::updateData() {
	vmeData = new DataAnalyzer(vme);
	vmeData->setTimeWindow(chrono::milliseconds(timeWindow*1000));
	vmeData->setPath(writingPath);
	while (acquisitionWasStarted) {
		if (vmeData->readData()) {					//if we have smth to show or analyze
			if (ui.drawButton->isChecked()) {
				drawSignal(*vmeData);
				emit replot();
			}
			if (ui.amplifySpectrumButton->isChecked()) {
				drawAmplifySpectrum(*vmeData);
				emit replot();
			}
			if (ui.rossiAlphaSpectrumButton->isChecked()) {
				drawRossiAlphaSpectrum(*vmeData);
				emit replot();
			}
			if (ui.recordButton->isChecked())
				vmeData->writeData(false);
			else
				vmeData->getHandler().deleteEvents();
			if (vme.singleTriggerWasStarted) {
				vme.singleTriggerWasStarted = false;
				emit stopSingleTrigger();
				break;
			}
		}
	}
	//post-writing
	//write a spectrum to a file, if needed
	if (ui.saveSpectrumButton->isChecked() && (ui.amplifySpectrumButton->isChecked() || ui.rossiAlphaSpectrumButton->isChecked())) {
		auto writingFunc = [&]() {
			auto t = time(nullptr);
			tm tm;
			localtime_s(&tm, &t);
			ostringstream date;
			date << put_time(&tm, "%d.%m.%Y-%H_%M");
			auto pathName = date.str();
			auto fullPath = writingPath + "/" + pathName;
			if (QDir(makeQString(fullPath.c_str())).exists()) {
				pathName = date.str() + "_one_another";
				fullPath = writingPath + "/" + pathName;
			}
			auto nameOfFile = fullPath + "/" + ".spctrmdrkdata";
			FILE* outData;
			fopen_s(&outData, nameOfFile.c_str(), "w");
			//write number of start impulses
			if (ui.rossiAlphaSpectrumButton->isChecked())
				fprintf_s(outData, "Количество стартовых импульсов: %i\n", vmeData->getHandler().getNumberOfStartImpulses());
			//next write a spectrum graph
			for (auto graphNumber = 0; graphNumber < ui.spectrumWidget->graphCount(); graphNumber++) {
				auto graphDataContainer = ui.spectrumWidget->graph(graphNumber)->data().data(); 
				fprintf_s(outData, "new channel\n");
				for each (auto data in *graphDataContainer)
					fprintf_s(outData, "%d - %d\n", static_cast<uint32_t>(data.key), static_cast<uint32_t>(data.value));
				fprintf_s(outData, "\n");
			}
			fclose(outData);
		};
		std::thread writingThread(writingFunc);
		writingThread.detach();
	}
	//write last signals (even if the last event handler wasn't filled)
	if (ui.recordButton->isChecked()) {
		vmeData->writeData(true);
		ui.recordButton->setChecked(false);
	}
	//proceed to stop phase
	makeSoftwareTriggerSlot();
	if (!vme.stopAcquisition())
		this->pulseErrorButton();
	delete vmeData;
}

void MainWindow::drawSignal(DataAnalyzer& vmeData) {
	//starting initialize
	auto graphNumber = 0;
	auto eventToDraw = vmeData.getEventForDraw();
	auto eventSize = *max_element(eventToDraw->ChSize, eventToDraw->ChSize + 8);
	QVector<QCPGraphData> graphData(eventSize);
	//current initialization
	for (auto numberOfBoard = 0; numberOfBoard < vme.numberOfWDF; numberOfBoard++)												//по всем доскам
		if (vmeData.getHandler().WDFIsEnabled(numberOfBoard))																	//если доска включена
			for (auto channelNumber = 0; channelNumber < 8; channelNumber++)													//по всем каналам этой доски
				if (eventToDraw->ChSize[channelNumber] != 0) {																	//если на канале что-то есть (другими словами - он включен)
					if (ui.WDFTabWidget->findChild<QPushButton*>(QString("channelIsDrawingButton_" + QString::number(numberOfBoard + 1) + "_" + QString::number(channelNumber)))->isChecked()) {	//если нажата кнопка отображения сигнала
						//initializing the graph
						if (ui.signalWidget->graph(graphNumber) == nullptr)
							ui.signalWidget->addGraph();
						auto graphDataContainer = ui.signalWidget->graph(graphNumber)->data().data();
						auto it = graphData.begin();
						const auto itEnd = graphData.end();
						auto sample = 0;
						while (it != itEnd) {
							it->key = 2 * sample;
							it++->value = eventToDraw->DataChannel[channelNumber][sample++] * 3.92 - 500;						//from [0;255] to [-500;500]
						}
						graphDataContainer->set(graphData, true);
						//graph's visual setup
						colorBrushMutex.lock();
							auto colorOfLines = QColor(channelsColors[numberOfBoard][channelNumber].c_str());
							ui.signalWidget->graph(graphNumber)->setPen(QPen(colorOfLines));
							ui.signalWidget->graph(graphNumber)->setName(QString("Channel %1").arg(channelNumber));
							if (vme.channelTriggerEnableMask[numberOfBoard] & 1 << channelNumber)
								emit drawThresholdLine(channelNumber, numberOfBoard, DataAnalyzer::convertFromVMECountsTomV(vme.getChannelThreshold(numberOfBoard, channelNumber)), vme.getRecordLength(), colorOfLines);
						colorBrushMutex.unlock();
					}
					graphNumber++;
				}
	emit drawPostTriggerLine();
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

void MainWindow::drawRossiAlphaSpectrum(DataAnalyzer& vmeData) {
	auto times = vmeData.getTimeStepsBetweenPeaks();
	auto graphDataContainer = ui.spectrumWidget->graph(0)->data().data();
	for (auto time : times)
		graphDataContainer->at(time.count())->value++;
}

void MainWindow::readSettings() {
	//prepare for reading into
	channelsColors.resize(vme.numberOfWDF);
	thresholdLinesPointers.resize(vme.numberOfWDF);
	for (auto boardNumber = 0; boardNumber < vme.numberOfWDF; boardNumber++)
		thresholdLinesPointers[boardNumber].resize(8);
	thresholdsIsVisible.resize(vme.numberOfWDF);
	stylesOfThresholdLines.resize(vme.numberOfWDF);
	for (auto boardNumber = 0; boardNumber < vme.numberOfWDF; boardNumber++)
		stylesOfThresholdLines[boardNumber].resize(8);

	//reading
	ifstream settingsStream("settings.cfg");
	if (settingsStream) {
		//read active boards
		bool boardIsActive;
		for (auto boardNumber = 0; boardNumber < vme.numberOfWDF; boardNumber++)
			if (settingsStream >> boardIsActive)
				vme.WDFIsEnabled.push_back(boardIsActive);
		//read graph colors
		string color;
		for (auto boardNumber = 0; boardNumber < vme.numberOfWDF; boardNumber++)
			for (auto channelNumber = 0; channelNumber < 8; channelNumber++)
				if (settingsStream >> color)
					channelsColors[boardNumber].push_back(color);
		//read visibility of threshold lines
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
					auto thresholdSpinBoxName = QString("thresholdDoubleSpinBox_%1_%2").arg(boardNumber + 1).arg(channelNumber);
					auto spinBox = ui.settingsBlock->findChild<QDoubleSpinBox*>(thresholdSpinBoxName);
					spinBox->setValue(DataAnalyzer::convertFromVMECountsTomV(threshold));
				}
		//read threshold styles
		uint16_t thresholdStyle;
		for (auto boardNumber = 0; boardNumber < vme.numberOfWDF; boardNumber++)
			for (auto channelNumber = 0; channelNumber < 8; channelNumber++)
				if (settingsStream >> thresholdStyle) {
					stylesOfThresholdLines[boardNumber][channelNumber] = Qt::PenStyle(thresholdStyle);
				}
		//read record length
		uint32_t index, samples;
		if (settingsStream >> index)
			ui.bufferComboBox->setCurrentIndex(index);
		if (settingsStream >> samples)
			vme.setBufferInSamples(samples);
		//read BLT number
		uint16_t BLTNumber;
		if (settingsStream >> BLTNumber)
			vme.setBLTNumber(BLTNumber);
		//read time window
		uint32_t timeWindow;
		if (settingsStream >> timeWindow)
			this->timeWindow = timeWindow;
		//read other settings
	}
}

void MainWindow::pulseErrorButton() {
	nextErrorIcon = QIcon(QString(":/MainWindow/CAEN-UI/aError.png"));
	if (!errorPictureTimer) {
		errorPictureTimer = new QTimer(this);
		connect(errorPictureTimer, &QTimer::timeout, this, [&]{
			auto temp = ui.errorButton->icon();
			ui.errorButton->setIcon(nextErrorIcon);
			nextErrorIcon = temp;
		});
	}
	errorPictureTimer->start(500); //ms
}

void MainWindow::setCrop(vector<vector<uint16_t>> newCrop) {
	cropFactorToWrite = newCrop;
}

void MainWindow::setFileSize(uint32_t numberOfEvents) {
	EventHandler::setFileSize(numberOfEvents);
}

void MainWindow::setControlsEnabledOnStartStop(bool enabled) const {
	ui.startStopButton->setChecked(!enabled);
	ui.startStopButton->setToolTip(toRussian(enabled ? "Старт" : "Стоп"));
	ui.connectButton->setEnabled(enabled);
	ui.exitButton->setEnabled(enabled);
	ui.bufferComboBox->setEnabled(enabled);
	ui.polarityBox->setEnabled(enabled);
	//triggerBox options
	ui.forceTriggerButton->setEnabled(!enabled);
	ui.autoTriggerButton->setEnabled(!enabled);
	ui.externalTriggerButton->setEnabled(!enabled);
	ui.singleTriggerButton->setEnabled(enabled);
	//interactions of viewer
	ui.signalWidget->setInteraction(QCP::iRangeZoom, enabled);
	ui.signalWidget->setInteraction(QCP::iRangeDrag, enabled);
	//interactions of amplify viewer
	ui.spectrumWidget->setInteraction(QCP::iRangeZoom, enabled);
	ui.spectrumWidget->setInteraction(QCP::iRangeDrag, enabled);
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
	ui.postTriggerBox->setEnabled(enabled);
}

vector<vector<uint16_t>>& MainWindow::getCrop() {
	return cropFactorToWrite;
}

uint32_t MainWindow::getFileSize() const {
	return EventHandler::getFileSize();
}

string MainWindow::getWritingPath() const {
	return writingPath;
}

void MainWindow::setWritingPath(string writingPath) {
	this->writingPath = writingPath;
}

void MainWindow::clearGraphs() const {
	ui.signalWidget->clearGraphs();
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
		} else {
			ui.connectButton->setChecked(false);							//if connection wasn't established
			pulseErrorButton();
		}
	}
	else {
		setControlsEnabledOnConnectDisconnect(false);
		//disable WDF tabs
		for (auto tabNumber = 0; tabNumber < vme.numberOfWDF; tabNumber++)
			ui.WDFTabWidget->setTabEnabled(tabNumber, false);
		vme.disconnect();
	}
}

void MainWindow::startStopSlot() {
	if (!acquisitionWasStarted) {
		acquisitionWasStarted = true;
		setControlsEnabledOnStartStop(false);
		//очистим то, что осталось с прошлого раза
		clearGraphs();
		//и запихнем чистые и свежие графики
		for (auto i = 0; i < activeChannelsCount; i++)
			ui.signalWidget->addGraph();
		//если махнули буфер, подравняем границы
		if (recordLengthHasBeenChanged) {
			ui.signalWidget->yAxis->setRange(-300, 100);
			ui.signalWidget->xAxis->setRange(0, 2048 * static_cast<uint16_t>(pow(2, ui.bufferComboBox->currentIndex() + 1)));
			recordLengthHasBeenChanged = false;
		}
		vme.startAcquisition();
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
		setControlsEnabledOnStartStop(true);
	}
}

void MainWindow::startStopWritingDataSlot() {
	if (!(ui.recordButton->isChecked()))
		vme.clearData();
}

void MainWindow::openSettingsSlot() {
	settings_window_controller = new SettingsWindowController(this);
	settings_window_controller->setAttribute(Qt::WA_DeleteOnClose);
	settings_window_controller->show();
}

void MainWindow::openErrorsSlot() {
	//make error button inactive
	if (errorPictureTimer) {
		errorPictureTimer->stop();
		ui.errorButton->setIcon(QIcon(QString(":/MainWindow/CAEN-UI/NoError.png")));
	}
	//error window construction
	error_log_window_controller = new ErrorLogWindowController(this, vme.getboardErrors(), vme.getTimeOfBoardErrors(), vme.getStringErrors());
	error_log_window_controller->setAttribute(Qt::WA_DeleteOnClose);
	error_log_window_controller->show();
}

void MainWindow::openFileSlot() {
	//todo
	auto fileNames = QFileDialog::getOpenFileNames(this, toRussian("Выберите файлы с данными"), ".\\", toRussian("Файлы данных (*.drkdata)"));
	if (fileNames.count()) {
		//переход на вкладку работы с данными
		ui.tabWidget->setCurrentIndex(2);
		for (auto fileName : fileNames) {
			savedHandlers.push_back(EventHandler(makeStdString(fileName).c_str()));
		}
		ui.fileManagerSlider->setMaximum(savedHandlers.front().eventsStored - 1);
		ui.previousSignalButton->setEnabled(false);
		ui.fileManagerNumber->setText(QString("1"));
		drawWrittenSignal(savedHandlers.front(), 0);
	}
}

void MainWindow::drawWrittenSignal(EventHandler& handler, uint32_t numberOfEvent) {
	//starting initialize
	auto graphNumber = 0;
	auto eventToDraw = handler.getEvent(0, numberOfEvent);
	auto eventSize = *max_element(eventToDraw.ChSize, eventToDraw.ChSize + 8);
	QVector<QCPGraphData> graphData(eventSize);
	//current initialization
	for (auto numberOfBoard = 0; numberOfBoard < vme.numberOfWDF; numberOfBoard++)												//по всем доскам
		if (handler.WDFIsEnabled(numberOfBoard))																				//если доска включена
			for (auto channelNumber = 0; channelNumber < 8; channelNumber++)													//по всем каналам этой доски
				if (eventToDraw.ChSize[channelNumber] != 0) {																	//если на канале что-то есть (другими словами - он включен)
					//initializing the graph
					if (ui.dataWidget->graphCount() == graphNumber)
						ui.dataWidget->addGraph();
					auto graphDataContainer = ui.dataWidget->graph(graphNumber)->data().data();
					auto it = graphData.begin();
					const auto itEnd = graphData.end();
					auto sample = 0;
					while (it != itEnd) {
						it->key = 2 * sample;
						it++->value = eventToDraw.DataChannel[channelNumber][sample++] * 3.92 - 500;						//from [0;255] to [-500;500]
					}
					graphDataContainer->set(graphData, true);
					//graph's visual setup
					auto colorOfLines = QColor(channelsColors[numberOfBoard][channelNumber].c_str());
					ui.dataWidget->graph(graphNumber)->setPen(QPen(colorOfLines));
					ui.dataWidget->graph(graphNumber)->setName(QString("Channel %1").arg(channelNumber));
					graphNumber++;
				}
	ui.dataWidget->legend->setVisible(true);
	replotGraph();
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
	auto channelButtons = channelButtonsBox[0]->findChildren<QWidget*>(QRegExp("^(?!.*changeTriggerButton|samplesSpinBox|blockSamplesButton|thresholdDoubleSpinBox|thresholdIsDrawingButton).*$"), Qt::FindDirectChildrenOnly);
	auto samplesSpinBox = channelButtonsBox[0]->findChildren<QSpinBox*>(QRegExp("samplesSpinBox"), Qt::FindDirectChildrenOnly);
	auto blockSamplesButton = channelButtonsBox[0]->findChildren<QPushButton*>(QRegExp("blockSamplesButton"), Qt::FindDirectChildrenOnly);
	auto thresholdSpinBox = channelButtonsBox[0]->findChildren<QDoubleSpinBox*>(QRegExp("thresholdDoubleSpinBox"), Qt::FindDirectChildrenOnly);
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

void MainWindow::changeThresholdSlot(double newThreshold) {
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
	recordLengthHasBeenChanged = true;
	auto newRecordLength = static_cast<uint16_t>(pow(2, newBufferSizeIndex+1));	//from index to KB
	if (ui.connectButton->isChecked())
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
	if (ui.rossiAlphaSpectrumButton->isChecked()) {
		ui.rossiAlphaSpectrumButton->setChecked(false);
		ui.spectrumWidget->clearGraphs();
	}
	if (static_cast<QPushButton*>(sender())->isChecked()) {
		auto maxAmplitude = 300;
		QVector<double_t> keys(maxAmplitude);
		for (auto i = 0; i < maxAmplitude; i++)
			keys[i] = i;
		QVector<double_t> values(maxAmplitude, 0);
		for (auto i = 0; i < activeChannelsCount; i++) {
			ui.spectrumWidget->addGraph();
			ui.spectrumWidget->graph(i)->setData(keys, values, true);
		}
		ui.spectrumWidget->yAxis->setRange(0, 3000);					//max 3000 одинаковых значений амплитуды
		ui.spectrumWidget->xAxis->setRange(0, maxAmplitude);			//max 300 mV
		ui.spectrumWidget->replot();
	} else {
		ui.spectrumWidget->clearGraphs();
	}
	ui.settingsBlock->setEnabled(!ui.settingsBlock->isEnabled());
}

void MainWindow::rossiAlphaSpectrumSlot() const {
	if (ui.amplifySpectrumButton->isChecked()) {
		ui.amplifySpectrumButton->setChecked(false);
		ui.spectrumWidget->clearGraphs();
	}
	if (static_cast<QPushButton*>(sender())->isChecked()) {
		auto maxTimeBetweenImpulses = this->timeWindow*1000;
		QVector<double_t> keys(maxTimeBetweenImpulses);
		for (auto i = 0; i < maxTimeBetweenImpulses; i++)
			keys[i] = i;
		QVector<double_t> values(maxTimeBetweenImpulses, 0);
		ui.spectrumWidget->addGraph();
		ui.spectrumWidget->graph(0)->setData(keys, values, true);
		ui.spectrumWidget->yAxis->setRange(0, 200);						//max 200 одинаковых значений временных интервалов
		ui.spectrumWidget->xAxis->setRange(0, maxTimeBetweenImpulses);
		ui.spectrumWidget->replot();
	}
	else {
		ui.spectrumWidget->clearGraphs();
	}
	ui.settingsBlock->setEnabled(!ui.settingsBlock->isEnabled());
}

void MainWindow::changePolaritySlot() {
	vme.changePolarity();
}

void MainWindow::thresholdVisibilityChangedSlot() {
	auto visibilityButton = static_cast<QPushButton*>(sender());
	auto visibilityButtonNameList = visibilityButton->objectName().split("_");
	auto WDFNumber = visibilityButtonNameList[1].toInt() - 1;
	auto channelNumber = visibilityButtonNameList[2].toInt();

	thresholdsIsVisible[WDFNumber][channelNumber] = visibilityButton->isChecked();
}

void MainWindow::graphVisibilityChangedSlot() const {
	auto visibilityButton = static_cast<QPushButton*>(sender());
	auto visibilityButtonNameList = visibilityButton->objectName().split("_");
	auto WDFNumber = visibilityButtonNameList[1].toInt() - 1;
	auto channelNumber = visibilityButtonNameList[2].toInt();
	auto graphNumber = WDFNumber * 8 + channelNumber;

	if (ui.signalWidget->graphCount() > graphNumber)
		ui.signalWidget->graph(graphNumber)->setVisible(visibilityButton->isChecked());
}

void MainWindow::nextSignalSlot() {
	ui.fileManagerSlider->setValue(ui.fileManagerSlider->value() + 1);
	if (ui.fileManagerSlider->value() == ui.fileManagerSlider->maximum())
		ui.nextSignalButton->setEnabled(false);
	ui.previousSignalButton->setEnabled(true);
	ui.fileManagerNumber->setText(QString("%1").arg(ui.fileManagerSlider->value() + 1));
	drawWrittenSignal(savedHandlers.front(), ui.fileManagerSlider->value());
}

void MainWindow::previousSignalSlot() {
	ui.fileManagerSlider->setValue(ui.fileManagerSlider->value() - 1);
	if (ui.fileManagerSlider->value() == 0)
		ui.previousSignalButton->setEnabled(false);
	ui.nextSignalButton->setEnabled(true);
	ui.fileManagerNumber->setText(QString("%1").arg(ui.fileManagerSlider->value() + 1));
	drawWrittenSignal(savedHandlers.front(), ui.fileManagerSlider->value());
}

void MainWindow::resetSpectrumGraphSlot() const {
	ui.spectrumWidget->clearGraphs();
	ui.spectrumWidget->replot();
}

void MainWindow::mouseZoomSlot(QWheelEvent* wheelEvent) const {
	auto delta = 25;
	//зазоры по осям - 25 пикселей
	if (wheelEvent->pos().x() < delta) {
		//зум по вертикали
		ui.signalWidget->axisRect()->setRangeZoomAxes(ui.signalWidget->xAxis, ui.signalWidget->yAxis);
		ui.signalWidget->axisRect()->setRangeZoom(ui.signalWidget->yAxis->orientation());
	} else if (wheelEvent->pos().y() > ui.signalWidget->height() - delta) {
		//зум по горизонтали
		ui.signalWidget->axisRect()->setRangeZoomAxes(ui.signalWidget->xAxis, ui.signalWidget->yAxis);
		ui.signalWidget->axisRect()->setRangeZoom(ui.signalWidget->xAxis->orientation());
	} else {
		//синхронный зум по обеим осям
		ui.signalWidget->axisRect()->setRangeZoom(Qt::Horizontal | Qt::Vertical);
	}
}

void MainWindow::drawThresholdLineSlot(int channelNumber, int boardNumber, int threshold, int recordLength, QColor& colorOfLine) {
	if (!thresholdLinesPointers[boardNumber][channelNumber])
		thresholdLinesPointers[boardNumber][channelNumber] = new QCPItemLine(ui.signalWidget);
	thresholdLinesPointers[boardNumber][channelNumber]->start->setCoords(0, threshold);
	thresholdLinesPointers[boardNumber][channelNumber]->end->setCoords(2*recordLength, threshold);
	QPen pencil(colorOfLine);
	thresholdLineStyleMutex.lock();
		pencil.setStyle(stylesOfThresholdLines[boardNumber][channelNumber]);
	thresholdLineStyleMutex.unlock();
	thresholdLinesPointers[boardNumber][channelNumber]->setPen(pencil);
	thresholdLinesPointers[boardNumber][channelNumber]->setVisible(thresholdsIsVisible[boardNumber][channelNumber]);
}

void MainWindow::drawPostTriggerLineSlot() {
	if (!postTriggerLine)
		postTriggerLine = new QCPItemLine(ui.signalWidget);
	double triggerSample = 2 * (100 - ui.postTriggerSpinBox->value()) * vme.getRecordLength() / 100;	//домножая на 2, переходим к наносекундам (один отсчет = 2нс)	
	postTriggerLine->start->setCoords(triggerSample, 1000);
	postTriggerLine->end->setCoords(triggerSample, -1000);
	postTriggerLine->setVisible(ui.postTriggerIsDrawing->isChecked());
}

void MainWindow::replotGraph() const {
	ui.signalWidget->replot();
	ui.spectrumWidget->replot();
	ui.dataWidget->replot();
}