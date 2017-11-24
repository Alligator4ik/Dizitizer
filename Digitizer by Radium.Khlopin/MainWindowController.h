#pragma once
#include "ui_mainwindow.h"
#include "SettingsWindowController.h"
#include "ErrorLogWindowController.h"
#include "VMECommunication.h"
#include <thread>
#include "qcustomplot.h"
#include <mutex>
#include <future>

#define DEFAULTWRITINGPATH makeStdString(QDir::currentPath()) + string("/Data")

class EventHandler;
class DataAnalyzer;

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = nullptr);
	~MainWindow();
	VMECommunication&				getVME();
	DataAnalyzer&					getAnalyzer();
	vector<vector<string>>&			getChannelColors();
	vector<vector<Qt::PenStyle>>&	getStylesOfThresholdLines();
	vector<vector<uint16_t>>&		getCrop();
	/**
	 * \brief ���������� ����� �������, ������������ � ���� ����.
	 */
	uint32_t						getFileSize() const;
	/**
	 * \brief ���������� ������ ���� �� �����, � ������� ����� ������������ ������.
	 */
	string							getWritingPath() const;
	void							setWritingPath(string writingPath);
	/**
	* \brief ����� �������� ������� ���� �� �����. ���� ��������� ������ ��� ����������� ���������.
	* \param newCrop ����� ����-������.
	*/
	void							setCrop(vector<vector<uint16_t>> newCrop);
	/**
	 * \brief ����� ����������� ����������� ����� �������, ������������ � ���� ����.
	 * \param numberOfEvents ����������� ����� �������, ������������ � ���� (�� ����� ��� �������� ������, � �� �����������).
	 */
	void							setFileSize(uint32_t numberOfEvents);

	mutex							colorBrushMutex;
	mutex							thresholdLineStyleMutex;
	/**
	 * \brief ��������� ���� � �������������.
	 */
	uint32_t						timeWindow = 1000;
private:
	Ui::MainWindowClass				ui;
	SettingsWindowController*		settings_window_controller;
	ErrorLogWindowController*		error_log_window_controller;

	VMECommunication				vme;
	DataAnalyzer*					vmeData;
	bool							acquisitionWasStarted = false;
	/**
	 * \brief ����, ������������, ��� ���������� �������� ��� �������, ��� ��� �������� �����.
	 */
	bool							recordLengthHasBeenChanged = true;
	/**
	 * \brief ���������� ���������� ������� �� ���� ����-������������.
	 */
	uint16_t						activeChannelsCount = 0;
	/**
	* \brief ���������, ������� ����������� ��� ������ ������ (�������� ����������� ��������� ����� ������).
	*/
	vector<vector<uint16_t>>		cropFactorToWrite;
	/**
	 * \brief ����, ���������� ��������� �� �����, ����������� �������������� ������������ � ��������������
	 */
	QCPItemLine*					postTriggerLine = nullptr;
	vector<EventHandler>			savedHandlers;
	vector<vector<QCPItemLine*>>	thresholdLinesPointers;
	vector<vector<bool>>			samplesSpinboxIsDisabled;
	vector<vector<bool>>			thresholdsIsVisible;
	vector<vector<string>>			channelsColors;
	vector<vector<Qt::PenStyle>>	stylesOfThresholdLines;
	future<void>					acquisitionThread;
	string							writingPath;
	/**
	* \brief ������, ����������� ���������� �������.
	*/
	QTimer*							autoTriggerTimer = nullptr;
	QTimer*							errorPictureTimer = nullptr;
	/**
	 * \brief ��������� ������ ��� �������� ����� ������ � ���������� (������������ ����� � ������� ������).
	 */
	QIcon							nextErrorIcon;

	/**
	 * \brief �������� ��������-����� ���������.
	 */
	void							updateData();
	/**
	 * \brief ������������ ������.
	 * \param vmeData ������ �� ���������� ������, �������������� � ������ ������.
	 */
	void							drawSignal(DataAnalyzer& vmeData);
	/**
	* \brief ������������ ����������� ������.
	* \param vmeData ������ �� ���������� ������, �������������� � ������ ������.
	*/
	void							drawAmplifySpectrum(DataAnalyzer& vmeData);
	/**
	* \brief ������������ ������������� �����-�����.
	* \param vmeData ������ �� ���������� ������, �������������� � ������ ������.
	*/
	void							drawRossiAlphaSpectrum(DataAnalyzer& vmeData);
	void							drawWrittenSignal(EventHandler& handler, uint32_t numberOfEvent);
	/**
	 * \brief ����� ��������� ��������� ��������� �� ����� �������� � ������ ��������� ��������� ����� �������.
	 */
	void							readSettings();
	void							pulseErrorButton();
	/**
	 * \brief ����� ������������� ��������� ��� ������/��������� ���������.
	 * \param enabled ����������� ������ true, ���� ���������� ���������������� ��������� ��� ��������� ���������.
	 */
	void							setControlsEnabledOnStartStop(bool enabled) const;
	/**
	* \brief ����� ������������� ��������� ��� ����������� ��� ���������� �� �����������.
	* \param enabled ����������� ������ true, ���� ���������� ���������������� ��������� ��� �����������.
	*/
	void							setControlsEnabledOnConnectDisconnect(bool enabled) const;
	/**
	 * \brief ����� ������� �������. ������ ����� ����� ������ ��������, ����������� �������� ��������-������!
	 */
	void							clearGraphs() const;
signals:
	void							drawThresholdLine(int channelNumber, int boardNumber , int threshold, int recordLength, QColor& colorOfLine);
	void							drawPostTriggerLine();
	void							replot();
	void							stopSingleTrigger();
private slots:
	void							connectSlot();
	void							startStopWritingDataSlot();
	void							openSettingsSlot();
	void							openErrorsSlot();
	void							openFileSlot();
	void							changeTriggerSettingsSlot();
	void							changeThresholdSlot(double newThreshold);
	void							changeSampleSlot(int newSample);
	void							changeDCOffsetSlot(int newOffset);
	void							resetParameterSlot() const;
	void							bufferChangedSlot(int newBufferSizeIndex);
	void							setPostTriggerLengthSlot(int newPostTriggerInPercent);
	void							makeSoftwareTriggerSlot();
	void							changeExternalTriggerSlot();
	void							autoTriggerSlot();
	void							singleTriggerSlot();
	void							amplifySpectrumSlot() const;
	void							rossiAlphaSpectrumSlot() const;
	void							changePolaritySlot();
	void							thresholdVisibilityChangedSlot();
	void							graphVisibilityChangedSlot() const;
	void							nextSignalSlot();
	void							previousSignalSlot();
	void							resetSpectrumGraphSlot() const;
public slots:
	void							mouseZoomSlot(QWheelEvent* wheelEvent) const;
	void							drawThresholdLineSlot(int channelNumber, int boardNumber, int threshold, int recordLength, QColor& colorOfLine);
	void							drawPostTriggerLineSlot();
	void							replotGraph() const;
	void							startStopSlot();
};
