#include "SettingsWindowController.h"
#include "MainWindowController.h"
#include "DataAnalyzer.h"


SettingsWindowController::SettingsWindowController(QWidget *parent)
	: QMainWindow(parent) ,
	stylesOfThresholdLines(dynamic_cast<MainWindow*>(parent)->getStylesOfThresholdLines()),
	thresholdlineStyleMutex(dynamic_cast<MainWindow*>(parent)->thresholdLineStyleMutex),
	cropVector(dynamic_cast<MainWindow*>(parent)->getCrop()) {
	ui.setupUi(this);
	ui.VMECommSetting->setColumnWidth(0, 24);
	ui.ColorSetting->setColumnWidth(0, 55);
	ui.ColorSetting->setColumnWidth(2, 75);
	ui.ColorSetting->setColumnWidth(3, 130);

	//connect changing color buttons
	auto colorChangingButtons = ui.ChannelColorSetting->findChildren<QPushButton*>(QRegExp("EditColor_CH"), Qt::FindDirectChildrenOnly);
	for each (auto button in colorChangingButtons)
		connect(button, &QPushButton::clicked, this, &SettingsWindowController::changeColorSlot);
	
	//make active wdf visible
	auto tabNumber = 0;
	auto WDFTabs = ui.activeWDFs->findChildren<QCheckBox*>(QString(), Qt::FindChildrenRecursively);
	for each (auto tab in WDFTabs)
		tab->setCheckState(dynamic_cast<MainWindow*>(parent)->getVME().WDFIsEnabled[tabNumber++] ? Qt::Checked : Qt::Unchecked);

	//get colors of graphs
	auto colors = ui.ChannelColorSetting->findChildren<QLabel*>(QRegExp("Color_CH"), Qt::FindChildrenRecursively);
	for (auto colorWinNumber = 0; colorWinNumber < colors.size(); colorWinNumber++) {
		auto color = string("background-color: ") + (dynamic_cast<MainWindow*>(parent))->getChannelColors()[0][colorWinNumber];
		colors[colorWinNumber]->setStyleSheet(color.c_str());
	}

	//get autotrigger time interval
	auto triggerTimeInterval = dynamic_cast<MainWindow*>(parent)->getVME().autoTriggerTimeInMilliseconds;
	ui.ViewerSetting->findChild<QSpinBox*>(QString("triggerTimeSpinBox"), Qt::FindChildrenRecursively)->setValue(triggerTimeInterval);

	//get styles of threshold lines
	auto styles = ui.ChannelColorSetting->findChildren<QComboBox*>(QRegExp("TrigLine_CH"), Qt::FindChildrenRecursively);
	for (auto channelNumber = 0; channelNumber < styles.size(); channelNumber++) {
		switch (stylesOfThresholdLines[0][channelNumber]) {
			case Qt::SolidLine:		{styles[channelNumber]->setCurrentIndex(0); break;}
			case Qt::DotLine:		{styles[channelNumber]->setCurrentIndex(1); break;}
			case Qt::DashDotLine:	{styles[channelNumber]->setCurrentIndex(2); break;}
			default:				{styles[channelNumber]->setCurrentIndex(0); break;}
		}
	}
	//get BLT number
	auto BLTNumber = dynamic_cast<MainWindow*>(this->parent())->getVME().getBLTNumber();
	ui.numberOfBLT->setValue(BLTNumber);
	//get time of window to analyze
	auto timeWindow = dynamic_cast<MainWindow*>(this->parent())->timeWindow;
	ui.timeWindowSpinBox->setValue(timeWindow);
	//get somthing else
}

SettingsWindowController::~SettingsWindowController()
{
}

void SettingsWindowController::acceptedSlot() {
	//apply active WDFs
	auto tabNumber = 0;
	auto WDFTabs = ui.activeWDFs->findChildren<QCheckBox*>(QString(), Qt::FindChildrenRecursively);
	for each (auto WDFCheckBox in WDFTabs)
		dynamic_cast<MainWindow*>(this->parent())->getVME().WDFIsEnabled[tabNumber++] = WDFCheckBox->isChecked();
	//apply colors of graphs
	auto colors = ui.ChannelColorSetting->findChildren<QLabel*>(QRegExp("Color_CH"), Qt::FindChildrenRecursively);
	auto currentWDF = ui.currentWDFInColorTab->currentIndex();
	dynamic_cast<MainWindow*>(this->parentWidget())->colorBrushMutex.lock();
		for (auto channel = 0; channel < 8; channel++) {
			auto color = colors[channel]->palette().background().color().name();
			dynamic_cast<MainWindow*>(this->parentWidget())->getChannelColors()[currentWDF][channel] = color.toLocal8Bit().constData();
		}
	dynamic_cast<MainWindow*>(this->parentWidget())->colorBrushMutex.unlock();
	//apply autotrigger interval
	auto triggerTimeIntervalSpinBox = ui.ViewerSetting->findChild<QSpinBox*>(QString("triggerTimeSpinBox"), Qt::FindChildrenRecursively);
	dynamic_cast<MainWindow*>(this->parent())->getVME().autoTriggerTimeInMilliseconds = triggerTimeIntervalSpinBox->value();
	//apply styles of threshold lines
	auto styles = ui.ChannelColorSetting->findChildren<QComboBox*>(QRegExp("TrigLine_CH"), Qt::FindChildrenRecursively);
	for (auto channelNumber = 0; channelNumber < styles.size(); channelNumber++) {
		thresholdlineStyleMutex.lock();
		switch (styles[channelNumber]->currentIndex()) {
			case 0: {stylesOfThresholdLines[currentWDF][channelNumber] = Qt::SolidLine; break; }
			case 1: {stylesOfThresholdLines[currentWDF][channelNumber] = Qt::DotLine; break; }
			case 2: {stylesOfThresholdLines[currentWDF][channelNumber] = Qt::DashDotLine; break; }
			default: break;
		}
		thresholdlineStyleMutex.unlock();
	}
	//apply new BLTNumber
	dynamic_cast<MainWindow*>(this->parent())->getVME().setBLTNumber(ui.numberOfBLT->value());
	//apply wime window
	dynamic_cast<MainWindow*>(this->parent())->timeWindow = ui.timeWindowSpinBox->value();
	//apply crop factor to write with
	dynamic_cast<MainWindow*>(this->parent())->setCrop(cropVector);
	//apply other settings
	this->close();
}

void SettingsWindowController::WDFChangedInChannelTabSlot(int newWDFIndex) const {
	//get colors of graphs
	auto colors = ui.ChannelColorSetting->findChildren<QLabel*>(QRegExp("Color_CH"), Qt::FindChildrenRecursively);
	for (auto colorWinNumber = 0; colorWinNumber < colors.size(); colorWinNumber++) {
		auto color = string("background-color: ") + dynamic_cast<MainWindow*>(this->parentWidget())->getChannelColors()[newWDFIndex][colorWinNumber];
		colors[colorWinNumber]->setStyleSheet(color.c_str());
	}
	//get styles of threshold lines
	auto styles = ui.ChannelColorSetting->findChildren<QComboBox*>(QRegExp("TrigLine_CH"), Qt::FindChildrenRecursively);
	for (auto channelNumber = 0; channelNumber < styles.size(); channelNumber++) {
		switch (stylesOfThresholdLines[newWDFIndex][channelNumber]) {
			case Qt::SolidLine: {styles[channelNumber]->setCurrentIndex(0); break; }
			case Qt::DotLine: {styles[channelNumber]->setCurrentIndex(1); break; }
			case Qt::DashDotLine: {styles[channelNumber]->setCurrentIndex(2); break; }
			default: {styles[channelNumber]->setCurrentIndex(0); break; }
		}
	}
}

void SettingsWindowController::changeColorSlot() const {
	auto WDFNumber = ui.currentWDFInColorTab->currentIndex();
	auto channelNumber = sender()->objectName().split("_")[2].toInt();
	auto colorLabel = ui.ChannelColorSetting->findChild<QLabel*>(QString("Color_CH_" + QString::number(channelNumber)), Qt::FindChildrenRecursively);
	auto color = dynamic_cast<MainWindow*>(this->parentWidget())->getChannelColors()[WDFNumber][channelNumber];
	auto newColor = QColorDialog::getColor(colorLabel->palette().background().color());
	if (newColor.isValid())
		colorLabel->setStyleSheet("background-color: " + newColor.name());
}