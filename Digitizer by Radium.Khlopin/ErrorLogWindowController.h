#pragma once
#include <qdialog.h>
#include "ui_errorlogwindow.h"
#include "Resources/CAENDigitizer.h"

class ErrorLogWindowController :
	public QDialog
{
	Q_OBJECT
	Ui::errorLogWindow				ui;
	static QString getErrorInfo(CAEN_DGTZ_ErrorCode errorCode);
public:
	ErrorLogWindowController(QWidget *parent, std::vector<std::vector<CAEN_DGTZ_ErrorCode>>& boardErrors, std::vector<std::vector<QTime>>& timeOfBoardErrors, std::vector<std::vector<QString>>& stringErrors);
	~ErrorLogWindowController();
};