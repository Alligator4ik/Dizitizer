#include "ErrorLogWindowController.h"
#include <QTime>
#include <QTextCodec>

class MainWindow;

ErrorLogWindowController::ErrorLogWindowController(QWidget *parent, std::vector<std::vector<CAEN_DGTZ_ErrorCode>>& boardErrors, std::vector<std::vector<QTime>>& timeOfBoardErrors) :
QDialog(parent) {
	ui.setupUi(this);
	for (auto boardNumber = 0; boardNumber < 9; boardNumber++)
		for (auto errorNumber = 0; errorNumber < boardErrors[boardNumber].size(); errorNumber++) {
				ui.mainWidget->insertRow(0);
				auto time = timeOfBoardErrors[boardNumber][errorNumber].toString("hh:mm:ss");
				ui.mainWidget->setItem(0, 0, new QTableWidgetItem(time));
				ui.mainWidget->setItem(0, 1, new QTableWidgetItem(QString("%1").arg(boardNumber + 1)));
				auto errorCode = std::to_string(boardErrors[boardNumber][errorNumber]);
				ui.mainWidget->setItem(0, 2, new QTableWidgetItem(QString(errorCode.c_str())));
				ui.mainWidget->setItem(0, 3, new QTableWidgetItem(getErrorInfo(boardErrors[boardNumber][errorNumber])));
			}
		ui.mainWidget->sortByColumn(0, Qt::DescendingOrder);
}

ErrorLogWindowController::~ErrorLogWindowController()
{
	qInfo("lalala destruct");
}

QString toRussian(const char * text)
{
	// подбираем нужную кодировку, другой вариант UTF8
	return QTextCodec::codecForName("CP1251")->toUnicode(text);
}

QString ErrorLogWindowController::getErrorInfo(CAEN_DGTZ_ErrorCode errorCode) {
	switch (errorCode) {
	case (0)   : return toRussian("Операция выполнена успешно");
	case (-1)  : return toRussian("Ошибка связи");
	case (-2)  : return toRussian("Неизвестная ошибка");
	case (-3)  : return toRussian("Недопустимые параметры");
	case (-4)  : return toRussian("Неверный тип связи");
	case (-5)  : return toRussian("Неверный индификатор устройства");
	case (-6)  : return toRussian("Превышено максимальное число устройств");
	case (-7)  : return toRussian("Операция недоступна на данном типе платы");
	case (-8)  : return toRussian("Недопустимый уровень прерывания");
	case (-9)  : return toRussian("Неправильное число событий");
	case (-10) : return toRussian("");
	case (-11) : return toRussian("");
	case (-12) : return toRussian("");
	case (-13) : return toRussian("");
	case (-14) : return toRussian("");
	case (-15) : return toRussian("");
	case (-16) : return toRussian("");
	case (-17) : return toRussian("");
	case (-18) : return toRussian("");
	case (-19) : return toRussian("Недопустимый буфер");
	case (-20) : return toRussian("");
	case (-21) : return toRussian("");
	case (-22) : return toRussian("");
	case (-23) : return toRussian("");
	case (-24) : return toRussian("");
	case (-25) : return toRussian("");
	case (-26) : return toRussian("");
	case (-27) : return toRussian("");
	case (-28) : return toRussian("");
	case (-29) : return toRussian("");
	case (-30) : return toRussian("");
	case (-31) : return toRussian("");
	case (-32) : return toRussian("");
	case (-33) : return toRussian("");
	case (-99) : return toRussian("");
	}
}