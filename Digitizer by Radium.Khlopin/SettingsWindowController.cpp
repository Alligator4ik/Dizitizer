#include "SettingsWindowController.h"
#include "MainWindowController.h"


SettingsWindowController::SettingsWindowController(QWidget *parent)
	: QMainWindow(parent) {
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