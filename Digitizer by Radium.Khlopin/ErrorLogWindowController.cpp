#include "ErrorLogWindowController.h"
#include <QTime>
#include <ToRussianTextForQString.h>

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

ErrorLogWindowController::~ErrorLogWindowController() {
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
	case (-10) : return toRussian("Невозможно прочитать реестр");
	case (-11) : return toRussian("Невозможно записать в реестр");
	case (-13) : return toRussian("Канал занят");
	case (-14) : return toRussian("Неверный номер канала");
	case (-15) : return toRussian("Режим FPIO недопустим");
	case (-16) : return toRussian("Неверный режим сбора данных");
	case (-17) : return toRussian("Эта функция не разрешена для данного модуля");
	case (-18) : return toRussian("Тайм-аут связи");
	case (-19) : return toRussian("Недопустимый буфер");
	case (-20) : return toRussian("Событие не найдено");
	case (-21) : return toRussian("Недействительное событие");
	case (-22) : return toRussian("Недостаточно памяти");
	case (-23) : return toRussian("Невозможно выполнить калибровку платы");
	case (-24) : return toRussian("Невозможно открыть оцифровщик");
	case (-25) : return toRussian("Оцифровщик уже открыт");
	case (-26) : return toRussian("Оцифровщик не готов к работе");
	case (-27) : return toRussian("Отсутствует IRQ конфигурация оцифровщика");
	case (-28) : return toRussian("Флеш память оцифровщика повреждена");
	case (-29) : return toRussian("DDP прошивка оцифровщика не поддерживается в этой версии Lib");
	case (-30) : return toRussian("Недействительная лицензия прошивки");
	case (-31) : return toRussian("Оцифровщик находится в поврежденном состоянии");
	default	   : return toRussian("Функция еще не реализована");
	}
}