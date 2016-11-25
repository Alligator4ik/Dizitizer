#pragma once
#include "C:\Qt\Qt5.7.0\5.7\msvc2013_64\include\QtWidgets\QDialog.h"
#include "ui_errorlogwindow.h"
#include "Resources/CAENDigitizer.h"

class ErrorLogWindowController :
	public QDialog
{
	Q_OBJECT
	Ui::errorLogWindow				ui;
	QString getErrorInfo(CAEN_DGTZ_ErrorCode errorCode);
public:
	ErrorLogWindowController(QWidget *parent, std::vector<std::vector<CAEN_DGTZ_ErrorCode>>& boardErrors, std::vector<std::vector<QTime>>& timeOfBoardErrors);
	~ErrorLogWindowController();
};

