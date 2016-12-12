/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *controlButtons;
    QGridLayout *gridLayout_2;
    QPushButton *helpButton;
    QPushButton *connectButton;
    QPushButton *exitButton;
    QPushButton *openFileButton;
    QPushButton *errorButton;
    QPushButton *journalButton;
    QPushButton *magnifierButton;
    QPushButton *recordButton;
    QPushButton *settingsButton;
    QPushButton *drawButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *startStopButton;
    QGroupBox *mainBox;
    QGridLayout *gridLayout_3;
    QTabWidget *tabWidget;
    QWidget *signalTab;
    QGridLayout *gridLayout_4;
    QCustomPlot *signalWidget;
    QWidget *spectrumTab;
    QGridLayout *gridLayout_5;
    QCustomPlot *spectrumWidget;
    QWidget *dataTab;
    QGridLayout *gridLayout_6;
    QCustomPlot *dataWidget;
    QGroupBox *settingsBlock;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *timeSettingBox;
    QGroupBox *bufferBox;
    QComboBox *bufferComboBox;
    QGroupBox *scaleTimeBox;
    QComboBox *scaleTimeComboBox;
    QGroupBox *positionTimeBox;
    QSpinBox *positionSpinBox_0_0;
    QPushButton *positionResetButton_0_0;
    QPushButton *inversionButton;
    QGroupBox *triggerSettingBox;
    QGroupBox *postTriggerBox;
    QSpinBox *postTriggerSpinBox;
    QPushButton *postTriggerIsDrawing;
    QGroupBox *edgeBox;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QPushButton *externalTriggerButton;
    QPushButton *autoTriggerButton;
    QPushButton *forceTriggerButton;
    QPushButton *sinfleTriggerButton;
    QGroupBox *channelsSettingBox;
    QGridLayout *gridLayout;
    QTabWidget *WDFTabWidget;
    QWidget *WDF1Widget;
    QGroupBox *chanel0SettingsBox_1;
    QPushButton *changeTriggerButton_1_0;
    QSpinBox *positionSpinBox_1_0;
    QSpinBox *thresholdSpinBox_1_0;
    QSpinBox *samplesSpinBox_1_0;
    QSpinBox *DACOffsetSpinBox_1_0;
    QComboBox *scaleSpinBox_1_0;
    QPushButton *positionResetButton_1_0;
    QPushButton *DACOffsetResetButton_1_0;
    QPushButton *channelIsDrawingButton_1_0;
    QPushButton *thresholdIsDrawingButton_1_0;
    QPushButton *blockSamplesButton_1_0;
    QGroupBox *channelLabelBox_1;
    QLabel *thresholdLabel_1;
    QLabel *samplesLabel_1;
    QLabel *positionLabel_1;
    QLabel *DACOffsetLabel_1;
    QLabel *scaleLabel_1;
    QLabel *statusLabel_1;
    QGroupBox *chanel1SettingsBox_1;
    QPushButton *changeTriggerButton_1_1;
    QSpinBox *positionSpinBox_1_1;
    QSpinBox *thresholdSpinBox_1_1;
    QSpinBox *samplesSpinBox_1_1;
    QSpinBox *DACOffsetSpinBox_1_1;
    QComboBox *scaleSpinBox_1_1;
    QPushButton *positionResetButton_1_1;
    QPushButton *DACOffsetResetButton_1_1;
    QPushButton *channelIsDrawingButton_1_1;
    QPushButton *thresholdIsDrawingButton_1_1;
    QPushButton *blockSamplesButton_1_1;
    QGroupBox *chanel2SettingsBox_1;
    QPushButton *changeTriggerButton_1_2;
    QSpinBox *positionSpinBox_1_2;
    QSpinBox *thresholdSpinBox_1_2;
    QSpinBox *samplesSpinBox_1_2;
    QSpinBox *DACOffsetSpinBox_1_2;
    QComboBox *scaleSpinBox_1_2;
    QPushButton *positionResetButton_1_2;
    QPushButton *DACOffsetResetButton_1_2;
    QPushButton *channelIsDrawingButton_1_2;
    QPushButton *thresholdIsDrawingButton_1_2;
    QPushButton *blockSamplesButton_1_2;
    QGroupBox *chanel5SettingsBox_1;
    QPushButton *changeTriggerButton_1_5;
    QSpinBox *positionSpinBox_1_5;
    QSpinBox *thresholdSpinBox_1_5;
    QSpinBox *samplesSpinBox_1_5;
    QSpinBox *DACOffsetSpinBox_1_5;
    QComboBox *scaleSpinBox_1_5;
    QPushButton *positionResetButton_1_5;
    QPushButton *DACOffsetResetButton_1_5;
    QPushButton *channelIsDrawingButton_1_5;
    QPushButton *thresholdIsDrawingButton_1_5;
    QPushButton *blockSamplesButton_1_5;
    QGroupBox *chanel4SettingsBox_1;
    QPushButton *changeTriggerButton_1_4;
    QSpinBox *positionSpinBox_1_4;
    QSpinBox *thresholdSpinBox_1_4;
    QSpinBox *samplesSpinBox_1_4;
    QSpinBox *DACOffsetSpinBox_1_4;
    QComboBox *scaleSpinBox_1_4;
    QPushButton *positionResetButton_1_4;
    QPushButton *DACOffsetResetButton_1_4;
    QPushButton *channelIsDrawingButton_1_4;
    QPushButton *thresholdIsDrawingButton_1_4;
    QPushButton *blockSamplesButton_1_4;
    QGroupBox *chanel3SettingsBox_1;
    QPushButton *changeTriggerButton_1_3;
    QSpinBox *positionSpinBox_1_3;
    QSpinBox *thresholdSpinBox_1_3;
    QSpinBox *samplesSpinBox_1_3;
    QSpinBox *DACOffsetSpinBox_1_3;
    QComboBox *scaleSpinBox_1_3;
    QPushButton *positionResetButton_1_3;
    QPushButton *DACOffsetResetButton_1_3;
    QPushButton *channelIsDrawingButton_1_3;
    QPushButton *thresholdIsDrawingButton_1_3;
    QPushButton *blockSamplesButton_1_3;
    QGroupBox *chanel7SettingsBox_1;
    QPushButton *changeTriggerButton_1_7;
    QSpinBox *positionSpinBox_1_7;
    QSpinBox *thresholdSpinBox_1_7;
    QSpinBox *samplesSpinBox_1_7;
    QSpinBox *DACOffsetSpinBox_1_7;
    QComboBox *scaleSpinBox_1_7;
    QPushButton *positionResetButton_1_7;
    QPushButton *DACOffsetResetButton_1_7;
    QPushButton *channelIsDrawingButton_1_7;
    QPushButton *thresholdIsDrawingButton_1_7;
    QPushButton *blockSamplesButton_1_7;
    QGroupBox *chanel6SettingsBox_1;
    QPushButton *changeTriggerButton_1_6;
    QSpinBox *positionSpinBox_1_6;
    QSpinBox *thresholdSpinBox_1_6;
    QSpinBox *samplesSpinBox_1_6;
    QSpinBox *DACOffsetSpinBox_1_6;
    QComboBox *scaleSpinBox_1_6;
    QPushButton *positionResetButton_1_6;
    QPushButton *DACOffsetResetButton_1_6;
    QPushButton *channelIsDrawingButton_1_6;
    QPushButton *thresholdIsDrawingButton_1_6;
    QPushButton *blockSamplesButton_1_6;
    QWidget *WDF2Widget;
    QGroupBox *chanel2SettingsBox_2;
    QPushButton *changeTriggerButton_2_2;
    QSpinBox *positionSpinBox_2_2;
    QSpinBox *thresholdSpinBox_2_2;
    QSpinBox *samplesSpinBox_2_2;
    QSpinBox *DACOffsetSpinBox_2_2;
    QComboBox *scaleSpinBox_2_2;
    QPushButton *positionResetButton_2_2;
    QPushButton *DACOffsetResetButton_2_2;
    QPushButton *channelIsDrawingButton_2_2;
    QPushButton *thresholdIsDrawingButton_2_2;
    QPushButton *blockSamplesButton_2_2;
    QGroupBox *chanel6SettingsBox_2;
    QPushButton *changeTriggerButton_2_6;
    QSpinBox *positionSpinBox_2_6;
    QSpinBox *thresholdSpinBox_2_6;
    QSpinBox *samplesSpinBox_2_6;
    QSpinBox *DACOffsetSpinBox_2_6;
    QComboBox *scaleSpinBox_2_6;
    QPushButton *positionResetButton_2_6;
    QPushButton *DACOffsetResetButton_2_6;
    QPushButton *channelIsDrawingButton_2_6;
    QPushButton *thresholdIsDrawingButton_2_6;
    QPushButton *blockSamplesButton_2_6;
    QGroupBox *chanel5SettingsBox_2;
    QPushButton *changeTriggerButton_2_5;
    QSpinBox *positionSpinBox_2_5;
    QSpinBox *thresholdSpinBox_2_5;
    QSpinBox *samplesSpinBox_2_5;
    QSpinBox *DACOffsetSpinBox_2_5;
    QComboBox *scaleSpinBox_2_5;
    QPushButton *positionResetButton_2_5;
    QPushButton *DACOffsetResetButton_2_5;
    QPushButton *channelIsDrawingButton_2_5;
    QPushButton *thresholdIsDrawingButton_2_5;
    QPushButton *blockSamplesButton_2_5;
    QGroupBox *chanel3SettingsBox_2;
    QPushButton *changeTriggerButton_2_3;
    QSpinBox *positionSpinBox_2_3;
    QSpinBox *thresholdSpinBox_2_3;
    QSpinBox *samplesSpinBox_2_3;
    QSpinBox *DACOffsetSpinBox_2_3;
    QComboBox *scaleSpinBox_2_3;
    QPushButton *positionResetButton_2_3;
    QPushButton *DACOffsetResetButton_2_3;
    QPushButton *channelIsDrawingButton_2_3;
    QPushButton *thresholdIsDrawingButton_2_3;
    QPushButton *blockSamplesButton_2_3;
    QGroupBox *chanel1SettingsBox_2;
    QPushButton *changeTriggerButton_2_1;
    QSpinBox *positionSpinBox_2_1;
    QSpinBox *thresholdSpinBox_2_1;
    QSpinBox *samplesSpinBox_2_1;
    QSpinBox *DACOffsetSpinBox_2_1;
    QComboBox *scaleSpinBox_2_1;
    QPushButton *positionResetButton_2_1;
    QPushButton *DACOffsetResetButton_2_1;
    QPushButton *channelIsDrawingButton_2_1;
    QPushButton *thresholdIsDrawingButton_2_1;
    QPushButton *blockSamplesButton_2_1;
    QGroupBox *chanel4SettingsBox_2;
    QPushButton *changeTriggerButton_2_4;
    QSpinBox *positionSpinBox_2_4;
    QSpinBox *thresholdSpinBox_2_4;
    QSpinBox *samplesSpinBox_2_4;
    QSpinBox *DACOffsetSpinBox_2_4;
    QComboBox *scaleSpinBox_2_4;
    QPushButton *positionResetButton_2_4;
    QPushButton *DACOffsetResetButton_2_4;
    QPushButton *channelIsDrawingButton_2_4;
    QPushButton *thresholdIsDrawingButton_2_4;
    QPushButton *blockSamplesButton_2_4;
    QGroupBox *chanel0SettingsBox_2;
    QPushButton *changeTriggerButton_2_0;
    QSpinBox *positionSpinBox_2_0;
    QSpinBox *thresholdSpinBox_2_0;
    QSpinBox *samplesSpinBox_2_0;
    QSpinBox *DACOffsetSpinBox_2_0;
    QComboBox *scaleSpinBox_2_0;
    QPushButton *positionResetButton_2_0;
    QPushButton *DACOffsetResetButton_2_0;
    QPushButton *channelIsDrawingButton_2_0;
    QPushButton *thresholdIsDrawingButton_2_0;
    QPushButton *blockSamplesButton_2_0;
    QGroupBox *chanel7SettingsBox_2;
    QPushButton *changeTriggerButton_2_7;
    QSpinBox *positionSpinBox_2_7;
    QSpinBox *thresholdSpinBox_2_7;
    QSpinBox *samplesSpinBox_2_7;
    QSpinBox *DACOffsetSpinBox_2_7;
    QComboBox *scaleSpinBox_2_7;
    QPushButton *positionResetButton_2_7;
    QPushButton *DACOffsetResetButton_2_7;
    QPushButton *channelIsDrawingButton_2_7;
    QPushButton *thresholdIsDrawingButton_2_7;
    QPushButton *blockSamplesButton_2_7;
    QGroupBox *channelLabelBox_2;
    QLabel *thresholdLabel_2;
    QLabel *samplesLabel_2;
    QLabel *positionLabel_2;
    QLabel *DACOffsetLabel_2;
    QLabel *scaleLabel_2;
    QLabel *statusLabel_2;
    QWidget *WDF3Widget;
    QGroupBox *chanel0SettingsBox_3;
    QPushButton *changeTriggerButton_3_0;
    QSpinBox *positionSpinBox_3_0;
    QSpinBox *thresholdSpinBox_3_0;
    QSpinBox *samplesSpinBox_3_0;
    QSpinBox *DACOffsetSpinBox_3_0;
    QComboBox *scaleSpinBox_3_0;
    QPushButton *positionResetButton_3_0;
    QPushButton *DACOffsetResetButton_3_0;
    QPushButton *channelIsDrawingButton_3_0;
    QPushButton *thresholdIsDrawingButton_3_0;
    QPushButton *blockSamplesButton_3_0;
    QGroupBox *chanel1SettingsBox_3;
    QPushButton *changeTriggerButton_3_1;
    QSpinBox *positionSpinBox_3_1;
    QSpinBox *thresholdSpinBox_3_1;
    QSpinBox *samplesSpinBox_3_1;
    QSpinBox *DACOffsetSpinBox_3_1;
    QComboBox *scaleSpinBox_3_1;
    QPushButton *positionResetButton_3_1;
    QPushButton *DACOffsetResetButton_3_1;
    QPushButton *channelIsDrawingButton_3_1;
    QPushButton *thresholdIsDrawingButton_3_1;
    QPushButton *blockSamplesButton_3_1;
    QGroupBox *chanel2SettingsBox_3;
    QPushButton *changeTriggerButton_3_2;
    QSpinBox *positionSpinBox_3_2;
    QSpinBox *thresholdSpinBox_3_2;
    QSpinBox *samplesSpinBox_3_2;
    QSpinBox *DACOffsetSpinBox_3_2;
    QComboBox *scaleSpinBox_3_2;
    QPushButton *positionResetButton_3_2;
    QPushButton *DACOffsetResetButton_3_2;
    QPushButton *channelIsDrawingButton_3_2;
    QPushButton *thresholdIsDrawingButton_3_2;
    QPushButton *blockSamplesButton_3_2;
    QGroupBox *chanel4SettingsBox_3;
    QPushButton *changeTriggerButton_3_4;
    QSpinBox *positionSpinBox_3_4;
    QSpinBox *thresholdSpinBox_3_4;
    QSpinBox *samplesSpinBox_3_4;
    QSpinBox *DACOffsetSpinBox_3_4;
    QComboBox *scaleSpinBox_3_4;
    QPushButton *positionResetButton_3_4;
    QPushButton *DACOffsetResetButton_3_4;
    QPushButton *channelIsDrawingButton_3_4;
    QPushButton *thresholdIsDrawingButton_3_4;
    QPushButton *blockSamplesButton_3_4;
    QGroupBox *chanel6SettingsBox_3;
    QPushButton *changeTriggerButton_3_6;
    QSpinBox *positionSpinBox_3_6;
    QSpinBox *thresholdSpinBox_3_6;
    QSpinBox *samplesSpinBox_3_6;
    QSpinBox *DACOffsetSpinBox_3_6;
    QComboBox *scaleSpinBox_3_6;
    QPushButton *positionResetButton_3_6;
    QPushButton *DACOffsetResetButton_3_6;
    QPushButton *channelIsDrawingButton_3_6;
    QPushButton *thresholdIsDrawingButton_3_6;
    QPushButton *blockSamplesButton_3_6;
    QGroupBox *chanel5SettingsBox_3;
    QPushButton *changeTriggerButton_3_5;
    QSpinBox *positionSpinBox_3_5;
    QSpinBox *thresholdSpinBox_3_5;
    QSpinBox *samplesSpinBox_3_5;
    QSpinBox *DACOffsetSpinBox_3_5;
    QComboBox *scaleSpinBox_3_5;
    QPushButton *positionResetButton_3_5;
    QPushButton *DACOffsetResetButton_3_5;
    QPushButton *channelIsDrawingButton_3_5;
    QPushButton *thresholdIsDrawingButton_3_5;
    QPushButton *blockSamplesButton_3_5;
    QGroupBox *chanel7SettingsBox_3;
    QPushButton *changeTriggerButton_3_7;
    QSpinBox *positionSpinBox_3_7;
    QSpinBox *thresholdSpinBox_3_7;
    QSpinBox *samplesSpinBox_3_7;
    QSpinBox *DACOffsetSpinBox_3_7;
    QComboBox *scaleSpinBox_3_7;
    QPushButton *positionResetButton_3_7;
    QPushButton *DACOffsetResetButton_3_7;
    QPushButton *channelIsDrawingButton_3_7;
    QPushButton *thresholdIsDrawingButton_3_7;
    QPushButton *blockSamplesButton_3_7;
    QGroupBox *chanel3SettingsBox_3;
    QPushButton *changeTriggerButton_3_3;
    QSpinBox *positionSpinBox_3_3;
    QSpinBox *thresholdSpinBox_3_3;
    QSpinBox *samplesSpinBox_3_3;
    QSpinBox *DACOffsetSpinBox_3_3;
    QComboBox *scaleSpinBox_3_3;
    QPushButton *positionResetButton_3_3;
    QPushButton *DACOffsetResetButton_3_3;
    QPushButton *channelIsDrawingButton_3_3;
    QPushButton *thresholdIsDrawingButton_3_3;
    QPushButton *blockSamplesButton_3_3;
    QGroupBox *channelLabelBox_3;
    QLabel *thresholdLabel_3;
    QLabel *samplesLabel_3;
    QLabel *positionLabel_3;
    QLabel *DACOffsetLabel_3;
    QLabel *scaleLabel_3;
    QLabel *statusLabel_3;
    QWidget *WDF4Widget;
    QGroupBox *chanel0SettingsBox_4;
    QPushButton *changeTriggerButton_4_0;
    QSpinBox *positionSpinBox_4_0;
    QSpinBox *thresholdSpinBox_4_0;
    QSpinBox *samplesSpinBox_4_0;
    QSpinBox *DACOffsetSpinBox_4_0;
    QComboBox *scaleSpinBox_4_0;
    QPushButton *positionResetButton_4_0;
    QPushButton *DACOffsetResetButton_4_0;
    QPushButton *channelIsDrawingButton_4_0;
    QPushButton *thresholdIsDrawingButton_4_0;
    QPushButton *blockSamplesButton_4_0;
    QGroupBox *chanel1SettingsBox_4;
    QPushButton *changeTriggerButton_4_1;
    QSpinBox *positionSpinBox_4_1;
    QSpinBox *thresholdSpinBox_4_1;
    QSpinBox *samplesSpinBox_4_1;
    QSpinBox *DACOffsetSpinBox_4_1;
    QComboBox *scaleSpinBox_4_1;
    QPushButton *positionResetButton_4_1;
    QPushButton *DACOffsetResetButton_4_1;
    QPushButton *channelIsDrawingButton_4_1;
    QPushButton *thresholdIsDrawingButton_4_1;
    QPushButton *blockSamplesButton_4_1;
    QGroupBox *chanel2SettingsBox_4;
    QPushButton *changeTriggerButton_4_2;
    QSpinBox *positionSpinBox_4_2;
    QSpinBox *thresholdSpinBox_4_2;
    QSpinBox *samplesSpinBox_4_2;
    QSpinBox *DACOffsetSpinBox_4_2;
    QComboBox *scaleSpinBox_4_2;
    QPushButton *positionResetButton_4_2;
    QPushButton *DACOffsetResetButton_4_2;
    QPushButton *channelIsDrawingButton_4_2;
    QPushButton *thresholdIsDrawingButton_4_2;
    QPushButton *blockSamplesButton_4_2;
    QGroupBox *chanel4SettingsBox_4;
    QPushButton *changeTriggerButton_4_4;
    QSpinBox *positionSpinBox_4_4;
    QSpinBox *thresholdSpinBox_4_4;
    QSpinBox *samplesSpinBox_4_4;
    QSpinBox *DACOffsetSpinBox_4_4;
    QComboBox *scaleSpinBox_4_4;
    QPushButton *positionResetButton_4_4;
    QPushButton *DACOffsetResetButton_4_4;
    QPushButton *channelIsDrawingButton_4_4;
    QPushButton *thresholdIsDrawingButton_4_4;
    QPushButton *blockSamplesButton_4_4;
    QGroupBox *chanel6SettingsBox_4;
    QPushButton *changeTriggerButton_4_6;
    QSpinBox *positionSpinBox_4_6;
    QSpinBox *thresholdSpinBox_4_6;
    QSpinBox *samplesSpinBox_4_6;
    QSpinBox *DACOffsetSpinBox_4_6;
    QComboBox *scaleSpinBox_4_6;
    QPushButton *positionResetButton_4_6;
    QPushButton *DACOffsetResetButton_4_6;
    QPushButton *channelIsDrawingButton_4_6;
    QPushButton *thresholdIsDrawingButton_4_6;
    QPushButton *blockSamplesButton_4_6;
    QGroupBox *chanel5SettingsBox_4;
    QPushButton *changeTriggerButton_4_5;
    QSpinBox *positionSpinBox_4_5;
    QSpinBox *thresholdSpinBox_4_5;
    QSpinBox *samplesSpinBox_4_5;
    QSpinBox *DACOffsetSpinBox_4_5;
    QComboBox *scaleSpinBox_4_5;
    QPushButton *positionResetButton_4_5;
    QPushButton *DACOffsetResetButton_4_5;
    QPushButton *channelIsDrawingButton_4_5;
    QPushButton *thresholdIsDrawingButton_4_5;
    QPushButton *blockSamplesButton_4_5;
    QGroupBox *chanel7SettingsBox_4;
    QPushButton *changeTriggerButton_4_7;
    QSpinBox *positionSpinBox_4_7;
    QSpinBox *thresholdSpinBox_4_7;
    QSpinBox *samplesSpinBox_4_7;
    QSpinBox *DACOffsetSpinBox_4_7;
    QComboBox *scaleSpinBox_4_7;
    QPushButton *positionResetButton_4_7;
    QPushButton *DACOffsetResetButton_4_7;
    QPushButton *channelIsDrawingButton_4_7;
    QPushButton *thresholdIsDrawingButton_4_7;
    QPushButton *blockSamplesButton_4_7;
    QGroupBox *chanel3SettingsBox_4;
    QPushButton *changeTriggerButton_4_3;
    QSpinBox *positionSpinBox_4_3;
    QSpinBox *thresholdSpinBox_4_3;
    QSpinBox *samplesSpinBox_4_3;
    QSpinBox *DACOffsetSpinBox_4_3;
    QComboBox *scaleSpinBox_4_3;
    QPushButton *positionResetButton_4_3;
    QPushButton *DACOffsetResetButton_4_3;
    QPushButton *channelIsDrawingButton_4_3;
    QPushButton *thresholdIsDrawingButton_4_3;
    QPushButton *blockSamplesButton_4_3;
    QGroupBox *channelLabelBox_4;
    QLabel *thresholdLabel_4;
    QLabel *samplesLabel_4;
    QLabel *positionLabel_4;
    QLabel *DACOffsetLabel_4;
    QLabel *scaleLabel_4;
    QLabel *statusLabel_4;
    QWidget *WDF5Widget;
    QGroupBox *chanel0SettingsBox_5;
    QPushButton *changeTriggerButton_5_0;
    QSpinBox *positionSpinBox_5_0;
    QSpinBox *thresholdSpinBox_5_0;
    QSpinBox *samplesSpinBox_5_0;
    QSpinBox *DACOffsetSpinBox_5_0;
    QComboBox *scaleSpinBox_5_0;
    QPushButton *positionResetButton_5_0;
    QPushButton *DACOffsetResetButton_5_0;
    QPushButton *channelIsDrawingButton_5_0;
    QPushButton *thresholdIsDrawingButton_5_0;
    QPushButton *blockSamplesButton_5_0;
    QGroupBox *chanel1SettingsBox_5;
    QPushButton *changeTriggerButton_5_1;
    QSpinBox *positionSpinBox_5_1;
    QSpinBox *thresholdSpinBox_5_1;
    QSpinBox *samplesSpinBox_5_1;
    QSpinBox *DACOffsetSpinBox_5_1;
    QComboBox *scaleSpinBox_5_1;
    QPushButton *positionResetButton_5_1;
    QPushButton *DACOffsetResetButton_5_1;
    QPushButton *channelIsDrawingButton_5_1;
    QPushButton *thresholdIsDrawingButton_5_1;
    QPushButton *blockSamplesButton_5_1;
    QGroupBox *chanel2SettingsBox_5;
    QPushButton *changeTriggerButton_5_2;
    QSpinBox *positionSpinBox_5_2;
    QSpinBox *thresholdSpinBox_5_2;
    QSpinBox *samplesSpinBox_5_2;
    QSpinBox *DACOffsetSpinBox_5_2;
    QComboBox *scaleSpinBox_5_2;
    QPushButton *positionResetButton_5_2;
    QPushButton *DACOffsetResetButton_5_2;
    QPushButton *channelIsDrawingButton_5_2;
    QPushButton *thresholdIsDrawingButton_5_2;
    QPushButton *blockSamplesButton_5_2;
    QGroupBox *chanel4SettingsBox_5;
    QPushButton *changeTriggerButton_5_4;
    QSpinBox *positionSpinBox_5_4;
    QSpinBox *thresholdSpinBox_5_4;
    QSpinBox *samplesSpinBox_5_4;
    QSpinBox *DACOffsetSpinBox_5_4;
    QComboBox *scaleSpinBox_5_4;
    QPushButton *positionResetButton_5_4;
    QPushButton *DACOffsetResetButton_5_4;
    QPushButton *channelIsDrawingButton_5_4;
    QPushButton *thresholdIsDrawingButton_5_4;
    QPushButton *blockSamplesButton_5_4;
    QGroupBox *chanel6SettingsBox_5;
    QPushButton *changeTriggerButton_5_6;
    QSpinBox *positionSpinBox_5_6;
    QSpinBox *thresholdSpinBox_5_6;
    QSpinBox *samplesSpinBox_5_6;
    QSpinBox *DACOffsetSpinBox_5_6;
    QComboBox *scaleSpinBox_5_6;
    QPushButton *positionResetButton_5_6;
    QPushButton *DACOffsetResetButton_5_6;
    QPushButton *channelIsDrawingButton_5_6;
    QPushButton *thresholdIsDrawingButton_5_6;
    QPushButton *blockSamplesButton_5_6;
    QGroupBox *chanel5SettingsBox_5;
    QPushButton *changeTriggerButton_5_5;
    QSpinBox *positionSpinBox_5_5;
    QSpinBox *thresholdSpinBox_5_5;
    QSpinBox *samplesSpinBox_5_5;
    QSpinBox *DACOffsetSpinBox_5_5;
    QComboBox *scaleSpinBox_5_5;
    QPushButton *positionResetButton_5_5;
    QPushButton *DACOffsetResetButton_5_5;
    QPushButton *channelIsDrawingButton_5_5;
    QPushButton *thresholdIsDrawingButton_5_5;
    QPushButton *blockSamplesButton_5_5;
    QGroupBox *chanel7SettingsBox_5;
    QPushButton *changeTriggerButton_5_7;
    QSpinBox *positionSpinBox_5_7;
    QSpinBox *thresholdSpinBox_5_7;
    QSpinBox *samplesSpinBox_5_7;
    QSpinBox *DACOffsetSpinBox_5_7;
    QComboBox *scaleSpinBox_5_7;
    QPushButton *positionResetButton_5_7;
    QPushButton *DACOffsetResetButton_5_7;
    QPushButton *channelIsDrawingButton_5_7;
    QPushButton *thresholdIsDrawingButton_5_7;
    QPushButton *blockSamplesButton_5_7;
    QGroupBox *chanel3SettingsBox_5;
    QPushButton *changeTriggerButton_5_3;
    QSpinBox *positionSpinBox_5_3;
    QSpinBox *thresholdSpinBox_5_3;
    QSpinBox *samplesSpinBox_5_3;
    QSpinBox *DACOffsetSpinBox_5_3;
    QComboBox *scaleSpinBox_5_3;
    QPushButton *positionResetButton_5_3;
    QPushButton *DACOffsetResetButton_5_3;
    QPushButton *channelIsDrawingButton_5_3;
    QPushButton *thresholdIsDrawingButton_5_3;
    QPushButton *blockSamplesButton_5_3;
    QGroupBox *channelLabelBox_5;
    QLabel *thresholdLabel_5;
    QLabel *samplesLabel_5;
    QLabel *positionLabel_5;
    QLabel *DACOffsetLabel_5;
    QLabel *scaleLabel_5;
    QLabel *statusLabel_5;
    QWidget *WDF6Widget;
    QGroupBox *chanel0SettingsBox_6;
    QPushButton *changeTriggerButton_6_0;
    QSpinBox *positionSpinBox_6_0;
    QSpinBox *thresholdSpinBox_6_0;
    QSpinBox *samplesSpinBox_6_0;
    QSpinBox *DACOffsetSpinBox_6_0;
    QComboBox *scaleSpinBox_6_0;
    QPushButton *positionResetButton_6_0;
    QPushButton *DACOffsetResetButton_6_0;
    QPushButton *channelIsDrawingButton_6_0;
    QPushButton *thresholdIsDrawingButton_6_0;
    QPushButton *blockSamplesButton_6_0;
    QGroupBox *chanel1SettingsBox_6;
    QPushButton *changeTriggerButton_6_1;
    QSpinBox *positionSpinBox_6_1;
    QSpinBox *thresholdSpinBox_6_1;
    QSpinBox *samplesSpinBox_6_1;
    QSpinBox *DACOffsetSpinBox_6_1;
    QComboBox *scaleSpinBox_6_1;
    QPushButton *positionResetButton_6_1;
    QPushButton *DACOffsetResetButton_6_1;
    QPushButton *channelIsDrawingButton_6_1;
    QPushButton *thresholdIsDrawingButton_6_1;
    QPushButton *blockSamplesButton_6_1;
    QGroupBox *chanel2SettingsBox_6;
    QPushButton *changeTriggerButton_6_2;
    QSpinBox *positionSpinBox_6_2;
    QSpinBox *thresholdSpinBox_6_2;
    QSpinBox *samplesSpinBox_6_2;
    QSpinBox *DACOffsetSpinBox_6_2;
    QComboBox *scaleSpinBox_6_2;
    QPushButton *positionResetButton_6_2;
    QPushButton *DACOffsetResetButton_6_2;
    QPushButton *channelIsDrawingButton_6_2;
    QPushButton *thresholdIsDrawingButton_6_2;
    QPushButton *blockSamplesButton_6_2;
    QGroupBox *chanel4SettingsBox_6;
    QPushButton *changeTriggerButton_6_4;
    QSpinBox *positionSpinBox_6_4;
    QSpinBox *thresholdSpinBox_6_4;
    QSpinBox *samplesSpinBox_6_4;
    QSpinBox *DACOffsetSpinBox_6_4;
    QComboBox *scaleSpinBox_6_4;
    QPushButton *positionResetButton_6_4;
    QPushButton *DACOffsetResetButton_6_4;
    QPushButton *channelIsDrawingButton_6_4;
    QPushButton *thresholdIsDrawingButton_6_4;
    QPushButton *blockSamplesButton_6_4;
    QGroupBox *chanel6SettingsBox_6;
    QPushButton *changeTriggerButton_6_6;
    QSpinBox *positionSpinBox_6_6;
    QSpinBox *thresholdSpinBox_6_6;
    QSpinBox *samplesSpinBox_6_6;
    QSpinBox *DACOffsetSpinBox_6_6;
    QComboBox *scaleSpinBox_6_6;
    QPushButton *positionResetButton_6_6;
    QPushButton *DACOffsetResetButton_6_6;
    QPushButton *channelIsDrawingButton_6_6;
    QPushButton *thresholdIsDrawingButton_6_6;
    QPushButton *blockSamplesButton_6_6;
    QGroupBox *chanel5SettingsBox_6;
    QPushButton *changeTriggerButton_6_5;
    QSpinBox *positionSpinBox_6_5;
    QSpinBox *thresholdSpinBox_6_5;
    QSpinBox *samplesSpinBox_6_5;
    QSpinBox *DACOffsetSpinBox_6_5;
    QComboBox *scaleSpinBox_6_5;
    QPushButton *positionResetButton_6_5;
    QPushButton *DACOffsetResetButton_6_5;
    QPushButton *channelIsDrawingButton_6_5;
    QPushButton *thresholdIsDrawingButton_6_5;
    QPushButton *blockSamplesButton_6_5;
    QGroupBox *chanel7SettingsBox_6;
    QPushButton *changeTriggerButton_6_7;
    QSpinBox *positionSpinBox_6_7;
    QSpinBox *thresholdSpinBox_6_7;
    QSpinBox *samplesSpinBox_6_7;
    QSpinBox *DACOffsetSpinBox_6_7;
    QComboBox *scaleSpinBox_6_7;
    QPushButton *positionResetButton_6_7;
    QPushButton *DACOffsetResetButton_6_7;
    QPushButton *channelIsDrawingButton_6_7;
    QPushButton *thresholdIsDrawingButton_6_7;
    QPushButton *blockSamplesButton_6_7;
    QGroupBox *chanel3SettingsBox_6;
    QPushButton *changeTriggerButton_6_3;
    QSpinBox *positionSpinBox_6_3;
    QSpinBox *thresholdSpinBox_6_3;
    QSpinBox *samplesSpinBox_6_3;
    QSpinBox *DACOffsetSpinBox_6_3;
    QComboBox *scaleSpinBox_6_3;
    QPushButton *positionResetButton_6_3;
    QPushButton *DACOffsetResetButton_6_3;
    QPushButton *channelIsDrawingButton_6_3;
    QPushButton *thresholdIsDrawingButton_6_3;
    QPushButton *blockSamplesButton_6_3;
    QGroupBox *channelLabelBox_6;
    QLabel *thresholdLabel_6;
    QLabel *samplesLabel_6;
    QLabel *positionLabel_6;
    QLabel *DACOffsetLabel_6;
    QLabel *scaleLabel_6;
    QLabel *statusLabel_6;
    QWidget *WDF7Widget;
    QGroupBox *chanel0SettingsBox_7;
    QPushButton *changeTriggerButton_7_0;
    QSpinBox *positionSpinBox_7_0;
    QSpinBox *thresholdSpinBox_7_0;
    QSpinBox *samplesSpinBox_7_0;
    QSpinBox *DACOffsetSpinBox_7_0;
    QComboBox *scaleSpinBox_7_0;
    QPushButton *positionResetButton_7_0;
    QPushButton *DACOffsetResetButton_7_0;
    QPushButton *channelIsDrawingButton_7_0;
    QPushButton *thresholdIsDrawingButton_7_0;
    QPushButton *blockSamplesButton_7_0;
    QGroupBox *chanel1SettingsBox_7;
    QPushButton *changeTriggerButton_7_1;
    QSpinBox *positionSpinBox_7_1;
    QSpinBox *thresholdSpinBox_7_1;
    QSpinBox *samplesSpinBox_7_1;
    QSpinBox *DACOffsetSpinBox_7_1;
    QComboBox *scaleSpinBox_7_1;
    QPushButton *positionResetButton_7_1;
    QPushButton *DACOffsetResetButton_7_1;
    QPushButton *channelIsDrawingButton_7_1;
    QPushButton *thresholdIsDrawingButton_7_1;
    QPushButton *blockSamplesButton_7_1;
    QGroupBox *chanel2SettingsBox_7;
    QPushButton *changeTriggerButton_7_2;
    QSpinBox *positionSpinBox_7_2;
    QSpinBox *thresholdSpinBox_7_2;
    QSpinBox *samplesSpinBox_7_2;
    QSpinBox *DACOffsetSpinBox_7_2;
    QComboBox *scaleSpinBox_7_2;
    QPushButton *positionResetButton_7_2;
    QPushButton *DACOffsetResetButton_7_2;
    QPushButton *channelIsDrawingButton_7_2;
    QPushButton *thresholdIsDrawingButton_7_2;
    QPushButton *blockSamplesButton_7_2;
    QGroupBox *chanel4SettingsBox_7;
    QPushButton *changeTriggerButton_7_4;
    QSpinBox *positionSpinBox_7_4;
    QSpinBox *thresholdSpinBox_7_4;
    QSpinBox *samplesSpinBox_7_4;
    QSpinBox *DACOffsetSpinBox_7_4;
    QComboBox *scaleSpinBox_7_4;
    QPushButton *positionResetButton_7_4;
    QPushButton *DACOffsetResetButton_7_4;
    QPushButton *channelIsDrawingButton_7_4;
    QPushButton *thresholdIsDrawingButton_7_4;
    QPushButton *blockSamplesButton_7_4;
    QGroupBox *chanel6SettingsBox_7;
    QPushButton *changeTriggerButton_7_6;
    QSpinBox *positionSpinBox_7_6;
    QSpinBox *thresholdSpinBox_7_6;
    QSpinBox *samplesSpinBox_7_6;
    QSpinBox *DACOffsetSpinBox_7_6;
    QComboBox *scaleSpinBox_7_6;
    QPushButton *positionResetButton_7_6;
    QPushButton *DACOffsetResetButton_7_6;
    QPushButton *channelIsDrawingButton_7_6;
    QPushButton *thresholdIsDrawingButton_7_6;
    QPushButton *blockSamplesButton_7_6;
    QGroupBox *chanel5SettingsBox_7;
    QPushButton *changeTriggerButton_7_5;
    QSpinBox *positionSpinBox_7_5;
    QSpinBox *thresholdSpinBox_7_5;
    QSpinBox *samplesSpinBox_7_5;
    QSpinBox *DACOffsetSpinBox_7_5;
    QComboBox *scaleSpinBox_7_5;
    QPushButton *positionResetButton_7_5;
    QPushButton *DACOffsetResetButton_7_5;
    QPushButton *channelIsDrawingButton_7_5;
    QPushButton *thresholdIsDrawingButton_7_5;
    QPushButton *blockSamplesButton_7_5;
    QGroupBox *chanel7SettingsBox_7;
    QPushButton *changeTriggerButton_7_7;
    QSpinBox *positionSpinBox_7_7;
    QSpinBox *thresholdSpinBox_7_7;
    QSpinBox *samplesSpinBox_7_7;
    QSpinBox *DACOffsetSpinBox_7_7;
    QComboBox *scaleSpinBox_7_7;
    QPushButton *positionResetButton_7_7;
    QPushButton *DACOffsetResetButton_7_7;
    QPushButton *channelIsDrawingButton_7_7;
    QPushButton *thresholdIsDrawingButton_7_7;
    QPushButton *blockSamplesButton_7_7;
    QGroupBox *chanel3SettingsBox_7;
    QPushButton *changeTriggerButton_7_3;
    QSpinBox *positionSpinBox_7_3;
    QSpinBox *thresholdSpinBox_7_3;
    QSpinBox *samplesSpinBox_7_3;
    QSpinBox *DACOffsetSpinBox_7_3;
    QComboBox *scaleSpinBox_7_3;
    QPushButton *positionResetButton_7_3;
    QPushButton *DACOffsetResetButton_7_3;
    QPushButton *channelIsDrawingButton_7_3;
    QPushButton *thresholdIsDrawingButton_7_3;
    QPushButton *blockSamplesButton_7_3;
    QGroupBox *channelLabelBox_7;
    QLabel *thresholdLabel_7;
    QLabel *samplesLabel_7;
    QLabel *positionLabel_7;
    QLabel *DACOffsetLabel_7;
    QLabel *scaleLabel_7;
    QLabel *statusLabel_7;
    QWidget *WDF8Widget;
    QGroupBox *chanel0SettingsBox_8;
    QPushButton *changeTriggerButton_8_0;
    QSpinBox *positionSpinBox_8_0;
    QSpinBox *thresholdSpinBox_8_0;
    QSpinBox *samplesSpinBox_8_0;
    QSpinBox *DACOffsetSpinBox_8_0;
    QComboBox *scaleSpinBox_8_0;
    QPushButton *positionResetButton_8_0;
    QPushButton *DACOffsetResetButton_8_0;
    QPushButton *channelIsDrawingButton_8_0;
    QPushButton *thresholdIsDrawingButton_8_0;
    QPushButton *blockSamplesButton_8_0;
    QGroupBox *chanel1SettingsBox_8;
    QPushButton *changeTriggerButton_8_1;
    QSpinBox *positionSpinBox_8_1;
    QSpinBox *thresholdSpinBox_8_1;
    QSpinBox *samplesSpinBox_8_1;
    QSpinBox *DACOffsetSpinBox_8_1;
    QComboBox *scaleSpinBox_8_1;
    QPushButton *positionResetButton_8_1;
    QPushButton *DACOffsetResetButton_8_1;
    QPushButton *channelIsDrawingButton_8_1;
    QPushButton *thresholdIsDrawingButton_8_1;
    QPushButton *blockSamplesButton_8_1;
    QGroupBox *chanel2SettingsBox_8;
    QPushButton *changeTriggerButton_8_2;
    QSpinBox *positionSpinBox_8_2;
    QSpinBox *thresholdSpinBox_8_2;
    QSpinBox *samplesSpinBox_8_2;
    QSpinBox *DACOffsetSpinBox_8_2;
    QComboBox *scaleSpinBox_8_2;
    QPushButton *positionResetButton_8_2;
    QPushButton *DACOffsetResetButton_8_2;
    QPushButton *channelIsDrawingButton_8_2;
    QPushButton *thresholdIsDrawingButton_8_2;
    QPushButton *blockSamplesButton_8_2;
    QGroupBox *chanel4SettingsBox_8;
    QPushButton *changeTriggerButton_8_4;
    QSpinBox *positionSpinBox_8_4;
    QSpinBox *thresholdSpinBox_8_4;
    QSpinBox *samplesSpinBox_8_4;
    QSpinBox *DACOffsetSpinBox_8_4;
    QComboBox *scaleSpinBox_8_4;
    QPushButton *positionResetButton_8_4;
    QPushButton *DACOffsetResetButton_8_4;
    QPushButton *channelIsDrawingButton_8_4;
    QPushButton *thresholdIsDrawingButton_8_4;
    QPushButton *blockSamplesButton_8_4;
    QGroupBox *chanel6SettingsBox_8;
    QPushButton *changeTriggerButton_8_6;
    QSpinBox *positionSpinBox_8_6;
    QSpinBox *thresholdSpinBox_8_6;
    QSpinBox *samplesSpinBox_8_6;
    QSpinBox *DACOffsetSpinBox_8_6;
    QComboBox *scaleSpinBox_8_6;
    QPushButton *positionResetButton_8_6;
    QPushButton *DACOffsetResetButton_8_6;
    QPushButton *channelIsDrawingButton_8_6;
    QPushButton *thresholdIsDrawingButton_8_6;
    QPushButton *blockSamplesButton_8_6;
    QGroupBox *chanel5SettingsBox_8;
    QPushButton *changeTriggerButton_8_5;
    QSpinBox *positionSpinBox_8_5;
    QSpinBox *thresholdSpinBox_8_5;
    QSpinBox *samplesSpinBox_8_5;
    QSpinBox *DACOffsetSpinBox_8_5;
    QComboBox *scaleSpinBox_8_5;
    QPushButton *positionResetButton_8_5;
    QPushButton *DACOffsetResetButton_8_5;
    QPushButton *channelIsDrawingButton_8_5;
    QPushButton *thresholdIsDrawingButton_8_5;
    QPushButton *blockSamplesButton_8_5;
    QGroupBox *chanel7SettingsBox_8;
    QPushButton *changeTriggerButton_8_7;
    QSpinBox *positionSpinBox_8_7;
    QSpinBox *thresholdSpinBox_8_7;
    QSpinBox *samplesSpinBox_8_7;
    QSpinBox *DACOffsetSpinBox_8_7;
    QComboBox *scaleSpinBox_8_7;
    QPushButton *positionResetButton_8_7;
    QPushButton *DACOffsetResetButton_8_7;
    QPushButton *channelIsDrawingButton_8_7;
    QPushButton *thresholdIsDrawingButton_8_7;
    QPushButton *blockSamplesButton_8_7;
    QGroupBox *chanel3SettingsBox_8;
    QPushButton *changeTriggerButton_8_3;
    QSpinBox *positionSpinBox_8_3;
    QSpinBox *thresholdSpinBox_8_3;
    QSpinBox *samplesSpinBox_8_3;
    QSpinBox *DACOffsetSpinBox_8_3;
    QComboBox *scaleSpinBox_8_3;
    QPushButton *positionResetButton_8_3;
    QPushButton *DACOffsetResetButton_8_3;
    QPushButton *channelIsDrawingButton_8_3;
    QPushButton *thresholdIsDrawingButton_8_3;
    QPushButton *blockSamplesButton_8_3;
    QGroupBox *channelLabelBox_8;
    QLabel *thresholdLabel_8;
    QLabel *samplesLabel_8;
    QLabel *positionLabel_8;
    QLabel *DACOffsetLabel_8;
    QLabel *scaleLabel_8;
    QLabel *statusLabel_8;
    QWidget *WDF9Widget;
    QGroupBox *chanel2SettingsBox_9;
    QPushButton *changeTriggerButton_9_2;
    QSpinBox *positionSpinBox_9_2;
    QSpinBox *thresholdSpinBox_9_2;
    QSpinBox *samplesSpinBox_9_2;
    QSpinBox *DACOffsetSpinBox_9_2;
    QComboBox *scaleSpinBox_9_2;
    QPushButton *positionResetButton_9_2;
    QPushButton *DACOffsetResetButton_9_2;
    QPushButton *channelIsDrawingButton_9_2;
    QPushButton *thresholdIsDrawingButton_9_2;
    QPushButton *blockSamplesButton_9_2;
    QGroupBox *chanel7SettingsBox_9;
    QPushButton *changeTriggerButton_9_7;
    QSpinBox *positionSpinBox_9_7;
    QSpinBox *thresholdSpinBox_9_7;
    QSpinBox *samplesSpinBox_9_7;
    QSpinBox *DACOffsetSpinBox_9_7;
    QComboBox *scaleSpinBox_9_7;
    QPushButton *positionResetButton_9_7;
    QPushButton *DACOffsetResetButton_9_7;
    QPushButton *channelIsDrawingButton_9_7;
    QPushButton *thresholdIsDrawingButton_9_7;
    QPushButton *blockSamplesButton_9_7;
    QGroupBox *chanel0SettingsBox_9;
    QPushButton *changeTriggerButton_9_0;
    QSpinBox *positionSpinBox_9_0;
    QSpinBox *thresholdSpinBox_9_0;
    QSpinBox *samplesSpinBox_9_0;
    QSpinBox *DACOffsetSpinBox_9_0;
    QComboBox *scaleSpinBox_9_0;
    QPushButton *positionResetButton_9_0;
    QPushButton *DACOffsetResetButton_9_0;
    QPushButton *channelIsDrawingButton_9_0;
    QPushButton *thresholdIsDrawingButton_9_0;
    QPushButton *blockSamplesButton_9_0;
    QGroupBox *chanel1SettingsBox_9;
    QPushButton *changeTriggerButton_9_1;
    QSpinBox *positionSpinBox_9_1;
    QSpinBox *thresholdSpinBox_9_1;
    QSpinBox *samplesSpinBox_9_1;
    QSpinBox *DACOffsetSpinBox_9_1;
    QComboBox *scaleSpinBox_9_1;
    QPushButton *positionResetButton_9_1;
    QPushButton *DACOffsetResetButton_9_1;
    QPushButton *channelIsDrawingButton_9_1;
    QPushButton *thresholdIsDrawingButton_9_1;
    QPushButton *blockSamplesButton_9_1;
    QGroupBox *chanel4SettingsBox_9;
    QPushButton *changeTriggerButton_9_4;
    QSpinBox *positionSpinBox_9_4;
    QSpinBox *thresholdSpinBox_9_4;
    QSpinBox *samplesSpinBox_9_4;
    QSpinBox *DACOffsetSpinBox_9_4;
    QComboBox *scaleSpinBox_9_4;
    QPushButton *positionResetButton_9_4;
    QPushButton *DACOffsetResetButton_9_4;
    QPushButton *channelIsDrawingButton_9_4;
    QPushButton *thresholdIsDrawingButton_9_4;
    QPushButton *blockSamplesButton_9_4;
    QGroupBox *chanel3SettingsBox_9;
    QPushButton *changeTriggerButton_9_3;
    QSpinBox *positionSpinBox_9_3;
    QSpinBox *thresholdSpinBox_9_3;
    QSpinBox *samplesSpinBox_9_3;
    QSpinBox *DACOffsetSpinBox_9_3;
    QComboBox *scaleSpinBox_9_3;
    QPushButton *positionResetButton_9_3;
    QPushButton *DACOffsetResetButton_9_3;
    QPushButton *channelIsDrawingButton_9_3;
    QPushButton *thresholdIsDrawingButton_9_3;
    QPushButton *blockSamplesButton_9_3;
    QGroupBox *chanel5SettingsBox_9;
    QPushButton *changeTriggerButton_9_5;
    QSpinBox *positionSpinBox_9_5;
    QSpinBox *thresholdSpinBox_9_5;
    QSpinBox *samplesSpinBox_9_5;
    QSpinBox *DACOffsetSpinBox_9_5;
    QComboBox *scaleSpinBox_9_5;
    QPushButton *positionResetButton_9_5;
    QPushButton *DACOffsetResetButton_9_5;
    QPushButton *channelIsDrawingButton_9_5;
    QPushButton *thresholdIsDrawingButton_9_5;
    QPushButton *blockSamplesButton_9_5;
    QGroupBox *chanel6SettingsBox_9;
    QPushButton *changeTriggerButton_9_6;
    QSpinBox *positionSpinBox_9_6;
    QSpinBox *thresholdSpinBox_9_6;
    QSpinBox *samplesSpinBox_9_6;
    QSpinBox *DACOffsetSpinBox_9_6;
    QComboBox *scaleSpinBox_9_6;
    QPushButton *positionResetButton_9_6;
    QPushButton *DACOffsetResetButton_9_6;
    QPushButton *channelIsDrawingButton_9_6;
    QPushButton *thresholdIsDrawingButton_9_6;
    QPushButton *blockSamplesButton_9_6;
    QGroupBox *channelLabelBox_9;
    QLabel *thresholdLabel_9;
    QLabel *samplesLabel_9;
    QLabel *positionLabel_9;
    QLabel *DACOffsetLabel_9;
    QLabel *scaleLabel_9;
    QLabel *statusLabel_9;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QStringLiteral("MainWindowClass"));
        MainWindowClass->resize(1249, 825);
        MainWindowClass->setMinimumSize(QSize(1249, 825));
        MainWindowClass->setMaximumSize(QSize(1920, 1080));
        MainWindowClass->setAcceptDrops(false);
        QIcon icon;
        icon.addFile(QStringLiteral("../Desktop/CAEN-UI/Icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowClass->setWindowIcon(icon);
        MainWindowClass->setIconSize(QSize(256, 256));
        MainWindowClass->setAnimated(true);
        MainWindowClass->setDocumentMode(false);
        MainWindowClass->setTabShape(QTabWidget::Rounded);
        MainWindowClass->setDockNestingEnabled(false);
        MainWindowClass->setUnifiedTitleAndToolBarOnMac(false);
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(1240, 825));
        centralWidget->setMaximumSize(QSize(1920, 1080));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        controlButtons = new QGroupBox(centralWidget);
        controlButtons->setObjectName(QStringLiteral("controlButtons"));
        controlButtons->setMaximumSize(QSize(1920, 90));
        gridLayout_2 = new QGridLayout(controlButtons);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        helpButton = new QPushButton(controlButtons);
        helpButton->setObjectName(QStringLiteral("helpButton"));
        helpButton->setEnabled(true);
        helpButton->setMinimumSize(QSize(60, 60));
        helpButton->setMaximumSize(QSize(60, 60));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../Desktop/CAEN-UI/Help.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral("../Desktop/CAEN-UI/aHelp.png"), QSize(), QIcon::Normal, QIcon::On);
        helpButton->setIcon(icon1);
        helpButton->setIconSize(QSize(50, 50));
        helpButton->setCheckable(true);

        gridLayout_2->addWidget(helpButton, 0, 9, 1, 1);

        connectButton = new QPushButton(controlButtons);
        connectButton->setObjectName(QStringLiteral("connectButton"));
        connectButton->setMinimumSize(QSize(60, 60));
        connectButton->setMaximumSize(QSize(60, 60));
        connectButton->setToolTipDuration(-1);
        QIcon icon2;
        icon2.addFile(QStringLiteral("../Desktop/CAEN-UI/Connect1.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QStringLiteral("../Desktop/CAEN-UI/Connect.png"), QSize(), QIcon::Normal, QIcon::On);
        connectButton->setIcon(icon2);
        connectButton->setIconSize(QSize(50, 50));
        connectButton->setCheckable(true);
        connectButton->setChecked(false);

        gridLayout_2->addWidget(connectButton, 0, 0, 1, 1);

        exitButton = new QPushButton(controlButtons);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setMinimumSize(QSize(60, 60));
        exitButton->setMaximumSize(QSize(60, 60));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../Desktop/CAEN-UI/Exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        exitButton->setIcon(icon3);
        exitButton->setIconSize(QSize(50, 50));
        exitButton->setAutoDefault(false);
        exitButton->setFlat(false);

        gridLayout_2->addWidget(exitButton, 0, 11, 1, 1);

        openFileButton = new QPushButton(controlButtons);
        openFileButton->setObjectName(QStringLiteral("openFileButton"));
        openFileButton->setEnabled(true);
        openFileButton->setMinimumSize(QSize(60, 60));
        openFileButton->setMaximumSize(QSize(60, 60));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../Desktop/CAEN-UI/Folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QStringLiteral("../Desktop/CAEN-UI/aFolder.png"), QSize(), QIcon::Normal, QIcon::On);
        openFileButton->setIcon(icon4);
        openFileButton->setIconSize(QSize(50, 50));
        openFileButton->setCheckable(true);

        gridLayout_2->addWidget(openFileButton, 0, 6, 1, 1);

        errorButton = new QPushButton(controlButtons);
        errorButton->setObjectName(QStringLiteral("errorButton"));
        errorButton->setEnabled(true);
        errorButton->setMinimumSize(QSize(60, 60));
        errorButton->setMaximumSize(QSize(60, 60));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../Desktop/CAEN-UI/NoError.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QStringLiteral("../Desktop/CAEN-UI/aError.png"), QSize(), QIcon::Normal, QIcon::On);
        errorButton->setIcon(icon5);
        errorButton->setIconSize(QSize(50, 50));
        errorButton->setCheckable(false);

        gridLayout_2->addWidget(errorButton, 0, 10, 1, 1);

        journalButton = new QPushButton(controlButtons);
        journalButton->setObjectName(QStringLiteral("journalButton"));
        journalButton->setEnabled(true);
        journalButton->setMinimumSize(QSize(60, 60));
        journalButton->setMaximumSize(QSize(60, 60));
        QIcon icon6;
        icon6.addFile(QStringLiteral("../Desktop/CAEN-UI/Journal.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon6.addFile(QStringLiteral("../Desktop/CAEN-UI/aJournal.png"), QSize(), QIcon::Normal, QIcon::On);
        journalButton->setIcon(icon6);
        journalButton->setIconSize(QSize(50, 50));
        journalButton->setCheckable(true);

        gridLayout_2->addWidget(journalButton, 0, 8, 1, 1);

        magnifierButton = new QPushButton(controlButtons);
        magnifierButton->setObjectName(QStringLiteral("magnifierButton"));
        magnifierButton->setEnabled(true);
        magnifierButton->setMinimumSize(QSize(60, 60));
        magnifierButton->setMaximumSize(QSize(60, 60));
        QIcon icon7;
        icon7.addFile(QStringLiteral("../Desktop/CAEN-UI/Magnifier.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon7.addFile(QStringLiteral("../Desktop/CAEN-UI/aMagnifier.png"), QSize(), QIcon::Normal, QIcon::On);
        magnifierButton->setIcon(icon7);
        magnifierButton->setIconSize(QSize(50, 50));
        magnifierButton->setCheckable(true);

        gridLayout_2->addWidget(magnifierButton, 0, 7, 1, 1);

        recordButton = new QPushButton(controlButtons);
        recordButton->setObjectName(QStringLiteral("recordButton"));
        recordButton->setEnabled(false);
        recordButton->setMinimumSize(QSize(60, 60));
        recordButton->setMaximumSize(QSize(60, 60));
        QIcon icon8;
        icon8.addFile(QStringLiteral("../Desktop/CAEN-UI/Record.png"), QSize(), QIcon::Normal, QIcon::Off);
        recordButton->setIcon(icon8);
        recordButton->setIconSize(QSize(50, 50));
        recordButton->setCheckable(true);

        gridLayout_2->addWidget(recordButton, 0, 3, 1, 1);

        settingsButton = new QPushButton(controlButtons);
        settingsButton->setObjectName(QStringLiteral("settingsButton"));
        settingsButton->setEnabled(true);
        settingsButton->setMinimumSize(QSize(60, 60));
        settingsButton->setMaximumSize(QSize(60, 60));
        QIcon icon9;
        icon9.addFile(QStringLiteral("../Desktop/CAEN-UI/Setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon9.addFile(QStringLiteral("../Desktop/CAEN-UI/aSetting.png"), QSize(), QIcon::Normal, QIcon::On);
        settingsButton->setIcon(icon9);
        settingsButton->setIconSize(QSize(50, 50));
        settingsButton->setCheckable(false);

        gridLayout_2->addWidget(settingsButton, 0, 5, 1, 1);

        drawButton = new QPushButton(controlButtons);
        drawButton->setObjectName(QStringLiteral("drawButton"));
        drawButton->setEnabled(false);
        drawButton->setMinimumSize(QSize(60, 60));
        drawButton->setMaximumSize(QSize(60, 60));
        QIcon icon10;
        icon10.addFile(QStringLiteral("../Desktop/CAEN-UI/Viewer.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon10.addFile(QStringLiteral("../Desktop/CAEN-UI/aViewer.png"), QSize(), QIcon::Normal, QIcon::On);
        drawButton->setIcon(icon10);
        drawButton->setIconSize(QSize(50, 50));
        drawButton->setCheckable(true);
        drawButton->setChecked(true);

        gridLayout_2->addWidget(drawButton, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(508, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 4, 1, 1);

        startStopButton = new QPushButton(controlButtons);
        startStopButton->setObjectName(QStringLiteral("startStopButton"));
        startStopButton->setEnabled(false);
        startStopButton->setMinimumSize(QSize(60, 60));
        startStopButton->setMaximumSize(QSize(60, 60));
        QIcon icon11;
        icon11.addFile(QStringLiteral("../Desktop/CAEN-UI/Start.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon11.addFile(QStringLiteral("../Desktop/CAEN-UI/Stop.png"), QSize(), QIcon::Normal, QIcon::On);
        startStopButton->setIcon(icon11);
        startStopButton->setIconSize(QSize(50, 50));
        startStopButton->setCheckable(true);

        gridLayout_2->addWidget(startStopButton, 0, 1, 1, 1);


        verticalLayout->addWidget(controlButtons);

        mainBox = new QGroupBox(centralWidget);
        mainBox->setObjectName(QStringLiteral("mainBox"));
        mainBox->setMaximumSize(QSize(1920, 1080));
        gridLayout_3 = new QGridLayout(mainBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tabWidget = new QTabWidget(mainBox);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        signalTab = new QWidget();
        signalTab->setObjectName(QStringLiteral("signalTab"));
        gridLayout_4 = new QGridLayout(signalTab);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        signalWidget = new QCustomPlot(signalTab);
        signalWidget->setObjectName(QStringLiteral("signalWidget"));

        gridLayout_4->addWidget(signalWidget, 0, 0, 1, 1);

        tabWidget->addTab(signalTab, QString());
        spectrumTab = new QWidget();
        spectrumTab->setObjectName(QStringLiteral("spectrumTab"));
        gridLayout_5 = new QGridLayout(spectrumTab);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        spectrumWidget = new QCustomPlot(spectrumTab);
        spectrumWidget->setObjectName(QStringLiteral("spectrumWidget"));

        gridLayout_5->addWidget(spectrumWidget, 0, 0, 1, 1);

        tabWidget->addTab(spectrumTab, QString());
        dataTab = new QWidget();
        dataTab->setObjectName(QStringLiteral("dataTab"));
        gridLayout_6 = new QGridLayout(dataTab);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        dataWidget = new QCustomPlot(dataTab);
        dataWidget->setObjectName(QStringLiteral("dataWidget"));

        gridLayout_6->addWidget(dataWidget, 0, 0, 1, 1);

        tabWidget->addTab(dataTab, QString());

        gridLayout_3->addWidget(tabWidget, 0, 0, 1, 1);

        settingsBlock = new QGroupBox(mainBox);
        settingsBlock->setObjectName(QStringLiteral("settingsBlock"));
        settingsBlock->setMinimumSize(QSize(1215, 250));
        settingsBlock->setMaximumSize(QSize(1920, 250));
        settingsBlock->setFlat(false);
        settingsBlock->setCheckable(false);
        settingsBlock->setChecked(false);
        horizontalLayout = new QHBoxLayout(settingsBlock);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        timeSettingBox = new QGroupBox(settingsBlock);
        timeSettingBox->setObjectName(QStringLiteral("timeSettingBox"));
        timeSettingBox->setMinimumSize(QSize(120, 230));
        timeSettingBox->setMaximumSize(QSize(140, 230));
        bufferBox = new QGroupBox(timeSettingBox);
        bufferBox->setObjectName(QStringLiteral("bufferBox"));
        bufferBox->setEnabled(true);
        bufferBox->setGeometry(QRect(10, 15, 100, 50));
        bufferComboBox = new QComboBox(bufferBox);
        bufferComboBox->setObjectName(QStringLiteral("bufferComboBox"));
        bufferComboBox->setEnabled(false);
        bufferComboBox->setGeometry(QRect(10, 20, 80, 20));
        bufferComboBox->setLayoutDirection(Qt::LeftToRight);
        bufferComboBox->setEditable(false);
        bufferComboBox->setInsertPolicy(QComboBox::InsertAtBottom);
        scaleTimeBox = new QGroupBox(timeSettingBox);
        scaleTimeBox->setObjectName(QStringLiteral("scaleTimeBox"));
        scaleTimeBox->setEnabled(true);
        scaleTimeBox->setGeometry(QRect(10, 62, 100, 50));
        scaleTimeComboBox = new QComboBox(scaleTimeBox);
        scaleTimeComboBox->setObjectName(QStringLiteral("scaleTimeComboBox"));
        scaleTimeComboBox->setEnabled(true);
        scaleTimeComboBox->setGeometry(QRect(10, 20, 81, 20));
        scaleTimeComboBox->setEditable(false);
        positionTimeBox = new QGroupBox(timeSettingBox);
        positionTimeBox->setObjectName(QStringLiteral("positionTimeBox"));
        positionTimeBox->setEnabled(true);
        positionTimeBox->setGeometry(QRect(10, 109, 100, 50));
        positionSpinBox_0_0 = new QSpinBox(positionTimeBox);
        positionSpinBox_0_0->setObjectName(QStringLiteral("positionSpinBox_0_0"));
        positionSpinBox_0_0->setGeometry(QRect(15, 20, 50, 20));
        positionResetButton_0_0 = new QPushButton(positionTimeBox);
        positionResetButton_0_0->setObjectName(QStringLiteral("positionResetButton_0_0"));
        positionResetButton_0_0->setEnabled(true);
        positionResetButton_0_0->setGeometry(QRect(70, 20, 20, 20));
        positionResetButton_0_0->setMaximumSize(QSize(20, 20));
        QIcon icon12;
        icon12.addFile(QStringLiteral("../Desktop/CAEN-UI/Reset.png"), QSize(), QIcon::Normal, QIcon::Off);
        positionResetButton_0_0->setIcon(icon12);
        inversionButton = new QPushButton(timeSettingBox);
        inversionButton->setObjectName(QStringLiteral("inversionButton"));
        inversionButton->setGeometry(QRect(20, 170, 81, 25));
        inversionButton->setCheckable(true);

        horizontalLayout->addWidget(timeSettingBox);

        triggerSettingBox = new QGroupBox(settingsBlock);
        triggerSettingBox->setObjectName(QStringLiteral("triggerSettingBox"));
        triggerSettingBox->setEnabled(true);
        triggerSettingBox->setMinimumSize(QSize(120, 230));
        triggerSettingBox->setMaximumSize(QSize(120, 230));
        postTriggerBox = new QGroupBox(triggerSettingBox);
        postTriggerBox->setObjectName(QStringLiteral("postTriggerBox"));
        postTriggerBox->setEnabled(false);
        postTriggerBox->setGeometry(QRect(10, 15, 100, 50));
        postTriggerSpinBox = new QSpinBox(postTriggerBox);
        postTriggerSpinBox->setObjectName(QStringLiteral("postTriggerSpinBox"));
        postTriggerSpinBox->setEnabled(false);
        postTriggerSpinBox->setGeometry(QRect(15, 20, 50, 20));
        postTriggerSpinBox->setAlignment(Qt::AlignCenter);
        postTriggerSpinBox->setReadOnly(false);
        postTriggerSpinBox->setMaximum(100);
        postTriggerSpinBox->setValue(80);
        postTriggerIsDrawing = new QPushButton(postTriggerBox);
        postTriggerIsDrawing->setObjectName(QStringLiteral("postTriggerIsDrawing"));
        postTriggerIsDrawing->setEnabled(false);
        postTriggerIsDrawing->setGeometry(QRect(70, 20, 20, 20));
        postTriggerIsDrawing->setMaximumSize(QSize(20, 20));
        QIcon icon13;
        icon13.addFile(QStringLiteral("../Desktop/CAEN-UI/CloseEye.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon13.addFile(QStringLiteral("../Desktop/CAEN-UI/Eye.png"), QSize(), QIcon::Normal, QIcon::On);
        postTriggerIsDrawing->setIcon(icon13);
        postTriggerIsDrawing->setCheckable(true);
        postTriggerIsDrawing->setChecked(false);
        edgeBox = new QGroupBox(triggerSettingBox);
        edgeBox->setObjectName(QStringLiteral("edgeBox"));
        edgeBox->setGeometry(QRect(10, 62, 100, 70));
        pushButton = new QPushButton(edgeBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 20, 40, 40));
        QIcon icon14;
        icon14.addFile(QStringLiteral("../Desktop/CAEN-UI/Rise.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon14.addFile(QStringLiteral("../Desktop/CAEN-UI/Fall.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton->setIcon(icon14);
        pushButton->setIconSize(QSize(35, 35));
        pushButton->setCheckable(true);
        pushButton->setAutoRepeat(false);
        pushButton->setAutoExclusive(false);
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);
        groupBox = new QGroupBox(triggerSettingBox);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 130, 100, 90));
        externalTriggerButton = new QPushButton(groupBox);
        externalTriggerButton->setObjectName(QStringLiteral("externalTriggerButton"));
        externalTriggerButton->setGeometry(QRect(13, 15, 35, 35));
        QIcon icon15;
        icon15.addFile(QStringLiteral("../Desktop/CAEN-UI/External.png"), QSize(), QIcon::Normal, QIcon::Off);
        externalTriggerButton->setIcon(icon15);
        externalTriggerButton->setIconSize(QSize(25, 25));
        externalTriggerButton->setCheckable(true);
        externalTriggerButton->setFlat(false);
        autoTriggerButton = new QPushButton(groupBox);
        autoTriggerButton->setObjectName(QStringLiteral("autoTriggerButton"));
        autoTriggerButton->setGeometry(QRect(57, 15, 35, 35));
        QIcon icon16;
        icon16.addFile(QStringLiteral("../Desktop/CAEN-UI/Auto.png"), QSize(), QIcon::Normal, QIcon::Off);
        autoTriggerButton->setIcon(icon16);
        autoTriggerButton->setIconSize(QSize(25, 25));
        autoTriggerButton->setCheckable(true);
        autoTriggerButton->setFlat(false);
        forceTriggerButton = new QPushButton(groupBox);
        forceTriggerButton->setObjectName(QStringLiteral("forceTriggerButton"));
        forceTriggerButton->setGeometry(QRect(57, 50, 35, 35));
        QIcon icon17;
        icon17.addFile(QStringLiteral("../Desktop/CAEN-UI/Force.png"), QSize(), QIcon::Normal, QIcon::Off);
        forceTriggerButton->setIcon(icon17);
        forceTriggerButton->setIconSize(QSize(25, 25));
        forceTriggerButton->setFlat(false);
        sinfleTriggerButton = new QPushButton(groupBox);
        sinfleTriggerButton->setObjectName(QStringLiteral("sinfleTriggerButton"));
        sinfleTriggerButton->setGeometry(QRect(13, 50, 35, 35));
        QIcon icon18;
        icon18.addFile(QStringLiteral("../Desktop/CAEN-UI/Single.png"), QSize(), QIcon::Normal, QIcon::Off);
        sinfleTriggerButton->setIcon(icon18);
        sinfleTriggerButton->setIconSize(QSize(25, 25));
        sinfleTriggerButton->setFlat(false);

        horizontalLayout->addWidget(triggerSettingBox);

        channelsSettingBox = new QGroupBox(settingsBlock);
        channelsSettingBox->setObjectName(QStringLiteral("channelsSettingBox"));
        channelsSettingBox->setMinimumSize(QSize(895, 230));
        channelsSettingBox->setMaximumSize(QSize(880, 230));
        gridLayout = new QGridLayout(channelsSettingBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        WDFTabWidget = new QTabWidget(channelsSettingBox);
        WDFTabWidget->setObjectName(QStringLiteral("WDFTabWidget"));
        WDFTabWidget->setEnabled(true);
        WDFTabWidget->setTabPosition(QTabWidget::North);
        WDFTabWidget->setTabShape(QTabWidget::Rounded);
        WDFTabWidget->setIconSize(QSize(13, 13));
        WDFTabWidget->setElideMode(Qt::ElideLeft);
        WDFTabWidget->setUsesScrollButtons(true);
        WDFTabWidget->setDocumentMode(false);
        WDFTabWidget->setTabsClosable(false);
        WDFTabWidget->setMovable(false);
        WDF1Widget = new QWidget();
        WDF1Widget->setObjectName(QStringLiteral("WDF1Widget"));
        WDF1Widget->setEnabled(true);
        chanel0SettingsBox_1 = new QGroupBox(WDF1Widget);
        chanel0SettingsBox_1->setObjectName(QStringLiteral("chanel0SettingsBox_1"));
        chanel0SettingsBox_1->setEnabled(true);
        chanel0SettingsBox_1->setGeometry(QRect(110, 0, 90, 171));
        changeTriggerButton_1_0 = new QPushButton(chanel0SettingsBox_1);
        changeTriggerButton_1_0->setObjectName(QStringLiteral("changeTriggerButton_1_0"));
        changeTriggerButton_1_0->setGeometry(QRect(10, 15, 50, 24));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        changeTriggerButton_1_0->setPalette(palette);
        changeTriggerButton_1_0->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_1_0->setCheckable(false);
        changeTriggerButton_1_0->setChecked(false);
        changeTriggerButton_1_0->setAutoRepeat(false);
        changeTriggerButton_1_0->setAutoDefault(false);
        positionSpinBox_1_0 = new QSpinBox(chanel0SettingsBox_1);
        positionSpinBox_1_0->setObjectName(QStringLiteral("positionSpinBox_1_0"));
        positionSpinBox_1_0->setEnabled(false);
        positionSpinBox_1_0->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_1_0->setMaximumSize(QSize(50, 20));
        positionSpinBox_1_0->setMinimum(-500);
        positionSpinBox_1_0->setMaximum(500);
        thresholdSpinBox_1_0 = new QSpinBox(chanel0SettingsBox_1);
        thresholdSpinBox_1_0->setObjectName(QStringLiteral("thresholdSpinBox_1_0"));
        thresholdSpinBox_1_0->setEnabled(false);
        thresholdSpinBox_1_0->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_1_0->setMaximumSize(QSize(50, 20));
        thresholdSpinBox_1_0->setMinimum(-500);
        thresholdSpinBox_1_0->setMaximum(500);
        thresholdSpinBox_1_0->setValue(20);
        samplesSpinBox_1_0 = new QSpinBox(chanel0SettingsBox_1);
        samplesSpinBox_1_0->setObjectName(QStringLiteral("samplesSpinBox_1_0"));
        samplesSpinBox_1_0->setEnabled(false);
        samplesSpinBox_1_0->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_1_0->setMaximumSize(QSize(50, 20));
        samplesSpinBox_1_0->setValue(10);
        DACOffsetSpinBox_1_0 = new QSpinBox(chanel0SettingsBox_1);
        DACOffsetSpinBox_1_0->setObjectName(QStringLiteral("DACOffsetSpinBox_1_0"));
        DACOffsetSpinBox_1_0->setEnabled(false);
        DACOffsetSpinBox_1_0->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_1_0->setMaximumSize(QSize(50, 20));
        DACOffsetSpinBox_1_0->setMinimum(-500);
        DACOffsetSpinBox_1_0->setMaximum(500);
        scaleSpinBox_1_0 = new QComboBox(chanel0SettingsBox_1);
        scaleSpinBox_1_0->setObjectName(QStringLiteral("scaleSpinBox_1_0"));
        scaleSpinBox_1_0->setEnabled(false);
        scaleSpinBox_1_0->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_1_0->setMaximumSize(QSize(50, 20));
        scaleSpinBox_1_0->setEditable(true);
        positionResetButton_1_0 = new QPushButton(chanel0SettingsBox_1);
        positionResetButton_1_0->setObjectName(QStringLiteral("positionResetButton_1_0"));
        positionResetButton_1_0->setEnabled(false);
        positionResetButton_1_0->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_1_0->setMaximumSize(QSize(20, 20));
        positionResetButton_1_0->setIcon(icon12);
        DACOffsetResetButton_1_0 = new QPushButton(chanel0SettingsBox_1);
        DACOffsetResetButton_1_0->setObjectName(QStringLiteral("DACOffsetResetButton_1_0"));
        DACOffsetResetButton_1_0->setEnabled(false);
        DACOffsetResetButton_1_0->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_1_0->setMaximumSize(QSize(20, 20));
        DACOffsetResetButton_1_0->setIcon(icon12);
        channelIsDrawingButton_1_0 = new QPushButton(chanel0SettingsBox_1);
        channelIsDrawingButton_1_0->setObjectName(QStringLiteral("channelIsDrawingButton_1_0"));
        channelIsDrawingButton_1_0->setEnabled(false);
        channelIsDrawingButton_1_0->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_1_0->setMaximumSize(QSize(20, 20));
        channelIsDrawingButton_1_0->setIcon(icon13);
        channelIsDrawingButton_1_0->setCheckable(true);
        channelIsDrawingButton_1_0->setChecked(true);
        thresholdIsDrawingButton_1_0 = new QPushButton(chanel0SettingsBox_1);
        thresholdIsDrawingButton_1_0->setObjectName(QStringLiteral("thresholdIsDrawingButton_1_0"));
        thresholdIsDrawingButton_1_0->setEnabled(false);
        thresholdIsDrawingButton_1_0->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_1_0->setMaximumSize(QSize(20, 20));
        thresholdIsDrawingButton_1_0->setIcon(icon13);
        thresholdIsDrawingButton_1_0->setCheckable(true);
        thresholdIsDrawingButton_1_0->setChecked(false);
        blockSamplesButton_1_0 = new QPushButton(chanel0SettingsBox_1);
        blockSamplesButton_1_0->setObjectName(QStringLiteral("blockSamplesButton_1_0"));
        blockSamplesButton_1_0->setEnabled(false);
        blockSamplesButton_1_0->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_1_0->setMaximumSize(QSize(20, 20));
        QIcon icon19;
        icon19.addFile(QStringLiteral("../Desktop/CAEN-UI/Unlock.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon19.addFile(QStringLiteral("../Desktop/CAEN-UI/Lock.png"), QSize(), QIcon::Normal, QIcon::On);
        blockSamplesButton_1_0->setIcon(icon19);
        blockSamplesButton_1_0->setCheckable(true);
        blockSamplesButton_1_0->setChecked(true);
        channelLabelBox_1 = new QGroupBox(WDF1Widget);
        channelLabelBox_1->setObjectName(QStringLiteral("channelLabelBox_1"));
        channelLabelBox_1->setGeometry(QRect(0, 0, 105, 171));
        channelLabelBox_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        thresholdLabel_1 = new QLabel(channelLabelBox_1);
        thresholdLabel_1->setObjectName(QStringLiteral("thresholdLabel_1"));
        thresholdLabel_1->setGeometry(QRect(10, 70, 91, 20));
        thresholdLabel_1->setLayoutDirection(Qt::RightToLeft);
        thresholdLabel_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        samplesLabel_1 = new QLabel(channelLabelBox_1);
        samplesLabel_1->setObjectName(QStringLiteral("samplesLabel_1"));
        samplesLabel_1->setGeometry(QRect(10, 95, 91, 20));
        samplesLabel_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        positionLabel_1 = new QLabel(channelLabelBox_1);
        positionLabel_1->setObjectName(QStringLiteral("positionLabel_1"));
        positionLabel_1->setGeometry(QRect(10, 45, 91, 20));
        positionLabel_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        DACOffsetLabel_1 = new QLabel(channelLabelBox_1);
        DACOffsetLabel_1->setObjectName(QStringLiteral("DACOffsetLabel_1"));
        DACOffsetLabel_1->setGeometry(QRect(10, 120, 91, 20));
        DACOffsetLabel_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        scaleLabel_1 = new QLabel(channelLabelBox_1);
        scaleLabel_1->setObjectName(QStringLiteral("scaleLabel_1"));
        scaleLabel_1->setGeometry(QRect(10, 145, 91, 20));
        scaleLabel_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        statusLabel_1 = new QLabel(channelLabelBox_1);
        statusLabel_1->setObjectName(QStringLiteral("statusLabel_1"));
        statusLabel_1->setGeometry(QRect(10, 15, 91, 24));
        statusLabel_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        chanel1SettingsBox_1 = new QGroupBox(WDF1Widget);
        chanel1SettingsBox_1->setObjectName(QStringLiteral("chanel1SettingsBox_1"));
        chanel1SettingsBox_1->setGeometry(QRect(205, 0, 90, 171));
        changeTriggerButton_1_1 = new QPushButton(chanel1SettingsBox_1);
        changeTriggerButton_1_1->setObjectName(QStringLiteral("changeTriggerButton_1_1"));
        changeTriggerButton_1_1->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_1_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_1_1->setCheckable(false);
        changeTriggerButton_1_1->setChecked(false);
        changeTriggerButton_1_1->setAutoRepeat(false);
        changeTriggerButton_1_1->setAutoDefault(false);
        positionSpinBox_1_1 = new QSpinBox(chanel1SettingsBox_1);
        positionSpinBox_1_1->setObjectName(QStringLiteral("positionSpinBox_1_1"));
        positionSpinBox_1_1->setEnabled(false);
        positionSpinBox_1_1->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_1_1->setMaximumSize(QSize(50, 20));
        positionSpinBox_1_1->setMinimum(-500);
        positionSpinBox_1_1->setMaximum(500);
        thresholdSpinBox_1_1 = new QSpinBox(chanel1SettingsBox_1);
        thresholdSpinBox_1_1->setObjectName(QStringLiteral("thresholdSpinBox_1_1"));
        thresholdSpinBox_1_1->setEnabled(false);
        thresholdSpinBox_1_1->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_1_1->setMaximumSize(QSize(50, 20));
        thresholdSpinBox_1_1->setMinimum(-500);
        thresholdSpinBox_1_1->setMaximum(500);
        thresholdSpinBox_1_1->setValue(20);
        samplesSpinBox_1_1 = new QSpinBox(chanel1SettingsBox_1);
        samplesSpinBox_1_1->setObjectName(QStringLiteral("samplesSpinBox_1_1"));
        samplesSpinBox_1_1->setEnabled(false);
        samplesSpinBox_1_1->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_1_1->setMaximumSize(QSize(50, 20));
        samplesSpinBox_1_1->setValue(10);
        DACOffsetSpinBox_1_1 = new QSpinBox(chanel1SettingsBox_1);
        DACOffsetSpinBox_1_1->setObjectName(QStringLiteral("DACOffsetSpinBox_1_1"));
        DACOffsetSpinBox_1_1->setEnabled(false);
        DACOffsetSpinBox_1_1->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_1_1->setMaximumSize(QSize(50, 20));
        DACOffsetSpinBox_1_1->setMinimum(-500);
        DACOffsetSpinBox_1_1->setMaximum(500);
        scaleSpinBox_1_1 = new QComboBox(chanel1SettingsBox_1);
        scaleSpinBox_1_1->setObjectName(QStringLiteral("scaleSpinBox_1_1"));
        scaleSpinBox_1_1->setEnabled(false);
        scaleSpinBox_1_1->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_1_1->setMaximumSize(QSize(50, 20));
        scaleSpinBox_1_1->setEditable(true);
        positionResetButton_1_1 = new QPushButton(chanel1SettingsBox_1);
        positionResetButton_1_1->setObjectName(QStringLiteral("positionResetButton_1_1"));
        positionResetButton_1_1->setEnabled(false);
        positionResetButton_1_1->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_1_1->setMaximumSize(QSize(20, 20));
        positionResetButton_1_1->setIcon(icon12);
        DACOffsetResetButton_1_1 = new QPushButton(chanel1SettingsBox_1);
        DACOffsetResetButton_1_1->setObjectName(QStringLiteral("DACOffsetResetButton_1_1"));
        DACOffsetResetButton_1_1->setEnabled(false);
        DACOffsetResetButton_1_1->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_1_1->setMaximumSize(QSize(20, 20));
        DACOffsetResetButton_1_1->setIcon(icon12);
        channelIsDrawingButton_1_1 = new QPushButton(chanel1SettingsBox_1);
        channelIsDrawingButton_1_1->setObjectName(QStringLiteral("channelIsDrawingButton_1_1"));
        channelIsDrawingButton_1_1->setEnabled(false);
        channelIsDrawingButton_1_1->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_1_1->setMaximumSize(QSize(20, 20));
        channelIsDrawingButton_1_1->setIcon(icon13);
        channelIsDrawingButton_1_1->setCheckable(true);
        channelIsDrawingButton_1_1->setChecked(true);
        thresholdIsDrawingButton_1_1 = new QPushButton(chanel1SettingsBox_1);
        thresholdIsDrawingButton_1_1->setObjectName(QStringLiteral("thresholdIsDrawingButton_1_1"));
        thresholdIsDrawingButton_1_1->setEnabled(false);
        thresholdIsDrawingButton_1_1->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_1_1->setMaximumSize(QSize(20, 20));
        thresholdIsDrawingButton_1_1->setIcon(icon13);
        thresholdIsDrawingButton_1_1->setCheckable(true);
        thresholdIsDrawingButton_1_1->setChecked(false);
        blockSamplesButton_1_1 = new QPushButton(chanel1SettingsBox_1);
        blockSamplesButton_1_1->setObjectName(QStringLiteral("blockSamplesButton_1_1"));
        blockSamplesButton_1_1->setEnabled(false);
        blockSamplesButton_1_1->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_1_1->setMaximumSize(QSize(20, 20));
        blockSamplesButton_1_1->setIcon(icon19);
        blockSamplesButton_1_1->setCheckable(true);
        blockSamplesButton_1_1->setChecked(true);
        chanel2SettingsBox_1 = new QGroupBox(WDF1Widget);
        chanel2SettingsBox_1->setObjectName(QStringLiteral("chanel2SettingsBox_1"));
        chanel2SettingsBox_1->setGeometry(QRect(300, 0, 90, 170));
        changeTriggerButton_1_2 = new QPushButton(chanel2SettingsBox_1);
        changeTriggerButton_1_2->setObjectName(QStringLiteral("changeTriggerButton_1_2"));
        changeTriggerButton_1_2->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_1_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_1_2->setCheckable(false);
        changeTriggerButton_1_2->setChecked(false);
        changeTriggerButton_1_2->setAutoRepeat(false);
        changeTriggerButton_1_2->setAutoDefault(false);
        positionSpinBox_1_2 = new QSpinBox(chanel2SettingsBox_1);
        positionSpinBox_1_2->setObjectName(QStringLiteral("positionSpinBox_1_2"));
        positionSpinBox_1_2->setEnabled(false);
        positionSpinBox_1_2->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_1_2->setMaximumSize(QSize(50, 20));
        positionSpinBox_1_2->setMinimum(-500);
        positionSpinBox_1_2->setMaximum(500);
        thresholdSpinBox_1_2 = new QSpinBox(chanel2SettingsBox_1);
        thresholdSpinBox_1_2->setObjectName(QStringLiteral("thresholdSpinBox_1_2"));
        thresholdSpinBox_1_2->setEnabled(false);
        thresholdSpinBox_1_2->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_1_2->setMaximumSize(QSize(50, 20));
        thresholdSpinBox_1_2->setMinimum(-500);
        thresholdSpinBox_1_2->setMaximum(500);
        thresholdSpinBox_1_2->setValue(20);
        samplesSpinBox_1_2 = new QSpinBox(chanel2SettingsBox_1);
        samplesSpinBox_1_2->setObjectName(QStringLiteral("samplesSpinBox_1_2"));
        samplesSpinBox_1_2->setEnabled(false);
        samplesSpinBox_1_2->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_1_2->setMaximumSize(QSize(50, 20));
        samplesSpinBox_1_2->setValue(10);
        DACOffsetSpinBox_1_2 = new QSpinBox(chanel2SettingsBox_1);
        DACOffsetSpinBox_1_2->setObjectName(QStringLiteral("DACOffsetSpinBox_1_2"));
        DACOffsetSpinBox_1_2->setEnabled(false);
        DACOffsetSpinBox_1_2->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_1_2->setMaximumSize(QSize(50, 20));
        DACOffsetSpinBox_1_2->setMinimum(-500);
        DACOffsetSpinBox_1_2->setMaximum(500);
        scaleSpinBox_1_2 = new QComboBox(chanel2SettingsBox_1);
        scaleSpinBox_1_2->setObjectName(QStringLiteral("scaleSpinBox_1_2"));
        scaleSpinBox_1_2->setEnabled(false);
        scaleSpinBox_1_2->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_1_2->setMaximumSize(QSize(50, 20));
        scaleSpinBox_1_2->setEditable(true);
        positionResetButton_1_2 = new QPushButton(chanel2SettingsBox_1);
        positionResetButton_1_2->setObjectName(QStringLiteral("positionResetButton_1_2"));
        positionResetButton_1_2->setEnabled(false);
        positionResetButton_1_2->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_1_2->setMaximumSize(QSize(20, 20));
        positionResetButton_1_2->setIcon(icon12);
        DACOffsetResetButton_1_2 = new QPushButton(chanel2SettingsBox_1);
        DACOffsetResetButton_1_2->setObjectName(QStringLiteral("DACOffsetResetButton_1_2"));
        DACOffsetResetButton_1_2->setEnabled(false);
        DACOffsetResetButton_1_2->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_1_2->setMaximumSize(QSize(20, 20));
        DACOffsetResetButton_1_2->setIcon(icon12);
        channelIsDrawingButton_1_2 = new QPushButton(chanel2SettingsBox_1);
        channelIsDrawingButton_1_2->setObjectName(QStringLiteral("channelIsDrawingButton_1_2"));
        channelIsDrawingButton_1_2->setEnabled(false);
        channelIsDrawingButton_1_2->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_1_2->setMaximumSize(QSize(20, 20));
        channelIsDrawingButton_1_2->setIcon(icon13);
        channelIsDrawingButton_1_2->setCheckable(true);
        channelIsDrawingButton_1_2->setChecked(true);
        thresholdIsDrawingButton_1_2 = new QPushButton(chanel2SettingsBox_1);
        thresholdIsDrawingButton_1_2->setObjectName(QStringLiteral("thresholdIsDrawingButton_1_2"));
        thresholdIsDrawingButton_1_2->setEnabled(false);
        thresholdIsDrawingButton_1_2->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_1_2->setMaximumSize(QSize(20, 20));
        thresholdIsDrawingButton_1_2->setIcon(icon13);
        thresholdIsDrawingButton_1_2->setCheckable(true);
        thresholdIsDrawingButton_1_2->setChecked(false);
        blockSamplesButton_1_2 = new QPushButton(chanel2SettingsBox_1);
        blockSamplesButton_1_2->setObjectName(QStringLiteral("blockSamplesButton_1_2"));
        blockSamplesButton_1_2->setEnabled(false);
        blockSamplesButton_1_2->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_1_2->setMaximumSize(QSize(20, 20));
        blockSamplesButton_1_2->setIcon(icon19);
        blockSamplesButton_1_2->setCheckable(true);
        blockSamplesButton_1_2->setChecked(true);
        chanel5SettingsBox_1 = new QGroupBox(WDF1Widget);
        chanel5SettingsBox_1->setObjectName(QStringLiteral("chanel5SettingsBox_1"));
        chanel5SettingsBox_1->setGeometry(QRect(585, 0, 90, 170));
        changeTriggerButton_1_5 = new QPushButton(chanel5SettingsBox_1);
        changeTriggerButton_1_5->setObjectName(QStringLiteral("changeTriggerButton_1_5"));
        changeTriggerButton_1_5->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_1_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_1_5->setCheckable(false);
        changeTriggerButton_1_5->setChecked(false);
        changeTriggerButton_1_5->setAutoRepeat(false);
        changeTriggerButton_1_5->setAutoDefault(false);
        positionSpinBox_1_5 = new QSpinBox(chanel5SettingsBox_1);
        positionSpinBox_1_5->setObjectName(QStringLiteral("positionSpinBox_1_5"));
        positionSpinBox_1_5->setEnabled(false);
        positionSpinBox_1_5->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_1_5->setMaximumSize(QSize(50, 20));
        positionSpinBox_1_5->setMinimum(-500);
        positionSpinBox_1_5->setMaximum(500);
        thresholdSpinBox_1_5 = new QSpinBox(chanel5SettingsBox_1);
        thresholdSpinBox_1_5->setObjectName(QStringLiteral("thresholdSpinBox_1_5"));
        thresholdSpinBox_1_5->setEnabled(false);
        thresholdSpinBox_1_5->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_1_5->setMaximumSize(QSize(50, 20));
        thresholdSpinBox_1_5->setMinimum(-500);
        thresholdSpinBox_1_5->setMaximum(500);
        thresholdSpinBox_1_5->setValue(20);
        samplesSpinBox_1_5 = new QSpinBox(chanel5SettingsBox_1);
        samplesSpinBox_1_5->setObjectName(QStringLiteral("samplesSpinBox_1_5"));
        samplesSpinBox_1_5->setEnabled(false);
        samplesSpinBox_1_5->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_1_5->setMaximumSize(QSize(50, 20));
        samplesSpinBox_1_5->setValue(10);
        DACOffsetSpinBox_1_5 = new QSpinBox(chanel5SettingsBox_1);
        DACOffsetSpinBox_1_5->setObjectName(QStringLiteral("DACOffsetSpinBox_1_5"));
        DACOffsetSpinBox_1_5->setEnabled(false);
        DACOffsetSpinBox_1_5->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_1_5->setMaximumSize(QSize(50, 20));
        DACOffsetSpinBox_1_5->setMinimum(-500);
        DACOffsetSpinBox_1_5->setMaximum(500);
        scaleSpinBox_1_5 = new QComboBox(chanel5SettingsBox_1);
        scaleSpinBox_1_5->setObjectName(QStringLiteral("scaleSpinBox_1_5"));
        scaleSpinBox_1_5->setEnabled(false);
        scaleSpinBox_1_5->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_1_5->setMaximumSize(QSize(50, 20));
        scaleSpinBox_1_5->setEditable(true);
        positionResetButton_1_5 = new QPushButton(chanel5SettingsBox_1);
        positionResetButton_1_5->setObjectName(QStringLiteral("positionResetButton_1_5"));
        positionResetButton_1_5->setEnabled(false);
        positionResetButton_1_5->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_1_5->setMaximumSize(QSize(20, 20));
        positionResetButton_1_5->setIcon(icon12);
        DACOffsetResetButton_1_5 = new QPushButton(chanel5SettingsBox_1);
        DACOffsetResetButton_1_5->setObjectName(QStringLiteral("DACOffsetResetButton_1_5"));
        DACOffsetResetButton_1_5->setEnabled(false);
        DACOffsetResetButton_1_5->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_1_5->setMaximumSize(QSize(20, 20));
        DACOffsetResetButton_1_5->setIcon(icon12);
        channelIsDrawingButton_1_5 = new QPushButton(chanel5SettingsBox_1);
        channelIsDrawingButton_1_5->setObjectName(QStringLiteral("channelIsDrawingButton_1_5"));
        channelIsDrawingButton_1_5->setEnabled(false);
        channelIsDrawingButton_1_5->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_1_5->setMaximumSize(QSize(20, 20));
        channelIsDrawingButton_1_5->setIcon(icon13);
        channelIsDrawingButton_1_5->setCheckable(true);
        channelIsDrawingButton_1_5->setChecked(true);
        thresholdIsDrawingButton_1_5 = new QPushButton(chanel5SettingsBox_1);
        thresholdIsDrawingButton_1_5->setObjectName(QStringLiteral("thresholdIsDrawingButton_1_5"));
        thresholdIsDrawingButton_1_5->setEnabled(false);
        thresholdIsDrawingButton_1_5->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_1_5->setMaximumSize(QSize(20, 20));
        thresholdIsDrawingButton_1_5->setIcon(icon13);
        thresholdIsDrawingButton_1_5->setCheckable(true);
        thresholdIsDrawingButton_1_5->setChecked(false);
        blockSamplesButton_1_5 = new QPushButton(chanel5SettingsBox_1);
        blockSamplesButton_1_5->setObjectName(QStringLiteral("blockSamplesButton_1_5"));
        blockSamplesButton_1_5->setEnabled(false);
        blockSamplesButton_1_5->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_1_5->setMaximumSize(QSize(20, 20));
        blockSamplesButton_1_5->setIcon(icon19);
        blockSamplesButton_1_5->setCheckable(true);
        blockSamplesButton_1_5->setChecked(true);
        chanel4SettingsBox_1 = new QGroupBox(WDF1Widget);
        chanel4SettingsBox_1->setObjectName(QStringLiteral("chanel4SettingsBox_1"));
        chanel4SettingsBox_1->setGeometry(QRect(490, 0, 90, 170));
        changeTriggerButton_1_4 = new QPushButton(chanel4SettingsBox_1);
        changeTriggerButton_1_4->setObjectName(QStringLiteral("changeTriggerButton_1_4"));
        changeTriggerButton_1_4->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_1_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_1_4->setCheckable(false);
        changeTriggerButton_1_4->setChecked(false);
        changeTriggerButton_1_4->setAutoRepeat(false);
        changeTriggerButton_1_4->setAutoDefault(false);
        positionSpinBox_1_4 = new QSpinBox(chanel4SettingsBox_1);
        positionSpinBox_1_4->setObjectName(QStringLiteral("positionSpinBox_1_4"));
        positionSpinBox_1_4->setEnabled(false);
        positionSpinBox_1_4->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_1_4->setMaximumSize(QSize(50, 20));
        positionSpinBox_1_4->setMinimum(-500);
        positionSpinBox_1_4->setMaximum(500);
        thresholdSpinBox_1_4 = new QSpinBox(chanel4SettingsBox_1);
        thresholdSpinBox_1_4->setObjectName(QStringLiteral("thresholdSpinBox_1_4"));
        thresholdSpinBox_1_4->setEnabled(false);
        thresholdSpinBox_1_4->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_1_4->setMaximumSize(QSize(50, 20));
        thresholdSpinBox_1_4->setMinimum(-500);
        thresholdSpinBox_1_4->setMaximum(500);
        thresholdSpinBox_1_4->setValue(20);
        samplesSpinBox_1_4 = new QSpinBox(chanel4SettingsBox_1);
        samplesSpinBox_1_4->setObjectName(QStringLiteral("samplesSpinBox_1_4"));
        samplesSpinBox_1_4->setEnabled(false);
        samplesSpinBox_1_4->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_1_4->setMaximumSize(QSize(50, 20));
        samplesSpinBox_1_4->setValue(10);
        DACOffsetSpinBox_1_4 = new QSpinBox(chanel4SettingsBox_1);
        DACOffsetSpinBox_1_4->setObjectName(QStringLiteral("DACOffsetSpinBox_1_4"));
        DACOffsetSpinBox_1_4->setEnabled(false);
        DACOffsetSpinBox_1_4->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_1_4->setMaximumSize(QSize(50, 20));
        DACOffsetSpinBox_1_4->setMinimum(-500);
        DACOffsetSpinBox_1_4->setMaximum(500);
        scaleSpinBox_1_4 = new QComboBox(chanel4SettingsBox_1);
        scaleSpinBox_1_4->setObjectName(QStringLiteral("scaleSpinBox_1_4"));
        scaleSpinBox_1_4->setEnabled(false);
        scaleSpinBox_1_4->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_1_4->setMaximumSize(QSize(50, 20));
        scaleSpinBox_1_4->setEditable(true);
        positionResetButton_1_4 = new QPushButton(chanel4SettingsBox_1);
        positionResetButton_1_4->setObjectName(QStringLiteral("positionResetButton_1_4"));
        positionResetButton_1_4->setEnabled(false);
        positionResetButton_1_4->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_1_4->setMaximumSize(QSize(20, 20));
        positionResetButton_1_4->setIcon(icon12);
        DACOffsetResetButton_1_4 = new QPushButton(chanel4SettingsBox_1);
        DACOffsetResetButton_1_4->setObjectName(QStringLiteral("DACOffsetResetButton_1_4"));
        DACOffsetResetButton_1_4->setEnabled(false);
        DACOffsetResetButton_1_4->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_1_4->setMaximumSize(QSize(20, 20));
        DACOffsetResetButton_1_4->setIcon(icon12);
        channelIsDrawingButton_1_4 = new QPushButton(chanel4SettingsBox_1);
        channelIsDrawingButton_1_4->setObjectName(QStringLiteral("channelIsDrawingButton_1_4"));
        channelIsDrawingButton_1_4->setEnabled(false);
        channelIsDrawingButton_1_4->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_1_4->setMaximumSize(QSize(20, 20));
        channelIsDrawingButton_1_4->setIcon(icon13);
        channelIsDrawingButton_1_4->setCheckable(true);
        channelIsDrawingButton_1_4->setChecked(true);
        thresholdIsDrawingButton_1_4 = new QPushButton(chanel4SettingsBox_1);
        thresholdIsDrawingButton_1_4->setObjectName(QStringLiteral("thresholdIsDrawingButton_1_4"));
        thresholdIsDrawingButton_1_4->setEnabled(false);
        thresholdIsDrawingButton_1_4->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_1_4->setMaximumSize(QSize(20, 20));
        thresholdIsDrawingButton_1_4->setIcon(icon13);
        thresholdIsDrawingButton_1_4->setCheckable(true);
        thresholdIsDrawingButton_1_4->setChecked(false);
        blockSamplesButton_1_4 = new QPushButton(chanel4SettingsBox_1);
        blockSamplesButton_1_4->setObjectName(QStringLiteral("blockSamplesButton_1_4"));
        blockSamplesButton_1_4->setEnabled(false);
        blockSamplesButton_1_4->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_1_4->setMaximumSize(QSize(20, 20));
        blockSamplesButton_1_4->setIcon(icon19);
        blockSamplesButton_1_4->setCheckable(true);
        blockSamplesButton_1_4->setChecked(true);
        chanel3SettingsBox_1 = new QGroupBox(WDF1Widget);
        chanel3SettingsBox_1->setObjectName(QStringLiteral("chanel3SettingsBox_1"));
        chanel3SettingsBox_1->setGeometry(QRect(395, 0, 90, 170));
        changeTriggerButton_1_3 = new QPushButton(chanel3SettingsBox_1);
        changeTriggerButton_1_3->setObjectName(QStringLiteral("changeTriggerButton_1_3"));
        changeTriggerButton_1_3->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_1_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_1_3->setCheckable(false);
        changeTriggerButton_1_3->setChecked(false);
        changeTriggerButton_1_3->setAutoRepeat(false);
        changeTriggerButton_1_3->setAutoDefault(false);
        positionSpinBox_1_3 = new QSpinBox(chanel3SettingsBox_1);
        positionSpinBox_1_3->setObjectName(QStringLiteral("positionSpinBox_1_3"));
        positionSpinBox_1_3->setEnabled(false);
        positionSpinBox_1_3->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_1_3->setMaximumSize(QSize(50, 20));
        positionSpinBox_1_3->setMinimum(-500);
        positionSpinBox_1_3->setMaximum(500);
        thresholdSpinBox_1_3 = new QSpinBox(chanel3SettingsBox_1);
        thresholdSpinBox_1_3->setObjectName(QStringLiteral("thresholdSpinBox_1_3"));
        thresholdSpinBox_1_3->setEnabled(false);
        thresholdSpinBox_1_3->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_1_3->setMaximumSize(QSize(50, 20));
        thresholdSpinBox_1_3->setMinimum(-500);
        thresholdSpinBox_1_3->setMaximum(500);
        thresholdSpinBox_1_3->setValue(20);
        samplesSpinBox_1_3 = new QSpinBox(chanel3SettingsBox_1);
        samplesSpinBox_1_3->setObjectName(QStringLiteral("samplesSpinBox_1_3"));
        samplesSpinBox_1_3->setEnabled(false);
        samplesSpinBox_1_3->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_1_3->setMaximumSize(QSize(50, 20));
        samplesSpinBox_1_3->setValue(10);
        DACOffsetSpinBox_1_3 = new QSpinBox(chanel3SettingsBox_1);
        DACOffsetSpinBox_1_3->setObjectName(QStringLiteral("DACOffsetSpinBox_1_3"));
        DACOffsetSpinBox_1_3->setEnabled(false);
        DACOffsetSpinBox_1_3->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_1_3->setMaximumSize(QSize(50, 20));
        DACOffsetSpinBox_1_3->setMinimum(-500);
        DACOffsetSpinBox_1_3->setMaximum(500);
        scaleSpinBox_1_3 = new QComboBox(chanel3SettingsBox_1);
        scaleSpinBox_1_3->setObjectName(QStringLiteral("scaleSpinBox_1_3"));
        scaleSpinBox_1_3->setEnabled(false);
        scaleSpinBox_1_3->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_1_3->setMaximumSize(QSize(50, 20));
        scaleSpinBox_1_3->setEditable(true);
        positionResetButton_1_3 = new QPushButton(chanel3SettingsBox_1);
        positionResetButton_1_3->setObjectName(QStringLiteral("positionResetButton_1_3"));
        positionResetButton_1_3->setEnabled(false);
        positionResetButton_1_3->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_1_3->setMaximumSize(QSize(20, 20));
        positionResetButton_1_3->setIcon(icon12);
        DACOffsetResetButton_1_3 = new QPushButton(chanel3SettingsBox_1);
        DACOffsetResetButton_1_3->setObjectName(QStringLiteral("DACOffsetResetButton_1_3"));
        DACOffsetResetButton_1_3->setEnabled(false);
        DACOffsetResetButton_1_3->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_1_3->setMaximumSize(QSize(20, 20));
        DACOffsetResetButton_1_3->setIcon(icon12);
        channelIsDrawingButton_1_3 = new QPushButton(chanel3SettingsBox_1);
        channelIsDrawingButton_1_3->setObjectName(QStringLiteral("channelIsDrawingButton_1_3"));
        channelIsDrawingButton_1_3->setEnabled(false);
        channelIsDrawingButton_1_3->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_1_3->setMaximumSize(QSize(20, 20));
        channelIsDrawingButton_1_3->setIcon(icon13);
        channelIsDrawingButton_1_3->setCheckable(true);
        channelIsDrawingButton_1_3->setChecked(true);
        thresholdIsDrawingButton_1_3 = new QPushButton(chanel3SettingsBox_1);
        thresholdIsDrawingButton_1_3->setObjectName(QStringLiteral("thresholdIsDrawingButton_1_3"));
        thresholdIsDrawingButton_1_3->setEnabled(false);
        thresholdIsDrawingButton_1_3->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_1_3->setMaximumSize(QSize(20, 20));
        thresholdIsDrawingButton_1_3->setIcon(icon13);
        thresholdIsDrawingButton_1_3->setCheckable(true);
        thresholdIsDrawingButton_1_3->setChecked(false);
        blockSamplesButton_1_3 = new QPushButton(chanel3SettingsBox_1);
        blockSamplesButton_1_3->setObjectName(QStringLiteral("blockSamplesButton_1_3"));
        blockSamplesButton_1_3->setEnabled(false);
        blockSamplesButton_1_3->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_1_3->setMaximumSize(QSize(20, 20));
        blockSamplesButton_1_3->setIcon(icon19);
        blockSamplesButton_1_3->setCheckable(true);
        blockSamplesButton_1_3->setChecked(true);
        chanel7SettingsBox_1 = new QGroupBox(WDF1Widget);
        chanel7SettingsBox_1->setObjectName(QStringLiteral("chanel7SettingsBox_1"));
        chanel7SettingsBox_1->setGeometry(QRect(775, 0, 90, 171));
        changeTriggerButton_1_7 = new QPushButton(chanel7SettingsBox_1);
        changeTriggerButton_1_7->setObjectName(QStringLiteral("changeTriggerButton_1_7"));
        changeTriggerButton_1_7->setEnabled(true);
        changeTriggerButton_1_7->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_1_7->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_1_7->setCheckable(false);
        changeTriggerButton_1_7->setChecked(false);
        changeTriggerButton_1_7->setAutoRepeat(false);
        changeTriggerButton_1_7->setAutoDefault(false);
        positionSpinBox_1_7 = new QSpinBox(chanel7SettingsBox_1);
        positionSpinBox_1_7->setObjectName(QStringLiteral("positionSpinBox_1_7"));
        positionSpinBox_1_7->setEnabled(false);
        positionSpinBox_1_7->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_1_7->setMaximumSize(QSize(50, 20));
        positionSpinBox_1_7->setMinimum(-500);
        positionSpinBox_1_7->setMaximum(500);
        thresholdSpinBox_1_7 = new QSpinBox(chanel7SettingsBox_1);
        thresholdSpinBox_1_7->setObjectName(QStringLiteral("thresholdSpinBox_1_7"));
        thresholdSpinBox_1_7->setEnabled(false);
        thresholdSpinBox_1_7->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_1_7->setMaximumSize(QSize(50, 20));
        thresholdSpinBox_1_7->setMinimum(-500);
        thresholdSpinBox_1_7->setMaximum(500);
        thresholdSpinBox_1_7->setValue(20);
        samplesSpinBox_1_7 = new QSpinBox(chanel7SettingsBox_1);
        samplesSpinBox_1_7->setObjectName(QStringLiteral("samplesSpinBox_1_7"));
        samplesSpinBox_1_7->setEnabled(false);
        samplesSpinBox_1_7->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_1_7->setMaximumSize(QSize(50, 20));
        samplesSpinBox_1_7->setValue(10);
        DACOffsetSpinBox_1_7 = new QSpinBox(chanel7SettingsBox_1);
        DACOffsetSpinBox_1_7->setObjectName(QStringLiteral("DACOffsetSpinBox_1_7"));
        DACOffsetSpinBox_1_7->setEnabled(false);
        DACOffsetSpinBox_1_7->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_1_7->setMaximumSize(QSize(50, 20));
        DACOffsetSpinBox_1_7->setMinimum(-500);
        DACOffsetSpinBox_1_7->setMaximum(500);
        scaleSpinBox_1_7 = new QComboBox(chanel7SettingsBox_1);
        scaleSpinBox_1_7->setObjectName(QStringLiteral("scaleSpinBox_1_7"));
        scaleSpinBox_1_7->setEnabled(false);
        scaleSpinBox_1_7->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_1_7->setMaximumSize(QSize(50, 20));
        scaleSpinBox_1_7->setEditable(true);
        positionResetButton_1_7 = new QPushButton(chanel7SettingsBox_1);
        positionResetButton_1_7->setObjectName(QStringLiteral("positionResetButton_1_7"));
        positionResetButton_1_7->setEnabled(false);
        positionResetButton_1_7->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_1_7->setMaximumSize(QSize(20, 20));
        positionResetButton_1_7->setIcon(icon12);
        DACOffsetResetButton_1_7 = new QPushButton(chanel7SettingsBox_1);
        DACOffsetResetButton_1_7->setObjectName(QStringLiteral("DACOffsetResetButton_1_7"));
        DACOffsetResetButton_1_7->setEnabled(false);
        DACOffsetResetButton_1_7->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_1_7->setMaximumSize(QSize(20, 20));
        DACOffsetResetButton_1_7->setIcon(icon12);
        channelIsDrawingButton_1_7 = new QPushButton(chanel7SettingsBox_1);
        channelIsDrawingButton_1_7->setObjectName(QStringLiteral("channelIsDrawingButton_1_7"));
        channelIsDrawingButton_1_7->setEnabled(false);
        channelIsDrawingButton_1_7->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_1_7->setMaximumSize(QSize(20, 20));
        channelIsDrawingButton_1_7->setIcon(icon13);
        channelIsDrawingButton_1_7->setCheckable(true);
        channelIsDrawingButton_1_7->setChecked(true);
        thresholdIsDrawingButton_1_7 = new QPushButton(chanel7SettingsBox_1);
        thresholdIsDrawingButton_1_7->setObjectName(QStringLiteral("thresholdIsDrawingButton_1_7"));
        thresholdIsDrawingButton_1_7->setEnabled(false);
        thresholdIsDrawingButton_1_7->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_1_7->setMaximumSize(QSize(20, 20));
        thresholdIsDrawingButton_1_7->setIcon(icon13);
        thresholdIsDrawingButton_1_7->setCheckable(true);
        thresholdIsDrawingButton_1_7->setChecked(false);
        blockSamplesButton_1_7 = new QPushButton(chanel7SettingsBox_1);
        blockSamplesButton_1_7->setObjectName(QStringLiteral("blockSamplesButton_1_7"));
        blockSamplesButton_1_7->setEnabled(false);
        blockSamplesButton_1_7->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_1_7->setMaximumSize(QSize(20, 20));
        blockSamplesButton_1_7->setIcon(icon19);
        blockSamplesButton_1_7->setCheckable(true);
        blockSamplesButton_1_7->setChecked(true);
        chanel6SettingsBox_1 = new QGroupBox(WDF1Widget);
        chanel6SettingsBox_1->setObjectName(QStringLiteral("chanel6SettingsBox_1"));
        chanel6SettingsBox_1->setGeometry(QRect(680, 0, 90, 170));
        changeTriggerButton_1_6 = new QPushButton(chanel6SettingsBox_1);
        changeTriggerButton_1_6->setObjectName(QStringLiteral("changeTriggerButton_1_6"));
        changeTriggerButton_1_6->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_1_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_1_6->setCheckable(false);
        changeTriggerButton_1_6->setChecked(false);
        changeTriggerButton_1_6->setAutoRepeat(false);
        changeTriggerButton_1_6->setAutoDefault(false);
        positionSpinBox_1_6 = new QSpinBox(chanel6SettingsBox_1);
        positionSpinBox_1_6->setObjectName(QStringLiteral("positionSpinBox_1_6"));
        positionSpinBox_1_6->setEnabled(false);
        positionSpinBox_1_6->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_1_6->setMaximumSize(QSize(50, 20));
        positionSpinBox_1_6->setMinimum(-500);
        positionSpinBox_1_6->setMaximum(500);
        thresholdSpinBox_1_6 = new QSpinBox(chanel6SettingsBox_1);
        thresholdSpinBox_1_6->setObjectName(QStringLiteral("thresholdSpinBox_1_6"));
        thresholdSpinBox_1_6->setEnabled(false);
        thresholdSpinBox_1_6->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_1_6->setMaximumSize(QSize(50, 20));
        thresholdSpinBox_1_6->setMinimum(-500);
        thresholdSpinBox_1_6->setMaximum(500);
        thresholdSpinBox_1_6->setValue(20);
        samplesSpinBox_1_6 = new QSpinBox(chanel6SettingsBox_1);
        samplesSpinBox_1_6->setObjectName(QStringLiteral("samplesSpinBox_1_6"));
        samplesSpinBox_1_6->setEnabled(false);
        samplesSpinBox_1_6->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_1_6->setMaximumSize(QSize(50, 20));
        samplesSpinBox_1_6->setValue(10);
        DACOffsetSpinBox_1_6 = new QSpinBox(chanel6SettingsBox_1);
        DACOffsetSpinBox_1_6->setObjectName(QStringLiteral("DACOffsetSpinBox_1_6"));
        DACOffsetSpinBox_1_6->setEnabled(false);
        DACOffsetSpinBox_1_6->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_1_6->setMaximumSize(QSize(50, 20));
        DACOffsetSpinBox_1_6->setMinimum(-500);
        DACOffsetSpinBox_1_6->setMaximum(500);
        scaleSpinBox_1_6 = new QComboBox(chanel6SettingsBox_1);
        scaleSpinBox_1_6->setObjectName(QStringLiteral("scaleSpinBox_1_6"));
        scaleSpinBox_1_6->setEnabled(false);
        scaleSpinBox_1_6->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_1_6->setMaximumSize(QSize(50, 20));
        scaleSpinBox_1_6->setEditable(true);
        positionResetButton_1_6 = new QPushButton(chanel6SettingsBox_1);
        positionResetButton_1_6->setObjectName(QStringLiteral("positionResetButton_1_6"));
        positionResetButton_1_6->setEnabled(false);
        positionResetButton_1_6->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_1_6->setMaximumSize(QSize(20, 20));
        positionResetButton_1_6->setIcon(icon12);
        DACOffsetResetButton_1_6 = new QPushButton(chanel6SettingsBox_1);
        DACOffsetResetButton_1_6->setObjectName(QStringLiteral("DACOffsetResetButton_1_6"));
        DACOffsetResetButton_1_6->setEnabled(false);
        DACOffsetResetButton_1_6->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_1_6->setMaximumSize(QSize(20, 20));
        DACOffsetResetButton_1_6->setIcon(icon12);
        channelIsDrawingButton_1_6 = new QPushButton(chanel6SettingsBox_1);
        channelIsDrawingButton_1_6->setObjectName(QStringLiteral("channelIsDrawingButton_1_6"));
        channelIsDrawingButton_1_6->setEnabled(false);
        channelIsDrawingButton_1_6->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_1_6->setMaximumSize(QSize(20, 20));
        channelIsDrawingButton_1_6->setIcon(icon13);
        channelIsDrawingButton_1_6->setCheckable(true);
        channelIsDrawingButton_1_6->setChecked(true);
        thresholdIsDrawingButton_1_6 = new QPushButton(chanel6SettingsBox_1);
        thresholdIsDrawingButton_1_6->setObjectName(QStringLiteral("thresholdIsDrawingButton_1_6"));
        thresholdIsDrawingButton_1_6->setEnabled(false);
        thresholdIsDrawingButton_1_6->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_1_6->setMaximumSize(QSize(20, 20));
        thresholdIsDrawingButton_1_6->setIcon(icon13);
        thresholdIsDrawingButton_1_6->setCheckable(true);
        thresholdIsDrawingButton_1_6->setChecked(false);
        blockSamplesButton_1_6 = new QPushButton(chanel6SettingsBox_1);
        blockSamplesButton_1_6->setObjectName(QStringLiteral("blockSamplesButton_1_6"));
        blockSamplesButton_1_6->setEnabled(false);
        blockSamplesButton_1_6->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_1_6->setMaximumSize(QSize(20, 20));
        blockSamplesButton_1_6->setIcon(icon19);
        blockSamplesButton_1_6->setCheckable(true);
        blockSamplesButton_1_6->setChecked(true);
        QIcon icon20;
        icon20.addFile(QStringLiteral("../Desktop/CAEN-UI/used.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon20.addFile(QStringLiteral("../Desktop/CAEN-UI/unused.png"), QSize(), QIcon::Disabled, QIcon::Off);
        WDFTabWidget->addTab(WDF1Widget, icon20, QString());
        WDF2Widget = new QWidget();
        WDF2Widget->setObjectName(QStringLiteral("WDF2Widget"));
        chanel2SettingsBox_2 = new QGroupBox(WDF2Widget);
        chanel2SettingsBox_2->setObjectName(QStringLiteral("chanel2SettingsBox_2"));
        chanel2SettingsBox_2->setGeometry(QRect(300, 0, 90, 170));
        changeTriggerButton_2_2 = new QPushButton(chanel2SettingsBox_2);
        changeTriggerButton_2_2->setObjectName(QStringLiteral("changeTriggerButton_2_2"));
        changeTriggerButton_2_2->setEnabled(true);
        changeTriggerButton_2_2->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_2_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_2_2->setCheckable(false);
        changeTriggerButton_2_2->setChecked(false);
        changeTriggerButton_2_2->setAutoRepeat(false);
        changeTriggerButton_2_2->setAutoDefault(false);
        positionSpinBox_2_2 = new QSpinBox(chanel2SettingsBox_2);
        positionSpinBox_2_2->setObjectName(QStringLiteral("positionSpinBox_2_2"));
        positionSpinBox_2_2->setEnabled(false);
        positionSpinBox_2_2->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_2_2->setMinimum(-500);
        positionSpinBox_2_2->setMaximum(500);
        thresholdSpinBox_2_2 = new QSpinBox(chanel2SettingsBox_2);
        thresholdSpinBox_2_2->setObjectName(QStringLiteral("thresholdSpinBox_2_2"));
        thresholdSpinBox_2_2->setEnabled(false);
        thresholdSpinBox_2_2->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_2_2->setMinimum(-500);
        thresholdSpinBox_2_2->setMaximum(500);
        thresholdSpinBox_2_2->setValue(20);
        samplesSpinBox_2_2 = new QSpinBox(chanel2SettingsBox_2);
        samplesSpinBox_2_2->setObjectName(QStringLiteral("samplesSpinBox_2_2"));
        samplesSpinBox_2_2->setEnabled(false);
        samplesSpinBox_2_2->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_2_2->setValue(10);
        DACOffsetSpinBox_2_2 = new QSpinBox(chanel2SettingsBox_2);
        DACOffsetSpinBox_2_2->setObjectName(QStringLiteral("DACOffsetSpinBox_2_2"));
        DACOffsetSpinBox_2_2->setEnabled(false);
        DACOffsetSpinBox_2_2->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_2_2->setMinimum(-500);
        DACOffsetSpinBox_2_2->setMaximum(500);
        scaleSpinBox_2_2 = new QComboBox(chanel2SettingsBox_2);
        scaleSpinBox_2_2->setObjectName(QStringLiteral("scaleSpinBox_2_2"));
        scaleSpinBox_2_2->setEnabled(false);
        scaleSpinBox_2_2->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_2_2->setEditable(true);
        positionResetButton_2_2 = new QPushButton(chanel2SettingsBox_2);
        positionResetButton_2_2->setObjectName(QStringLiteral("positionResetButton_2_2"));
        positionResetButton_2_2->setEnabled(false);
        positionResetButton_2_2->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_2_2->setIcon(icon12);
        DACOffsetResetButton_2_2 = new QPushButton(chanel2SettingsBox_2);
        DACOffsetResetButton_2_2->setObjectName(QStringLiteral("DACOffsetResetButton_2_2"));
        DACOffsetResetButton_2_2->setEnabled(false);
        DACOffsetResetButton_2_2->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_2_2->setIcon(icon12);
        channelIsDrawingButton_2_2 = new QPushButton(chanel2SettingsBox_2);
        channelIsDrawingButton_2_2->setObjectName(QStringLiteral("channelIsDrawingButton_2_2"));
        channelIsDrawingButton_2_2->setEnabled(false);
        channelIsDrawingButton_2_2->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_2_2->setIcon(icon13);
        channelIsDrawingButton_2_2->setCheckable(true);
        channelIsDrawingButton_2_2->setChecked(true);
        thresholdIsDrawingButton_2_2 = new QPushButton(chanel2SettingsBox_2);
        thresholdIsDrawingButton_2_2->setObjectName(QStringLiteral("thresholdIsDrawingButton_2_2"));
        thresholdIsDrawingButton_2_2->setEnabled(false);
        thresholdIsDrawingButton_2_2->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_2_2->setIcon(icon13);
        thresholdIsDrawingButton_2_2->setCheckable(true);
        thresholdIsDrawingButton_2_2->setChecked(false);
        blockSamplesButton_2_2 = new QPushButton(chanel2SettingsBox_2);
        blockSamplesButton_2_2->setObjectName(QStringLiteral("blockSamplesButton_2_2"));
        blockSamplesButton_2_2->setEnabled(false);
        blockSamplesButton_2_2->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_2_2->setIcon(icon19);
        blockSamplesButton_2_2->setCheckable(true);
        blockSamplesButton_2_2->setChecked(true);
        chanel6SettingsBox_2 = new QGroupBox(WDF2Widget);
        chanel6SettingsBox_2->setObjectName(QStringLiteral("chanel6SettingsBox_2"));
        chanel6SettingsBox_2->setGeometry(QRect(680, 0, 90, 170));
        changeTriggerButton_2_6 = new QPushButton(chanel6SettingsBox_2);
        changeTriggerButton_2_6->setObjectName(QStringLiteral("changeTriggerButton_2_6"));
        changeTriggerButton_2_6->setEnabled(true);
        changeTriggerButton_2_6->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_2_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_2_6->setCheckable(false);
        changeTriggerButton_2_6->setChecked(false);
        changeTriggerButton_2_6->setAutoRepeat(false);
        changeTriggerButton_2_6->setAutoDefault(false);
        positionSpinBox_2_6 = new QSpinBox(chanel6SettingsBox_2);
        positionSpinBox_2_6->setObjectName(QStringLiteral("positionSpinBox_2_6"));
        positionSpinBox_2_6->setEnabled(false);
        positionSpinBox_2_6->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_2_6->setMinimum(-500);
        positionSpinBox_2_6->setMaximum(500);
        thresholdSpinBox_2_6 = new QSpinBox(chanel6SettingsBox_2);
        thresholdSpinBox_2_6->setObjectName(QStringLiteral("thresholdSpinBox_2_6"));
        thresholdSpinBox_2_6->setEnabled(false);
        thresholdSpinBox_2_6->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_2_6->setMinimum(-500);
        thresholdSpinBox_2_6->setMaximum(500);
        thresholdSpinBox_2_6->setValue(20);
        samplesSpinBox_2_6 = new QSpinBox(chanel6SettingsBox_2);
        samplesSpinBox_2_6->setObjectName(QStringLiteral("samplesSpinBox_2_6"));
        samplesSpinBox_2_6->setEnabled(false);
        samplesSpinBox_2_6->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_2_6->setValue(10);
        DACOffsetSpinBox_2_6 = new QSpinBox(chanel6SettingsBox_2);
        DACOffsetSpinBox_2_6->setObjectName(QStringLiteral("DACOffsetSpinBox_2_6"));
        DACOffsetSpinBox_2_6->setEnabled(false);
        DACOffsetSpinBox_2_6->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_2_6->setMinimum(-500);
        DACOffsetSpinBox_2_6->setMaximum(500);
        scaleSpinBox_2_6 = new QComboBox(chanel6SettingsBox_2);
        scaleSpinBox_2_6->setObjectName(QStringLiteral("scaleSpinBox_2_6"));
        scaleSpinBox_2_6->setEnabled(false);
        scaleSpinBox_2_6->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_2_6->setEditable(true);
        positionResetButton_2_6 = new QPushButton(chanel6SettingsBox_2);
        positionResetButton_2_6->setObjectName(QStringLiteral("positionResetButton_2_6"));
        positionResetButton_2_6->setEnabled(false);
        positionResetButton_2_6->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_2_6->setIcon(icon12);
        DACOffsetResetButton_2_6 = new QPushButton(chanel6SettingsBox_2);
        DACOffsetResetButton_2_6->setObjectName(QStringLiteral("DACOffsetResetButton_2_6"));
        DACOffsetResetButton_2_6->setEnabled(false);
        DACOffsetResetButton_2_6->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_2_6->setIcon(icon12);
        channelIsDrawingButton_2_6 = new QPushButton(chanel6SettingsBox_2);
        channelIsDrawingButton_2_6->setObjectName(QStringLiteral("channelIsDrawingButton_2_6"));
        channelIsDrawingButton_2_6->setEnabled(false);
        channelIsDrawingButton_2_6->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_2_6->setIcon(icon13);
        channelIsDrawingButton_2_6->setCheckable(true);
        channelIsDrawingButton_2_6->setChecked(true);
        thresholdIsDrawingButton_2_6 = new QPushButton(chanel6SettingsBox_2);
        thresholdIsDrawingButton_2_6->setObjectName(QStringLiteral("thresholdIsDrawingButton_2_6"));
        thresholdIsDrawingButton_2_6->setEnabled(false);
        thresholdIsDrawingButton_2_6->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_2_6->setIcon(icon13);
        thresholdIsDrawingButton_2_6->setCheckable(true);
        thresholdIsDrawingButton_2_6->setChecked(false);
        blockSamplesButton_2_6 = new QPushButton(chanel6SettingsBox_2);
        blockSamplesButton_2_6->setObjectName(QStringLiteral("blockSamplesButton_2_6"));
        blockSamplesButton_2_6->setEnabled(false);
        blockSamplesButton_2_6->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_2_6->setIcon(icon19);
        blockSamplesButton_2_6->setCheckable(true);
        blockSamplesButton_2_6->setChecked(true);
        chanel5SettingsBox_2 = new QGroupBox(WDF2Widget);
        chanel5SettingsBox_2->setObjectName(QStringLiteral("chanel5SettingsBox_2"));
        chanel5SettingsBox_2->setGeometry(QRect(585, 0, 90, 170));
        changeTriggerButton_2_5 = new QPushButton(chanel5SettingsBox_2);
        changeTriggerButton_2_5->setObjectName(QStringLiteral("changeTriggerButton_2_5"));
        changeTriggerButton_2_5->setEnabled(true);
        changeTriggerButton_2_5->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_2_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_2_5->setCheckable(false);
        changeTriggerButton_2_5->setChecked(false);
        changeTriggerButton_2_5->setAutoRepeat(false);
        changeTriggerButton_2_5->setAutoDefault(false);
        positionSpinBox_2_5 = new QSpinBox(chanel5SettingsBox_2);
        positionSpinBox_2_5->setObjectName(QStringLiteral("positionSpinBox_2_5"));
        positionSpinBox_2_5->setEnabled(false);
        positionSpinBox_2_5->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_2_5->setMinimum(-500);
        positionSpinBox_2_5->setMaximum(500);
        thresholdSpinBox_2_5 = new QSpinBox(chanel5SettingsBox_2);
        thresholdSpinBox_2_5->setObjectName(QStringLiteral("thresholdSpinBox_2_5"));
        thresholdSpinBox_2_5->setEnabled(false);
        thresholdSpinBox_2_5->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_2_5->setMinimum(-500);
        thresholdSpinBox_2_5->setMaximum(500);
        thresholdSpinBox_2_5->setValue(20);
        samplesSpinBox_2_5 = new QSpinBox(chanel5SettingsBox_2);
        samplesSpinBox_2_5->setObjectName(QStringLiteral("samplesSpinBox_2_5"));
        samplesSpinBox_2_5->setEnabled(false);
        samplesSpinBox_2_5->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_2_5->setValue(10);
        DACOffsetSpinBox_2_5 = new QSpinBox(chanel5SettingsBox_2);
        DACOffsetSpinBox_2_5->setObjectName(QStringLiteral("DACOffsetSpinBox_2_5"));
        DACOffsetSpinBox_2_5->setEnabled(false);
        DACOffsetSpinBox_2_5->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_2_5->setMinimum(-500);
        DACOffsetSpinBox_2_5->setMaximum(500);
        scaleSpinBox_2_5 = new QComboBox(chanel5SettingsBox_2);
        scaleSpinBox_2_5->setObjectName(QStringLiteral("scaleSpinBox_2_5"));
        scaleSpinBox_2_5->setEnabled(false);
        scaleSpinBox_2_5->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_2_5->setEditable(true);
        positionResetButton_2_5 = new QPushButton(chanel5SettingsBox_2);
        positionResetButton_2_5->setObjectName(QStringLiteral("positionResetButton_2_5"));
        positionResetButton_2_5->setEnabled(false);
        positionResetButton_2_5->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_2_5->setIcon(icon12);
        DACOffsetResetButton_2_5 = new QPushButton(chanel5SettingsBox_2);
        DACOffsetResetButton_2_5->setObjectName(QStringLiteral("DACOffsetResetButton_2_5"));
        DACOffsetResetButton_2_5->setEnabled(false);
        DACOffsetResetButton_2_5->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_2_5->setIcon(icon12);
        channelIsDrawingButton_2_5 = new QPushButton(chanel5SettingsBox_2);
        channelIsDrawingButton_2_5->setObjectName(QStringLiteral("channelIsDrawingButton_2_5"));
        channelIsDrawingButton_2_5->setEnabled(false);
        channelIsDrawingButton_2_5->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_2_5->setIcon(icon13);
        channelIsDrawingButton_2_5->setCheckable(true);
        channelIsDrawingButton_2_5->setChecked(true);
        thresholdIsDrawingButton_2_5 = new QPushButton(chanel5SettingsBox_2);
        thresholdIsDrawingButton_2_5->setObjectName(QStringLiteral("thresholdIsDrawingButton_2_5"));
        thresholdIsDrawingButton_2_5->setEnabled(false);
        thresholdIsDrawingButton_2_5->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_2_5->setIcon(icon13);
        thresholdIsDrawingButton_2_5->setCheckable(true);
        thresholdIsDrawingButton_2_5->setChecked(false);
        blockSamplesButton_2_5 = new QPushButton(chanel5SettingsBox_2);
        blockSamplesButton_2_5->setObjectName(QStringLiteral("blockSamplesButton_2_5"));
        blockSamplesButton_2_5->setEnabled(false);
        blockSamplesButton_2_5->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_2_5->setIcon(icon19);
        blockSamplesButton_2_5->setCheckable(true);
        blockSamplesButton_2_5->setChecked(true);
        chanel3SettingsBox_2 = new QGroupBox(WDF2Widget);
        chanel3SettingsBox_2->setObjectName(QStringLiteral("chanel3SettingsBox_2"));
        chanel3SettingsBox_2->setGeometry(QRect(395, 0, 90, 170));
        changeTriggerButton_2_3 = new QPushButton(chanel3SettingsBox_2);
        changeTriggerButton_2_3->setObjectName(QStringLiteral("changeTriggerButton_2_3"));
        changeTriggerButton_2_3->setEnabled(true);
        changeTriggerButton_2_3->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_2_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_2_3->setCheckable(false);
        changeTriggerButton_2_3->setChecked(false);
        changeTriggerButton_2_3->setAutoRepeat(false);
        changeTriggerButton_2_3->setAutoDefault(false);
        positionSpinBox_2_3 = new QSpinBox(chanel3SettingsBox_2);
        positionSpinBox_2_3->setObjectName(QStringLiteral("positionSpinBox_2_3"));
        positionSpinBox_2_3->setEnabled(false);
        positionSpinBox_2_3->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_2_3->setMinimum(-500);
        positionSpinBox_2_3->setMaximum(500);
        thresholdSpinBox_2_3 = new QSpinBox(chanel3SettingsBox_2);
        thresholdSpinBox_2_3->setObjectName(QStringLiteral("thresholdSpinBox_2_3"));
        thresholdSpinBox_2_3->setEnabled(false);
        thresholdSpinBox_2_3->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_2_3->setMinimum(-500);
        thresholdSpinBox_2_3->setMaximum(500);
        thresholdSpinBox_2_3->setValue(20);
        samplesSpinBox_2_3 = new QSpinBox(chanel3SettingsBox_2);
        samplesSpinBox_2_3->setObjectName(QStringLiteral("samplesSpinBox_2_3"));
        samplesSpinBox_2_3->setEnabled(false);
        samplesSpinBox_2_3->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_2_3->setValue(10);
        DACOffsetSpinBox_2_3 = new QSpinBox(chanel3SettingsBox_2);
        DACOffsetSpinBox_2_3->setObjectName(QStringLiteral("DACOffsetSpinBox_2_3"));
        DACOffsetSpinBox_2_3->setEnabled(false);
        DACOffsetSpinBox_2_3->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_2_3->setMinimum(-500);
        DACOffsetSpinBox_2_3->setMaximum(500);
        scaleSpinBox_2_3 = new QComboBox(chanel3SettingsBox_2);
        scaleSpinBox_2_3->setObjectName(QStringLiteral("scaleSpinBox_2_3"));
        scaleSpinBox_2_3->setEnabled(false);
        scaleSpinBox_2_3->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_2_3->setEditable(true);
        positionResetButton_2_3 = new QPushButton(chanel3SettingsBox_2);
        positionResetButton_2_3->setObjectName(QStringLiteral("positionResetButton_2_3"));
        positionResetButton_2_3->setEnabled(false);
        positionResetButton_2_3->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_2_3->setIcon(icon12);
        DACOffsetResetButton_2_3 = new QPushButton(chanel3SettingsBox_2);
        DACOffsetResetButton_2_3->setObjectName(QStringLiteral("DACOffsetResetButton_2_3"));
        DACOffsetResetButton_2_3->setEnabled(false);
        DACOffsetResetButton_2_3->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_2_3->setIcon(icon12);
        channelIsDrawingButton_2_3 = new QPushButton(chanel3SettingsBox_2);
        channelIsDrawingButton_2_3->setObjectName(QStringLiteral("channelIsDrawingButton_2_3"));
        channelIsDrawingButton_2_3->setEnabled(false);
        channelIsDrawingButton_2_3->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_2_3->setIcon(icon13);
        channelIsDrawingButton_2_3->setCheckable(true);
        channelIsDrawingButton_2_3->setChecked(true);
        thresholdIsDrawingButton_2_3 = new QPushButton(chanel3SettingsBox_2);
        thresholdIsDrawingButton_2_3->setObjectName(QStringLiteral("thresholdIsDrawingButton_2_3"));
        thresholdIsDrawingButton_2_3->setEnabled(false);
        thresholdIsDrawingButton_2_3->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_2_3->setIcon(icon13);
        thresholdIsDrawingButton_2_3->setCheckable(true);
        thresholdIsDrawingButton_2_3->setChecked(false);
        blockSamplesButton_2_3 = new QPushButton(chanel3SettingsBox_2);
        blockSamplesButton_2_3->setObjectName(QStringLiteral("blockSamplesButton_2_3"));
        blockSamplesButton_2_3->setEnabled(false);
        blockSamplesButton_2_3->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_2_3->setIcon(icon19);
        blockSamplesButton_2_3->setCheckable(true);
        blockSamplesButton_2_3->setChecked(true);
        chanel1SettingsBox_2 = new QGroupBox(WDF2Widget);
        chanel1SettingsBox_2->setObjectName(QStringLiteral("chanel1SettingsBox_2"));
        chanel1SettingsBox_2->setGeometry(QRect(205, 0, 90, 170));
        changeTriggerButton_2_1 = new QPushButton(chanel1SettingsBox_2);
        changeTriggerButton_2_1->setObjectName(QStringLiteral("changeTriggerButton_2_1"));
        changeTriggerButton_2_1->setEnabled(true);
        changeTriggerButton_2_1->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_2_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_2_1->setCheckable(false);
        changeTriggerButton_2_1->setChecked(false);
        changeTriggerButton_2_1->setAutoRepeat(false);
        changeTriggerButton_2_1->setAutoDefault(false);
        positionSpinBox_2_1 = new QSpinBox(chanel1SettingsBox_2);
        positionSpinBox_2_1->setObjectName(QStringLiteral("positionSpinBox_2_1"));
        positionSpinBox_2_1->setEnabled(false);
        positionSpinBox_2_1->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_2_1->setMinimum(-500);
        positionSpinBox_2_1->setMaximum(500);
        thresholdSpinBox_2_1 = new QSpinBox(chanel1SettingsBox_2);
        thresholdSpinBox_2_1->setObjectName(QStringLiteral("thresholdSpinBox_2_1"));
        thresholdSpinBox_2_1->setEnabled(false);
        thresholdSpinBox_2_1->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_2_1->setMinimum(-500);
        thresholdSpinBox_2_1->setMaximum(500);
        thresholdSpinBox_2_1->setValue(20);
        samplesSpinBox_2_1 = new QSpinBox(chanel1SettingsBox_2);
        samplesSpinBox_2_1->setObjectName(QStringLiteral("samplesSpinBox_2_1"));
        samplesSpinBox_2_1->setEnabled(false);
        samplesSpinBox_2_1->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_2_1->setValue(10);
        DACOffsetSpinBox_2_1 = new QSpinBox(chanel1SettingsBox_2);
        DACOffsetSpinBox_2_1->setObjectName(QStringLiteral("DACOffsetSpinBox_2_1"));
        DACOffsetSpinBox_2_1->setEnabled(false);
        DACOffsetSpinBox_2_1->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_2_1->setMinimum(-500);
        DACOffsetSpinBox_2_1->setMaximum(500);
        scaleSpinBox_2_1 = new QComboBox(chanel1SettingsBox_2);
        scaleSpinBox_2_1->setObjectName(QStringLiteral("scaleSpinBox_2_1"));
        scaleSpinBox_2_1->setEnabled(false);
        scaleSpinBox_2_1->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_2_1->setEditable(true);
        positionResetButton_2_1 = new QPushButton(chanel1SettingsBox_2);
        positionResetButton_2_1->setObjectName(QStringLiteral("positionResetButton_2_1"));
        positionResetButton_2_1->setEnabled(false);
        positionResetButton_2_1->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_2_1->setIcon(icon12);
        DACOffsetResetButton_2_1 = new QPushButton(chanel1SettingsBox_2);
        DACOffsetResetButton_2_1->setObjectName(QStringLiteral("DACOffsetResetButton_2_1"));
        DACOffsetResetButton_2_1->setEnabled(false);
        DACOffsetResetButton_2_1->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_2_1->setIcon(icon12);
        channelIsDrawingButton_2_1 = new QPushButton(chanel1SettingsBox_2);
        channelIsDrawingButton_2_1->setObjectName(QStringLiteral("channelIsDrawingButton_2_1"));
        channelIsDrawingButton_2_1->setEnabled(false);
        channelIsDrawingButton_2_1->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_2_1->setIcon(icon13);
        channelIsDrawingButton_2_1->setCheckable(true);
        channelIsDrawingButton_2_1->setChecked(true);
        thresholdIsDrawingButton_2_1 = new QPushButton(chanel1SettingsBox_2);
        thresholdIsDrawingButton_2_1->setObjectName(QStringLiteral("thresholdIsDrawingButton_2_1"));
        thresholdIsDrawingButton_2_1->setEnabled(false);
        thresholdIsDrawingButton_2_1->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_2_1->setIcon(icon13);
        thresholdIsDrawingButton_2_1->setCheckable(true);
        thresholdIsDrawingButton_2_1->setChecked(false);
        blockSamplesButton_2_1 = new QPushButton(chanel1SettingsBox_2);
        blockSamplesButton_2_1->setObjectName(QStringLiteral("blockSamplesButton_2_1"));
        blockSamplesButton_2_1->setEnabled(false);
        blockSamplesButton_2_1->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_2_1->setIcon(icon19);
        blockSamplesButton_2_1->setCheckable(true);
        blockSamplesButton_2_1->setChecked(true);
        chanel4SettingsBox_2 = new QGroupBox(WDF2Widget);
        chanel4SettingsBox_2->setObjectName(QStringLiteral("chanel4SettingsBox_2"));
        chanel4SettingsBox_2->setGeometry(QRect(490, 0, 90, 170));
        changeTriggerButton_2_4 = new QPushButton(chanel4SettingsBox_2);
        changeTriggerButton_2_4->setObjectName(QStringLiteral("changeTriggerButton_2_4"));
        changeTriggerButton_2_4->setEnabled(true);
        changeTriggerButton_2_4->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_2_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_2_4->setCheckable(false);
        changeTriggerButton_2_4->setChecked(false);
        changeTriggerButton_2_4->setAutoRepeat(false);
        changeTriggerButton_2_4->setAutoDefault(false);
        positionSpinBox_2_4 = new QSpinBox(chanel4SettingsBox_2);
        positionSpinBox_2_4->setObjectName(QStringLiteral("positionSpinBox_2_4"));
        positionSpinBox_2_4->setEnabled(false);
        positionSpinBox_2_4->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_2_4->setMinimum(-500);
        positionSpinBox_2_4->setMaximum(500);
        thresholdSpinBox_2_4 = new QSpinBox(chanel4SettingsBox_2);
        thresholdSpinBox_2_4->setObjectName(QStringLiteral("thresholdSpinBox_2_4"));
        thresholdSpinBox_2_4->setEnabled(false);
        thresholdSpinBox_2_4->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_2_4->setMinimum(-500);
        thresholdSpinBox_2_4->setMaximum(500);
        thresholdSpinBox_2_4->setValue(20);
        samplesSpinBox_2_4 = new QSpinBox(chanel4SettingsBox_2);
        samplesSpinBox_2_4->setObjectName(QStringLiteral("samplesSpinBox_2_4"));
        samplesSpinBox_2_4->setEnabled(false);
        samplesSpinBox_2_4->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_2_4->setValue(10);
        DACOffsetSpinBox_2_4 = new QSpinBox(chanel4SettingsBox_2);
        DACOffsetSpinBox_2_4->setObjectName(QStringLiteral("DACOffsetSpinBox_2_4"));
        DACOffsetSpinBox_2_4->setEnabled(false);
        DACOffsetSpinBox_2_4->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_2_4->setMinimum(-500);
        DACOffsetSpinBox_2_4->setMaximum(500);
        scaleSpinBox_2_4 = new QComboBox(chanel4SettingsBox_2);
        scaleSpinBox_2_4->setObjectName(QStringLiteral("scaleSpinBox_2_4"));
        scaleSpinBox_2_4->setEnabled(false);
        scaleSpinBox_2_4->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_2_4->setEditable(true);
        positionResetButton_2_4 = new QPushButton(chanel4SettingsBox_2);
        positionResetButton_2_4->setObjectName(QStringLiteral("positionResetButton_2_4"));
        positionResetButton_2_4->setEnabled(false);
        positionResetButton_2_4->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_2_4->setIcon(icon12);
        DACOffsetResetButton_2_4 = new QPushButton(chanel4SettingsBox_2);
        DACOffsetResetButton_2_4->setObjectName(QStringLiteral("DACOffsetResetButton_2_4"));
        DACOffsetResetButton_2_4->setEnabled(false);
        DACOffsetResetButton_2_4->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_2_4->setIcon(icon12);
        channelIsDrawingButton_2_4 = new QPushButton(chanel4SettingsBox_2);
        channelIsDrawingButton_2_4->setObjectName(QStringLiteral("channelIsDrawingButton_2_4"));
        channelIsDrawingButton_2_4->setEnabled(false);
        channelIsDrawingButton_2_4->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_2_4->setIcon(icon13);
        channelIsDrawingButton_2_4->setCheckable(true);
        channelIsDrawingButton_2_4->setChecked(true);
        thresholdIsDrawingButton_2_4 = new QPushButton(chanel4SettingsBox_2);
        thresholdIsDrawingButton_2_4->setObjectName(QStringLiteral("thresholdIsDrawingButton_2_4"));
        thresholdIsDrawingButton_2_4->setEnabled(false);
        thresholdIsDrawingButton_2_4->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_2_4->setIcon(icon13);
        thresholdIsDrawingButton_2_4->setCheckable(true);
        thresholdIsDrawingButton_2_4->setChecked(false);
        blockSamplesButton_2_4 = new QPushButton(chanel4SettingsBox_2);
        blockSamplesButton_2_4->setObjectName(QStringLiteral("blockSamplesButton_2_4"));
        blockSamplesButton_2_4->setEnabled(false);
        blockSamplesButton_2_4->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_2_4->setIcon(icon19);
        blockSamplesButton_2_4->setCheckable(true);
        blockSamplesButton_2_4->setChecked(true);
        chanel0SettingsBox_2 = new QGroupBox(WDF2Widget);
        chanel0SettingsBox_2->setObjectName(QStringLiteral("chanel0SettingsBox_2"));
        chanel0SettingsBox_2->setGeometry(QRect(110, 0, 90, 170));
        changeTriggerButton_2_0 = new QPushButton(chanel0SettingsBox_2);
        changeTriggerButton_2_0->setObjectName(QStringLiteral("changeTriggerButton_2_0"));
        changeTriggerButton_2_0->setEnabled(true);
        changeTriggerButton_2_0->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_2_0->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_2_0->setCheckable(false);
        changeTriggerButton_2_0->setChecked(false);
        changeTriggerButton_2_0->setAutoRepeat(false);
        changeTriggerButton_2_0->setAutoDefault(false);
        changeTriggerButton_2_0->setFlat(false);
        positionSpinBox_2_0 = new QSpinBox(chanel0SettingsBox_2);
        positionSpinBox_2_0->setObjectName(QStringLiteral("positionSpinBox_2_0"));
        positionSpinBox_2_0->setEnabled(false);
        positionSpinBox_2_0->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_2_0->setMinimum(-500);
        positionSpinBox_2_0->setMaximum(500);
        thresholdSpinBox_2_0 = new QSpinBox(chanel0SettingsBox_2);
        thresholdSpinBox_2_0->setObjectName(QStringLiteral("thresholdSpinBox_2_0"));
        thresholdSpinBox_2_0->setEnabled(false);
        thresholdSpinBox_2_0->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_2_0->setMinimum(-500);
        thresholdSpinBox_2_0->setMaximum(500);
        thresholdSpinBox_2_0->setValue(20);
        samplesSpinBox_2_0 = new QSpinBox(chanel0SettingsBox_2);
        samplesSpinBox_2_0->setObjectName(QStringLiteral("samplesSpinBox_2_0"));
        samplesSpinBox_2_0->setEnabled(false);
        samplesSpinBox_2_0->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_2_0->setValue(10);
        DACOffsetSpinBox_2_0 = new QSpinBox(chanel0SettingsBox_2);
        DACOffsetSpinBox_2_0->setObjectName(QStringLiteral("DACOffsetSpinBox_2_0"));
        DACOffsetSpinBox_2_0->setEnabled(false);
        DACOffsetSpinBox_2_0->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_2_0->setMinimum(-500);
        DACOffsetSpinBox_2_0->setMaximum(500);
        scaleSpinBox_2_0 = new QComboBox(chanel0SettingsBox_2);
        scaleSpinBox_2_0->setObjectName(QStringLiteral("scaleSpinBox_2_0"));
        scaleSpinBox_2_0->setEnabled(false);
        scaleSpinBox_2_0->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_2_0->setEditable(true);
        positionResetButton_2_0 = new QPushButton(chanel0SettingsBox_2);
        positionResetButton_2_0->setObjectName(QStringLiteral("positionResetButton_2_0"));
        positionResetButton_2_0->setEnabled(false);
        positionResetButton_2_0->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_2_0->setIcon(icon12);
        DACOffsetResetButton_2_0 = new QPushButton(chanel0SettingsBox_2);
        DACOffsetResetButton_2_0->setObjectName(QStringLiteral("DACOffsetResetButton_2_0"));
        DACOffsetResetButton_2_0->setEnabled(false);
        DACOffsetResetButton_2_0->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_2_0->setIcon(icon12);
        channelIsDrawingButton_2_0 = new QPushButton(chanel0SettingsBox_2);
        channelIsDrawingButton_2_0->setObjectName(QStringLiteral("channelIsDrawingButton_2_0"));
        channelIsDrawingButton_2_0->setEnabled(false);
        channelIsDrawingButton_2_0->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_2_0->setIcon(icon13);
        channelIsDrawingButton_2_0->setCheckable(true);
        channelIsDrawingButton_2_0->setChecked(true);
        thresholdIsDrawingButton_2_0 = new QPushButton(chanel0SettingsBox_2);
        thresholdIsDrawingButton_2_0->setObjectName(QStringLiteral("thresholdIsDrawingButton_2_0"));
        thresholdIsDrawingButton_2_0->setEnabled(false);
        thresholdIsDrawingButton_2_0->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_2_0->setIcon(icon13);
        thresholdIsDrawingButton_2_0->setCheckable(true);
        thresholdIsDrawingButton_2_0->setChecked(false);
        blockSamplesButton_2_0 = new QPushButton(chanel0SettingsBox_2);
        blockSamplesButton_2_0->setObjectName(QStringLiteral("blockSamplesButton_2_0"));
        blockSamplesButton_2_0->setEnabled(false);
        blockSamplesButton_2_0->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_2_0->setIcon(icon19);
        blockSamplesButton_2_0->setCheckable(true);
        blockSamplesButton_2_0->setChecked(true);
        chanel7SettingsBox_2 = new QGroupBox(WDF2Widget);
        chanel7SettingsBox_2->setObjectName(QStringLiteral("chanel7SettingsBox_2"));
        chanel7SettingsBox_2->setGeometry(QRect(775, 0, 90, 170));
        changeTriggerButton_2_7 = new QPushButton(chanel7SettingsBox_2);
        changeTriggerButton_2_7->setObjectName(QStringLiteral("changeTriggerButton_2_7"));
        changeTriggerButton_2_7->setEnabled(true);
        changeTriggerButton_2_7->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_2_7->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_2_7->setCheckable(false);
        changeTriggerButton_2_7->setChecked(false);
        changeTriggerButton_2_7->setAutoRepeat(false);
        changeTriggerButton_2_7->setAutoDefault(false);
        positionSpinBox_2_7 = new QSpinBox(chanel7SettingsBox_2);
        positionSpinBox_2_7->setObjectName(QStringLiteral("positionSpinBox_2_7"));
        positionSpinBox_2_7->setEnabled(false);
        positionSpinBox_2_7->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_2_7->setMinimum(-500);
        positionSpinBox_2_7->setMaximum(500);
        thresholdSpinBox_2_7 = new QSpinBox(chanel7SettingsBox_2);
        thresholdSpinBox_2_7->setObjectName(QStringLiteral("thresholdSpinBox_2_7"));
        thresholdSpinBox_2_7->setEnabled(false);
        thresholdSpinBox_2_7->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_2_7->setMinimum(-500);
        thresholdSpinBox_2_7->setMaximum(500);
        thresholdSpinBox_2_7->setValue(20);
        samplesSpinBox_2_7 = new QSpinBox(chanel7SettingsBox_2);
        samplesSpinBox_2_7->setObjectName(QStringLiteral("samplesSpinBox_2_7"));
        samplesSpinBox_2_7->setEnabled(false);
        samplesSpinBox_2_7->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_2_7->setValue(10);
        DACOffsetSpinBox_2_7 = new QSpinBox(chanel7SettingsBox_2);
        DACOffsetSpinBox_2_7->setObjectName(QStringLiteral("DACOffsetSpinBox_2_7"));
        DACOffsetSpinBox_2_7->setEnabled(false);
        DACOffsetSpinBox_2_7->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_2_7->setMinimum(-500);
        DACOffsetSpinBox_2_7->setMaximum(500);
        scaleSpinBox_2_7 = new QComboBox(chanel7SettingsBox_2);
        scaleSpinBox_2_7->setObjectName(QStringLiteral("scaleSpinBox_2_7"));
        scaleSpinBox_2_7->setEnabled(false);
        scaleSpinBox_2_7->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_2_7->setEditable(true);
        positionResetButton_2_7 = new QPushButton(chanel7SettingsBox_2);
        positionResetButton_2_7->setObjectName(QStringLiteral("positionResetButton_2_7"));
        positionResetButton_2_7->setEnabled(false);
        positionResetButton_2_7->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_2_7->setIcon(icon12);
        DACOffsetResetButton_2_7 = new QPushButton(chanel7SettingsBox_2);
        DACOffsetResetButton_2_7->setObjectName(QStringLiteral("DACOffsetResetButton_2_7"));
        DACOffsetResetButton_2_7->setEnabled(false);
        DACOffsetResetButton_2_7->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_2_7->setIcon(icon12);
        channelIsDrawingButton_2_7 = new QPushButton(chanel7SettingsBox_2);
        channelIsDrawingButton_2_7->setObjectName(QStringLiteral("channelIsDrawingButton_2_7"));
        channelIsDrawingButton_2_7->setEnabled(false);
        channelIsDrawingButton_2_7->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_2_7->setIcon(icon13);
        channelIsDrawingButton_2_7->setCheckable(true);
        channelIsDrawingButton_2_7->setChecked(true);
        thresholdIsDrawingButton_2_7 = new QPushButton(chanel7SettingsBox_2);
        thresholdIsDrawingButton_2_7->setObjectName(QStringLiteral("thresholdIsDrawingButton_2_7"));
        thresholdIsDrawingButton_2_7->setEnabled(false);
        thresholdIsDrawingButton_2_7->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_2_7->setIcon(icon13);
        thresholdIsDrawingButton_2_7->setCheckable(true);
        thresholdIsDrawingButton_2_7->setChecked(false);
        blockSamplesButton_2_7 = new QPushButton(chanel7SettingsBox_2);
        blockSamplesButton_2_7->setObjectName(QStringLiteral("blockSamplesButton_2_7"));
        blockSamplesButton_2_7->setEnabled(false);
        blockSamplesButton_2_7->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_2_7->setIcon(icon19);
        blockSamplesButton_2_7->setCheckable(true);
        blockSamplesButton_2_7->setChecked(true);
        channelLabelBox_2 = new QGroupBox(WDF2Widget);
        channelLabelBox_2->setObjectName(QStringLiteral("channelLabelBox_2"));
        channelLabelBox_2->setGeometry(QRect(0, 0, 105, 170));
        thresholdLabel_2 = new QLabel(channelLabelBox_2);
        thresholdLabel_2->setObjectName(QStringLiteral("thresholdLabel_2"));
        thresholdLabel_2->setGeometry(QRect(10, 70, 91, 20));
        thresholdLabel_2->setLayoutDirection(Qt::RightToLeft);
        thresholdLabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        samplesLabel_2 = new QLabel(channelLabelBox_2);
        samplesLabel_2->setObjectName(QStringLiteral("samplesLabel_2"));
        samplesLabel_2->setGeometry(QRect(10, 95, 91, 20));
        samplesLabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        positionLabel_2 = new QLabel(channelLabelBox_2);
        positionLabel_2->setObjectName(QStringLiteral("positionLabel_2"));
        positionLabel_2->setGeometry(QRect(10, 45, 91, 20));
        positionLabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        DACOffsetLabel_2 = new QLabel(channelLabelBox_2);
        DACOffsetLabel_2->setObjectName(QStringLiteral("DACOffsetLabel_2"));
        DACOffsetLabel_2->setGeometry(QRect(10, 120, 91, 20));
        DACOffsetLabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        scaleLabel_2 = new QLabel(channelLabelBox_2);
        scaleLabel_2->setObjectName(QStringLiteral("scaleLabel_2"));
        scaleLabel_2->setGeometry(QRect(10, 145, 91, 20));
        scaleLabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        statusLabel_2 = new QLabel(channelLabelBox_2);
        statusLabel_2->setObjectName(QStringLiteral("statusLabel_2"));
        statusLabel_2->setGeometry(QRect(10, 15, 91, 24));
        statusLabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        WDFTabWidget->addTab(WDF2Widget, icon20, QString());
        WDF3Widget = new QWidget();
        WDF3Widget->setObjectName(QStringLiteral("WDF3Widget"));
        chanel0SettingsBox_3 = new QGroupBox(WDF3Widget);
        chanel0SettingsBox_3->setObjectName(QStringLiteral("chanel0SettingsBox_3"));
        chanel0SettingsBox_3->setGeometry(QRect(110, 0, 90, 170));
        changeTriggerButton_3_0 = new QPushButton(chanel0SettingsBox_3);
        changeTriggerButton_3_0->setObjectName(QStringLiteral("changeTriggerButton_3_0"));
        changeTriggerButton_3_0->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_3_0->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_3_0->setCheckable(false);
        changeTriggerButton_3_0->setChecked(false);
        changeTriggerButton_3_0->setAutoRepeat(false);
        changeTriggerButton_3_0->setAutoDefault(false);
        positionSpinBox_3_0 = new QSpinBox(chanel0SettingsBox_3);
        positionSpinBox_3_0->setObjectName(QStringLiteral("positionSpinBox_3_0"));
        positionSpinBox_3_0->setEnabled(false);
        positionSpinBox_3_0->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_3_0->setMinimum(-500);
        positionSpinBox_3_0->setMaximum(500);
        thresholdSpinBox_3_0 = new QSpinBox(chanel0SettingsBox_3);
        thresholdSpinBox_3_0->setObjectName(QStringLiteral("thresholdSpinBox_3_0"));
        thresholdSpinBox_3_0->setEnabled(false);
        thresholdSpinBox_3_0->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_3_0->setMinimum(-500);
        thresholdSpinBox_3_0->setMaximum(500);
        thresholdSpinBox_3_0->setValue(20);
        samplesSpinBox_3_0 = new QSpinBox(chanel0SettingsBox_3);
        samplesSpinBox_3_0->setObjectName(QStringLiteral("samplesSpinBox_3_0"));
        samplesSpinBox_3_0->setEnabled(false);
        samplesSpinBox_3_0->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_3_0->setValue(10);
        DACOffsetSpinBox_3_0 = new QSpinBox(chanel0SettingsBox_3);
        DACOffsetSpinBox_3_0->setObjectName(QStringLiteral("DACOffsetSpinBox_3_0"));
        DACOffsetSpinBox_3_0->setEnabled(false);
        DACOffsetSpinBox_3_0->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_3_0->setMinimum(-500);
        DACOffsetSpinBox_3_0->setMaximum(500);
        scaleSpinBox_3_0 = new QComboBox(chanel0SettingsBox_3);
        scaleSpinBox_3_0->setObjectName(QStringLiteral("scaleSpinBox_3_0"));
        scaleSpinBox_3_0->setEnabled(false);
        scaleSpinBox_3_0->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_3_0->setEditable(true);
        positionResetButton_3_0 = new QPushButton(chanel0SettingsBox_3);
        positionResetButton_3_0->setObjectName(QStringLiteral("positionResetButton_3_0"));
        positionResetButton_3_0->setEnabled(false);
        positionResetButton_3_0->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_3_0->setIcon(icon12);
        DACOffsetResetButton_3_0 = new QPushButton(chanel0SettingsBox_3);
        DACOffsetResetButton_3_0->setObjectName(QStringLiteral("DACOffsetResetButton_3_0"));
        DACOffsetResetButton_3_0->setEnabled(false);
        DACOffsetResetButton_3_0->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_3_0->setIcon(icon12);
        channelIsDrawingButton_3_0 = new QPushButton(chanel0SettingsBox_3);
        channelIsDrawingButton_3_0->setObjectName(QStringLiteral("channelIsDrawingButton_3_0"));
        channelIsDrawingButton_3_0->setEnabled(false);
        channelIsDrawingButton_3_0->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_3_0->setIcon(icon13);
        channelIsDrawingButton_3_0->setCheckable(true);
        channelIsDrawingButton_3_0->setChecked(true);
        thresholdIsDrawingButton_3_0 = new QPushButton(chanel0SettingsBox_3);
        thresholdIsDrawingButton_3_0->setObjectName(QStringLiteral("thresholdIsDrawingButton_3_0"));
        thresholdIsDrawingButton_3_0->setEnabled(false);
        thresholdIsDrawingButton_3_0->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_3_0->setIcon(icon13);
        thresholdIsDrawingButton_3_0->setCheckable(true);
        thresholdIsDrawingButton_3_0->setChecked(false);
        blockSamplesButton_3_0 = new QPushButton(chanel0SettingsBox_3);
        blockSamplesButton_3_0->setObjectName(QStringLiteral("blockSamplesButton_3_0"));
        blockSamplesButton_3_0->setEnabled(false);
        blockSamplesButton_3_0->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_3_0->setIcon(icon19);
        blockSamplesButton_3_0->setCheckable(true);
        blockSamplesButton_3_0->setChecked(true);
        chanel1SettingsBox_3 = new QGroupBox(WDF3Widget);
        chanel1SettingsBox_3->setObjectName(QStringLiteral("chanel1SettingsBox_3"));
        chanel1SettingsBox_3->setGeometry(QRect(205, 0, 90, 170));
        changeTriggerButton_3_1 = new QPushButton(chanel1SettingsBox_3);
        changeTriggerButton_3_1->setObjectName(QStringLiteral("changeTriggerButton_3_1"));
        changeTriggerButton_3_1->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_3_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_3_1->setCheckable(false);
        changeTriggerButton_3_1->setChecked(false);
        changeTriggerButton_3_1->setAutoRepeat(false);
        changeTriggerButton_3_1->setAutoDefault(false);
        positionSpinBox_3_1 = new QSpinBox(chanel1SettingsBox_3);
        positionSpinBox_3_1->setObjectName(QStringLiteral("positionSpinBox_3_1"));
        positionSpinBox_3_1->setEnabled(false);
        positionSpinBox_3_1->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_3_1->setMinimum(-500);
        positionSpinBox_3_1->setMaximum(500);
        thresholdSpinBox_3_1 = new QSpinBox(chanel1SettingsBox_3);
        thresholdSpinBox_3_1->setObjectName(QStringLiteral("thresholdSpinBox_3_1"));
        thresholdSpinBox_3_1->setEnabled(false);
        thresholdSpinBox_3_1->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_3_1->setMinimum(-500);
        thresholdSpinBox_3_1->setMaximum(500);
        thresholdSpinBox_3_1->setValue(20);
        samplesSpinBox_3_1 = new QSpinBox(chanel1SettingsBox_3);
        samplesSpinBox_3_1->setObjectName(QStringLiteral("samplesSpinBox_3_1"));
        samplesSpinBox_3_1->setEnabled(false);
        samplesSpinBox_3_1->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_3_1->setValue(10);
        DACOffsetSpinBox_3_1 = new QSpinBox(chanel1SettingsBox_3);
        DACOffsetSpinBox_3_1->setObjectName(QStringLiteral("DACOffsetSpinBox_3_1"));
        DACOffsetSpinBox_3_1->setEnabled(false);
        DACOffsetSpinBox_3_1->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_3_1->setMinimum(-500);
        DACOffsetSpinBox_3_1->setMaximum(500);
        scaleSpinBox_3_1 = new QComboBox(chanel1SettingsBox_3);
        scaleSpinBox_3_1->setObjectName(QStringLiteral("scaleSpinBox_3_1"));
        scaleSpinBox_3_1->setEnabled(false);
        scaleSpinBox_3_1->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_3_1->setEditable(true);
        positionResetButton_3_1 = new QPushButton(chanel1SettingsBox_3);
        positionResetButton_3_1->setObjectName(QStringLiteral("positionResetButton_3_1"));
        positionResetButton_3_1->setEnabled(false);
        positionResetButton_3_1->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_3_1->setIcon(icon12);
        DACOffsetResetButton_3_1 = new QPushButton(chanel1SettingsBox_3);
        DACOffsetResetButton_3_1->setObjectName(QStringLiteral("DACOffsetResetButton_3_1"));
        DACOffsetResetButton_3_1->setEnabled(false);
        DACOffsetResetButton_3_1->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_3_1->setIcon(icon12);
        channelIsDrawingButton_3_1 = new QPushButton(chanel1SettingsBox_3);
        channelIsDrawingButton_3_1->setObjectName(QStringLiteral("channelIsDrawingButton_3_1"));
        channelIsDrawingButton_3_1->setEnabled(false);
        channelIsDrawingButton_3_1->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_3_1->setIcon(icon13);
        channelIsDrawingButton_3_1->setCheckable(true);
        channelIsDrawingButton_3_1->setChecked(true);
        thresholdIsDrawingButton_3_1 = new QPushButton(chanel1SettingsBox_3);
        thresholdIsDrawingButton_3_1->setObjectName(QStringLiteral("thresholdIsDrawingButton_3_1"));
        thresholdIsDrawingButton_3_1->setEnabled(false);
        thresholdIsDrawingButton_3_1->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_3_1->setIcon(icon13);
        thresholdIsDrawingButton_3_1->setCheckable(true);
        thresholdIsDrawingButton_3_1->setChecked(false);
        blockSamplesButton_3_1 = new QPushButton(chanel1SettingsBox_3);
        blockSamplesButton_3_1->setObjectName(QStringLiteral("blockSamplesButton_3_1"));
        blockSamplesButton_3_1->setEnabled(false);
        blockSamplesButton_3_1->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_3_1->setIcon(icon19);
        blockSamplesButton_3_1->setCheckable(true);
        blockSamplesButton_3_1->setChecked(true);
        chanel2SettingsBox_3 = new QGroupBox(WDF3Widget);
        chanel2SettingsBox_3->setObjectName(QStringLiteral("chanel2SettingsBox_3"));
        chanel2SettingsBox_3->setGeometry(QRect(300, 0, 90, 170));
        changeTriggerButton_3_2 = new QPushButton(chanel2SettingsBox_3);
        changeTriggerButton_3_2->setObjectName(QStringLiteral("changeTriggerButton_3_2"));
        changeTriggerButton_3_2->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_3_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_3_2->setCheckable(false);
        changeTriggerButton_3_2->setChecked(false);
        changeTriggerButton_3_2->setAutoRepeat(false);
        changeTriggerButton_3_2->setAutoDefault(false);
        positionSpinBox_3_2 = new QSpinBox(chanel2SettingsBox_3);
        positionSpinBox_3_2->setObjectName(QStringLiteral("positionSpinBox_3_2"));
        positionSpinBox_3_2->setEnabled(false);
        positionSpinBox_3_2->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_3_2->setMinimum(-500);
        positionSpinBox_3_2->setMaximum(500);
        thresholdSpinBox_3_2 = new QSpinBox(chanel2SettingsBox_3);
        thresholdSpinBox_3_2->setObjectName(QStringLiteral("thresholdSpinBox_3_2"));
        thresholdSpinBox_3_2->setEnabled(false);
        thresholdSpinBox_3_2->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_3_2->setMinimum(-500);
        thresholdSpinBox_3_2->setMaximum(500);
        thresholdSpinBox_3_2->setValue(20);
        samplesSpinBox_3_2 = new QSpinBox(chanel2SettingsBox_3);
        samplesSpinBox_3_2->setObjectName(QStringLiteral("samplesSpinBox_3_2"));
        samplesSpinBox_3_2->setEnabled(false);
        samplesSpinBox_3_2->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_3_2->setValue(10);
        DACOffsetSpinBox_3_2 = new QSpinBox(chanel2SettingsBox_3);
        DACOffsetSpinBox_3_2->setObjectName(QStringLiteral("DACOffsetSpinBox_3_2"));
        DACOffsetSpinBox_3_2->setEnabled(false);
        DACOffsetSpinBox_3_2->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_3_2->setMinimum(-500);
        DACOffsetSpinBox_3_2->setMaximum(500);
        scaleSpinBox_3_2 = new QComboBox(chanel2SettingsBox_3);
        scaleSpinBox_3_2->setObjectName(QStringLiteral("scaleSpinBox_3_2"));
        scaleSpinBox_3_2->setEnabled(false);
        scaleSpinBox_3_2->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_3_2->setEditable(true);
        positionResetButton_3_2 = new QPushButton(chanel2SettingsBox_3);
        positionResetButton_3_2->setObjectName(QStringLiteral("positionResetButton_3_2"));
        positionResetButton_3_2->setEnabled(false);
        positionResetButton_3_2->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_3_2->setIcon(icon12);
        DACOffsetResetButton_3_2 = new QPushButton(chanel2SettingsBox_3);
        DACOffsetResetButton_3_2->setObjectName(QStringLiteral("DACOffsetResetButton_3_2"));
        DACOffsetResetButton_3_2->setEnabled(false);
        DACOffsetResetButton_3_2->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_3_2->setIcon(icon12);
        channelIsDrawingButton_3_2 = new QPushButton(chanel2SettingsBox_3);
        channelIsDrawingButton_3_2->setObjectName(QStringLiteral("channelIsDrawingButton_3_2"));
        channelIsDrawingButton_3_2->setEnabled(false);
        channelIsDrawingButton_3_2->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_3_2->setIcon(icon13);
        channelIsDrawingButton_3_2->setCheckable(true);
        channelIsDrawingButton_3_2->setChecked(true);
        thresholdIsDrawingButton_3_2 = new QPushButton(chanel2SettingsBox_3);
        thresholdIsDrawingButton_3_2->setObjectName(QStringLiteral("thresholdIsDrawingButton_3_2"));
        thresholdIsDrawingButton_3_2->setEnabled(false);
        thresholdIsDrawingButton_3_2->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_3_2->setIcon(icon13);
        thresholdIsDrawingButton_3_2->setCheckable(true);
        thresholdIsDrawingButton_3_2->setChecked(false);
        blockSamplesButton_3_2 = new QPushButton(chanel2SettingsBox_3);
        blockSamplesButton_3_2->setObjectName(QStringLiteral("blockSamplesButton_3_2"));
        blockSamplesButton_3_2->setEnabled(false);
        blockSamplesButton_3_2->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_3_2->setIcon(icon19);
        blockSamplesButton_3_2->setCheckable(true);
        blockSamplesButton_3_2->setChecked(true);
        chanel4SettingsBox_3 = new QGroupBox(WDF3Widget);
        chanel4SettingsBox_3->setObjectName(QStringLiteral("chanel4SettingsBox_3"));
        chanel4SettingsBox_3->setGeometry(QRect(490, 0, 90, 170));
        changeTriggerButton_3_4 = new QPushButton(chanel4SettingsBox_3);
        changeTriggerButton_3_4->setObjectName(QStringLiteral("changeTriggerButton_3_4"));
        changeTriggerButton_3_4->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_3_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_3_4->setCheckable(false);
        changeTriggerButton_3_4->setChecked(false);
        changeTriggerButton_3_4->setAutoRepeat(false);
        changeTriggerButton_3_4->setAutoDefault(false);
        positionSpinBox_3_4 = new QSpinBox(chanel4SettingsBox_3);
        positionSpinBox_3_4->setObjectName(QStringLiteral("positionSpinBox_3_4"));
        positionSpinBox_3_4->setEnabled(false);
        positionSpinBox_3_4->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_3_4->setMinimum(-500);
        positionSpinBox_3_4->setMaximum(500);
        thresholdSpinBox_3_4 = new QSpinBox(chanel4SettingsBox_3);
        thresholdSpinBox_3_4->setObjectName(QStringLiteral("thresholdSpinBox_3_4"));
        thresholdSpinBox_3_4->setEnabled(false);
        thresholdSpinBox_3_4->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_3_4->setMinimum(-500);
        thresholdSpinBox_3_4->setMaximum(500);
        thresholdSpinBox_3_4->setValue(20);
        samplesSpinBox_3_4 = new QSpinBox(chanel4SettingsBox_3);
        samplesSpinBox_3_4->setObjectName(QStringLiteral("samplesSpinBox_3_4"));
        samplesSpinBox_3_4->setEnabled(false);
        samplesSpinBox_3_4->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_3_4->setValue(10);
        DACOffsetSpinBox_3_4 = new QSpinBox(chanel4SettingsBox_3);
        DACOffsetSpinBox_3_4->setObjectName(QStringLiteral("DACOffsetSpinBox_3_4"));
        DACOffsetSpinBox_3_4->setEnabled(false);
        DACOffsetSpinBox_3_4->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_3_4->setMinimum(-500);
        DACOffsetSpinBox_3_4->setMaximum(500);
        scaleSpinBox_3_4 = new QComboBox(chanel4SettingsBox_3);
        scaleSpinBox_3_4->setObjectName(QStringLiteral("scaleSpinBox_3_4"));
        scaleSpinBox_3_4->setEnabled(false);
        scaleSpinBox_3_4->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_3_4->setEditable(true);
        positionResetButton_3_4 = new QPushButton(chanel4SettingsBox_3);
        positionResetButton_3_4->setObjectName(QStringLiteral("positionResetButton_3_4"));
        positionResetButton_3_4->setEnabled(false);
        positionResetButton_3_4->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_3_4->setIcon(icon12);
        DACOffsetResetButton_3_4 = new QPushButton(chanel4SettingsBox_3);
        DACOffsetResetButton_3_4->setObjectName(QStringLiteral("DACOffsetResetButton_3_4"));
        DACOffsetResetButton_3_4->setEnabled(false);
        DACOffsetResetButton_3_4->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_3_4->setIcon(icon12);
        channelIsDrawingButton_3_4 = new QPushButton(chanel4SettingsBox_3);
        channelIsDrawingButton_3_4->setObjectName(QStringLiteral("channelIsDrawingButton_3_4"));
        channelIsDrawingButton_3_4->setEnabled(false);
        channelIsDrawingButton_3_4->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_3_4->setIcon(icon13);
        channelIsDrawingButton_3_4->setCheckable(true);
        channelIsDrawingButton_3_4->setChecked(true);
        thresholdIsDrawingButton_3_4 = new QPushButton(chanel4SettingsBox_3);
        thresholdIsDrawingButton_3_4->setObjectName(QStringLiteral("thresholdIsDrawingButton_3_4"));
        thresholdIsDrawingButton_3_4->setEnabled(false);
        thresholdIsDrawingButton_3_4->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_3_4->setIcon(icon13);
        thresholdIsDrawingButton_3_4->setCheckable(true);
        thresholdIsDrawingButton_3_4->setChecked(false);
        blockSamplesButton_3_4 = new QPushButton(chanel4SettingsBox_3);
        blockSamplesButton_3_4->setObjectName(QStringLiteral("blockSamplesButton_3_4"));
        blockSamplesButton_3_4->setEnabled(false);
        blockSamplesButton_3_4->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_3_4->setIcon(icon19);
        blockSamplesButton_3_4->setCheckable(true);
        blockSamplesButton_3_4->setChecked(true);
        chanel6SettingsBox_3 = new QGroupBox(WDF3Widget);
        chanel6SettingsBox_3->setObjectName(QStringLiteral("chanel6SettingsBox_3"));
        chanel6SettingsBox_3->setGeometry(QRect(680, 0, 90, 170));
        changeTriggerButton_3_6 = new QPushButton(chanel6SettingsBox_3);
        changeTriggerButton_3_6->setObjectName(QStringLiteral("changeTriggerButton_3_6"));
        changeTriggerButton_3_6->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_3_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_3_6->setCheckable(false);
        changeTriggerButton_3_6->setChecked(false);
        changeTriggerButton_3_6->setAutoRepeat(false);
        changeTriggerButton_3_6->setAutoDefault(false);
        positionSpinBox_3_6 = new QSpinBox(chanel6SettingsBox_3);
        positionSpinBox_3_6->setObjectName(QStringLiteral("positionSpinBox_3_6"));
        positionSpinBox_3_6->setEnabled(false);
        positionSpinBox_3_6->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_3_6->setMinimum(-500);
        positionSpinBox_3_6->setMaximum(500);
        thresholdSpinBox_3_6 = new QSpinBox(chanel6SettingsBox_3);
        thresholdSpinBox_3_6->setObjectName(QStringLiteral("thresholdSpinBox_3_6"));
        thresholdSpinBox_3_6->setEnabled(false);
        thresholdSpinBox_3_6->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_3_6->setMinimum(-500);
        thresholdSpinBox_3_6->setMaximum(500);
        thresholdSpinBox_3_6->setValue(20);
        samplesSpinBox_3_6 = new QSpinBox(chanel6SettingsBox_3);
        samplesSpinBox_3_6->setObjectName(QStringLiteral("samplesSpinBox_3_6"));
        samplesSpinBox_3_6->setEnabled(false);
        samplesSpinBox_3_6->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_3_6->setValue(10);
        DACOffsetSpinBox_3_6 = new QSpinBox(chanel6SettingsBox_3);
        DACOffsetSpinBox_3_6->setObjectName(QStringLiteral("DACOffsetSpinBox_3_6"));
        DACOffsetSpinBox_3_6->setEnabled(false);
        DACOffsetSpinBox_3_6->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_3_6->setMinimum(-500);
        DACOffsetSpinBox_3_6->setMaximum(500);
        scaleSpinBox_3_6 = new QComboBox(chanel6SettingsBox_3);
        scaleSpinBox_3_6->setObjectName(QStringLiteral("scaleSpinBox_3_6"));
        scaleSpinBox_3_6->setEnabled(false);
        scaleSpinBox_3_6->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_3_6->setEditable(true);
        positionResetButton_3_6 = new QPushButton(chanel6SettingsBox_3);
        positionResetButton_3_6->setObjectName(QStringLiteral("positionResetButton_3_6"));
        positionResetButton_3_6->setEnabled(false);
        positionResetButton_3_6->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_3_6->setIcon(icon12);
        DACOffsetResetButton_3_6 = new QPushButton(chanel6SettingsBox_3);
        DACOffsetResetButton_3_6->setObjectName(QStringLiteral("DACOffsetResetButton_3_6"));
        DACOffsetResetButton_3_6->setEnabled(false);
        DACOffsetResetButton_3_6->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_3_6->setIcon(icon12);
        channelIsDrawingButton_3_6 = new QPushButton(chanel6SettingsBox_3);
        channelIsDrawingButton_3_6->setObjectName(QStringLiteral("channelIsDrawingButton_3_6"));
        channelIsDrawingButton_3_6->setEnabled(false);
        channelIsDrawingButton_3_6->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_3_6->setIcon(icon13);
        channelIsDrawingButton_3_6->setCheckable(true);
        channelIsDrawingButton_3_6->setChecked(true);
        thresholdIsDrawingButton_3_6 = new QPushButton(chanel6SettingsBox_3);
        thresholdIsDrawingButton_3_6->setObjectName(QStringLiteral("thresholdIsDrawingButton_3_6"));
        thresholdIsDrawingButton_3_6->setEnabled(false);
        thresholdIsDrawingButton_3_6->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_3_6->setIcon(icon13);
        thresholdIsDrawingButton_3_6->setCheckable(true);
        thresholdIsDrawingButton_3_6->setChecked(false);
        blockSamplesButton_3_6 = new QPushButton(chanel6SettingsBox_3);
        blockSamplesButton_3_6->setObjectName(QStringLiteral("blockSamplesButton_3_6"));
        blockSamplesButton_3_6->setEnabled(false);
        blockSamplesButton_3_6->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_3_6->setIcon(icon19);
        blockSamplesButton_3_6->setCheckable(true);
        blockSamplesButton_3_6->setChecked(true);
        chanel5SettingsBox_3 = new QGroupBox(WDF3Widget);
        chanel5SettingsBox_3->setObjectName(QStringLiteral("chanel5SettingsBox_3"));
        chanel5SettingsBox_3->setGeometry(QRect(585, 0, 90, 170));
        changeTriggerButton_3_5 = new QPushButton(chanel5SettingsBox_3);
        changeTriggerButton_3_5->setObjectName(QStringLiteral("changeTriggerButton_3_5"));
        changeTriggerButton_3_5->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_3_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_3_5->setCheckable(false);
        changeTriggerButton_3_5->setChecked(false);
        changeTriggerButton_3_5->setAutoRepeat(false);
        changeTriggerButton_3_5->setAutoDefault(false);
        positionSpinBox_3_5 = new QSpinBox(chanel5SettingsBox_3);
        positionSpinBox_3_5->setObjectName(QStringLiteral("positionSpinBox_3_5"));
        positionSpinBox_3_5->setEnabled(false);
        positionSpinBox_3_5->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_3_5->setMinimum(-500);
        positionSpinBox_3_5->setMaximum(500);
        thresholdSpinBox_3_5 = new QSpinBox(chanel5SettingsBox_3);
        thresholdSpinBox_3_5->setObjectName(QStringLiteral("thresholdSpinBox_3_5"));
        thresholdSpinBox_3_5->setEnabled(false);
        thresholdSpinBox_3_5->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_3_5->setMinimum(-500);
        thresholdSpinBox_3_5->setMaximum(500);
        thresholdSpinBox_3_5->setValue(20);
        samplesSpinBox_3_5 = new QSpinBox(chanel5SettingsBox_3);
        samplesSpinBox_3_5->setObjectName(QStringLiteral("samplesSpinBox_3_5"));
        samplesSpinBox_3_5->setEnabled(false);
        samplesSpinBox_3_5->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_3_5->setValue(10);
        DACOffsetSpinBox_3_5 = new QSpinBox(chanel5SettingsBox_3);
        DACOffsetSpinBox_3_5->setObjectName(QStringLiteral("DACOffsetSpinBox_3_5"));
        DACOffsetSpinBox_3_5->setEnabled(false);
        DACOffsetSpinBox_3_5->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_3_5->setMinimum(-500);
        DACOffsetSpinBox_3_5->setMaximum(500);
        scaleSpinBox_3_5 = new QComboBox(chanel5SettingsBox_3);
        scaleSpinBox_3_5->setObjectName(QStringLiteral("scaleSpinBox_3_5"));
        scaleSpinBox_3_5->setEnabled(false);
        scaleSpinBox_3_5->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_3_5->setEditable(true);
        positionResetButton_3_5 = new QPushButton(chanel5SettingsBox_3);
        positionResetButton_3_5->setObjectName(QStringLiteral("positionResetButton_3_5"));
        positionResetButton_3_5->setEnabled(false);
        positionResetButton_3_5->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_3_5->setIcon(icon12);
        DACOffsetResetButton_3_5 = new QPushButton(chanel5SettingsBox_3);
        DACOffsetResetButton_3_5->setObjectName(QStringLiteral("DACOffsetResetButton_3_5"));
        DACOffsetResetButton_3_5->setEnabled(false);
        DACOffsetResetButton_3_5->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_3_5->setIcon(icon12);
        channelIsDrawingButton_3_5 = new QPushButton(chanel5SettingsBox_3);
        channelIsDrawingButton_3_5->setObjectName(QStringLiteral("channelIsDrawingButton_3_5"));
        channelIsDrawingButton_3_5->setEnabled(false);
        channelIsDrawingButton_3_5->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_3_5->setIcon(icon13);
        channelIsDrawingButton_3_5->setCheckable(true);
        channelIsDrawingButton_3_5->setChecked(true);
        thresholdIsDrawingButton_3_5 = new QPushButton(chanel5SettingsBox_3);
        thresholdIsDrawingButton_3_5->setObjectName(QStringLiteral("thresholdIsDrawingButton_3_5"));
        thresholdIsDrawingButton_3_5->setEnabled(false);
        thresholdIsDrawingButton_3_5->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_3_5->setIcon(icon13);
        thresholdIsDrawingButton_3_5->setCheckable(true);
        thresholdIsDrawingButton_3_5->setChecked(false);
        blockSamplesButton_3_5 = new QPushButton(chanel5SettingsBox_3);
        blockSamplesButton_3_5->setObjectName(QStringLiteral("blockSamplesButton_3_5"));
        blockSamplesButton_3_5->setEnabled(false);
        blockSamplesButton_3_5->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_3_5->setIcon(icon19);
        blockSamplesButton_3_5->setCheckable(true);
        blockSamplesButton_3_5->setChecked(true);
        chanel7SettingsBox_3 = new QGroupBox(WDF3Widget);
        chanel7SettingsBox_3->setObjectName(QStringLiteral("chanel7SettingsBox_3"));
        chanel7SettingsBox_3->setGeometry(QRect(775, 0, 90, 170));
        changeTriggerButton_3_7 = new QPushButton(chanel7SettingsBox_3);
        changeTriggerButton_3_7->setObjectName(QStringLiteral("changeTriggerButton_3_7"));
        changeTriggerButton_3_7->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_3_7->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_3_7->setCheckable(false);
        changeTriggerButton_3_7->setChecked(false);
        changeTriggerButton_3_7->setAutoRepeat(false);
        changeTriggerButton_3_7->setAutoDefault(false);
        positionSpinBox_3_7 = new QSpinBox(chanel7SettingsBox_3);
        positionSpinBox_3_7->setObjectName(QStringLiteral("positionSpinBox_3_7"));
        positionSpinBox_3_7->setEnabled(false);
        positionSpinBox_3_7->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_3_7->setMinimum(-500);
        positionSpinBox_3_7->setMaximum(500);
        thresholdSpinBox_3_7 = new QSpinBox(chanel7SettingsBox_3);
        thresholdSpinBox_3_7->setObjectName(QStringLiteral("thresholdSpinBox_3_7"));
        thresholdSpinBox_3_7->setEnabled(false);
        thresholdSpinBox_3_7->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_3_7->setMinimum(-500);
        thresholdSpinBox_3_7->setMaximum(500);
        thresholdSpinBox_3_7->setValue(20);
        samplesSpinBox_3_7 = new QSpinBox(chanel7SettingsBox_3);
        samplesSpinBox_3_7->setObjectName(QStringLiteral("samplesSpinBox_3_7"));
        samplesSpinBox_3_7->setEnabled(false);
        samplesSpinBox_3_7->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_3_7->setValue(10);
        DACOffsetSpinBox_3_7 = new QSpinBox(chanel7SettingsBox_3);
        DACOffsetSpinBox_3_7->setObjectName(QStringLiteral("DACOffsetSpinBox_3_7"));
        DACOffsetSpinBox_3_7->setEnabled(false);
        DACOffsetSpinBox_3_7->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_3_7->setMinimum(-500);
        DACOffsetSpinBox_3_7->setMaximum(500);
        scaleSpinBox_3_7 = new QComboBox(chanel7SettingsBox_3);
        scaleSpinBox_3_7->setObjectName(QStringLiteral("scaleSpinBox_3_7"));
        scaleSpinBox_3_7->setEnabled(false);
        scaleSpinBox_3_7->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_3_7->setEditable(true);
        positionResetButton_3_7 = new QPushButton(chanel7SettingsBox_3);
        positionResetButton_3_7->setObjectName(QStringLiteral("positionResetButton_3_7"));
        positionResetButton_3_7->setEnabled(false);
        positionResetButton_3_7->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_3_7->setIcon(icon12);
        DACOffsetResetButton_3_7 = new QPushButton(chanel7SettingsBox_3);
        DACOffsetResetButton_3_7->setObjectName(QStringLiteral("DACOffsetResetButton_3_7"));
        DACOffsetResetButton_3_7->setEnabled(false);
        DACOffsetResetButton_3_7->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_3_7->setIcon(icon12);
        channelIsDrawingButton_3_7 = new QPushButton(chanel7SettingsBox_3);
        channelIsDrawingButton_3_7->setObjectName(QStringLiteral("channelIsDrawingButton_3_7"));
        channelIsDrawingButton_3_7->setEnabled(false);
        channelIsDrawingButton_3_7->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_3_7->setIcon(icon13);
        channelIsDrawingButton_3_7->setCheckable(true);
        channelIsDrawingButton_3_7->setChecked(true);
        thresholdIsDrawingButton_3_7 = new QPushButton(chanel7SettingsBox_3);
        thresholdIsDrawingButton_3_7->setObjectName(QStringLiteral("thresholdIsDrawingButton_3_7"));
        thresholdIsDrawingButton_3_7->setEnabled(false);
        thresholdIsDrawingButton_3_7->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_3_7->setIcon(icon13);
        thresholdIsDrawingButton_3_7->setCheckable(true);
        thresholdIsDrawingButton_3_7->setChecked(false);
        blockSamplesButton_3_7 = new QPushButton(chanel7SettingsBox_3);
        blockSamplesButton_3_7->setObjectName(QStringLiteral("blockSamplesButton_3_7"));
        blockSamplesButton_3_7->setEnabled(false);
        blockSamplesButton_3_7->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_3_7->setIcon(icon19);
        blockSamplesButton_3_7->setCheckable(true);
        blockSamplesButton_3_7->setChecked(true);
        chanel3SettingsBox_3 = new QGroupBox(WDF3Widget);
        chanel3SettingsBox_3->setObjectName(QStringLiteral("chanel3SettingsBox_3"));
        chanel3SettingsBox_3->setGeometry(QRect(395, 0, 90, 170));
        changeTriggerButton_3_3 = new QPushButton(chanel3SettingsBox_3);
        changeTriggerButton_3_3->setObjectName(QStringLiteral("changeTriggerButton_3_3"));
        changeTriggerButton_3_3->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_3_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_3_3->setCheckable(false);
        changeTriggerButton_3_3->setChecked(false);
        changeTriggerButton_3_3->setAutoRepeat(false);
        changeTriggerButton_3_3->setAutoDefault(false);
        positionSpinBox_3_3 = new QSpinBox(chanel3SettingsBox_3);
        positionSpinBox_3_3->setObjectName(QStringLiteral("positionSpinBox_3_3"));
        positionSpinBox_3_3->setEnabled(false);
        positionSpinBox_3_3->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_3_3->setMinimum(-500);
        positionSpinBox_3_3->setMaximum(500);
        thresholdSpinBox_3_3 = new QSpinBox(chanel3SettingsBox_3);
        thresholdSpinBox_3_3->setObjectName(QStringLiteral("thresholdSpinBox_3_3"));
        thresholdSpinBox_3_3->setEnabled(false);
        thresholdSpinBox_3_3->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_3_3->setMinimum(-500);
        thresholdSpinBox_3_3->setMaximum(500);
        thresholdSpinBox_3_3->setValue(20);
        samplesSpinBox_3_3 = new QSpinBox(chanel3SettingsBox_3);
        samplesSpinBox_3_3->setObjectName(QStringLiteral("samplesSpinBox_3_3"));
        samplesSpinBox_3_3->setEnabled(false);
        samplesSpinBox_3_3->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_3_3->setValue(10);
        DACOffsetSpinBox_3_3 = new QSpinBox(chanel3SettingsBox_3);
        DACOffsetSpinBox_3_3->setObjectName(QStringLiteral("DACOffsetSpinBox_3_3"));
        DACOffsetSpinBox_3_3->setEnabled(false);
        DACOffsetSpinBox_3_3->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_3_3->setMinimum(-500);
        DACOffsetSpinBox_3_3->setMaximum(500);
        scaleSpinBox_3_3 = new QComboBox(chanel3SettingsBox_3);
        scaleSpinBox_3_3->setObjectName(QStringLiteral("scaleSpinBox_3_3"));
        scaleSpinBox_3_3->setEnabled(false);
        scaleSpinBox_3_3->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_3_3->setEditable(true);
        positionResetButton_3_3 = new QPushButton(chanel3SettingsBox_3);
        positionResetButton_3_3->setObjectName(QStringLiteral("positionResetButton_3_3"));
        positionResetButton_3_3->setEnabled(false);
        positionResetButton_3_3->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_3_3->setIcon(icon12);
        DACOffsetResetButton_3_3 = new QPushButton(chanel3SettingsBox_3);
        DACOffsetResetButton_3_3->setObjectName(QStringLiteral("DACOffsetResetButton_3_3"));
        DACOffsetResetButton_3_3->setEnabled(false);
        DACOffsetResetButton_3_3->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_3_3->setIcon(icon12);
        channelIsDrawingButton_3_3 = new QPushButton(chanel3SettingsBox_3);
        channelIsDrawingButton_3_3->setObjectName(QStringLiteral("channelIsDrawingButton_3_3"));
        channelIsDrawingButton_3_3->setEnabled(false);
        channelIsDrawingButton_3_3->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_3_3->setIcon(icon13);
        channelIsDrawingButton_3_3->setCheckable(true);
        channelIsDrawingButton_3_3->setChecked(true);
        thresholdIsDrawingButton_3_3 = new QPushButton(chanel3SettingsBox_3);
        thresholdIsDrawingButton_3_3->setObjectName(QStringLiteral("thresholdIsDrawingButton_3_3"));
        thresholdIsDrawingButton_3_3->setEnabled(false);
        thresholdIsDrawingButton_3_3->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_3_3->setIcon(icon13);
        thresholdIsDrawingButton_3_3->setCheckable(true);
        thresholdIsDrawingButton_3_3->setChecked(false);
        blockSamplesButton_3_3 = new QPushButton(chanel3SettingsBox_3);
        blockSamplesButton_3_3->setObjectName(QStringLiteral("blockSamplesButton_3_3"));
        blockSamplesButton_3_3->setEnabled(false);
        blockSamplesButton_3_3->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_3_3->setIcon(icon19);
        blockSamplesButton_3_3->setCheckable(true);
        blockSamplesButton_3_3->setChecked(true);
        channelLabelBox_3 = new QGroupBox(WDF3Widget);
        channelLabelBox_3->setObjectName(QStringLiteral("channelLabelBox_3"));
        channelLabelBox_3->setGeometry(QRect(0, 0, 105, 170));
        thresholdLabel_3 = new QLabel(channelLabelBox_3);
        thresholdLabel_3->setObjectName(QStringLiteral("thresholdLabel_3"));
        thresholdLabel_3->setGeometry(QRect(10, 70, 91, 20));
        thresholdLabel_3->setLayoutDirection(Qt::RightToLeft);
        thresholdLabel_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        samplesLabel_3 = new QLabel(channelLabelBox_3);
        samplesLabel_3->setObjectName(QStringLiteral("samplesLabel_3"));
        samplesLabel_3->setGeometry(QRect(10, 95, 91, 20));
        samplesLabel_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        positionLabel_3 = new QLabel(channelLabelBox_3);
        positionLabel_3->setObjectName(QStringLiteral("positionLabel_3"));
        positionLabel_3->setGeometry(QRect(10, 45, 91, 20));
        positionLabel_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        DACOffsetLabel_3 = new QLabel(channelLabelBox_3);
        DACOffsetLabel_3->setObjectName(QStringLiteral("DACOffsetLabel_3"));
        DACOffsetLabel_3->setGeometry(QRect(10, 120, 91, 20));
        DACOffsetLabel_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        scaleLabel_3 = new QLabel(channelLabelBox_3);
        scaleLabel_3->setObjectName(QStringLiteral("scaleLabel_3"));
        scaleLabel_3->setGeometry(QRect(10, 145, 91, 20));
        scaleLabel_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        statusLabel_3 = new QLabel(channelLabelBox_3);
        statusLabel_3->setObjectName(QStringLiteral("statusLabel_3"));
        statusLabel_3->setGeometry(QRect(10, 15, 91, 24));
        statusLabel_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        WDFTabWidget->addTab(WDF3Widget, icon20, QString());
        WDF4Widget = new QWidget();
        WDF4Widget->setObjectName(QStringLiteral("WDF4Widget"));
        chanel0SettingsBox_4 = new QGroupBox(WDF4Widget);
        chanel0SettingsBox_4->setObjectName(QStringLiteral("chanel0SettingsBox_4"));
        chanel0SettingsBox_4->setGeometry(QRect(110, 0, 90, 170));
        changeTriggerButton_4_0 = new QPushButton(chanel0SettingsBox_4);
        changeTriggerButton_4_0->setObjectName(QStringLiteral("changeTriggerButton_4_0"));
        changeTriggerButton_4_0->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_4_0->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_4_0->setCheckable(false);
        changeTriggerButton_4_0->setChecked(false);
        changeTriggerButton_4_0->setAutoRepeat(false);
        changeTriggerButton_4_0->setAutoDefault(false);
        positionSpinBox_4_0 = new QSpinBox(chanel0SettingsBox_4);
        positionSpinBox_4_0->setObjectName(QStringLiteral("positionSpinBox_4_0"));
        positionSpinBox_4_0->setEnabled(false);
        positionSpinBox_4_0->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_4_0->setMinimum(-500);
        positionSpinBox_4_0->setMaximum(500);
        thresholdSpinBox_4_0 = new QSpinBox(chanel0SettingsBox_4);
        thresholdSpinBox_4_0->setObjectName(QStringLiteral("thresholdSpinBox_4_0"));
        thresholdSpinBox_4_0->setEnabled(false);
        thresholdSpinBox_4_0->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_4_0->setMinimum(-500);
        thresholdSpinBox_4_0->setMaximum(500);
        thresholdSpinBox_4_0->setValue(20);
        samplesSpinBox_4_0 = new QSpinBox(chanel0SettingsBox_4);
        samplesSpinBox_4_0->setObjectName(QStringLiteral("samplesSpinBox_4_0"));
        samplesSpinBox_4_0->setEnabled(false);
        samplesSpinBox_4_0->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_4_0->setValue(10);
        DACOffsetSpinBox_4_0 = new QSpinBox(chanel0SettingsBox_4);
        DACOffsetSpinBox_4_0->setObjectName(QStringLiteral("DACOffsetSpinBox_4_0"));
        DACOffsetSpinBox_4_0->setEnabled(false);
        DACOffsetSpinBox_4_0->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_4_0->setMinimum(-500);
        DACOffsetSpinBox_4_0->setMaximum(500);
        scaleSpinBox_4_0 = new QComboBox(chanel0SettingsBox_4);
        scaleSpinBox_4_0->setObjectName(QStringLiteral("scaleSpinBox_4_0"));
        scaleSpinBox_4_0->setEnabled(false);
        scaleSpinBox_4_0->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_4_0->setEditable(true);
        positionResetButton_4_0 = new QPushButton(chanel0SettingsBox_4);
        positionResetButton_4_0->setObjectName(QStringLiteral("positionResetButton_4_0"));
        positionResetButton_4_0->setEnabled(false);
        positionResetButton_4_0->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_4_0->setIcon(icon12);
        DACOffsetResetButton_4_0 = new QPushButton(chanel0SettingsBox_4);
        DACOffsetResetButton_4_0->setObjectName(QStringLiteral("DACOffsetResetButton_4_0"));
        DACOffsetResetButton_4_0->setEnabled(false);
        DACOffsetResetButton_4_0->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_4_0->setIcon(icon12);
        channelIsDrawingButton_4_0 = new QPushButton(chanel0SettingsBox_4);
        channelIsDrawingButton_4_0->setObjectName(QStringLiteral("channelIsDrawingButton_4_0"));
        channelIsDrawingButton_4_0->setEnabled(false);
        channelIsDrawingButton_4_0->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_4_0->setIcon(icon13);
        channelIsDrawingButton_4_0->setCheckable(true);
        channelIsDrawingButton_4_0->setChecked(true);
        thresholdIsDrawingButton_4_0 = new QPushButton(chanel0SettingsBox_4);
        thresholdIsDrawingButton_4_0->setObjectName(QStringLiteral("thresholdIsDrawingButton_4_0"));
        thresholdIsDrawingButton_4_0->setEnabled(false);
        thresholdIsDrawingButton_4_0->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_4_0->setIcon(icon13);
        thresholdIsDrawingButton_4_0->setCheckable(true);
        thresholdIsDrawingButton_4_0->setChecked(false);
        blockSamplesButton_4_0 = new QPushButton(chanel0SettingsBox_4);
        blockSamplesButton_4_0->setObjectName(QStringLiteral("blockSamplesButton_4_0"));
        blockSamplesButton_4_0->setEnabled(false);
        blockSamplesButton_4_0->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_4_0->setIcon(icon19);
        blockSamplesButton_4_0->setCheckable(true);
        blockSamplesButton_4_0->setChecked(true);
        chanel1SettingsBox_4 = new QGroupBox(WDF4Widget);
        chanel1SettingsBox_4->setObjectName(QStringLiteral("chanel1SettingsBox_4"));
        chanel1SettingsBox_4->setGeometry(QRect(205, 0, 90, 170));
        changeTriggerButton_4_1 = new QPushButton(chanel1SettingsBox_4);
        changeTriggerButton_4_1->setObjectName(QStringLiteral("changeTriggerButton_4_1"));
        changeTriggerButton_4_1->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_4_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_4_1->setCheckable(false);
        changeTriggerButton_4_1->setChecked(false);
        changeTriggerButton_4_1->setAutoRepeat(false);
        changeTriggerButton_4_1->setAutoDefault(false);
        positionSpinBox_4_1 = new QSpinBox(chanel1SettingsBox_4);
        positionSpinBox_4_1->setObjectName(QStringLiteral("positionSpinBox_4_1"));
        positionSpinBox_4_1->setEnabled(false);
        positionSpinBox_4_1->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_4_1->setMinimum(-500);
        positionSpinBox_4_1->setMaximum(500);
        thresholdSpinBox_4_1 = new QSpinBox(chanel1SettingsBox_4);
        thresholdSpinBox_4_1->setObjectName(QStringLiteral("thresholdSpinBox_4_1"));
        thresholdSpinBox_4_1->setEnabled(false);
        thresholdSpinBox_4_1->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_4_1->setMinimum(-500);
        thresholdSpinBox_4_1->setMaximum(500);
        thresholdSpinBox_4_1->setValue(20);
        samplesSpinBox_4_1 = new QSpinBox(chanel1SettingsBox_4);
        samplesSpinBox_4_1->setObjectName(QStringLiteral("samplesSpinBox_4_1"));
        samplesSpinBox_4_1->setEnabled(false);
        samplesSpinBox_4_1->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_4_1->setValue(10);
        DACOffsetSpinBox_4_1 = new QSpinBox(chanel1SettingsBox_4);
        DACOffsetSpinBox_4_1->setObjectName(QStringLiteral("DACOffsetSpinBox_4_1"));
        DACOffsetSpinBox_4_1->setEnabled(false);
        DACOffsetSpinBox_4_1->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_4_1->setMinimum(-500);
        DACOffsetSpinBox_4_1->setMaximum(500);
        scaleSpinBox_4_1 = new QComboBox(chanel1SettingsBox_4);
        scaleSpinBox_4_1->setObjectName(QStringLiteral("scaleSpinBox_4_1"));
        scaleSpinBox_4_1->setEnabled(false);
        scaleSpinBox_4_1->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_4_1->setEditable(true);
        positionResetButton_4_1 = new QPushButton(chanel1SettingsBox_4);
        positionResetButton_4_1->setObjectName(QStringLiteral("positionResetButton_4_1"));
        positionResetButton_4_1->setEnabled(false);
        positionResetButton_4_1->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_4_1->setIcon(icon12);
        DACOffsetResetButton_4_1 = new QPushButton(chanel1SettingsBox_4);
        DACOffsetResetButton_4_1->setObjectName(QStringLiteral("DACOffsetResetButton_4_1"));
        DACOffsetResetButton_4_1->setEnabled(false);
        DACOffsetResetButton_4_1->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_4_1->setIcon(icon12);
        channelIsDrawingButton_4_1 = new QPushButton(chanel1SettingsBox_4);
        channelIsDrawingButton_4_1->setObjectName(QStringLiteral("channelIsDrawingButton_4_1"));
        channelIsDrawingButton_4_1->setEnabled(false);
        channelIsDrawingButton_4_1->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_4_1->setIcon(icon13);
        channelIsDrawingButton_4_1->setCheckable(true);
        channelIsDrawingButton_4_1->setChecked(true);
        thresholdIsDrawingButton_4_1 = new QPushButton(chanel1SettingsBox_4);
        thresholdIsDrawingButton_4_1->setObjectName(QStringLiteral("thresholdIsDrawingButton_4_1"));
        thresholdIsDrawingButton_4_1->setEnabled(false);
        thresholdIsDrawingButton_4_1->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_4_1->setIcon(icon13);
        thresholdIsDrawingButton_4_1->setCheckable(true);
        thresholdIsDrawingButton_4_1->setChecked(false);
        blockSamplesButton_4_1 = new QPushButton(chanel1SettingsBox_4);
        blockSamplesButton_4_1->setObjectName(QStringLiteral("blockSamplesButton_4_1"));
        blockSamplesButton_4_1->setEnabled(false);
        blockSamplesButton_4_1->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_4_1->setIcon(icon19);
        blockSamplesButton_4_1->setCheckable(true);
        blockSamplesButton_4_1->setChecked(true);
        chanel2SettingsBox_4 = new QGroupBox(WDF4Widget);
        chanel2SettingsBox_4->setObjectName(QStringLiteral("chanel2SettingsBox_4"));
        chanel2SettingsBox_4->setGeometry(QRect(300, 0, 90, 170));
        changeTriggerButton_4_2 = new QPushButton(chanel2SettingsBox_4);
        changeTriggerButton_4_2->setObjectName(QStringLiteral("changeTriggerButton_4_2"));
        changeTriggerButton_4_2->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_4_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_4_2->setCheckable(false);
        changeTriggerButton_4_2->setChecked(false);
        changeTriggerButton_4_2->setAutoRepeat(false);
        changeTriggerButton_4_2->setAutoDefault(false);
        positionSpinBox_4_2 = new QSpinBox(chanel2SettingsBox_4);
        positionSpinBox_4_2->setObjectName(QStringLiteral("positionSpinBox_4_2"));
        positionSpinBox_4_2->setEnabled(false);
        positionSpinBox_4_2->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_4_2->setMinimum(-500);
        positionSpinBox_4_2->setMaximum(500);
        thresholdSpinBox_4_2 = new QSpinBox(chanel2SettingsBox_4);
        thresholdSpinBox_4_2->setObjectName(QStringLiteral("thresholdSpinBox_4_2"));
        thresholdSpinBox_4_2->setEnabled(false);
        thresholdSpinBox_4_2->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_4_2->setMinimum(-500);
        thresholdSpinBox_4_2->setMaximum(500);
        thresholdSpinBox_4_2->setValue(20);
        samplesSpinBox_4_2 = new QSpinBox(chanel2SettingsBox_4);
        samplesSpinBox_4_2->setObjectName(QStringLiteral("samplesSpinBox_4_2"));
        samplesSpinBox_4_2->setEnabled(false);
        samplesSpinBox_4_2->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_4_2->setValue(10);
        DACOffsetSpinBox_4_2 = new QSpinBox(chanel2SettingsBox_4);
        DACOffsetSpinBox_4_2->setObjectName(QStringLiteral("DACOffsetSpinBox_4_2"));
        DACOffsetSpinBox_4_2->setEnabled(false);
        DACOffsetSpinBox_4_2->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_4_2->setMinimum(-500);
        DACOffsetSpinBox_4_2->setMaximum(500);
        scaleSpinBox_4_2 = new QComboBox(chanel2SettingsBox_4);
        scaleSpinBox_4_2->setObjectName(QStringLiteral("scaleSpinBox_4_2"));
        scaleSpinBox_4_2->setEnabled(false);
        scaleSpinBox_4_2->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_4_2->setEditable(true);
        positionResetButton_4_2 = new QPushButton(chanel2SettingsBox_4);
        positionResetButton_4_2->setObjectName(QStringLiteral("positionResetButton_4_2"));
        positionResetButton_4_2->setEnabled(false);
        positionResetButton_4_2->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_4_2->setIcon(icon12);
        DACOffsetResetButton_4_2 = new QPushButton(chanel2SettingsBox_4);
        DACOffsetResetButton_4_2->setObjectName(QStringLiteral("DACOffsetResetButton_4_2"));
        DACOffsetResetButton_4_2->setEnabled(false);
        DACOffsetResetButton_4_2->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_4_2->setIcon(icon12);
        channelIsDrawingButton_4_2 = new QPushButton(chanel2SettingsBox_4);
        channelIsDrawingButton_4_2->setObjectName(QStringLiteral("channelIsDrawingButton_4_2"));
        channelIsDrawingButton_4_2->setEnabled(false);
        channelIsDrawingButton_4_2->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_4_2->setIcon(icon13);
        channelIsDrawingButton_4_2->setCheckable(true);
        channelIsDrawingButton_4_2->setChecked(true);
        thresholdIsDrawingButton_4_2 = new QPushButton(chanel2SettingsBox_4);
        thresholdIsDrawingButton_4_2->setObjectName(QStringLiteral("thresholdIsDrawingButton_4_2"));
        thresholdIsDrawingButton_4_2->setEnabled(false);
        thresholdIsDrawingButton_4_2->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_4_2->setIcon(icon13);
        thresholdIsDrawingButton_4_2->setCheckable(true);
        thresholdIsDrawingButton_4_2->setChecked(false);
        blockSamplesButton_4_2 = new QPushButton(chanel2SettingsBox_4);
        blockSamplesButton_4_2->setObjectName(QStringLiteral("blockSamplesButton_4_2"));
        blockSamplesButton_4_2->setEnabled(false);
        blockSamplesButton_4_2->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_4_2->setIcon(icon19);
        blockSamplesButton_4_2->setCheckable(true);
        blockSamplesButton_4_2->setChecked(true);
        chanel4SettingsBox_4 = new QGroupBox(WDF4Widget);
        chanel4SettingsBox_4->setObjectName(QStringLiteral("chanel4SettingsBox_4"));
        chanel4SettingsBox_4->setGeometry(QRect(490, 0, 90, 170));
        changeTriggerButton_4_4 = new QPushButton(chanel4SettingsBox_4);
        changeTriggerButton_4_4->setObjectName(QStringLiteral("changeTriggerButton_4_4"));
        changeTriggerButton_4_4->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_4_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_4_4->setCheckable(false);
        changeTriggerButton_4_4->setChecked(false);
        changeTriggerButton_4_4->setAutoRepeat(false);
        changeTriggerButton_4_4->setAutoDefault(false);
        positionSpinBox_4_4 = new QSpinBox(chanel4SettingsBox_4);
        positionSpinBox_4_4->setObjectName(QStringLiteral("positionSpinBox_4_4"));
        positionSpinBox_4_4->setEnabled(false);
        positionSpinBox_4_4->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_4_4->setMinimum(-500);
        positionSpinBox_4_4->setMaximum(500);
        thresholdSpinBox_4_4 = new QSpinBox(chanel4SettingsBox_4);
        thresholdSpinBox_4_4->setObjectName(QStringLiteral("thresholdSpinBox_4_4"));
        thresholdSpinBox_4_4->setEnabled(false);
        thresholdSpinBox_4_4->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_4_4->setMinimum(-500);
        thresholdSpinBox_4_4->setMaximum(500);
        thresholdSpinBox_4_4->setValue(20);
        samplesSpinBox_4_4 = new QSpinBox(chanel4SettingsBox_4);
        samplesSpinBox_4_4->setObjectName(QStringLiteral("samplesSpinBox_4_4"));
        samplesSpinBox_4_4->setEnabled(false);
        samplesSpinBox_4_4->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_4_4->setValue(10);
        DACOffsetSpinBox_4_4 = new QSpinBox(chanel4SettingsBox_4);
        DACOffsetSpinBox_4_4->setObjectName(QStringLiteral("DACOffsetSpinBox_4_4"));
        DACOffsetSpinBox_4_4->setEnabled(false);
        DACOffsetSpinBox_4_4->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_4_4->setMinimum(-500);
        DACOffsetSpinBox_4_4->setMaximum(500);
        scaleSpinBox_4_4 = new QComboBox(chanel4SettingsBox_4);
        scaleSpinBox_4_4->setObjectName(QStringLiteral("scaleSpinBox_4_4"));
        scaleSpinBox_4_4->setEnabled(false);
        scaleSpinBox_4_4->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_4_4->setEditable(true);
        positionResetButton_4_4 = new QPushButton(chanel4SettingsBox_4);
        positionResetButton_4_4->setObjectName(QStringLiteral("positionResetButton_4_4"));
        positionResetButton_4_4->setEnabled(false);
        positionResetButton_4_4->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_4_4->setIcon(icon12);
        DACOffsetResetButton_4_4 = new QPushButton(chanel4SettingsBox_4);
        DACOffsetResetButton_4_4->setObjectName(QStringLiteral("DACOffsetResetButton_4_4"));
        DACOffsetResetButton_4_4->setEnabled(false);
        DACOffsetResetButton_4_4->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_4_4->setIcon(icon12);
        channelIsDrawingButton_4_4 = new QPushButton(chanel4SettingsBox_4);
        channelIsDrawingButton_4_4->setObjectName(QStringLiteral("channelIsDrawingButton_4_4"));
        channelIsDrawingButton_4_4->setEnabled(false);
        channelIsDrawingButton_4_4->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_4_4->setIcon(icon13);
        channelIsDrawingButton_4_4->setCheckable(true);
        channelIsDrawingButton_4_4->setChecked(true);
        thresholdIsDrawingButton_4_4 = new QPushButton(chanel4SettingsBox_4);
        thresholdIsDrawingButton_4_4->setObjectName(QStringLiteral("thresholdIsDrawingButton_4_4"));
        thresholdIsDrawingButton_4_4->setEnabled(false);
        thresholdIsDrawingButton_4_4->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_4_4->setIcon(icon13);
        thresholdIsDrawingButton_4_4->setCheckable(true);
        thresholdIsDrawingButton_4_4->setChecked(false);
        blockSamplesButton_4_4 = new QPushButton(chanel4SettingsBox_4);
        blockSamplesButton_4_4->setObjectName(QStringLiteral("blockSamplesButton_4_4"));
        blockSamplesButton_4_4->setEnabled(false);
        blockSamplesButton_4_4->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_4_4->setIcon(icon19);
        blockSamplesButton_4_4->setCheckable(true);
        blockSamplesButton_4_4->setChecked(true);
        chanel6SettingsBox_4 = new QGroupBox(WDF4Widget);
        chanel6SettingsBox_4->setObjectName(QStringLiteral("chanel6SettingsBox_4"));
        chanel6SettingsBox_4->setGeometry(QRect(680, 0, 90, 170));
        changeTriggerButton_4_6 = new QPushButton(chanel6SettingsBox_4);
        changeTriggerButton_4_6->setObjectName(QStringLiteral("changeTriggerButton_4_6"));
        changeTriggerButton_4_6->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_4_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_4_6->setCheckable(false);
        changeTriggerButton_4_6->setChecked(false);
        changeTriggerButton_4_6->setAutoRepeat(false);
        changeTriggerButton_4_6->setAutoDefault(false);
        positionSpinBox_4_6 = new QSpinBox(chanel6SettingsBox_4);
        positionSpinBox_4_6->setObjectName(QStringLiteral("positionSpinBox_4_6"));
        positionSpinBox_4_6->setEnabled(false);
        positionSpinBox_4_6->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_4_6->setMinimum(-500);
        positionSpinBox_4_6->setMaximum(500);
        thresholdSpinBox_4_6 = new QSpinBox(chanel6SettingsBox_4);
        thresholdSpinBox_4_6->setObjectName(QStringLiteral("thresholdSpinBox_4_6"));
        thresholdSpinBox_4_6->setEnabled(false);
        thresholdSpinBox_4_6->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_4_6->setMinimum(-500);
        thresholdSpinBox_4_6->setMaximum(500);
        thresholdSpinBox_4_6->setValue(20);
        samplesSpinBox_4_6 = new QSpinBox(chanel6SettingsBox_4);
        samplesSpinBox_4_6->setObjectName(QStringLiteral("samplesSpinBox_4_6"));
        samplesSpinBox_4_6->setEnabled(false);
        samplesSpinBox_4_6->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_4_6->setValue(10);
        DACOffsetSpinBox_4_6 = new QSpinBox(chanel6SettingsBox_4);
        DACOffsetSpinBox_4_6->setObjectName(QStringLiteral("DACOffsetSpinBox_4_6"));
        DACOffsetSpinBox_4_6->setEnabled(false);
        DACOffsetSpinBox_4_6->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_4_6->setMinimum(-500);
        DACOffsetSpinBox_4_6->setMaximum(500);
        scaleSpinBox_4_6 = new QComboBox(chanel6SettingsBox_4);
        scaleSpinBox_4_6->setObjectName(QStringLiteral("scaleSpinBox_4_6"));
        scaleSpinBox_4_6->setEnabled(false);
        scaleSpinBox_4_6->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_4_6->setEditable(true);
        positionResetButton_4_6 = new QPushButton(chanel6SettingsBox_4);
        positionResetButton_4_6->setObjectName(QStringLiteral("positionResetButton_4_6"));
        positionResetButton_4_6->setEnabled(false);
        positionResetButton_4_6->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_4_6->setIcon(icon12);
        DACOffsetResetButton_4_6 = new QPushButton(chanel6SettingsBox_4);
        DACOffsetResetButton_4_6->setObjectName(QStringLiteral("DACOffsetResetButton_4_6"));
        DACOffsetResetButton_4_6->setEnabled(false);
        DACOffsetResetButton_4_6->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_4_6->setIcon(icon12);
        channelIsDrawingButton_4_6 = new QPushButton(chanel6SettingsBox_4);
        channelIsDrawingButton_4_6->setObjectName(QStringLiteral("channelIsDrawingButton_4_6"));
        channelIsDrawingButton_4_6->setEnabled(false);
        channelIsDrawingButton_4_6->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_4_6->setIcon(icon13);
        channelIsDrawingButton_4_6->setCheckable(true);
        channelIsDrawingButton_4_6->setChecked(true);
        thresholdIsDrawingButton_4_6 = new QPushButton(chanel6SettingsBox_4);
        thresholdIsDrawingButton_4_6->setObjectName(QStringLiteral("thresholdIsDrawingButton_4_6"));
        thresholdIsDrawingButton_4_6->setEnabled(false);
        thresholdIsDrawingButton_4_6->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_4_6->setIcon(icon13);
        thresholdIsDrawingButton_4_6->setCheckable(true);
        thresholdIsDrawingButton_4_6->setChecked(false);
        blockSamplesButton_4_6 = new QPushButton(chanel6SettingsBox_4);
        blockSamplesButton_4_6->setObjectName(QStringLiteral("blockSamplesButton_4_6"));
        blockSamplesButton_4_6->setEnabled(false);
        blockSamplesButton_4_6->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_4_6->setIcon(icon19);
        blockSamplesButton_4_6->setCheckable(true);
        blockSamplesButton_4_6->setChecked(true);
        chanel5SettingsBox_4 = new QGroupBox(WDF4Widget);
        chanel5SettingsBox_4->setObjectName(QStringLiteral("chanel5SettingsBox_4"));
        chanel5SettingsBox_4->setGeometry(QRect(585, 0, 90, 170));
        changeTriggerButton_4_5 = new QPushButton(chanel5SettingsBox_4);
        changeTriggerButton_4_5->setObjectName(QStringLiteral("changeTriggerButton_4_5"));
        changeTriggerButton_4_5->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_4_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_4_5->setCheckable(false);
        changeTriggerButton_4_5->setChecked(false);
        changeTriggerButton_4_5->setAutoRepeat(false);
        changeTriggerButton_4_5->setAutoDefault(false);
        positionSpinBox_4_5 = new QSpinBox(chanel5SettingsBox_4);
        positionSpinBox_4_5->setObjectName(QStringLiteral("positionSpinBox_4_5"));
        positionSpinBox_4_5->setEnabled(false);
        positionSpinBox_4_5->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_4_5->setMinimum(-500);
        positionSpinBox_4_5->setMaximum(500);
        thresholdSpinBox_4_5 = new QSpinBox(chanel5SettingsBox_4);
        thresholdSpinBox_4_5->setObjectName(QStringLiteral("thresholdSpinBox_4_5"));
        thresholdSpinBox_4_5->setEnabled(false);
        thresholdSpinBox_4_5->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_4_5->setMinimum(-500);
        thresholdSpinBox_4_5->setMaximum(500);
        thresholdSpinBox_4_5->setValue(20);
        samplesSpinBox_4_5 = new QSpinBox(chanel5SettingsBox_4);
        samplesSpinBox_4_5->setObjectName(QStringLiteral("samplesSpinBox_4_5"));
        samplesSpinBox_4_5->setEnabled(false);
        samplesSpinBox_4_5->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_4_5->setValue(10);
        DACOffsetSpinBox_4_5 = new QSpinBox(chanel5SettingsBox_4);
        DACOffsetSpinBox_4_5->setObjectName(QStringLiteral("DACOffsetSpinBox_4_5"));
        DACOffsetSpinBox_4_5->setEnabled(false);
        DACOffsetSpinBox_4_5->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_4_5->setMinimum(-500);
        DACOffsetSpinBox_4_5->setMaximum(500);
        scaleSpinBox_4_5 = new QComboBox(chanel5SettingsBox_4);
        scaleSpinBox_4_5->setObjectName(QStringLiteral("scaleSpinBox_4_5"));
        scaleSpinBox_4_5->setEnabled(false);
        scaleSpinBox_4_5->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_4_5->setEditable(true);
        positionResetButton_4_5 = new QPushButton(chanel5SettingsBox_4);
        positionResetButton_4_5->setObjectName(QStringLiteral("positionResetButton_4_5"));
        positionResetButton_4_5->setEnabled(false);
        positionResetButton_4_5->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_4_5->setIcon(icon12);
        DACOffsetResetButton_4_5 = new QPushButton(chanel5SettingsBox_4);
        DACOffsetResetButton_4_5->setObjectName(QStringLiteral("DACOffsetResetButton_4_5"));
        DACOffsetResetButton_4_5->setEnabled(false);
        DACOffsetResetButton_4_5->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_4_5->setIcon(icon12);
        channelIsDrawingButton_4_5 = new QPushButton(chanel5SettingsBox_4);
        channelIsDrawingButton_4_5->setObjectName(QStringLiteral("channelIsDrawingButton_4_5"));
        channelIsDrawingButton_4_5->setEnabled(false);
        channelIsDrawingButton_4_5->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_4_5->setIcon(icon13);
        channelIsDrawingButton_4_5->setCheckable(true);
        channelIsDrawingButton_4_5->setChecked(true);
        thresholdIsDrawingButton_4_5 = new QPushButton(chanel5SettingsBox_4);
        thresholdIsDrawingButton_4_5->setObjectName(QStringLiteral("thresholdIsDrawingButton_4_5"));
        thresholdIsDrawingButton_4_5->setEnabled(false);
        thresholdIsDrawingButton_4_5->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_4_5->setIcon(icon13);
        thresholdIsDrawingButton_4_5->setCheckable(true);
        thresholdIsDrawingButton_4_5->setChecked(false);
        blockSamplesButton_4_5 = new QPushButton(chanel5SettingsBox_4);
        blockSamplesButton_4_5->setObjectName(QStringLiteral("blockSamplesButton_4_5"));
        blockSamplesButton_4_5->setEnabled(false);
        blockSamplesButton_4_5->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_4_5->setIcon(icon19);
        blockSamplesButton_4_5->setCheckable(true);
        blockSamplesButton_4_5->setChecked(true);
        chanel7SettingsBox_4 = new QGroupBox(WDF4Widget);
        chanel7SettingsBox_4->setObjectName(QStringLiteral("chanel7SettingsBox_4"));
        chanel7SettingsBox_4->setGeometry(QRect(775, 0, 90, 170));
        changeTriggerButton_4_7 = new QPushButton(chanel7SettingsBox_4);
        changeTriggerButton_4_7->setObjectName(QStringLiteral("changeTriggerButton_4_7"));
        changeTriggerButton_4_7->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_4_7->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_4_7->setCheckable(false);
        changeTriggerButton_4_7->setChecked(false);
        changeTriggerButton_4_7->setAutoRepeat(false);
        changeTriggerButton_4_7->setAutoDefault(false);
        positionSpinBox_4_7 = new QSpinBox(chanel7SettingsBox_4);
        positionSpinBox_4_7->setObjectName(QStringLiteral("positionSpinBox_4_7"));
        positionSpinBox_4_7->setEnabled(false);
        positionSpinBox_4_7->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_4_7->setMinimum(-500);
        positionSpinBox_4_7->setMaximum(500);
        thresholdSpinBox_4_7 = new QSpinBox(chanel7SettingsBox_4);
        thresholdSpinBox_4_7->setObjectName(QStringLiteral("thresholdSpinBox_4_7"));
        thresholdSpinBox_4_7->setEnabled(false);
        thresholdSpinBox_4_7->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_4_7->setMinimum(-500);
        thresholdSpinBox_4_7->setMaximum(500);
        thresholdSpinBox_4_7->setValue(20);
        samplesSpinBox_4_7 = new QSpinBox(chanel7SettingsBox_4);
        samplesSpinBox_4_7->setObjectName(QStringLiteral("samplesSpinBox_4_7"));
        samplesSpinBox_4_7->setEnabled(false);
        samplesSpinBox_4_7->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_4_7->setValue(10);
        DACOffsetSpinBox_4_7 = new QSpinBox(chanel7SettingsBox_4);
        DACOffsetSpinBox_4_7->setObjectName(QStringLiteral("DACOffsetSpinBox_4_7"));
        DACOffsetSpinBox_4_7->setEnabled(false);
        DACOffsetSpinBox_4_7->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_4_7->setMinimum(-500);
        DACOffsetSpinBox_4_7->setMaximum(500);
        scaleSpinBox_4_7 = new QComboBox(chanel7SettingsBox_4);
        scaleSpinBox_4_7->setObjectName(QStringLiteral("scaleSpinBox_4_7"));
        scaleSpinBox_4_7->setEnabled(false);
        scaleSpinBox_4_7->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_4_7->setEditable(true);
        positionResetButton_4_7 = new QPushButton(chanel7SettingsBox_4);
        positionResetButton_4_7->setObjectName(QStringLiteral("positionResetButton_4_7"));
        positionResetButton_4_7->setEnabled(false);
        positionResetButton_4_7->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_4_7->setIcon(icon12);
        DACOffsetResetButton_4_7 = new QPushButton(chanel7SettingsBox_4);
        DACOffsetResetButton_4_7->setObjectName(QStringLiteral("DACOffsetResetButton_4_7"));
        DACOffsetResetButton_4_7->setEnabled(false);
        DACOffsetResetButton_4_7->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_4_7->setIcon(icon12);
        channelIsDrawingButton_4_7 = new QPushButton(chanel7SettingsBox_4);
        channelIsDrawingButton_4_7->setObjectName(QStringLiteral("channelIsDrawingButton_4_7"));
        channelIsDrawingButton_4_7->setEnabled(false);
        channelIsDrawingButton_4_7->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_4_7->setIcon(icon13);
        channelIsDrawingButton_4_7->setCheckable(true);
        channelIsDrawingButton_4_7->setChecked(true);
        thresholdIsDrawingButton_4_7 = new QPushButton(chanel7SettingsBox_4);
        thresholdIsDrawingButton_4_7->setObjectName(QStringLiteral("thresholdIsDrawingButton_4_7"));
        thresholdIsDrawingButton_4_7->setEnabled(false);
        thresholdIsDrawingButton_4_7->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_4_7->setIcon(icon13);
        thresholdIsDrawingButton_4_7->setCheckable(true);
        thresholdIsDrawingButton_4_7->setChecked(false);
        blockSamplesButton_4_7 = new QPushButton(chanel7SettingsBox_4);
        blockSamplesButton_4_7->setObjectName(QStringLiteral("blockSamplesButton_4_7"));
        blockSamplesButton_4_7->setEnabled(false);
        blockSamplesButton_4_7->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_4_7->setIcon(icon19);
        blockSamplesButton_4_7->setCheckable(true);
        blockSamplesButton_4_7->setChecked(true);
        chanel3SettingsBox_4 = new QGroupBox(WDF4Widget);
        chanel3SettingsBox_4->setObjectName(QStringLiteral("chanel3SettingsBox_4"));
        chanel3SettingsBox_4->setGeometry(QRect(395, 0, 90, 170));
        changeTriggerButton_4_3 = new QPushButton(chanel3SettingsBox_4);
        changeTriggerButton_4_3->setObjectName(QStringLiteral("changeTriggerButton_4_3"));
        changeTriggerButton_4_3->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_4_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_4_3->setCheckable(false);
        changeTriggerButton_4_3->setChecked(false);
        changeTriggerButton_4_3->setAutoRepeat(false);
        changeTriggerButton_4_3->setAutoDefault(false);
        positionSpinBox_4_3 = new QSpinBox(chanel3SettingsBox_4);
        positionSpinBox_4_3->setObjectName(QStringLiteral("positionSpinBox_4_3"));
        positionSpinBox_4_3->setEnabled(false);
        positionSpinBox_4_3->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_4_3->setMinimum(-500);
        positionSpinBox_4_3->setMaximum(500);
        thresholdSpinBox_4_3 = new QSpinBox(chanel3SettingsBox_4);
        thresholdSpinBox_4_3->setObjectName(QStringLiteral("thresholdSpinBox_4_3"));
        thresholdSpinBox_4_3->setEnabled(false);
        thresholdSpinBox_4_3->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_4_3->setMinimum(-500);
        thresholdSpinBox_4_3->setMaximum(500);
        thresholdSpinBox_4_3->setValue(20);
        samplesSpinBox_4_3 = new QSpinBox(chanel3SettingsBox_4);
        samplesSpinBox_4_3->setObjectName(QStringLiteral("samplesSpinBox_4_3"));
        samplesSpinBox_4_3->setEnabled(false);
        samplesSpinBox_4_3->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_4_3->setValue(10);
        DACOffsetSpinBox_4_3 = new QSpinBox(chanel3SettingsBox_4);
        DACOffsetSpinBox_4_3->setObjectName(QStringLiteral("DACOffsetSpinBox_4_3"));
        DACOffsetSpinBox_4_3->setEnabled(false);
        DACOffsetSpinBox_4_3->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_4_3->setMinimum(-500);
        DACOffsetSpinBox_4_3->setMaximum(500);
        scaleSpinBox_4_3 = new QComboBox(chanel3SettingsBox_4);
        scaleSpinBox_4_3->setObjectName(QStringLiteral("scaleSpinBox_4_3"));
        scaleSpinBox_4_3->setEnabled(false);
        scaleSpinBox_4_3->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_4_3->setEditable(true);
        positionResetButton_4_3 = new QPushButton(chanel3SettingsBox_4);
        positionResetButton_4_3->setObjectName(QStringLiteral("positionResetButton_4_3"));
        positionResetButton_4_3->setEnabled(false);
        positionResetButton_4_3->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_4_3->setIcon(icon12);
        DACOffsetResetButton_4_3 = new QPushButton(chanel3SettingsBox_4);
        DACOffsetResetButton_4_3->setObjectName(QStringLiteral("DACOffsetResetButton_4_3"));
        DACOffsetResetButton_4_3->setEnabled(false);
        DACOffsetResetButton_4_3->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_4_3->setIcon(icon12);
        channelIsDrawingButton_4_3 = new QPushButton(chanel3SettingsBox_4);
        channelIsDrawingButton_4_3->setObjectName(QStringLiteral("channelIsDrawingButton_4_3"));
        channelIsDrawingButton_4_3->setEnabled(false);
        channelIsDrawingButton_4_3->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_4_3->setIcon(icon13);
        channelIsDrawingButton_4_3->setCheckable(true);
        channelIsDrawingButton_4_3->setChecked(true);
        thresholdIsDrawingButton_4_3 = new QPushButton(chanel3SettingsBox_4);
        thresholdIsDrawingButton_4_3->setObjectName(QStringLiteral("thresholdIsDrawingButton_4_3"));
        thresholdIsDrawingButton_4_3->setEnabled(false);
        thresholdIsDrawingButton_4_3->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_4_3->setIcon(icon13);
        thresholdIsDrawingButton_4_3->setCheckable(true);
        thresholdIsDrawingButton_4_3->setChecked(false);
        blockSamplesButton_4_3 = new QPushButton(chanel3SettingsBox_4);
        blockSamplesButton_4_3->setObjectName(QStringLiteral("blockSamplesButton_4_3"));
        blockSamplesButton_4_3->setEnabled(false);
        blockSamplesButton_4_3->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_4_3->setIcon(icon19);
        blockSamplesButton_4_3->setCheckable(true);
        blockSamplesButton_4_3->setChecked(true);
        channelLabelBox_4 = new QGroupBox(WDF4Widget);
        channelLabelBox_4->setObjectName(QStringLiteral("channelLabelBox_4"));
        channelLabelBox_4->setGeometry(QRect(0, 0, 105, 170));
        thresholdLabel_4 = new QLabel(channelLabelBox_4);
        thresholdLabel_4->setObjectName(QStringLiteral("thresholdLabel_4"));
        thresholdLabel_4->setGeometry(QRect(10, 70, 91, 20));
        thresholdLabel_4->setLayoutDirection(Qt::RightToLeft);
        thresholdLabel_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        samplesLabel_4 = new QLabel(channelLabelBox_4);
        samplesLabel_4->setObjectName(QStringLiteral("samplesLabel_4"));
        samplesLabel_4->setGeometry(QRect(10, 95, 91, 20));
        samplesLabel_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        positionLabel_4 = new QLabel(channelLabelBox_4);
        positionLabel_4->setObjectName(QStringLiteral("positionLabel_4"));
        positionLabel_4->setGeometry(QRect(10, 45, 91, 20));
        positionLabel_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        DACOffsetLabel_4 = new QLabel(channelLabelBox_4);
        DACOffsetLabel_4->setObjectName(QStringLiteral("DACOffsetLabel_4"));
        DACOffsetLabel_4->setGeometry(QRect(10, 120, 91, 20));
        DACOffsetLabel_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        scaleLabel_4 = new QLabel(channelLabelBox_4);
        scaleLabel_4->setObjectName(QStringLiteral("scaleLabel_4"));
        scaleLabel_4->setGeometry(QRect(10, 145, 91, 20));
        scaleLabel_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        statusLabel_4 = new QLabel(channelLabelBox_4);
        statusLabel_4->setObjectName(QStringLiteral("statusLabel_4"));
        statusLabel_4->setGeometry(QRect(10, 15, 91, 24));
        statusLabel_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        WDFTabWidget->addTab(WDF4Widget, icon20, QString());
        WDF5Widget = new QWidget();
        WDF5Widget->setObjectName(QStringLiteral("WDF5Widget"));
        chanel0SettingsBox_5 = new QGroupBox(WDF5Widget);
        chanel0SettingsBox_5->setObjectName(QStringLiteral("chanel0SettingsBox_5"));
        chanel0SettingsBox_5->setGeometry(QRect(110, 0, 90, 170));
        changeTriggerButton_5_0 = new QPushButton(chanel0SettingsBox_5);
        changeTriggerButton_5_0->setObjectName(QStringLiteral("changeTriggerButton_5_0"));
        changeTriggerButton_5_0->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_5_0->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_5_0->setCheckable(false);
        changeTriggerButton_5_0->setChecked(false);
        changeTriggerButton_5_0->setAutoRepeat(false);
        changeTriggerButton_5_0->setAutoDefault(false);
        positionSpinBox_5_0 = new QSpinBox(chanel0SettingsBox_5);
        positionSpinBox_5_0->setObjectName(QStringLiteral("positionSpinBox_5_0"));
        positionSpinBox_5_0->setEnabled(false);
        positionSpinBox_5_0->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_5_0->setMaximum(500);
        positionSpinBox_5_0->setValue(0);
        thresholdSpinBox_5_0 = new QSpinBox(chanel0SettingsBox_5);
        thresholdSpinBox_5_0->setObjectName(QStringLiteral("thresholdSpinBox_5_0"));
        thresholdSpinBox_5_0->setEnabled(false);
        thresholdSpinBox_5_0->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_5_0->setMaximum(500);
        thresholdSpinBox_5_0->setValue(20);
        samplesSpinBox_5_0 = new QSpinBox(chanel0SettingsBox_5);
        samplesSpinBox_5_0->setObjectName(QStringLiteral("samplesSpinBox_5_0"));
        samplesSpinBox_5_0->setEnabled(false);
        samplesSpinBox_5_0->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_5_0->setValue(10);
        DACOffsetSpinBox_5_0 = new QSpinBox(chanel0SettingsBox_5);
        DACOffsetSpinBox_5_0->setObjectName(QStringLiteral("DACOffsetSpinBox_5_0"));
        DACOffsetSpinBox_5_0->setEnabled(false);
        DACOffsetSpinBox_5_0->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_5_0->setMaximum(500);
        DACOffsetSpinBox_5_0->setValue(0);
        scaleSpinBox_5_0 = new QComboBox(chanel0SettingsBox_5);
        scaleSpinBox_5_0->setObjectName(QStringLiteral("scaleSpinBox_5_0"));
        scaleSpinBox_5_0->setEnabled(false);
        scaleSpinBox_5_0->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_5_0->setEditable(true);
        positionResetButton_5_0 = new QPushButton(chanel0SettingsBox_5);
        positionResetButton_5_0->setObjectName(QStringLiteral("positionResetButton_5_0"));
        positionResetButton_5_0->setEnabled(false);
        positionResetButton_5_0->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_5_0->setIcon(icon12);
        DACOffsetResetButton_5_0 = new QPushButton(chanel0SettingsBox_5);
        DACOffsetResetButton_5_0->setObjectName(QStringLiteral("DACOffsetResetButton_5_0"));
        DACOffsetResetButton_5_0->setEnabled(false);
        DACOffsetResetButton_5_0->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_5_0->setIcon(icon12);
        channelIsDrawingButton_5_0 = new QPushButton(chanel0SettingsBox_5);
        channelIsDrawingButton_5_0->setObjectName(QStringLiteral("channelIsDrawingButton_5_0"));
        channelIsDrawingButton_5_0->setEnabled(false);
        channelIsDrawingButton_5_0->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_5_0->setIcon(icon13);
        channelIsDrawingButton_5_0->setCheckable(true);
        channelIsDrawingButton_5_0->setChecked(true);
        thresholdIsDrawingButton_5_0 = new QPushButton(chanel0SettingsBox_5);
        thresholdIsDrawingButton_5_0->setObjectName(QStringLiteral("thresholdIsDrawingButton_5_0"));
        thresholdIsDrawingButton_5_0->setEnabled(false);
        thresholdIsDrawingButton_5_0->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_5_0->setIcon(icon13);
        thresholdIsDrawingButton_5_0->setCheckable(true);
        thresholdIsDrawingButton_5_0->setChecked(false);
        blockSamplesButton_5_0 = new QPushButton(chanel0SettingsBox_5);
        blockSamplesButton_5_0->setObjectName(QStringLiteral("blockSamplesButton_5_0"));
        blockSamplesButton_5_0->setEnabled(false);
        blockSamplesButton_5_0->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_5_0->setIcon(icon19);
        blockSamplesButton_5_0->setCheckable(true);
        blockSamplesButton_5_0->setChecked(true);
        chanel1SettingsBox_5 = new QGroupBox(WDF5Widget);
        chanel1SettingsBox_5->setObjectName(QStringLiteral("chanel1SettingsBox_5"));
        chanel1SettingsBox_5->setGeometry(QRect(205, 0, 90, 170));
        changeTriggerButton_5_1 = new QPushButton(chanel1SettingsBox_5);
        changeTriggerButton_5_1->setObjectName(QStringLiteral("changeTriggerButton_5_1"));
        changeTriggerButton_5_1->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_5_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_5_1->setCheckable(false);
        changeTriggerButton_5_1->setChecked(false);
        changeTriggerButton_5_1->setAutoRepeat(false);
        changeTriggerButton_5_1->setAutoDefault(false);
        positionSpinBox_5_1 = new QSpinBox(chanel1SettingsBox_5);
        positionSpinBox_5_1->setObjectName(QStringLiteral("positionSpinBox_5_1"));
        positionSpinBox_5_1->setEnabled(false);
        positionSpinBox_5_1->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_5_1->setMaximum(500);
        positionSpinBox_5_1->setValue(0);
        thresholdSpinBox_5_1 = new QSpinBox(chanel1SettingsBox_5);
        thresholdSpinBox_5_1->setObjectName(QStringLiteral("thresholdSpinBox_5_1"));
        thresholdSpinBox_5_1->setEnabled(false);
        thresholdSpinBox_5_1->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_5_1->setMaximum(500);
        thresholdSpinBox_5_1->setValue(20);
        samplesSpinBox_5_1 = new QSpinBox(chanel1SettingsBox_5);
        samplesSpinBox_5_1->setObjectName(QStringLiteral("samplesSpinBox_5_1"));
        samplesSpinBox_5_1->setEnabled(false);
        samplesSpinBox_5_1->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_5_1->setValue(10);
        DACOffsetSpinBox_5_1 = new QSpinBox(chanel1SettingsBox_5);
        DACOffsetSpinBox_5_1->setObjectName(QStringLiteral("DACOffsetSpinBox_5_1"));
        DACOffsetSpinBox_5_1->setEnabled(false);
        DACOffsetSpinBox_5_1->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_5_1->setMaximum(500);
        DACOffsetSpinBox_5_1->setValue(0);
        scaleSpinBox_5_1 = new QComboBox(chanel1SettingsBox_5);
        scaleSpinBox_5_1->setObjectName(QStringLiteral("scaleSpinBox_5_1"));
        scaleSpinBox_5_1->setEnabled(false);
        scaleSpinBox_5_1->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_5_1->setEditable(true);
        positionResetButton_5_1 = new QPushButton(chanel1SettingsBox_5);
        positionResetButton_5_1->setObjectName(QStringLiteral("positionResetButton_5_1"));
        positionResetButton_5_1->setEnabled(false);
        positionResetButton_5_1->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_5_1->setIcon(icon12);
        DACOffsetResetButton_5_1 = new QPushButton(chanel1SettingsBox_5);
        DACOffsetResetButton_5_1->setObjectName(QStringLiteral("DACOffsetResetButton_5_1"));
        DACOffsetResetButton_5_1->setEnabled(false);
        DACOffsetResetButton_5_1->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_5_1->setIcon(icon12);
        channelIsDrawingButton_5_1 = new QPushButton(chanel1SettingsBox_5);
        channelIsDrawingButton_5_1->setObjectName(QStringLiteral("channelIsDrawingButton_5_1"));
        channelIsDrawingButton_5_1->setEnabled(false);
        channelIsDrawingButton_5_1->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_5_1->setIcon(icon13);
        channelIsDrawingButton_5_1->setCheckable(true);
        channelIsDrawingButton_5_1->setChecked(true);
        thresholdIsDrawingButton_5_1 = new QPushButton(chanel1SettingsBox_5);
        thresholdIsDrawingButton_5_1->setObjectName(QStringLiteral("thresholdIsDrawingButton_5_1"));
        thresholdIsDrawingButton_5_1->setEnabled(false);
        thresholdIsDrawingButton_5_1->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_5_1->setIcon(icon13);
        thresholdIsDrawingButton_5_1->setCheckable(true);
        thresholdIsDrawingButton_5_1->setChecked(false);
        blockSamplesButton_5_1 = new QPushButton(chanel1SettingsBox_5);
        blockSamplesButton_5_1->setObjectName(QStringLiteral("blockSamplesButton_5_1"));
        blockSamplesButton_5_1->setEnabled(false);
        blockSamplesButton_5_1->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_5_1->setIcon(icon19);
        blockSamplesButton_5_1->setCheckable(true);
        blockSamplesButton_5_1->setChecked(true);
        chanel2SettingsBox_5 = new QGroupBox(WDF5Widget);
        chanel2SettingsBox_5->setObjectName(QStringLiteral("chanel2SettingsBox_5"));
        chanel2SettingsBox_5->setGeometry(QRect(300, 0, 90, 170));
        changeTriggerButton_5_2 = new QPushButton(chanel2SettingsBox_5);
        changeTriggerButton_5_2->setObjectName(QStringLiteral("changeTriggerButton_5_2"));
        changeTriggerButton_5_2->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_5_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_5_2->setCheckable(false);
        changeTriggerButton_5_2->setChecked(false);
        changeTriggerButton_5_2->setAutoRepeat(false);
        changeTriggerButton_5_2->setAutoDefault(false);
        positionSpinBox_5_2 = new QSpinBox(chanel2SettingsBox_5);
        positionSpinBox_5_2->setObjectName(QStringLiteral("positionSpinBox_5_2"));
        positionSpinBox_5_2->setEnabled(false);
        positionSpinBox_5_2->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_5_2->setMaximum(500);
        positionSpinBox_5_2->setValue(0);
        thresholdSpinBox_5_2 = new QSpinBox(chanel2SettingsBox_5);
        thresholdSpinBox_5_2->setObjectName(QStringLiteral("thresholdSpinBox_5_2"));
        thresholdSpinBox_5_2->setEnabled(false);
        thresholdSpinBox_5_2->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_5_2->setMaximum(500);
        thresholdSpinBox_5_2->setValue(20);
        samplesSpinBox_5_2 = new QSpinBox(chanel2SettingsBox_5);
        samplesSpinBox_5_2->setObjectName(QStringLiteral("samplesSpinBox_5_2"));
        samplesSpinBox_5_2->setEnabled(false);
        samplesSpinBox_5_2->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_5_2->setValue(10);
        DACOffsetSpinBox_5_2 = new QSpinBox(chanel2SettingsBox_5);
        DACOffsetSpinBox_5_2->setObjectName(QStringLiteral("DACOffsetSpinBox_5_2"));
        DACOffsetSpinBox_5_2->setEnabled(false);
        DACOffsetSpinBox_5_2->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_5_2->setMaximum(500);
        DACOffsetSpinBox_5_2->setValue(0);
        scaleSpinBox_5_2 = new QComboBox(chanel2SettingsBox_5);
        scaleSpinBox_5_2->setObjectName(QStringLiteral("scaleSpinBox_5_2"));
        scaleSpinBox_5_2->setEnabled(false);
        scaleSpinBox_5_2->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_5_2->setEditable(true);
        positionResetButton_5_2 = new QPushButton(chanel2SettingsBox_5);
        positionResetButton_5_2->setObjectName(QStringLiteral("positionResetButton_5_2"));
        positionResetButton_5_2->setEnabled(false);
        positionResetButton_5_2->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_5_2->setIcon(icon12);
        DACOffsetResetButton_5_2 = new QPushButton(chanel2SettingsBox_5);
        DACOffsetResetButton_5_2->setObjectName(QStringLiteral("DACOffsetResetButton_5_2"));
        DACOffsetResetButton_5_2->setEnabled(false);
        DACOffsetResetButton_5_2->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_5_2->setIcon(icon12);
        channelIsDrawingButton_5_2 = new QPushButton(chanel2SettingsBox_5);
        channelIsDrawingButton_5_2->setObjectName(QStringLiteral("channelIsDrawingButton_5_2"));
        channelIsDrawingButton_5_2->setEnabled(false);
        channelIsDrawingButton_5_2->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_5_2->setIcon(icon13);
        channelIsDrawingButton_5_2->setCheckable(true);
        channelIsDrawingButton_5_2->setChecked(true);
        thresholdIsDrawingButton_5_2 = new QPushButton(chanel2SettingsBox_5);
        thresholdIsDrawingButton_5_2->setObjectName(QStringLiteral("thresholdIsDrawingButton_5_2"));
        thresholdIsDrawingButton_5_2->setEnabled(false);
        thresholdIsDrawingButton_5_2->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_5_2->setIcon(icon13);
        thresholdIsDrawingButton_5_2->setCheckable(true);
        thresholdIsDrawingButton_5_2->setChecked(false);
        blockSamplesButton_5_2 = new QPushButton(chanel2SettingsBox_5);
        blockSamplesButton_5_2->setObjectName(QStringLiteral("blockSamplesButton_5_2"));
        blockSamplesButton_5_2->setEnabled(false);
        blockSamplesButton_5_2->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_5_2->setIcon(icon19);
        blockSamplesButton_5_2->setCheckable(true);
        blockSamplesButton_5_2->setChecked(true);
        chanel4SettingsBox_5 = new QGroupBox(WDF5Widget);
        chanel4SettingsBox_5->setObjectName(QStringLiteral("chanel4SettingsBox_5"));
        chanel4SettingsBox_5->setGeometry(QRect(490, 0, 90, 170));
        changeTriggerButton_5_4 = new QPushButton(chanel4SettingsBox_5);
        changeTriggerButton_5_4->setObjectName(QStringLiteral("changeTriggerButton_5_4"));
        changeTriggerButton_5_4->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_5_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_5_4->setCheckable(false);
        changeTriggerButton_5_4->setChecked(false);
        changeTriggerButton_5_4->setAutoRepeat(false);
        changeTriggerButton_5_4->setAutoDefault(false);
        positionSpinBox_5_4 = new QSpinBox(chanel4SettingsBox_5);
        positionSpinBox_5_4->setObjectName(QStringLiteral("positionSpinBox_5_4"));
        positionSpinBox_5_4->setEnabled(false);
        positionSpinBox_5_4->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_5_4->setMaximum(500);
        positionSpinBox_5_4->setValue(0);
        thresholdSpinBox_5_4 = new QSpinBox(chanel4SettingsBox_5);
        thresholdSpinBox_5_4->setObjectName(QStringLiteral("thresholdSpinBox_5_4"));
        thresholdSpinBox_5_4->setEnabled(false);
        thresholdSpinBox_5_4->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_5_4->setMaximum(500);
        thresholdSpinBox_5_4->setValue(20);
        samplesSpinBox_5_4 = new QSpinBox(chanel4SettingsBox_5);
        samplesSpinBox_5_4->setObjectName(QStringLiteral("samplesSpinBox_5_4"));
        samplesSpinBox_5_4->setEnabled(false);
        samplesSpinBox_5_4->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_5_4->setValue(10);
        DACOffsetSpinBox_5_4 = new QSpinBox(chanel4SettingsBox_5);
        DACOffsetSpinBox_5_4->setObjectName(QStringLiteral("DACOffsetSpinBox_5_4"));
        DACOffsetSpinBox_5_4->setEnabled(false);
        DACOffsetSpinBox_5_4->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_5_4->setMaximum(500);
        DACOffsetSpinBox_5_4->setValue(0);
        scaleSpinBox_5_4 = new QComboBox(chanel4SettingsBox_5);
        scaleSpinBox_5_4->setObjectName(QStringLiteral("scaleSpinBox_5_4"));
        scaleSpinBox_5_4->setEnabled(false);
        scaleSpinBox_5_4->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_5_4->setEditable(true);
        positionResetButton_5_4 = new QPushButton(chanel4SettingsBox_5);
        positionResetButton_5_4->setObjectName(QStringLiteral("positionResetButton_5_4"));
        positionResetButton_5_4->setEnabled(false);
        positionResetButton_5_4->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_5_4->setIcon(icon12);
        DACOffsetResetButton_5_4 = new QPushButton(chanel4SettingsBox_5);
        DACOffsetResetButton_5_4->setObjectName(QStringLiteral("DACOffsetResetButton_5_4"));
        DACOffsetResetButton_5_4->setEnabled(false);
        DACOffsetResetButton_5_4->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_5_4->setIcon(icon12);
        channelIsDrawingButton_5_4 = new QPushButton(chanel4SettingsBox_5);
        channelIsDrawingButton_5_4->setObjectName(QStringLiteral("channelIsDrawingButton_5_4"));
        channelIsDrawingButton_5_4->setEnabled(false);
        channelIsDrawingButton_5_4->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_5_4->setIcon(icon13);
        channelIsDrawingButton_5_4->setCheckable(true);
        channelIsDrawingButton_5_4->setChecked(true);
        thresholdIsDrawingButton_5_4 = new QPushButton(chanel4SettingsBox_5);
        thresholdIsDrawingButton_5_4->setObjectName(QStringLiteral("thresholdIsDrawingButton_5_4"));
        thresholdIsDrawingButton_5_4->setEnabled(false);
        thresholdIsDrawingButton_5_4->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_5_4->setIcon(icon13);
        thresholdIsDrawingButton_5_4->setCheckable(true);
        thresholdIsDrawingButton_5_4->setChecked(false);
        blockSamplesButton_5_4 = new QPushButton(chanel4SettingsBox_5);
        blockSamplesButton_5_4->setObjectName(QStringLiteral("blockSamplesButton_5_4"));
        blockSamplesButton_5_4->setEnabled(false);
        blockSamplesButton_5_4->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_5_4->setIcon(icon19);
        blockSamplesButton_5_4->setCheckable(true);
        blockSamplesButton_5_4->setChecked(true);
        chanel6SettingsBox_5 = new QGroupBox(WDF5Widget);
        chanel6SettingsBox_5->setObjectName(QStringLiteral("chanel6SettingsBox_5"));
        chanel6SettingsBox_5->setGeometry(QRect(680, 0, 90, 170));
        changeTriggerButton_5_6 = new QPushButton(chanel6SettingsBox_5);
        changeTriggerButton_5_6->setObjectName(QStringLiteral("changeTriggerButton_5_6"));
        changeTriggerButton_5_6->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_5_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_5_6->setCheckable(false);
        changeTriggerButton_5_6->setChecked(false);
        changeTriggerButton_5_6->setAutoRepeat(false);
        changeTriggerButton_5_6->setAutoDefault(false);
        positionSpinBox_5_6 = new QSpinBox(chanel6SettingsBox_5);
        positionSpinBox_5_6->setObjectName(QStringLiteral("positionSpinBox_5_6"));
        positionSpinBox_5_6->setEnabled(false);
        positionSpinBox_5_6->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_5_6->setMaximum(500);
        positionSpinBox_5_6->setValue(0);
        thresholdSpinBox_5_6 = new QSpinBox(chanel6SettingsBox_5);
        thresholdSpinBox_5_6->setObjectName(QStringLiteral("thresholdSpinBox_5_6"));
        thresholdSpinBox_5_6->setEnabled(false);
        thresholdSpinBox_5_6->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_5_6->setMaximum(500);
        thresholdSpinBox_5_6->setValue(20);
        samplesSpinBox_5_6 = new QSpinBox(chanel6SettingsBox_5);
        samplesSpinBox_5_6->setObjectName(QStringLiteral("samplesSpinBox_5_6"));
        samplesSpinBox_5_6->setEnabled(false);
        samplesSpinBox_5_6->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_5_6->setValue(10);
        DACOffsetSpinBox_5_6 = new QSpinBox(chanel6SettingsBox_5);
        DACOffsetSpinBox_5_6->setObjectName(QStringLiteral("DACOffsetSpinBox_5_6"));
        DACOffsetSpinBox_5_6->setEnabled(false);
        DACOffsetSpinBox_5_6->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_5_6->setMaximum(500);
        DACOffsetSpinBox_5_6->setValue(0);
        scaleSpinBox_5_6 = new QComboBox(chanel6SettingsBox_5);
        scaleSpinBox_5_6->setObjectName(QStringLiteral("scaleSpinBox_5_6"));
        scaleSpinBox_5_6->setEnabled(false);
        scaleSpinBox_5_6->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_5_6->setEditable(true);
        positionResetButton_5_6 = new QPushButton(chanel6SettingsBox_5);
        positionResetButton_5_6->setObjectName(QStringLiteral("positionResetButton_5_6"));
        positionResetButton_5_6->setEnabled(false);
        positionResetButton_5_6->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_5_6->setIcon(icon12);
        DACOffsetResetButton_5_6 = new QPushButton(chanel6SettingsBox_5);
        DACOffsetResetButton_5_6->setObjectName(QStringLiteral("DACOffsetResetButton_5_6"));
        DACOffsetResetButton_5_6->setEnabled(false);
        DACOffsetResetButton_5_6->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_5_6->setIcon(icon12);
        channelIsDrawingButton_5_6 = new QPushButton(chanel6SettingsBox_5);
        channelIsDrawingButton_5_6->setObjectName(QStringLiteral("channelIsDrawingButton_5_6"));
        channelIsDrawingButton_5_6->setEnabled(false);
        channelIsDrawingButton_5_6->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_5_6->setIcon(icon13);
        channelIsDrawingButton_5_6->setCheckable(true);
        channelIsDrawingButton_5_6->setChecked(true);
        thresholdIsDrawingButton_5_6 = new QPushButton(chanel6SettingsBox_5);
        thresholdIsDrawingButton_5_6->setObjectName(QStringLiteral("thresholdIsDrawingButton_5_6"));
        thresholdIsDrawingButton_5_6->setEnabled(false);
        thresholdIsDrawingButton_5_6->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_5_6->setIcon(icon13);
        thresholdIsDrawingButton_5_6->setCheckable(true);
        thresholdIsDrawingButton_5_6->setChecked(false);
        blockSamplesButton_5_6 = new QPushButton(chanel6SettingsBox_5);
        blockSamplesButton_5_6->setObjectName(QStringLiteral("blockSamplesButton_5_6"));
        blockSamplesButton_5_6->setEnabled(false);
        blockSamplesButton_5_6->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_5_6->setIcon(icon19);
        blockSamplesButton_5_6->setCheckable(true);
        blockSamplesButton_5_6->setChecked(true);
        chanel5SettingsBox_5 = new QGroupBox(WDF5Widget);
        chanel5SettingsBox_5->setObjectName(QStringLiteral("chanel5SettingsBox_5"));
        chanel5SettingsBox_5->setGeometry(QRect(585, 0, 90, 170));
        changeTriggerButton_5_5 = new QPushButton(chanel5SettingsBox_5);
        changeTriggerButton_5_5->setObjectName(QStringLiteral("changeTriggerButton_5_5"));
        changeTriggerButton_5_5->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_5_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_5_5->setCheckable(false);
        changeTriggerButton_5_5->setChecked(false);
        changeTriggerButton_5_5->setAutoRepeat(false);
        changeTriggerButton_5_5->setAutoDefault(false);
        positionSpinBox_5_5 = new QSpinBox(chanel5SettingsBox_5);
        positionSpinBox_5_5->setObjectName(QStringLiteral("positionSpinBox_5_5"));
        positionSpinBox_5_5->setEnabled(false);
        positionSpinBox_5_5->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_5_5->setMaximum(500);
        positionSpinBox_5_5->setValue(0);
        thresholdSpinBox_5_5 = new QSpinBox(chanel5SettingsBox_5);
        thresholdSpinBox_5_5->setObjectName(QStringLiteral("thresholdSpinBox_5_5"));
        thresholdSpinBox_5_5->setEnabled(false);
        thresholdSpinBox_5_5->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_5_5->setMaximum(500);
        thresholdSpinBox_5_5->setValue(20);
        samplesSpinBox_5_5 = new QSpinBox(chanel5SettingsBox_5);
        samplesSpinBox_5_5->setObjectName(QStringLiteral("samplesSpinBox_5_5"));
        samplesSpinBox_5_5->setEnabled(false);
        samplesSpinBox_5_5->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_5_5->setValue(10);
        DACOffsetSpinBox_5_5 = new QSpinBox(chanel5SettingsBox_5);
        DACOffsetSpinBox_5_5->setObjectName(QStringLiteral("DACOffsetSpinBox_5_5"));
        DACOffsetSpinBox_5_5->setEnabled(false);
        DACOffsetSpinBox_5_5->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_5_5->setMaximum(500);
        DACOffsetSpinBox_5_5->setValue(0);
        scaleSpinBox_5_5 = new QComboBox(chanel5SettingsBox_5);
        scaleSpinBox_5_5->setObjectName(QStringLiteral("scaleSpinBox_5_5"));
        scaleSpinBox_5_5->setEnabled(false);
        scaleSpinBox_5_5->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_5_5->setEditable(true);
        positionResetButton_5_5 = new QPushButton(chanel5SettingsBox_5);
        positionResetButton_5_5->setObjectName(QStringLiteral("positionResetButton_5_5"));
        positionResetButton_5_5->setEnabled(false);
        positionResetButton_5_5->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_5_5->setIcon(icon12);
        DACOffsetResetButton_5_5 = new QPushButton(chanel5SettingsBox_5);
        DACOffsetResetButton_5_5->setObjectName(QStringLiteral("DACOffsetResetButton_5_5"));
        DACOffsetResetButton_5_5->setEnabled(false);
        DACOffsetResetButton_5_5->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_5_5->setIcon(icon12);
        channelIsDrawingButton_5_5 = new QPushButton(chanel5SettingsBox_5);
        channelIsDrawingButton_5_5->setObjectName(QStringLiteral("channelIsDrawingButton_5_5"));
        channelIsDrawingButton_5_5->setEnabled(false);
        channelIsDrawingButton_5_5->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_5_5->setIcon(icon13);
        channelIsDrawingButton_5_5->setCheckable(true);
        channelIsDrawingButton_5_5->setChecked(true);
        thresholdIsDrawingButton_5_5 = new QPushButton(chanel5SettingsBox_5);
        thresholdIsDrawingButton_5_5->setObjectName(QStringLiteral("thresholdIsDrawingButton_5_5"));
        thresholdIsDrawingButton_5_5->setEnabled(false);
        thresholdIsDrawingButton_5_5->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_5_5->setIcon(icon13);
        thresholdIsDrawingButton_5_5->setCheckable(true);
        thresholdIsDrawingButton_5_5->setChecked(false);
        blockSamplesButton_5_5 = new QPushButton(chanel5SettingsBox_5);
        blockSamplesButton_5_5->setObjectName(QStringLiteral("blockSamplesButton_5_5"));
        blockSamplesButton_5_5->setEnabled(false);
        blockSamplesButton_5_5->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_5_5->setIcon(icon19);
        blockSamplesButton_5_5->setCheckable(true);
        blockSamplesButton_5_5->setChecked(true);
        chanel7SettingsBox_5 = new QGroupBox(WDF5Widget);
        chanel7SettingsBox_5->setObjectName(QStringLiteral("chanel7SettingsBox_5"));
        chanel7SettingsBox_5->setGeometry(QRect(775, 0, 90, 170));
        changeTriggerButton_5_7 = new QPushButton(chanel7SettingsBox_5);
        changeTriggerButton_5_7->setObjectName(QStringLiteral("changeTriggerButton_5_7"));
        changeTriggerButton_5_7->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_5_7->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_5_7->setCheckable(false);
        changeTriggerButton_5_7->setChecked(false);
        changeTriggerButton_5_7->setAutoRepeat(false);
        changeTriggerButton_5_7->setAutoDefault(false);
        positionSpinBox_5_7 = new QSpinBox(chanel7SettingsBox_5);
        positionSpinBox_5_7->setObjectName(QStringLiteral("positionSpinBox_5_7"));
        positionSpinBox_5_7->setEnabled(false);
        positionSpinBox_5_7->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_5_7->setMaximum(500);
        positionSpinBox_5_7->setValue(0);
        thresholdSpinBox_5_7 = new QSpinBox(chanel7SettingsBox_5);
        thresholdSpinBox_5_7->setObjectName(QStringLiteral("thresholdSpinBox_5_7"));
        thresholdSpinBox_5_7->setEnabled(false);
        thresholdSpinBox_5_7->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_5_7->setMaximum(500);
        thresholdSpinBox_5_7->setValue(20);
        samplesSpinBox_5_7 = new QSpinBox(chanel7SettingsBox_5);
        samplesSpinBox_5_7->setObjectName(QStringLiteral("samplesSpinBox_5_7"));
        samplesSpinBox_5_7->setEnabled(false);
        samplesSpinBox_5_7->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_5_7->setValue(10);
        DACOffsetSpinBox_5_7 = new QSpinBox(chanel7SettingsBox_5);
        DACOffsetSpinBox_5_7->setObjectName(QStringLiteral("DACOffsetSpinBox_5_7"));
        DACOffsetSpinBox_5_7->setEnabled(false);
        DACOffsetSpinBox_5_7->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_5_7->setMaximum(500);
        DACOffsetSpinBox_5_7->setValue(0);
        scaleSpinBox_5_7 = new QComboBox(chanel7SettingsBox_5);
        scaleSpinBox_5_7->setObjectName(QStringLiteral("scaleSpinBox_5_7"));
        scaleSpinBox_5_7->setEnabled(false);
        scaleSpinBox_5_7->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_5_7->setEditable(true);
        positionResetButton_5_7 = new QPushButton(chanel7SettingsBox_5);
        positionResetButton_5_7->setObjectName(QStringLiteral("positionResetButton_5_7"));
        positionResetButton_5_7->setEnabled(false);
        positionResetButton_5_7->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_5_7->setIcon(icon12);
        DACOffsetResetButton_5_7 = new QPushButton(chanel7SettingsBox_5);
        DACOffsetResetButton_5_7->setObjectName(QStringLiteral("DACOffsetResetButton_5_7"));
        DACOffsetResetButton_5_7->setEnabled(false);
        DACOffsetResetButton_5_7->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_5_7->setIcon(icon12);
        channelIsDrawingButton_5_7 = new QPushButton(chanel7SettingsBox_5);
        channelIsDrawingButton_5_7->setObjectName(QStringLiteral("channelIsDrawingButton_5_7"));
        channelIsDrawingButton_5_7->setEnabled(false);
        channelIsDrawingButton_5_7->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_5_7->setIcon(icon13);
        channelIsDrawingButton_5_7->setCheckable(true);
        channelIsDrawingButton_5_7->setChecked(true);
        thresholdIsDrawingButton_5_7 = new QPushButton(chanel7SettingsBox_5);
        thresholdIsDrawingButton_5_7->setObjectName(QStringLiteral("thresholdIsDrawingButton_5_7"));
        thresholdIsDrawingButton_5_7->setEnabled(false);
        thresholdIsDrawingButton_5_7->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_5_7->setIcon(icon13);
        thresholdIsDrawingButton_5_7->setCheckable(true);
        thresholdIsDrawingButton_5_7->setChecked(false);
        blockSamplesButton_5_7 = new QPushButton(chanel7SettingsBox_5);
        blockSamplesButton_5_7->setObjectName(QStringLiteral("blockSamplesButton_5_7"));
        blockSamplesButton_5_7->setEnabled(false);
        blockSamplesButton_5_7->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_5_7->setIcon(icon19);
        blockSamplesButton_5_7->setCheckable(true);
        blockSamplesButton_5_7->setChecked(true);
        chanel3SettingsBox_5 = new QGroupBox(WDF5Widget);
        chanel3SettingsBox_5->setObjectName(QStringLiteral("chanel3SettingsBox_5"));
        chanel3SettingsBox_5->setGeometry(QRect(395, 0, 90, 170));
        changeTriggerButton_5_3 = new QPushButton(chanel3SettingsBox_5);
        changeTriggerButton_5_3->setObjectName(QStringLiteral("changeTriggerButton_5_3"));
        changeTriggerButton_5_3->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_5_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_5_3->setCheckable(false);
        changeTriggerButton_5_3->setChecked(false);
        changeTriggerButton_5_3->setAutoRepeat(false);
        changeTriggerButton_5_3->setAutoDefault(false);
        positionSpinBox_5_3 = new QSpinBox(chanel3SettingsBox_5);
        positionSpinBox_5_3->setObjectName(QStringLiteral("positionSpinBox_5_3"));
        positionSpinBox_5_3->setEnabled(false);
        positionSpinBox_5_3->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_5_3->setMaximum(500);
        positionSpinBox_5_3->setValue(0);
        thresholdSpinBox_5_3 = new QSpinBox(chanel3SettingsBox_5);
        thresholdSpinBox_5_3->setObjectName(QStringLiteral("thresholdSpinBox_5_3"));
        thresholdSpinBox_5_3->setEnabled(false);
        thresholdSpinBox_5_3->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_5_3->setMaximum(500);
        thresholdSpinBox_5_3->setValue(20);
        samplesSpinBox_5_3 = new QSpinBox(chanel3SettingsBox_5);
        samplesSpinBox_5_3->setObjectName(QStringLiteral("samplesSpinBox_5_3"));
        samplesSpinBox_5_3->setEnabled(false);
        samplesSpinBox_5_3->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_5_3->setValue(10);
        DACOffsetSpinBox_5_3 = new QSpinBox(chanel3SettingsBox_5);
        DACOffsetSpinBox_5_3->setObjectName(QStringLiteral("DACOffsetSpinBox_5_3"));
        DACOffsetSpinBox_5_3->setEnabled(false);
        DACOffsetSpinBox_5_3->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_5_3->setMaximum(500);
        DACOffsetSpinBox_5_3->setValue(0);
        scaleSpinBox_5_3 = new QComboBox(chanel3SettingsBox_5);
        scaleSpinBox_5_3->setObjectName(QStringLiteral("scaleSpinBox_5_3"));
        scaleSpinBox_5_3->setEnabled(false);
        scaleSpinBox_5_3->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_5_3->setEditable(true);
        positionResetButton_5_3 = new QPushButton(chanel3SettingsBox_5);
        positionResetButton_5_3->setObjectName(QStringLiteral("positionResetButton_5_3"));
        positionResetButton_5_3->setEnabled(false);
        positionResetButton_5_3->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_5_3->setIcon(icon12);
        DACOffsetResetButton_5_3 = new QPushButton(chanel3SettingsBox_5);
        DACOffsetResetButton_5_3->setObjectName(QStringLiteral("DACOffsetResetButton_5_3"));
        DACOffsetResetButton_5_3->setEnabled(false);
        DACOffsetResetButton_5_3->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_5_3->setIcon(icon12);
        channelIsDrawingButton_5_3 = new QPushButton(chanel3SettingsBox_5);
        channelIsDrawingButton_5_3->setObjectName(QStringLiteral("channelIsDrawingButton_5_3"));
        channelIsDrawingButton_5_3->setEnabled(false);
        channelIsDrawingButton_5_3->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_5_3->setIcon(icon13);
        channelIsDrawingButton_5_3->setCheckable(true);
        channelIsDrawingButton_5_3->setChecked(true);
        thresholdIsDrawingButton_5_3 = new QPushButton(chanel3SettingsBox_5);
        thresholdIsDrawingButton_5_3->setObjectName(QStringLiteral("thresholdIsDrawingButton_5_3"));
        thresholdIsDrawingButton_5_3->setEnabled(false);
        thresholdIsDrawingButton_5_3->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_5_3->setIcon(icon13);
        thresholdIsDrawingButton_5_3->setCheckable(true);
        thresholdIsDrawingButton_5_3->setChecked(false);
        blockSamplesButton_5_3 = new QPushButton(chanel3SettingsBox_5);
        blockSamplesButton_5_3->setObjectName(QStringLiteral("blockSamplesButton_5_3"));
        blockSamplesButton_5_3->setEnabled(false);
        blockSamplesButton_5_3->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_5_3->setIcon(icon19);
        blockSamplesButton_5_3->setCheckable(true);
        blockSamplesButton_5_3->setChecked(true);
        channelLabelBox_5 = new QGroupBox(WDF5Widget);
        channelLabelBox_5->setObjectName(QStringLiteral("channelLabelBox_5"));
        channelLabelBox_5->setGeometry(QRect(0, 0, 105, 170));
        thresholdLabel_5 = new QLabel(channelLabelBox_5);
        thresholdLabel_5->setObjectName(QStringLiteral("thresholdLabel_5"));
        thresholdLabel_5->setGeometry(QRect(10, 70, 91, 20));
        thresholdLabel_5->setLayoutDirection(Qt::RightToLeft);
        thresholdLabel_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        samplesLabel_5 = new QLabel(channelLabelBox_5);
        samplesLabel_5->setObjectName(QStringLiteral("samplesLabel_5"));
        samplesLabel_5->setGeometry(QRect(10, 95, 91, 20));
        samplesLabel_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        positionLabel_5 = new QLabel(channelLabelBox_5);
        positionLabel_5->setObjectName(QStringLiteral("positionLabel_5"));
        positionLabel_5->setGeometry(QRect(10, 45, 91, 20));
        positionLabel_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        DACOffsetLabel_5 = new QLabel(channelLabelBox_5);
        DACOffsetLabel_5->setObjectName(QStringLiteral("DACOffsetLabel_5"));
        DACOffsetLabel_5->setGeometry(QRect(10, 120, 91, 20));
        DACOffsetLabel_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        scaleLabel_5 = new QLabel(channelLabelBox_5);
        scaleLabel_5->setObjectName(QStringLiteral("scaleLabel_5"));
        scaleLabel_5->setGeometry(QRect(10, 145, 91, 20));
        scaleLabel_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        statusLabel_5 = new QLabel(channelLabelBox_5);
        statusLabel_5->setObjectName(QStringLiteral("statusLabel_5"));
        statusLabel_5->setGeometry(QRect(10, 15, 91, 24));
        statusLabel_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        WDFTabWidget->addTab(WDF5Widget, icon20, QString());
        WDF6Widget = new QWidget();
        WDF6Widget->setObjectName(QStringLiteral("WDF6Widget"));
        chanel0SettingsBox_6 = new QGroupBox(WDF6Widget);
        chanel0SettingsBox_6->setObjectName(QStringLiteral("chanel0SettingsBox_6"));
        chanel0SettingsBox_6->setGeometry(QRect(110, 0, 90, 170));
        changeTriggerButton_6_0 = new QPushButton(chanel0SettingsBox_6);
        changeTriggerButton_6_0->setObjectName(QStringLiteral("changeTriggerButton_6_0"));
        changeTriggerButton_6_0->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_6_0->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_6_0->setCheckable(false);
        changeTriggerButton_6_0->setChecked(false);
        changeTriggerButton_6_0->setAutoRepeat(false);
        changeTriggerButton_6_0->setAutoDefault(false);
        positionSpinBox_6_0 = new QSpinBox(chanel0SettingsBox_6);
        positionSpinBox_6_0->setObjectName(QStringLiteral("positionSpinBox_6_0"));
        positionSpinBox_6_0->setEnabled(false);
        positionSpinBox_6_0->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_6_0->setMinimum(-500);
        positionSpinBox_6_0->setMaximum(500);
        thresholdSpinBox_6_0 = new QSpinBox(chanel0SettingsBox_6);
        thresholdSpinBox_6_0->setObjectName(QStringLiteral("thresholdSpinBox_6_0"));
        thresholdSpinBox_6_0->setEnabled(false);
        thresholdSpinBox_6_0->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_6_0->setMinimum(-500);
        thresholdSpinBox_6_0->setMaximum(500);
        thresholdSpinBox_6_0->setValue(20);
        samplesSpinBox_6_0 = new QSpinBox(chanel0SettingsBox_6);
        samplesSpinBox_6_0->setObjectName(QStringLiteral("samplesSpinBox_6_0"));
        samplesSpinBox_6_0->setEnabled(false);
        samplesSpinBox_6_0->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_6_0->setValue(10);
        DACOffsetSpinBox_6_0 = new QSpinBox(chanel0SettingsBox_6);
        DACOffsetSpinBox_6_0->setObjectName(QStringLiteral("DACOffsetSpinBox_6_0"));
        DACOffsetSpinBox_6_0->setEnabled(false);
        DACOffsetSpinBox_6_0->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_6_0->setMinimum(-500);
        DACOffsetSpinBox_6_0->setMaximum(500);
        scaleSpinBox_6_0 = new QComboBox(chanel0SettingsBox_6);
        scaleSpinBox_6_0->setObjectName(QStringLiteral("scaleSpinBox_6_0"));
        scaleSpinBox_6_0->setEnabled(false);
        scaleSpinBox_6_0->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_6_0->setEditable(true);
        positionResetButton_6_0 = new QPushButton(chanel0SettingsBox_6);
        positionResetButton_6_0->setObjectName(QStringLiteral("positionResetButton_6_0"));
        positionResetButton_6_0->setEnabled(false);
        positionResetButton_6_0->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_6_0->setIcon(icon12);
        DACOffsetResetButton_6_0 = new QPushButton(chanel0SettingsBox_6);
        DACOffsetResetButton_6_0->setObjectName(QStringLiteral("DACOffsetResetButton_6_0"));
        DACOffsetResetButton_6_0->setEnabled(false);
        DACOffsetResetButton_6_0->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_6_0->setIcon(icon12);
        channelIsDrawingButton_6_0 = new QPushButton(chanel0SettingsBox_6);
        channelIsDrawingButton_6_0->setObjectName(QStringLiteral("channelIsDrawingButton_6_0"));
        channelIsDrawingButton_6_0->setEnabled(false);
        channelIsDrawingButton_6_0->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_6_0->setIcon(icon13);
        channelIsDrawingButton_6_0->setCheckable(true);
        channelIsDrawingButton_6_0->setChecked(true);
        thresholdIsDrawingButton_6_0 = new QPushButton(chanel0SettingsBox_6);
        thresholdIsDrawingButton_6_0->setObjectName(QStringLiteral("thresholdIsDrawingButton_6_0"));
        thresholdIsDrawingButton_6_0->setEnabled(false);
        thresholdIsDrawingButton_6_0->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_6_0->setIcon(icon13);
        thresholdIsDrawingButton_6_0->setCheckable(true);
        thresholdIsDrawingButton_6_0->setChecked(false);
        blockSamplesButton_6_0 = new QPushButton(chanel0SettingsBox_6);
        blockSamplesButton_6_0->setObjectName(QStringLiteral("blockSamplesButton_6_0"));
        blockSamplesButton_6_0->setEnabled(false);
        blockSamplesButton_6_0->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_6_0->setIcon(icon19);
        blockSamplesButton_6_0->setCheckable(true);
        blockSamplesButton_6_0->setChecked(true);
        chanel1SettingsBox_6 = new QGroupBox(WDF6Widget);
        chanel1SettingsBox_6->setObjectName(QStringLiteral("chanel1SettingsBox_6"));
        chanel1SettingsBox_6->setGeometry(QRect(205, 0, 90, 170));
        changeTriggerButton_6_1 = new QPushButton(chanel1SettingsBox_6);
        changeTriggerButton_6_1->setObjectName(QStringLiteral("changeTriggerButton_6_1"));
        changeTriggerButton_6_1->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_6_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_6_1->setCheckable(false);
        changeTriggerButton_6_1->setChecked(false);
        changeTriggerButton_6_1->setAutoRepeat(false);
        changeTriggerButton_6_1->setAutoDefault(false);
        positionSpinBox_6_1 = new QSpinBox(chanel1SettingsBox_6);
        positionSpinBox_6_1->setObjectName(QStringLiteral("positionSpinBox_6_1"));
        positionSpinBox_6_1->setEnabled(false);
        positionSpinBox_6_1->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_6_1->setMinimum(-500);
        positionSpinBox_6_1->setMaximum(500);
        thresholdSpinBox_6_1 = new QSpinBox(chanel1SettingsBox_6);
        thresholdSpinBox_6_1->setObjectName(QStringLiteral("thresholdSpinBox_6_1"));
        thresholdSpinBox_6_1->setEnabled(false);
        thresholdSpinBox_6_1->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_6_1->setMinimum(-500);
        thresholdSpinBox_6_1->setMaximum(500);
        thresholdSpinBox_6_1->setValue(20);
        samplesSpinBox_6_1 = new QSpinBox(chanel1SettingsBox_6);
        samplesSpinBox_6_1->setObjectName(QStringLiteral("samplesSpinBox_6_1"));
        samplesSpinBox_6_1->setEnabled(false);
        samplesSpinBox_6_1->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_6_1->setValue(10);
        DACOffsetSpinBox_6_1 = new QSpinBox(chanel1SettingsBox_6);
        DACOffsetSpinBox_6_1->setObjectName(QStringLiteral("DACOffsetSpinBox_6_1"));
        DACOffsetSpinBox_6_1->setEnabled(false);
        DACOffsetSpinBox_6_1->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_6_1->setMinimum(-500);
        DACOffsetSpinBox_6_1->setMaximum(500);
        scaleSpinBox_6_1 = new QComboBox(chanel1SettingsBox_6);
        scaleSpinBox_6_1->setObjectName(QStringLiteral("scaleSpinBox_6_1"));
        scaleSpinBox_6_1->setEnabled(false);
        scaleSpinBox_6_1->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_6_1->setEditable(true);
        positionResetButton_6_1 = new QPushButton(chanel1SettingsBox_6);
        positionResetButton_6_1->setObjectName(QStringLiteral("positionResetButton_6_1"));
        positionResetButton_6_1->setEnabled(false);
        positionResetButton_6_1->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_6_1->setIcon(icon12);
        DACOffsetResetButton_6_1 = new QPushButton(chanel1SettingsBox_6);
        DACOffsetResetButton_6_1->setObjectName(QStringLiteral("DACOffsetResetButton_6_1"));
        DACOffsetResetButton_6_1->setEnabled(false);
        DACOffsetResetButton_6_1->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_6_1->setIcon(icon12);
        channelIsDrawingButton_6_1 = new QPushButton(chanel1SettingsBox_6);
        channelIsDrawingButton_6_1->setObjectName(QStringLiteral("channelIsDrawingButton_6_1"));
        channelIsDrawingButton_6_1->setEnabled(false);
        channelIsDrawingButton_6_1->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_6_1->setIcon(icon13);
        channelIsDrawingButton_6_1->setCheckable(true);
        channelIsDrawingButton_6_1->setChecked(true);
        thresholdIsDrawingButton_6_1 = new QPushButton(chanel1SettingsBox_6);
        thresholdIsDrawingButton_6_1->setObjectName(QStringLiteral("thresholdIsDrawingButton_6_1"));
        thresholdIsDrawingButton_6_1->setEnabled(false);
        thresholdIsDrawingButton_6_1->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_6_1->setIcon(icon13);
        thresholdIsDrawingButton_6_1->setCheckable(true);
        thresholdIsDrawingButton_6_1->setChecked(false);
        blockSamplesButton_6_1 = new QPushButton(chanel1SettingsBox_6);
        blockSamplesButton_6_1->setObjectName(QStringLiteral("blockSamplesButton_6_1"));
        blockSamplesButton_6_1->setEnabled(false);
        blockSamplesButton_6_1->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_6_1->setIcon(icon19);
        blockSamplesButton_6_1->setCheckable(true);
        blockSamplesButton_6_1->setChecked(true);
        chanel2SettingsBox_6 = new QGroupBox(WDF6Widget);
        chanel2SettingsBox_6->setObjectName(QStringLiteral("chanel2SettingsBox_6"));
        chanel2SettingsBox_6->setGeometry(QRect(300, 0, 90, 170));
        changeTriggerButton_6_2 = new QPushButton(chanel2SettingsBox_6);
        changeTriggerButton_6_2->setObjectName(QStringLiteral("changeTriggerButton_6_2"));
        changeTriggerButton_6_2->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_6_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_6_2->setCheckable(false);
        changeTriggerButton_6_2->setChecked(false);
        changeTriggerButton_6_2->setAutoRepeat(false);
        changeTriggerButton_6_2->setAutoDefault(false);
        positionSpinBox_6_2 = new QSpinBox(chanel2SettingsBox_6);
        positionSpinBox_6_2->setObjectName(QStringLiteral("positionSpinBox_6_2"));
        positionSpinBox_6_2->setEnabled(false);
        positionSpinBox_6_2->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_6_2->setMinimum(-500);
        positionSpinBox_6_2->setMaximum(500);
        thresholdSpinBox_6_2 = new QSpinBox(chanel2SettingsBox_6);
        thresholdSpinBox_6_2->setObjectName(QStringLiteral("thresholdSpinBox_6_2"));
        thresholdSpinBox_6_2->setEnabled(false);
        thresholdSpinBox_6_2->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_6_2->setMinimum(-500);
        thresholdSpinBox_6_2->setMaximum(500);
        thresholdSpinBox_6_2->setValue(20);
        samplesSpinBox_6_2 = new QSpinBox(chanel2SettingsBox_6);
        samplesSpinBox_6_2->setObjectName(QStringLiteral("samplesSpinBox_6_2"));
        samplesSpinBox_6_2->setEnabled(false);
        samplesSpinBox_6_2->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_6_2->setValue(10);
        DACOffsetSpinBox_6_2 = new QSpinBox(chanel2SettingsBox_6);
        DACOffsetSpinBox_6_2->setObjectName(QStringLiteral("DACOffsetSpinBox_6_2"));
        DACOffsetSpinBox_6_2->setEnabled(false);
        DACOffsetSpinBox_6_2->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_6_2->setMinimum(-500);
        DACOffsetSpinBox_6_2->setMaximum(500);
        scaleSpinBox_6_2 = new QComboBox(chanel2SettingsBox_6);
        scaleSpinBox_6_2->setObjectName(QStringLiteral("scaleSpinBox_6_2"));
        scaleSpinBox_6_2->setEnabled(false);
        scaleSpinBox_6_2->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_6_2->setEditable(true);
        positionResetButton_6_2 = new QPushButton(chanel2SettingsBox_6);
        positionResetButton_6_2->setObjectName(QStringLiteral("positionResetButton_6_2"));
        positionResetButton_6_2->setEnabled(false);
        positionResetButton_6_2->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_6_2->setIcon(icon12);
        DACOffsetResetButton_6_2 = new QPushButton(chanel2SettingsBox_6);
        DACOffsetResetButton_6_2->setObjectName(QStringLiteral("DACOffsetResetButton_6_2"));
        DACOffsetResetButton_6_2->setEnabled(false);
        DACOffsetResetButton_6_2->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_6_2->setIcon(icon12);
        channelIsDrawingButton_6_2 = new QPushButton(chanel2SettingsBox_6);
        channelIsDrawingButton_6_2->setObjectName(QStringLiteral("channelIsDrawingButton_6_2"));
        channelIsDrawingButton_6_2->setEnabled(false);
        channelIsDrawingButton_6_2->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_6_2->setIcon(icon13);
        channelIsDrawingButton_6_2->setCheckable(true);
        channelIsDrawingButton_6_2->setChecked(true);
        thresholdIsDrawingButton_6_2 = new QPushButton(chanel2SettingsBox_6);
        thresholdIsDrawingButton_6_2->setObjectName(QStringLiteral("thresholdIsDrawingButton_6_2"));
        thresholdIsDrawingButton_6_2->setEnabled(false);
        thresholdIsDrawingButton_6_2->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_6_2->setIcon(icon13);
        thresholdIsDrawingButton_6_2->setCheckable(true);
        thresholdIsDrawingButton_6_2->setChecked(false);
        blockSamplesButton_6_2 = new QPushButton(chanel2SettingsBox_6);
        blockSamplesButton_6_2->setObjectName(QStringLiteral("blockSamplesButton_6_2"));
        blockSamplesButton_6_2->setEnabled(false);
        blockSamplesButton_6_2->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_6_2->setIcon(icon19);
        blockSamplesButton_6_2->setCheckable(true);
        blockSamplesButton_6_2->setChecked(true);
        chanel4SettingsBox_6 = new QGroupBox(WDF6Widget);
        chanel4SettingsBox_6->setObjectName(QStringLiteral("chanel4SettingsBox_6"));
        chanel4SettingsBox_6->setGeometry(QRect(490, 0, 90, 170));
        changeTriggerButton_6_4 = new QPushButton(chanel4SettingsBox_6);
        changeTriggerButton_6_4->setObjectName(QStringLiteral("changeTriggerButton_6_4"));
        changeTriggerButton_6_4->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_6_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_6_4->setCheckable(false);
        changeTriggerButton_6_4->setChecked(false);
        changeTriggerButton_6_4->setAutoRepeat(false);
        changeTriggerButton_6_4->setAutoDefault(false);
        positionSpinBox_6_4 = new QSpinBox(chanel4SettingsBox_6);
        positionSpinBox_6_4->setObjectName(QStringLiteral("positionSpinBox_6_4"));
        positionSpinBox_6_4->setEnabled(false);
        positionSpinBox_6_4->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_6_4->setMinimum(-500);
        positionSpinBox_6_4->setMaximum(500);
        thresholdSpinBox_6_4 = new QSpinBox(chanel4SettingsBox_6);
        thresholdSpinBox_6_4->setObjectName(QStringLiteral("thresholdSpinBox_6_4"));
        thresholdSpinBox_6_4->setEnabled(false);
        thresholdSpinBox_6_4->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_6_4->setMinimum(-500);
        thresholdSpinBox_6_4->setMaximum(500);
        thresholdSpinBox_6_4->setValue(20);
        samplesSpinBox_6_4 = new QSpinBox(chanel4SettingsBox_6);
        samplesSpinBox_6_4->setObjectName(QStringLiteral("samplesSpinBox_6_4"));
        samplesSpinBox_6_4->setEnabled(false);
        samplesSpinBox_6_4->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_6_4->setValue(10);
        DACOffsetSpinBox_6_4 = new QSpinBox(chanel4SettingsBox_6);
        DACOffsetSpinBox_6_4->setObjectName(QStringLiteral("DACOffsetSpinBox_6_4"));
        DACOffsetSpinBox_6_4->setEnabled(false);
        DACOffsetSpinBox_6_4->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_6_4->setMinimum(-500);
        DACOffsetSpinBox_6_4->setMaximum(500);
        scaleSpinBox_6_4 = new QComboBox(chanel4SettingsBox_6);
        scaleSpinBox_6_4->setObjectName(QStringLiteral("scaleSpinBox_6_4"));
        scaleSpinBox_6_4->setEnabled(false);
        scaleSpinBox_6_4->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_6_4->setEditable(true);
        positionResetButton_6_4 = new QPushButton(chanel4SettingsBox_6);
        positionResetButton_6_4->setObjectName(QStringLiteral("positionResetButton_6_4"));
        positionResetButton_6_4->setEnabled(false);
        positionResetButton_6_4->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_6_4->setIcon(icon12);
        DACOffsetResetButton_6_4 = new QPushButton(chanel4SettingsBox_6);
        DACOffsetResetButton_6_4->setObjectName(QStringLiteral("DACOffsetResetButton_6_4"));
        DACOffsetResetButton_6_4->setEnabled(false);
        DACOffsetResetButton_6_4->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_6_4->setIcon(icon12);
        channelIsDrawingButton_6_4 = new QPushButton(chanel4SettingsBox_6);
        channelIsDrawingButton_6_4->setObjectName(QStringLiteral("channelIsDrawingButton_6_4"));
        channelIsDrawingButton_6_4->setEnabled(false);
        channelIsDrawingButton_6_4->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_6_4->setIcon(icon13);
        channelIsDrawingButton_6_4->setCheckable(true);
        channelIsDrawingButton_6_4->setChecked(true);
        thresholdIsDrawingButton_6_4 = new QPushButton(chanel4SettingsBox_6);
        thresholdIsDrawingButton_6_4->setObjectName(QStringLiteral("thresholdIsDrawingButton_6_4"));
        thresholdIsDrawingButton_6_4->setEnabled(false);
        thresholdIsDrawingButton_6_4->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_6_4->setIcon(icon13);
        thresholdIsDrawingButton_6_4->setCheckable(true);
        thresholdIsDrawingButton_6_4->setChecked(false);
        blockSamplesButton_6_4 = new QPushButton(chanel4SettingsBox_6);
        blockSamplesButton_6_4->setObjectName(QStringLiteral("blockSamplesButton_6_4"));
        blockSamplesButton_6_4->setEnabled(false);
        blockSamplesButton_6_4->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_6_4->setIcon(icon19);
        blockSamplesButton_6_4->setCheckable(true);
        blockSamplesButton_6_4->setChecked(true);
        chanel6SettingsBox_6 = new QGroupBox(WDF6Widget);
        chanel6SettingsBox_6->setObjectName(QStringLiteral("chanel6SettingsBox_6"));
        chanel6SettingsBox_6->setGeometry(QRect(680, 0, 90, 170));
        changeTriggerButton_6_6 = new QPushButton(chanel6SettingsBox_6);
        changeTriggerButton_6_6->setObjectName(QStringLiteral("changeTriggerButton_6_6"));
        changeTriggerButton_6_6->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_6_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_6_6->setCheckable(false);
        changeTriggerButton_6_6->setChecked(false);
        changeTriggerButton_6_6->setAutoRepeat(false);
        changeTriggerButton_6_6->setAutoDefault(false);
        positionSpinBox_6_6 = new QSpinBox(chanel6SettingsBox_6);
        positionSpinBox_6_6->setObjectName(QStringLiteral("positionSpinBox_6_6"));
        positionSpinBox_6_6->setEnabled(false);
        positionSpinBox_6_6->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_6_6->setMinimum(-500);
        positionSpinBox_6_6->setMaximum(500);
        thresholdSpinBox_6_6 = new QSpinBox(chanel6SettingsBox_6);
        thresholdSpinBox_6_6->setObjectName(QStringLiteral("thresholdSpinBox_6_6"));
        thresholdSpinBox_6_6->setEnabled(false);
        thresholdSpinBox_6_6->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_6_6->setMinimum(-500);
        thresholdSpinBox_6_6->setMaximum(500);
        thresholdSpinBox_6_6->setValue(20);
        samplesSpinBox_6_6 = new QSpinBox(chanel6SettingsBox_6);
        samplesSpinBox_6_6->setObjectName(QStringLiteral("samplesSpinBox_6_6"));
        samplesSpinBox_6_6->setEnabled(false);
        samplesSpinBox_6_6->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_6_6->setValue(10);
        DACOffsetSpinBox_6_6 = new QSpinBox(chanel6SettingsBox_6);
        DACOffsetSpinBox_6_6->setObjectName(QStringLiteral("DACOffsetSpinBox_6_6"));
        DACOffsetSpinBox_6_6->setEnabled(false);
        DACOffsetSpinBox_6_6->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_6_6->setMinimum(-500);
        DACOffsetSpinBox_6_6->setMaximum(500);
        scaleSpinBox_6_6 = new QComboBox(chanel6SettingsBox_6);
        scaleSpinBox_6_6->setObjectName(QStringLiteral("scaleSpinBox_6_6"));
        scaleSpinBox_6_6->setEnabled(false);
        scaleSpinBox_6_6->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_6_6->setEditable(true);
        positionResetButton_6_6 = new QPushButton(chanel6SettingsBox_6);
        positionResetButton_6_6->setObjectName(QStringLiteral("positionResetButton_6_6"));
        positionResetButton_6_6->setEnabled(false);
        positionResetButton_6_6->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_6_6->setIcon(icon12);
        DACOffsetResetButton_6_6 = new QPushButton(chanel6SettingsBox_6);
        DACOffsetResetButton_6_6->setObjectName(QStringLiteral("DACOffsetResetButton_6_6"));
        DACOffsetResetButton_6_6->setEnabled(false);
        DACOffsetResetButton_6_6->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_6_6->setIcon(icon12);
        channelIsDrawingButton_6_6 = new QPushButton(chanel6SettingsBox_6);
        channelIsDrawingButton_6_6->setObjectName(QStringLiteral("channelIsDrawingButton_6_6"));
        channelIsDrawingButton_6_6->setEnabled(false);
        channelIsDrawingButton_6_6->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_6_6->setIcon(icon13);
        channelIsDrawingButton_6_6->setCheckable(true);
        channelIsDrawingButton_6_6->setChecked(true);
        thresholdIsDrawingButton_6_6 = new QPushButton(chanel6SettingsBox_6);
        thresholdIsDrawingButton_6_6->setObjectName(QStringLiteral("thresholdIsDrawingButton_6_6"));
        thresholdIsDrawingButton_6_6->setEnabled(false);
        thresholdIsDrawingButton_6_6->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_6_6->setIcon(icon13);
        thresholdIsDrawingButton_6_6->setCheckable(true);
        thresholdIsDrawingButton_6_6->setChecked(false);
        blockSamplesButton_6_6 = new QPushButton(chanel6SettingsBox_6);
        blockSamplesButton_6_6->setObjectName(QStringLiteral("blockSamplesButton_6_6"));
        blockSamplesButton_6_6->setEnabled(false);
        blockSamplesButton_6_6->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_6_6->setIcon(icon19);
        blockSamplesButton_6_6->setCheckable(true);
        blockSamplesButton_6_6->setChecked(true);
        chanel5SettingsBox_6 = new QGroupBox(WDF6Widget);
        chanel5SettingsBox_6->setObjectName(QStringLiteral("chanel5SettingsBox_6"));
        chanel5SettingsBox_6->setGeometry(QRect(585, 0, 90, 170));
        changeTriggerButton_6_5 = new QPushButton(chanel5SettingsBox_6);
        changeTriggerButton_6_5->setObjectName(QStringLiteral("changeTriggerButton_6_5"));
        changeTriggerButton_6_5->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_6_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_6_5->setCheckable(false);
        changeTriggerButton_6_5->setChecked(false);
        changeTriggerButton_6_5->setAutoRepeat(false);
        changeTriggerButton_6_5->setAutoDefault(false);
        positionSpinBox_6_5 = new QSpinBox(chanel5SettingsBox_6);
        positionSpinBox_6_5->setObjectName(QStringLiteral("positionSpinBox_6_5"));
        positionSpinBox_6_5->setEnabled(false);
        positionSpinBox_6_5->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_6_5->setMinimum(-500);
        positionSpinBox_6_5->setMaximum(500);
        thresholdSpinBox_6_5 = new QSpinBox(chanel5SettingsBox_6);
        thresholdSpinBox_6_5->setObjectName(QStringLiteral("thresholdSpinBox_6_5"));
        thresholdSpinBox_6_5->setEnabled(false);
        thresholdSpinBox_6_5->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_6_5->setMinimum(-500);
        thresholdSpinBox_6_5->setMaximum(500);
        thresholdSpinBox_6_5->setValue(20);
        samplesSpinBox_6_5 = new QSpinBox(chanel5SettingsBox_6);
        samplesSpinBox_6_5->setObjectName(QStringLiteral("samplesSpinBox_6_5"));
        samplesSpinBox_6_5->setEnabled(false);
        samplesSpinBox_6_5->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_6_5->setValue(10);
        DACOffsetSpinBox_6_5 = new QSpinBox(chanel5SettingsBox_6);
        DACOffsetSpinBox_6_5->setObjectName(QStringLiteral("DACOffsetSpinBox_6_5"));
        DACOffsetSpinBox_6_5->setEnabled(false);
        DACOffsetSpinBox_6_5->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_6_5->setMinimum(-500);
        DACOffsetSpinBox_6_5->setMaximum(500);
        scaleSpinBox_6_5 = new QComboBox(chanel5SettingsBox_6);
        scaleSpinBox_6_5->setObjectName(QStringLiteral("scaleSpinBox_6_5"));
        scaleSpinBox_6_5->setEnabled(false);
        scaleSpinBox_6_5->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_6_5->setEditable(true);
        positionResetButton_6_5 = new QPushButton(chanel5SettingsBox_6);
        positionResetButton_6_5->setObjectName(QStringLiteral("positionResetButton_6_5"));
        positionResetButton_6_5->setEnabled(false);
        positionResetButton_6_5->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_6_5->setIcon(icon12);
        DACOffsetResetButton_6_5 = new QPushButton(chanel5SettingsBox_6);
        DACOffsetResetButton_6_5->setObjectName(QStringLiteral("DACOffsetResetButton_6_5"));
        DACOffsetResetButton_6_5->setEnabled(false);
        DACOffsetResetButton_6_5->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_6_5->setIcon(icon12);
        channelIsDrawingButton_6_5 = new QPushButton(chanel5SettingsBox_6);
        channelIsDrawingButton_6_5->setObjectName(QStringLiteral("channelIsDrawingButton_6_5"));
        channelIsDrawingButton_6_5->setEnabled(false);
        channelIsDrawingButton_6_5->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_6_5->setIcon(icon13);
        channelIsDrawingButton_6_5->setCheckable(true);
        channelIsDrawingButton_6_5->setChecked(true);
        thresholdIsDrawingButton_6_5 = new QPushButton(chanel5SettingsBox_6);
        thresholdIsDrawingButton_6_5->setObjectName(QStringLiteral("thresholdIsDrawingButton_6_5"));
        thresholdIsDrawingButton_6_5->setEnabled(false);
        thresholdIsDrawingButton_6_5->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_6_5->setIcon(icon13);
        thresholdIsDrawingButton_6_5->setCheckable(true);
        thresholdIsDrawingButton_6_5->setChecked(false);
        blockSamplesButton_6_5 = new QPushButton(chanel5SettingsBox_6);
        blockSamplesButton_6_5->setObjectName(QStringLiteral("blockSamplesButton_6_5"));
        blockSamplesButton_6_5->setEnabled(false);
        blockSamplesButton_6_5->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_6_5->setIcon(icon19);
        blockSamplesButton_6_5->setCheckable(true);
        blockSamplesButton_6_5->setChecked(true);
        chanel7SettingsBox_6 = new QGroupBox(WDF6Widget);
        chanel7SettingsBox_6->setObjectName(QStringLiteral("chanel7SettingsBox_6"));
        chanel7SettingsBox_6->setGeometry(QRect(775, 0, 90, 170));
        changeTriggerButton_6_7 = new QPushButton(chanel7SettingsBox_6);
        changeTriggerButton_6_7->setObjectName(QStringLiteral("changeTriggerButton_6_7"));
        changeTriggerButton_6_7->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_6_7->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_6_7->setCheckable(false);
        changeTriggerButton_6_7->setChecked(false);
        changeTriggerButton_6_7->setAutoRepeat(false);
        changeTriggerButton_6_7->setAutoDefault(false);
        positionSpinBox_6_7 = new QSpinBox(chanel7SettingsBox_6);
        positionSpinBox_6_7->setObjectName(QStringLiteral("positionSpinBox_6_7"));
        positionSpinBox_6_7->setEnabled(false);
        positionSpinBox_6_7->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_6_7->setMinimum(-500);
        positionSpinBox_6_7->setMaximum(500);
        thresholdSpinBox_6_7 = new QSpinBox(chanel7SettingsBox_6);
        thresholdSpinBox_6_7->setObjectName(QStringLiteral("thresholdSpinBox_6_7"));
        thresholdSpinBox_6_7->setEnabled(false);
        thresholdSpinBox_6_7->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_6_7->setMinimum(-500);
        thresholdSpinBox_6_7->setMaximum(500);
        thresholdSpinBox_6_7->setValue(20);
        samplesSpinBox_6_7 = new QSpinBox(chanel7SettingsBox_6);
        samplesSpinBox_6_7->setObjectName(QStringLiteral("samplesSpinBox_6_7"));
        samplesSpinBox_6_7->setEnabled(false);
        samplesSpinBox_6_7->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_6_7->setValue(10);
        DACOffsetSpinBox_6_7 = new QSpinBox(chanel7SettingsBox_6);
        DACOffsetSpinBox_6_7->setObjectName(QStringLiteral("DACOffsetSpinBox_6_7"));
        DACOffsetSpinBox_6_7->setEnabled(false);
        DACOffsetSpinBox_6_7->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_6_7->setMinimum(-500);
        DACOffsetSpinBox_6_7->setMaximum(500);
        scaleSpinBox_6_7 = new QComboBox(chanel7SettingsBox_6);
        scaleSpinBox_6_7->setObjectName(QStringLiteral("scaleSpinBox_6_7"));
        scaleSpinBox_6_7->setEnabled(false);
        scaleSpinBox_6_7->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_6_7->setEditable(true);
        positionResetButton_6_7 = new QPushButton(chanel7SettingsBox_6);
        positionResetButton_6_7->setObjectName(QStringLiteral("positionResetButton_6_7"));
        positionResetButton_6_7->setEnabled(false);
        positionResetButton_6_7->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_6_7->setIcon(icon12);
        DACOffsetResetButton_6_7 = new QPushButton(chanel7SettingsBox_6);
        DACOffsetResetButton_6_7->setObjectName(QStringLiteral("DACOffsetResetButton_6_7"));
        DACOffsetResetButton_6_7->setEnabled(false);
        DACOffsetResetButton_6_7->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_6_7->setIcon(icon12);
        channelIsDrawingButton_6_7 = new QPushButton(chanel7SettingsBox_6);
        channelIsDrawingButton_6_7->setObjectName(QStringLiteral("channelIsDrawingButton_6_7"));
        channelIsDrawingButton_6_7->setEnabled(false);
        channelIsDrawingButton_6_7->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_6_7->setIcon(icon13);
        channelIsDrawingButton_6_7->setCheckable(true);
        channelIsDrawingButton_6_7->setChecked(true);
        thresholdIsDrawingButton_6_7 = new QPushButton(chanel7SettingsBox_6);
        thresholdIsDrawingButton_6_7->setObjectName(QStringLiteral("thresholdIsDrawingButton_6_7"));
        thresholdIsDrawingButton_6_7->setEnabled(false);
        thresholdIsDrawingButton_6_7->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_6_7->setIcon(icon13);
        thresholdIsDrawingButton_6_7->setCheckable(true);
        thresholdIsDrawingButton_6_7->setChecked(false);
        blockSamplesButton_6_7 = new QPushButton(chanel7SettingsBox_6);
        blockSamplesButton_6_7->setObjectName(QStringLiteral("blockSamplesButton_6_7"));
        blockSamplesButton_6_7->setEnabled(false);
        blockSamplesButton_6_7->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_6_7->setIcon(icon19);
        blockSamplesButton_6_7->setCheckable(true);
        blockSamplesButton_6_7->setChecked(true);
        chanel3SettingsBox_6 = new QGroupBox(WDF6Widget);
        chanel3SettingsBox_6->setObjectName(QStringLiteral("chanel3SettingsBox_6"));
        chanel3SettingsBox_6->setGeometry(QRect(395, 0, 90, 170));
        changeTriggerButton_6_3 = new QPushButton(chanel3SettingsBox_6);
        changeTriggerButton_6_3->setObjectName(QStringLiteral("changeTriggerButton_6_3"));
        changeTriggerButton_6_3->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_6_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_6_3->setCheckable(false);
        changeTriggerButton_6_3->setChecked(false);
        changeTriggerButton_6_3->setAutoRepeat(false);
        changeTriggerButton_6_3->setAutoDefault(false);
        positionSpinBox_6_3 = new QSpinBox(chanel3SettingsBox_6);
        positionSpinBox_6_3->setObjectName(QStringLiteral("positionSpinBox_6_3"));
        positionSpinBox_6_3->setEnabled(false);
        positionSpinBox_6_3->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_6_3->setMinimum(-500);
        positionSpinBox_6_3->setMaximum(500);
        thresholdSpinBox_6_3 = new QSpinBox(chanel3SettingsBox_6);
        thresholdSpinBox_6_3->setObjectName(QStringLiteral("thresholdSpinBox_6_3"));
        thresholdSpinBox_6_3->setEnabled(false);
        thresholdSpinBox_6_3->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_6_3->setMinimum(-500);
        thresholdSpinBox_6_3->setMaximum(500);
        thresholdSpinBox_6_3->setValue(20);
        samplesSpinBox_6_3 = new QSpinBox(chanel3SettingsBox_6);
        samplesSpinBox_6_3->setObjectName(QStringLiteral("samplesSpinBox_6_3"));
        samplesSpinBox_6_3->setEnabled(false);
        samplesSpinBox_6_3->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_6_3->setValue(10);
        DACOffsetSpinBox_6_3 = new QSpinBox(chanel3SettingsBox_6);
        DACOffsetSpinBox_6_3->setObjectName(QStringLiteral("DACOffsetSpinBox_6_3"));
        DACOffsetSpinBox_6_3->setEnabled(false);
        DACOffsetSpinBox_6_3->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_6_3->setMinimum(-500);
        DACOffsetSpinBox_6_3->setMaximum(500);
        scaleSpinBox_6_3 = new QComboBox(chanel3SettingsBox_6);
        scaleSpinBox_6_3->setObjectName(QStringLiteral("scaleSpinBox_6_3"));
        scaleSpinBox_6_3->setEnabled(false);
        scaleSpinBox_6_3->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_6_3->setEditable(true);
        positionResetButton_6_3 = new QPushButton(chanel3SettingsBox_6);
        positionResetButton_6_3->setObjectName(QStringLiteral("positionResetButton_6_3"));
        positionResetButton_6_3->setEnabled(false);
        positionResetButton_6_3->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_6_3->setIcon(icon12);
        DACOffsetResetButton_6_3 = new QPushButton(chanel3SettingsBox_6);
        DACOffsetResetButton_6_3->setObjectName(QStringLiteral("DACOffsetResetButton_6_3"));
        DACOffsetResetButton_6_3->setEnabled(false);
        DACOffsetResetButton_6_3->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_6_3->setIcon(icon12);
        channelIsDrawingButton_6_3 = new QPushButton(chanel3SettingsBox_6);
        channelIsDrawingButton_6_3->setObjectName(QStringLiteral("channelIsDrawingButton_6_3"));
        channelIsDrawingButton_6_3->setEnabled(false);
        channelIsDrawingButton_6_3->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_6_3->setIcon(icon13);
        channelIsDrawingButton_6_3->setCheckable(true);
        channelIsDrawingButton_6_3->setChecked(true);
        thresholdIsDrawingButton_6_3 = new QPushButton(chanel3SettingsBox_6);
        thresholdIsDrawingButton_6_3->setObjectName(QStringLiteral("thresholdIsDrawingButton_6_3"));
        thresholdIsDrawingButton_6_3->setEnabled(false);
        thresholdIsDrawingButton_6_3->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_6_3->setIcon(icon13);
        thresholdIsDrawingButton_6_3->setCheckable(true);
        thresholdIsDrawingButton_6_3->setChecked(false);
        blockSamplesButton_6_3 = new QPushButton(chanel3SettingsBox_6);
        blockSamplesButton_6_3->setObjectName(QStringLiteral("blockSamplesButton_6_3"));
        blockSamplesButton_6_3->setEnabled(false);
        blockSamplesButton_6_3->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_6_3->setIcon(icon19);
        blockSamplesButton_6_3->setCheckable(true);
        blockSamplesButton_6_3->setChecked(true);
        channelLabelBox_6 = new QGroupBox(WDF6Widget);
        channelLabelBox_6->setObjectName(QStringLiteral("channelLabelBox_6"));
        channelLabelBox_6->setGeometry(QRect(0, 0, 105, 170));
        thresholdLabel_6 = new QLabel(channelLabelBox_6);
        thresholdLabel_6->setObjectName(QStringLiteral("thresholdLabel_6"));
        thresholdLabel_6->setGeometry(QRect(10, 70, 91, 20));
        thresholdLabel_6->setLayoutDirection(Qt::RightToLeft);
        thresholdLabel_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        samplesLabel_6 = new QLabel(channelLabelBox_6);
        samplesLabel_6->setObjectName(QStringLiteral("samplesLabel_6"));
        samplesLabel_6->setGeometry(QRect(10, 95, 91, 20));
        samplesLabel_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        positionLabel_6 = new QLabel(channelLabelBox_6);
        positionLabel_6->setObjectName(QStringLiteral("positionLabel_6"));
        positionLabel_6->setGeometry(QRect(10, 45, 91, 20));
        positionLabel_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        DACOffsetLabel_6 = new QLabel(channelLabelBox_6);
        DACOffsetLabel_6->setObjectName(QStringLiteral("DACOffsetLabel_6"));
        DACOffsetLabel_6->setGeometry(QRect(10, 120, 91, 20));
        DACOffsetLabel_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        scaleLabel_6 = new QLabel(channelLabelBox_6);
        scaleLabel_6->setObjectName(QStringLiteral("scaleLabel_6"));
        scaleLabel_6->setGeometry(QRect(10, 145, 91, 20));
        scaleLabel_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        statusLabel_6 = new QLabel(channelLabelBox_6);
        statusLabel_6->setObjectName(QStringLiteral("statusLabel_6"));
        statusLabel_6->setGeometry(QRect(10, 15, 91, 24));
        statusLabel_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        WDFTabWidget->addTab(WDF6Widget, icon20, QString());
        WDF7Widget = new QWidget();
        WDF7Widget->setObjectName(QStringLiteral("WDF7Widget"));
        chanel0SettingsBox_7 = new QGroupBox(WDF7Widget);
        chanel0SettingsBox_7->setObjectName(QStringLiteral("chanel0SettingsBox_7"));
        chanel0SettingsBox_7->setGeometry(QRect(110, 0, 90, 170));
        changeTriggerButton_7_0 = new QPushButton(chanel0SettingsBox_7);
        changeTriggerButton_7_0->setObjectName(QStringLiteral("changeTriggerButton_7_0"));
        changeTriggerButton_7_0->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_7_0->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_7_0->setCheckable(false);
        changeTriggerButton_7_0->setChecked(false);
        changeTriggerButton_7_0->setAutoRepeat(false);
        changeTriggerButton_7_0->setAutoDefault(false);
        positionSpinBox_7_0 = new QSpinBox(chanel0SettingsBox_7);
        positionSpinBox_7_0->setObjectName(QStringLiteral("positionSpinBox_7_0"));
        positionSpinBox_7_0->setEnabled(false);
        positionSpinBox_7_0->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_7_0->setMinimum(-500);
        positionSpinBox_7_0->setMaximum(500);
        thresholdSpinBox_7_0 = new QSpinBox(chanel0SettingsBox_7);
        thresholdSpinBox_7_0->setObjectName(QStringLiteral("thresholdSpinBox_7_0"));
        thresholdSpinBox_7_0->setEnabled(false);
        thresholdSpinBox_7_0->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_7_0->setMinimum(-500);
        thresholdSpinBox_7_0->setMaximum(500);
        thresholdSpinBox_7_0->setValue(20);
        samplesSpinBox_7_0 = new QSpinBox(chanel0SettingsBox_7);
        samplesSpinBox_7_0->setObjectName(QStringLiteral("samplesSpinBox_7_0"));
        samplesSpinBox_7_0->setEnabled(false);
        samplesSpinBox_7_0->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_7_0->setValue(10);
        DACOffsetSpinBox_7_0 = new QSpinBox(chanel0SettingsBox_7);
        DACOffsetSpinBox_7_0->setObjectName(QStringLiteral("DACOffsetSpinBox_7_0"));
        DACOffsetSpinBox_7_0->setEnabled(false);
        DACOffsetSpinBox_7_0->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_7_0->setMinimum(-500);
        DACOffsetSpinBox_7_0->setMaximum(500);
        scaleSpinBox_7_0 = new QComboBox(chanel0SettingsBox_7);
        scaleSpinBox_7_0->setObjectName(QStringLiteral("scaleSpinBox_7_0"));
        scaleSpinBox_7_0->setEnabled(false);
        scaleSpinBox_7_0->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_7_0->setEditable(true);
        positionResetButton_7_0 = new QPushButton(chanel0SettingsBox_7);
        positionResetButton_7_0->setObjectName(QStringLiteral("positionResetButton_7_0"));
        positionResetButton_7_0->setEnabled(false);
        positionResetButton_7_0->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_7_0->setIcon(icon12);
        DACOffsetResetButton_7_0 = new QPushButton(chanel0SettingsBox_7);
        DACOffsetResetButton_7_0->setObjectName(QStringLiteral("DACOffsetResetButton_7_0"));
        DACOffsetResetButton_7_0->setEnabled(false);
        DACOffsetResetButton_7_0->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_7_0->setIcon(icon12);
        channelIsDrawingButton_7_0 = new QPushButton(chanel0SettingsBox_7);
        channelIsDrawingButton_7_0->setObjectName(QStringLiteral("channelIsDrawingButton_7_0"));
        channelIsDrawingButton_7_0->setEnabled(false);
        channelIsDrawingButton_7_0->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_7_0->setIcon(icon13);
        channelIsDrawingButton_7_0->setCheckable(true);
        channelIsDrawingButton_7_0->setChecked(true);
        thresholdIsDrawingButton_7_0 = new QPushButton(chanel0SettingsBox_7);
        thresholdIsDrawingButton_7_0->setObjectName(QStringLiteral("thresholdIsDrawingButton_7_0"));
        thresholdIsDrawingButton_7_0->setEnabled(false);
        thresholdIsDrawingButton_7_0->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_7_0->setIcon(icon13);
        thresholdIsDrawingButton_7_0->setCheckable(true);
        thresholdIsDrawingButton_7_0->setChecked(false);
        blockSamplesButton_7_0 = new QPushButton(chanel0SettingsBox_7);
        blockSamplesButton_7_0->setObjectName(QStringLiteral("blockSamplesButton_7_0"));
        blockSamplesButton_7_0->setEnabled(false);
        blockSamplesButton_7_0->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_7_0->setIcon(icon19);
        blockSamplesButton_7_0->setCheckable(true);
        blockSamplesButton_7_0->setChecked(true);
        chanel1SettingsBox_7 = new QGroupBox(WDF7Widget);
        chanel1SettingsBox_7->setObjectName(QStringLiteral("chanel1SettingsBox_7"));
        chanel1SettingsBox_7->setGeometry(QRect(205, 0, 90, 170));
        changeTriggerButton_7_1 = new QPushButton(chanel1SettingsBox_7);
        changeTriggerButton_7_1->setObjectName(QStringLiteral("changeTriggerButton_7_1"));
        changeTriggerButton_7_1->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_7_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_7_1->setCheckable(false);
        changeTriggerButton_7_1->setChecked(false);
        changeTriggerButton_7_1->setAutoRepeat(false);
        changeTriggerButton_7_1->setAutoDefault(false);
        positionSpinBox_7_1 = new QSpinBox(chanel1SettingsBox_7);
        positionSpinBox_7_1->setObjectName(QStringLiteral("positionSpinBox_7_1"));
        positionSpinBox_7_1->setEnabled(false);
        positionSpinBox_7_1->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_7_1->setMinimum(-500);
        positionSpinBox_7_1->setMaximum(500);
        thresholdSpinBox_7_1 = new QSpinBox(chanel1SettingsBox_7);
        thresholdSpinBox_7_1->setObjectName(QStringLiteral("thresholdSpinBox_7_1"));
        thresholdSpinBox_7_1->setEnabled(false);
        thresholdSpinBox_7_1->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_7_1->setMinimum(-500);
        thresholdSpinBox_7_1->setMaximum(500);
        thresholdSpinBox_7_1->setValue(20);
        samplesSpinBox_7_1 = new QSpinBox(chanel1SettingsBox_7);
        samplesSpinBox_7_1->setObjectName(QStringLiteral("samplesSpinBox_7_1"));
        samplesSpinBox_7_1->setEnabled(false);
        samplesSpinBox_7_1->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_7_1->setValue(10);
        DACOffsetSpinBox_7_1 = new QSpinBox(chanel1SettingsBox_7);
        DACOffsetSpinBox_7_1->setObjectName(QStringLiteral("DACOffsetSpinBox_7_1"));
        DACOffsetSpinBox_7_1->setEnabled(false);
        DACOffsetSpinBox_7_1->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_7_1->setMinimum(-500);
        DACOffsetSpinBox_7_1->setMaximum(500);
        scaleSpinBox_7_1 = new QComboBox(chanel1SettingsBox_7);
        scaleSpinBox_7_1->setObjectName(QStringLiteral("scaleSpinBox_7_1"));
        scaleSpinBox_7_1->setEnabled(false);
        scaleSpinBox_7_1->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_7_1->setEditable(true);
        positionResetButton_7_1 = new QPushButton(chanel1SettingsBox_7);
        positionResetButton_7_1->setObjectName(QStringLiteral("positionResetButton_7_1"));
        positionResetButton_7_1->setEnabled(false);
        positionResetButton_7_1->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_7_1->setIcon(icon12);
        DACOffsetResetButton_7_1 = new QPushButton(chanel1SettingsBox_7);
        DACOffsetResetButton_7_1->setObjectName(QStringLiteral("DACOffsetResetButton_7_1"));
        DACOffsetResetButton_7_1->setEnabled(false);
        DACOffsetResetButton_7_1->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_7_1->setIcon(icon12);
        channelIsDrawingButton_7_1 = new QPushButton(chanel1SettingsBox_7);
        channelIsDrawingButton_7_1->setObjectName(QStringLiteral("channelIsDrawingButton_7_1"));
        channelIsDrawingButton_7_1->setEnabled(false);
        channelIsDrawingButton_7_1->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_7_1->setIcon(icon13);
        channelIsDrawingButton_7_1->setCheckable(true);
        channelIsDrawingButton_7_1->setChecked(true);
        thresholdIsDrawingButton_7_1 = new QPushButton(chanel1SettingsBox_7);
        thresholdIsDrawingButton_7_1->setObjectName(QStringLiteral("thresholdIsDrawingButton_7_1"));
        thresholdIsDrawingButton_7_1->setEnabled(false);
        thresholdIsDrawingButton_7_1->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_7_1->setIcon(icon13);
        thresholdIsDrawingButton_7_1->setCheckable(true);
        thresholdIsDrawingButton_7_1->setChecked(false);
        blockSamplesButton_7_1 = new QPushButton(chanel1SettingsBox_7);
        blockSamplesButton_7_1->setObjectName(QStringLiteral("blockSamplesButton_7_1"));
        blockSamplesButton_7_1->setEnabled(false);
        blockSamplesButton_7_1->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_7_1->setIcon(icon19);
        blockSamplesButton_7_1->setCheckable(true);
        blockSamplesButton_7_1->setChecked(true);
        chanel2SettingsBox_7 = new QGroupBox(WDF7Widget);
        chanel2SettingsBox_7->setObjectName(QStringLiteral("chanel2SettingsBox_7"));
        chanel2SettingsBox_7->setGeometry(QRect(300, 0, 90, 170));
        changeTriggerButton_7_2 = new QPushButton(chanel2SettingsBox_7);
        changeTriggerButton_7_2->setObjectName(QStringLiteral("changeTriggerButton_7_2"));
        changeTriggerButton_7_2->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_7_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_7_2->setCheckable(false);
        changeTriggerButton_7_2->setChecked(false);
        changeTriggerButton_7_2->setAutoRepeat(false);
        changeTriggerButton_7_2->setAutoDefault(false);
        positionSpinBox_7_2 = new QSpinBox(chanel2SettingsBox_7);
        positionSpinBox_7_2->setObjectName(QStringLiteral("positionSpinBox_7_2"));
        positionSpinBox_7_2->setEnabled(false);
        positionSpinBox_7_2->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_7_2->setMinimum(-500);
        positionSpinBox_7_2->setMaximum(500);
        thresholdSpinBox_7_2 = new QSpinBox(chanel2SettingsBox_7);
        thresholdSpinBox_7_2->setObjectName(QStringLiteral("thresholdSpinBox_7_2"));
        thresholdSpinBox_7_2->setEnabled(false);
        thresholdSpinBox_7_2->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_7_2->setMinimum(-500);
        thresholdSpinBox_7_2->setMaximum(500);
        thresholdSpinBox_7_2->setValue(20);
        samplesSpinBox_7_2 = new QSpinBox(chanel2SettingsBox_7);
        samplesSpinBox_7_2->setObjectName(QStringLiteral("samplesSpinBox_7_2"));
        samplesSpinBox_7_2->setEnabled(false);
        samplesSpinBox_7_2->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_7_2->setValue(10);
        DACOffsetSpinBox_7_2 = new QSpinBox(chanel2SettingsBox_7);
        DACOffsetSpinBox_7_2->setObjectName(QStringLiteral("DACOffsetSpinBox_7_2"));
        DACOffsetSpinBox_7_2->setEnabled(false);
        DACOffsetSpinBox_7_2->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_7_2->setMinimum(-500);
        DACOffsetSpinBox_7_2->setMaximum(500);
        scaleSpinBox_7_2 = new QComboBox(chanel2SettingsBox_7);
        scaleSpinBox_7_2->setObjectName(QStringLiteral("scaleSpinBox_7_2"));
        scaleSpinBox_7_2->setEnabled(false);
        scaleSpinBox_7_2->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_7_2->setEditable(true);
        positionResetButton_7_2 = new QPushButton(chanel2SettingsBox_7);
        positionResetButton_7_2->setObjectName(QStringLiteral("positionResetButton_7_2"));
        positionResetButton_7_2->setEnabled(false);
        positionResetButton_7_2->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_7_2->setIcon(icon12);
        DACOffsetResetButton_7_2 = new QPushButton(chanel2SettingsBox_7);
        DACOffsetResetButton_7_2->setObjectName(QStringLiteral("DACOffsetResetButton_7_2"));
        DACOffsetResetButton_7_2->setEnabled(false);
        DACOffsetResetButton_7_2->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_7_2->setIcon(icon12);
        channelIsDrawingButton_7_2 = new QPushButton(chanel2SettingsBox_7);
        channelIsDrawingButton_7_2->setObjectName(QStringLiteral("channelIsDrawingButton_7_2"));
        channelIsDrawingButton_7_2->setEnabled(false);
        channelIsDrawingButton_7_2->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_7_2->setIcon(icon13);
        channelIsDrawingButton_7_2->setCheckable(true);
        channelIsDrawingButton_7_2->setChecked(true);
        thresholdIsDrawingButton_7_2 = new QPushButton(chanel2SettingsBox_7);
        thresholdIsDrawingButton_7_2->setObjectName(QStringLiteral("thresholdIsDrawingButton_7_2"));
        thresholdIsDrawingButton_7_2->setEnabled(false);
        thresholdIsDrawingButton_7_2->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_7_2->setIcon(icon13);
        thresholdIsDrawingButton_7_2->setCheckable(true);
        thresholdIsDrawingButton_7_2->setChecked(false);
        blockSamplesButton_7_2 = new QPushButton(chanel2SettingsBox_7);
        blockSamplesButton_7_2->setObjectName(QStringLiteral("blockSamplesButton_7_2"));
        blockSamplesButton_7_2->setEnabled(false);
        blockSamplesButton_7_2->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_7_2->setIcon(icon19);
        blockSamplesButton_7_2->setCheckable(true);
        blockSamplesButton_7_2->setChecked(true);
        chanel4SettingsBox_7 = new QGroupBox(WDF7Widget);
        chanel4SettingsBox_7->setObjectName(QStringLiteral("chanel4SettingsBox_7"));
        chanel4SettingsBox_7->setGeometry(QRect(490, 0, 90, 170));
        changeTriggerButton_7_4 = new QPushButton(chanel4SettingsBox_7);
        changeTriggerButton_7_4->setObjectName(QStringLiteral("changeTriggerButton_7_4"));
        changeTriggerButton_7_4->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_7_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_7_4->setCheckable(false);
        changeTriggerButton_7_4->setChecked(false);
        changeTriggerButton_7_4->setAutoRepeat(false);
        changeTriggerButton_7_4->setAutoDefault(false);
        positionSpinBox_7_4 = new QSpinBox(chanel4SettingsBox_7);
        positionSpinBox_7_4->setObjectName(QStringLiteral("positionSpinBox_7_4"));
        positionSpinBox_7_4->setEnabled(false);
        positionSpinBox_7_4->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_7_4->setMinimum(-500);
        positionSpinBox_7_4->setMaximum(500);
        thresholdSpinBox_7_4 = new QSpinBox(chanel4SettingsBox_7);
        thresholdSpinBox_7_4->setObjectName(QStringLiteral("thresholdSpinBox_7_4"));
        thresholdSpinBox_7_4->setEnabled(false);
        thresholdSpinBox_7_4->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_7_4->setMinimum(-500);
        thresholdSpinBox_7_4->setMaximum(500);
        thresholdSpinBox_7_4->setValue(20);
        samplesSpinBox_7_4 = new QSpinBox(chanel4SettingsBox_7);
        samplesSpinBox_7_4->setObjectName(QStringLiteral("samplesSpinBox_7_4"));
        samplesSpinBox_7_4->setEnabled(false);
        samplesSpinBox_7_4->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_7_4->setValue(10);
        DACOffsetSpinBox_7_4 = new QSpinBox(chanel4SettingsBox_7);
        DACOffsetSpinBox_7_4->setObjectName(QStringLiteral("DACOffsetSpinBox_7_4"));
        DACOffsetSpinBox_7_4->setEnabled(false);
        DACOffsetSpinBox_7_4->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_7_4->setMinimum(-500);
        DACOffsetSpinBox_7_4->setMaximum(500);
        scaleSpinBox_7_4 = new QComboBox(chanel4SettingsBox_7);
        scaleSpinBox_7_4->setObjectName(QStringLiteral("scaleSpinBox_7_4"));
        scaleSpinBox_7_4->setEnabled(false);
        scaleSpinBox_7_4->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_7_4->setEditable(true);
        positionResetButton_7_4 = new QPushButton(chanel4SettingsBox_7);
        positionResetButton_7_4->setObjectName(QStringLiteral("positionResetButton_7_4"));
        positionResetButton_7_4->setEnabled(false);
        positionResetButton_7_4->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_7_4->setIcon(icon12);
        DACOffsetResetButton_7_4 = new QPushButton(chanel4SettingsBox_7);
        DACOffsetResetButton_7_4->setObjectName(QStringLiteral("DACOffsetResetButton_7_4"));
        DACOffsetResetButton_7_4->setEnabled(false);
        DACOffsetResetButton_7_4->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_7_4->setIcon(icon12);
        channelIsDrawingButton_7_4 = new QPushButton(chanel4SettingsBox_7);
        channelIsDrawingButton_7_4->setObjectName(QStringLiteral("channelIsDrawingButton_7_4"));
        channelIsDrawingButton_7_4->setEnabled(false);
        channelIsDrawingButton_7_4->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_7_4->setIcon(icon13);
        channelIsDrawingButton_7_4->setCheckable(true);
        channelIsDrawingButton_7_4->setChecked(true);
        thresholdIsDrawingButton_7_4 = new QPushButton(chanel4SettingsBox_7);
        thresholdIsDrawingButton_7_4->setObjectName(QStringLiteral("thresholdIsDrawingButton_7_4"));
        thresholdIsDrawingButton_7_4->setEnabled(false);
        thresholdIsDrawingButton_7_4->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_7_4->setIcon(icon13);
        thresholdIsDrawingButton_7_4->setCheckable(true);
        thresholdIsDrawingButton_7_4->setChecked(false);
        blockSamplesButton_7_4 = new QPushButton(chanel4SettingsBox_7);
        blockSamplesButton_7_4->setObjectName(QStringLiteral("blockSamplesButton_7_4"));
        blockSamplesButton_7_4->setEnabled(false);
        blockSamplesButton_7_4->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_7_4->setIcon(icon19);
        blockSamplesButton_7_4->setCheckable(true);
        blockSamplesButton_7_4->setChecked(true);
        chanel6SettingsBox_7 = new QGroupBox(WDF7Widget);
        chanel6SettingsBox_7->setObjectName(QStringLiteral("chanel6SettingsBox_7"));
        chanel6SettingsBox_7->setGeometry(QRect(680, 0, 90, 170));
        changeTriggerButton_7_6 = new QPushButton(chanel6SettingsBox_7);
        changeTriggerButton_7_6->setObjectName(QStringLiteral("changeTriggerButton_7_6"));
        changeTriggerButton_7_6->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_7_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_7_6->setCheckable(false);
        changeTriggerButton_7_6->setChecked(false);
        changeTriggerButton_7_6->setAutoRepeat(false);
        changeTriggerButton_7_6->setAutoDefault(false);
        positionSpinBox_7_6 = new QSpinBox(chanel6SettingsBox_7);
        positionSpinBox_7_6->setObjectName(QStringLiteral("positionSpinBox_7_6"));
        positionSpinBox_7_6->setEnabled(false);
        positionSpinBox_7_6->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_7_6->setMinimum(-500);
        positionSpinBox_7_6->setMaximum(500);
        thresholdSpinBox_7_6 = new QSpinBox(chanel6SettingsBox_7);
        thresholdSpinBox_7_6->setObjectName(QStringLiteral("thresholdSpinBox_7_6"));
        thresholdSpinBox_7_6->setEnabled(false);
        thresholdSpinBox_7_6->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_7_6->setMinimum(-500);
        thresholdSpinBox_7_6->setMaximum(500);
        thresholdSpinBox_7_6->setValue(20);
        samplesSpinBox_7_6 = new QSpinBox(chanel6SettingsBox_7);
        samplesSpinBox_7_6->setObjectName(QStringLiteral("samplesSpinBox_7_6"));
        samplesSpinBox_7_6->setEnabled(false);
        samplesSpinBox_7_6->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_7_6->setValue(10);
        DACOffsetSpinBox_7_6 = new QSpinBox(chanel6SettingsBox_7);
        DACOffsetSpinBox_7_6->setObjectName(QStringLiteral("DACOffsetSpinBox_7_6"));
        DACOffsetSpinBox_7_6->setEnabled(false);
        DACOffsetSpinBox_7_6->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_7_6->setMinimum(-500);
        DACOffsetSpinBox_7_6->setMaximum(500);
        scaleSpinBox_7_6 = new QComboBox(chanel6SettingsBox_7);
        scaleSpinBox_7_6->setObjectName(QStringLiteral("scaleSpinBox_7_6"));
        scaleSpinBox_7_6->setEnabled(false);
        scaleSpinBox_7_6->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_7_6->setEditable(true);
        positionResetButton_7_6 = new QPushButton(chanel6SettingsBox_7);
        positionResetButton_7_6->setObjectName(QStringLiteral("positionResetButton_7_6"));
        positionResetButton_7_6->setEnabled(false);
        positionResetButton_7_6->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_7_6->setIcon(icon12);
        DACOffsetResetButton_7_6 = new QPushButton(chanel6SettingsBox_7);
        DACOffsetResetButton_7_6->setObjectName(QStringLiteral("DACOffsetResetButton_7_6"));
        DACOffsetResetButton_7_6->setEnabled(false);
        DACOffsetResetButton_7_6->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_7_6->setIcon(icon12);
        channelIsDrawingButton_7_6 = new QPushButton(chanel6SettingsBox_7);
        channelIsDrawingButton_7_6->setObjectName(QStringLiteral("channelIsDrawingButton_7_6"));
        channelIsDrawingButton_7_6->setEnabled(false);
        channelIsDrawingButton_7_6->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_7_6->setIcon(icon13);
        channelIsDrawingButton_7_6->setCheckable(true);
        channelIsDrawingButton_7_6->setChecked(true);
        thresholdIsDrawingButton_7_6 = new QPushButton(chanel6SettingsBox_7);
        thresholdIsDrawingButton_7_6->setObjectName(QStringLiteral("thresholdIsDrawingButton_7_6"));
        thresholdIsDrawingButton_7_6->setEnabled(false);
        thresholdIsDrawingButton_7_6->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_7_6->setIcon(icon13);
        thresholdIsDrawingButton_7_6->setCheckable(true);
        thresholdIsDrawingButton_7_6->setChecked(false);
        blockSamplesButton_7_6 = new QPushButton(chanel6SettingsBox_7);
        blockSamplesButton_7_6->setObjectName(QStringLiteral("blockSamplesButton_7_6"));
        blockSamplesButton_7_6->setEnabled(false);
        blockSamplesButton_7_6->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_7_6->setIcon(icon19);
        blockSamplesButton_7_6->setCheckable(true);
        blockSamplesButton_7_6->setChecked(true);
        chanel5SettingsBox_7 = new QGroupBox(WDF7Widget);
        chanel5SettingsBox_7->setObjectName(QStringLiteral("chanel5SettingsBox_7"));
        chanel5SettingsBox_7->setGeometry(QRect(585, 0, 90, 170));
        changeTriggerButton_7_5 = new QPushButton(chanel5SettingsBox_7);
        changeTriggerButton_7_5->setObjectName(QStringLiteral("changeTriggerButton_7_5"));
        changeTriggerButton_7_5->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_7_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_7_5->setCheckable(false);
        changeTriggerButton_7_5->setChecked(false);
        changeTriggerButton_7_5->setAutoRepeat(false);
        changeTriggerButton_7_5->setAutoDefault(false);
        positionSpinBox_7_5 = new QSpinBox(chanel5SettingsBox_7);
        positionSpinBox_7_5->setObjectName(QStringLiteral("positionSpinBox_7_5"));
        positionSpinBox_7_5->setEnabled(false);
        positionSpinBox_7_5->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_7_5->setMinimum(-500);
        positionSpinBox_7_5->setMaximum(500);
        thresholdSpinBox_7_5 = new QSpinBox(chanel5SettingsBox_7);
        thresholdSpinBox_7_5->setObjectName(QStringLiteral("thresholdSpinBox_7_5"));
        thresholdSpinBox_7_5->setEnabled(false);
        thresholdSpinBox_7_5->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_7_5->setMinimum(-500);
        thresholdSpinBox_7_5->setMaximum(500);
        thresholdSpinBox_7_5->setValue(20);
        samplesSpinBox_7_5 = new QSpinBox(chanel5SettingsBox_7);
        samplesSpinBox_7_5->setObjectName(QStringLiteral("samplesSpinBox_7_5"));
        samplesSpinBox_7_5->setEnabled(false);
        samplesSpinBox_7_5->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_7_5->setValue(10);
        DACOffsetSpinBox_7_5 = new QSpinBox(chanel5SettingsBox_7);
        DACOffsetSpinBox_7_5->setObjectName(QStringLiteral("DACOffsetSpinBox_7_5"));
        DACOffsetSpinBox_7_5->setEnabled(false);
        DACOffsetSpinBox_7_5->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_7_5->setMinimum(-500);
        DACOffsetSpinBox_7_5->setMaximum(500);
        scaleSpinBox_7_5 = new QComboBox(chanel5SettingsBox_7);
        scaleSpinBox_7_5->setObjectName(QStringLiteral("scaleSpinBox_7_5"));
        scaleSpinBox_7_5->setEnabled(false);
        scaleSpinBox_7_5->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_7_5->setEditable(true);
        positionResetButton_7_5 = new QPushButton(chanel5SettingsBox_7);
        positionResetButton_7_5->setObjectName(QStringLiteral("positionResetButton_7_5"));
        positionResetButton_7_5->setEnabled(false);
        positionResetButton_7_5->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_7_5->setIcon(icon12);
        DACOffsetResetButton_7_5 = new QPushButton(chanel5SettingsBox_7);
        DACOffsetResetButton_7_5->setObjectName(QStringLiteral("DACOffsetResetButton_7_5"));
        DACOffsetResetButton_7_5->setEnabled(false);
        DACOffsetResetButton_7_5->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_7_5->setIcon(icon12);
        channelIsDrawingButton_7_5 = new QPushButton(chanel5SettingsBox_7);
        channelIsDrawingButton_7_5->setObjectName(QStringLiteral("channelIsDrawingButton_7_5"));
        channelIsDrawingButton_7_5->setEnabled(false);
        channelIsDrawingButton_7_5->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_7_5->setIcon(icon13);
        channelIsDrawingButton_7_5->setCheckable(true);
        channelIsDrawingButton_7_5->setChecked(true);
        thresholdIsDrawingButton_7_5 = new QPushButton(chanel5SettingsBox_7);
        thresholdIsDrawingButton_7_5->setObjectName(QStringLiteral("thresholdIsDrawingButton_7_5"));
        thresholdIsDrawingButton_7_5->setEnabled(false);
        thresholdIsDrawingButton_7_5->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_7_5->setIcon(icon13);
        thresholdIsDrawingButton_7_5->setCheckable(true);
        thresholdIsDrawingButton_7_5->setChecked(false);
        blockSamplesButton_7_5 = new QPushButton(chanel5SettingsBox_7);
        blockSamplesButton_7_5->setObjectName(QStringLiteral("blockSamplesButton_7_5"));
        blockSamplesButton_7_5->setEnabled(false);
        blockSamplesButton_7_5->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_7_5->setIcon(icon19);
        blockSamplesButton_7_5->setCheckable(true);
        blockSamplesButton_7_5->setChecked(true);
        chanel7SettingsBox_7 = new QGroupBox(WDF7Widget);
        chanel7SettingsBox_7->setObjectName(QStringLiteral("chanel7SettingsBox_7"));
        chanel7SettingsBox_7->setGeometry(QRect(775, 0, 90, 170));
        changeTriggerButton_7_7 = new QPushButton(chanel7SettingsBox_7);
        changeTriggerButton_7_7->setObjectName(QStringLiteral("changeTriggerButton_7_7"));
        changeTriggerButton_7_7->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_7_7->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_7_7->setCheckable(false);
        changeTriggerButton_7_7->setChecked(false);
        changeTriggerButton_7_7->setAutoRepeat(false);
        changeTriggerButton_7_7->setAutoDefault(false);
        positionSpinBox_7_7 = new QSpinBox(chanel7SettingsBox_7);
        positionSpinBox_7_7->setObjectName(QStringLiteral("positionSpinBox_7_7"));
        positionSpinBox_7_7->setEnabled(false);
        positionSpinBox_7_7->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_7_7->setMinimum(-500);
        positionSpinBox_7_7->setMaximum(500);
        thresholdSpinBox_7_7 = new QSpinBox(chanel7SettingsBox_7);
        thresholdSpinBox_7_7->setObjectName(QStringLiteral("thresholdSpinBox_7_7"));
        thresholdSpinBox_7_7->setEnabled(false);
        thresholdSpinBox_7_7->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_7_7->setMinimum(-500);
        thresholdSpinBox_7_7->setMaximum(500);
        thresholdSpinBox_7_7->setValue(20);
        samplesSpinBox_7_7 = new QSpinBox(chanel7SettingsBox_7);
        samplesSpinBox_7_7->setObjectName(QStringLiteral("samplesSpinBox_7_7"));
        samplesSpinBox_7_7->setEnabled(false);
        samplesSpinBox_7_7->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_7_7->setValue(10);
        DACOffsetSpinBox_7_7 = new QSpinBox(chanel7SettingsBox_7);
        DACOffsetSpinBox_7_7->setObjectName(QStringLiteral("DACOffsetSpinBox_7_7"));
        DACOffsetSpinBox_7_7->setEnabled(false);
        DACOffsetSpinBox_7_7->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_7_7->setMinimum(-500);
        DACOffsetSpinBox_7_7->setMaximum(500);
        scaleSpinBox_7_7 = new QComboBox(chanel7SettingsBox_7);
        scaleSpinBox_7_7->setObjectName(QStringLiteral("scaleSpinBox_7_7"));
        scaleSpinBox_7_7->setEnabled(false);
        scaleSpinBox_7_7->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_7_7->setEditable(true);
        positionResetButton_7_7 = new QPushButton(chanel7SettingsBox_7);
        positionResetButton_7_7->setObjectName(QStringLiteral("positionResetButton_7_7"));
        positionResetButton_7_7->setEnabled(false);
        positionResetButton_7_7->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_7_7->setIcon(icon12);
        DACOffsetResetButton_7_7 = new QPushButton(chanel7SettingsBox_7);
        DACOffsetResetButton_7_7->setObjectName(QStringLiteral("DACOffsetResetButton_7_7"));
        DACOffsetResetButton_7_7->setEnabled(false);
        DACOffsetResetButton_7_7->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_7_7->setIcon(icon12);
        channelIsDrawingButton_7_7 = new QPushButton(chanel7SettingsBox_7);
        channelIsDrawingButton_7_7->setObjectName(QStringLiteral("channelIsDrawingButton_7_7"));
        channelIsDrawingButton_7_7->setEnabled(false);
        channelIsDrawingButton_7_7->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_7_7->setIcon(icon13);
        channelIsDrawingButton_7_7->setCheckable(true);
        channelIsDrawingButton_7_7->setChecked(true);
        thresholdIsDrawingButton_7_7 = new QPushButton(chanel7SettingsBox_7);
        thresholdIsDrawingButton_7_7->setObjectName(QStringLiteral("thresholdIsDrawingButton_7_7"));
        thresholdIsDrawingButton_7_7->setEnabled(false);
        thresholdIsDrawingButton_7_7->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_7_7->setIcon(icon13);
        thresholdIsDrawingButton_7_7->setCheckable(true);
        thresholdIsDrawingButton_7_7->setChecked(false);
        blockSamplesButton_7_7 = new QPushButton(chanel7SettingsBox_7);
        blockSamplesButton_7_7->setObjectName(QStringLiteral("blockSamplesButton_7_7"));
        blockSamplesButton_7_7->setEnabled(false);
        blockSamplesButton_7_7->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_7_7->setIcon(icon19);
        blockSamplesButton_7_7->setCheckable(true);
        blockSamplesButton_7_7->setChecked(true);
        chanel3SettingsBox_7 = new QGroupBox(WDF7Widget);
        chanel3SettingsBox_7->setObjectName(QStringLiteral("chanel3SettingsBox_7"));
        chanel3SettingsBox_7->setGeometry(QRect(395, 0, 90, 170));
        changeTriggerButton_7_3 = new QPushButton(chanel3SettingsBox_7);
        changeTriggerButton_7_3->setObjectName(QStringLiteral("changeTriggerButton_7_3"));
        changeTriggerButton_7_3->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_7_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_7_3->setCheckable(false);
        changeTriggerButton_7_3->setChecked(false);
        changeTriggerButton_7_3->setAutoRepeat(false);
        changeTriggerButton_7_3->setAutoDefault(false);
        positionSpinBox_7_3 = new QSpinBox(chanel3SettingsBox_7);
        positionSpinBox_7_3->setObjectName(QStringLiteral("positionSpinBox_7_3"));
        positionSpinBox_7_3->setEnabled(false);
        positionSpinBox_7_3->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_7_3->setMinimum(-500);
        positionSpinBox_7_3->setMaximum(500);
        thresholdSpinBox_7_3 = new QSpinBox(chanel3SettingsBox_7);
        thresholdSpinBox_7_3->setObjectName(QStringLiteral("thresholdSpinBox_7_3"));
        thresholdSpinBox_7_3->setEnabled(false);
        thresholdSpinBox_7_3->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_7_3->setMinimum(-500);
        thresholdSpinBox_7_3->setMaximum(500);
        thresholdSpinBox_7_3->setValue(20);
        samplesSpinBox_7_3 = new QSpinBox(chanel3SettingsBox_7);
        samplesSpinBox_7_3->setObjectName(QStringLiteral("samplesSpinBox_7_3"));
        samplesSpinBox_7_3->setEnabled(false);
        samplesSpinBox_7_3->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_7_3->setValue(10);
        DACOffsetSpinBox_7_3 = new QSpinBox(chanel3SettingsBox_7);
        DACOffsetSpinBox_7_3->setObjectName(QStringLiteral("DACOffsetSpinBox_7_3"));
        DACOffsetSpinBox_7_3->setEnabled(false);
        DACOffsetSpinBox_7_3->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_7_3->setMinimum(-500);
        DACOffsetSpinBox_7_3->setMaximum(500);
        scaleSpinBox_7_3 = new QComboBox(chanel3SettingsBox_7);
        scaleSpinBox_7_3->setObjectName(QStringLiteral("scaleSpinBox_7_3"));
        scaleSpinBox_7_3->setEnabled(false);
        scaleSpinBox_7_3->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_7_3->setEditable(true);
        positionResetButton_7_3 = new QPushButton(chanel3SettingsBox_7);
        positionResetButton_7_3->setObjectName(QStringLiteral("positionResetButton_7_3"));
        positionResetButton_7_3->setEnabled(false);
        positionResetButton_7_3->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_7_3->setIcon(icon12);
        DACOffsetResetButton_7_3 = new QPushButton(chanel3SettingsBox_7);
        DACOffsetResetButton_7_3->setObjectName(QStringLiteral("DACOffsetResetButton_7_3"));
        DACOffsetResetButton_7_3->setEnabled(false);
        DACOffsetResetButton_7_3->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_7_3->setIcon(icon12);
        channelIsDrawingButton_7_3 = new QPushButton(chanel3SettingsBox_7);
        channelIsDrawingButton_7_3->setObjectName(QStringLiteral("channelIsDrawingButton_7_3"));
        channelIsDrawingButton_7_3->setEnabled(false);
        channelIsDrawingButton_7_3->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_7_3->setIcon(icon13);
        channelIsDrawingButton_7_3->setCheckable(true);
        channelIsDrawingButton_7_3->setChecked(true);
        thresholdIsDrawingButton_7_3 = new QPushButton(chanel3SettingsBox_7);
        thresholdIsDrawingButton_7_3->setObjectName(QStringLiteral("thresholdIsDrawingButton_7_3"));
        thresholdIsDrawingButton_7_3->setEnabled(false);
        thresholdIsDrawingButton_7_3->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_7_3->setIcon(icon13);
        thresholdIsDrawingButton_7_3->setCheckable(true);
        thresholdIsDrawingButton_7_3->setChecked(false);
        blockSamplesButton_7_3 = new QPushButton(chanel3SettingsBox_7);
        blockSamplesButton_7_3->setObjectName(QStringLiteral("blockSamplesButton_7_3"));
        blockSamplesButton_7_3->setEnabled(false);
        blockSamplesButton_7_3->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_7_3->setIcon(icon19);
        blockSamplesButton_7_3->setCheckable(true);
        blockSamplesButton_7_3->setChecked(true);
        channelLabelBox_7 = new QGroupBox(WDF7Widget);
        channelLabelBox_7->setObjectName(QStringLiteral("channelLabelBox_7"));
        channelLabelBox_7->setGeometry(QRect(0, 0, 105, 170));
        thresholdLabel_7 = new QLabel(channelLabelBox_7);
        thresholdLabel_7->setObjectName(QStringLiteral("thresholdLabel_7"));
        thresholdLabel_7->setGeometry(QRect(10, 70, 91, 20));
        thresholdLabel_7->setLayoutDirection(Qt::RightToLeft);
        thresholdLabel_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        samplesLabel_7 = new QLabel(channelLabelBox_7);
        samplesLabel_7->setObjectName(QStringLiteral("samplesLabel_7"));
        samplesLabel_7->setGeometry(QRect(10, 95, 91, 20));
        samplesLabel_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        positionLabel_7 = new QLabel(channelLabelBox_7);
        positionLabel_7->setObjectName(QStringLiteral("positionLabel_7"));
        positionLabel_7->setGeometry(QRect(10, 45, 91, 20));
        positionLabel_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        DACOffsetLabel_7 = new QLabel(channelLabelBox_7);
        DACOffsetLabel_7->setObjectName(QStringLiteral("DACOffsetLabel_7"));
        DACOffsetLabel_7->setGeometry(QRect(10, 120, 91, 20));
        DACOffsetLabel_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        scaleLabel_7 = new QLabel(channelLabelBox_7);
        scaleLabel_7->setObjectName(QStringLiteral("scaleLabel_7"));
        scaleLabel_7->setGeometry(QRect(10, 145, 91, 20));
        scaleLabel_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        statusLabel_7 = new QLabel(channelLabelBox_7);
        statusLabel_7->setObjectName(QStringLiteral("statusLabel_7"));
        statusLabel_7->setGeometry(QRect(10, 15, 91, 24));
        statusLabel_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        WDFTabWidget->addTab(WDF7Widget, icon20, QString());
        WDF8Widget = new QWidget();
        WDF8Widget->setObjectName(QStringLiteral("WDF8Widget"));
        chanel0SettingsBox_8 = new QGroupBox(WDF8Widget);
        chanel0SettingsBox_8->setObjectName(QStringLiteral("chanel0SettingsBox_8"));
        chanel0SettingsBox_8->setGeometry(QRect(110, 0, 90, 170));
        changeTriggerButton_8_0 = new QPushButton(chanel0SettingsBox_8);
        changeTriggerButton_8_0->setObjectName(QStringLiteral("changeTriggerButton_8_0"));
        changeTriggerButton_8_0->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_8_0->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_8_0->setCheckable(false);
        changeTriggerButton_8_0->setChecked(false);
        changeTriggerButton_8_0->setAutoRepeat(false);
        changeTriggerButton_8_0->setAutoDefault(false);
        positionSpinBox_8_0 = new QSpinBox(chanel0SettingsBox_8);
        positionSpinBox_8_0->setObjectName(QStringLiteral("positionSpinBox_8_0"));
        positionSpinBox_8_0->setEnabled(false);
        positionSpinBox_8_0->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_8_0->setMinimum(-500);
        positionSpinBox_8_0->setMaximum(500);
        thresholdSpinBox_8_0 = new QSpinBox(chanel0SettingsBox_8);
        thresholdSpinBox_8_0->setObjectName(QStringLiteral("thresholdSpinBox_8_0"));
        thresholdSpinBox_8_0->setEnabled(false);
        thresholdSpinBox_8_0->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_8_0->setMinimum(-500);
        thresholdSpinBox_8_0->setMaximum(500);
        thresholdSpinBox_8_0->setValue(20);
        samplesSpinBox_8_0 = new QSpinBox(chanel0SettingsBox_8);
        samplesSpinBox_8_0->setObjectName(QStringLiteral("samplesSpinBox_8_0"));
        samplesSpinBox_8_0->setEnabled(false);
        samplesSpinBox_8_0->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_8_0->setValue(10);
        DACOffsetSpinBox_8_0 = new QSpinBox(chanel0SettingsBox_8);
        DACOffsetSpinBox_8_0->setObjectName(QStringLiteral("DACOffsetSpinBox_8_0"));
        DACOffsetSpinBox_8_0->setEnabled(false);
        DACOffsetSpinBox_8_0->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_8_0->setMinimum(-500);
        DACOffsetSpinBox_8_0->setMaximum(500);
        scaleSpinBox_8_0 = new QComboBox(chanel0SettingsBox_8);
        scaleSpinBox_8_0->setObjectName(QStringLiteral("scaleSpinBox_8_0"));
        scaleSpinBox_8_0->setEnabled(false);
        scaleSpinBox_8_0->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_8_0->setEditable(true);
        positionResetButton_8_0 = new QPushButton(chanel0SettingsBox_8);
        positionResetButton_8_0->setObjectName(QStringLiteral("positionResetButton_8_0"));
        positionResetButton_8_0->setEnabled(false);
        positionResetButton_8_0->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_8_0->setIcon(icon12);
        DACOffsetResetButton_8_0 = new QPushButton(chanel0SettingsBox_8);
        DACOffsetResetButton_8_0->setObjectName(QStringLiteral("DACOffsetResetButton_8_0"));
        DACOffsetResetButton_8_0->setEnabled(false);
        DACOffsetResetButton_8_0->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_8_0->setIcon(icon12);
        channelIsDrawingButton_8_0 = new QPushButton(chanel0SettingsBox_8);
        channelIsDrawingButton_8_0->setObjectName(QStringLiteral("channelIsDrawingButton_8_0"));
        channelIsDrawingButton_8_0->setEnabled(false);
        channelIsDrawingButton_8_0->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_8_0->setIcon(icon13);
        channelIsDrawingButton_8_0->setCheckable(true);
        channelIsDrawingButton_8_0->setChecked(true);
        thresholdIsDrawingButton_8_0 = new QPushButton(chanel0SettingsBox_8);
        thresholdIsDrawingButton_8_0->setObjectName(QStringLiteral("thresholdIsDrawingButton_8_0"));
        thresholdIsDrawingButton_8_0->setEnabled(false);
        thresholdIsDrawingButton_8_0->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_8_0->setIcon(icon13);
        thresholdIsDrawingButton_8_0->setCheckable(true);
        thresholdIsDrawingButton_8_0->setChecked(false);
        blockSamplesButton_8_0 = new QPushButton(chanel0SettingsBox_8);
        blockSamplesButton_8_0->setObjectName(QStringLiteral("blockSamplesButton_8_0"));
        blockSamplesButton_8_0->setEnabled(false);
        blockSamplesButton_8_0->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_8_0->setIcon(icon19);
        blockSamplesButton_8_0->setCheckable(true);
        blockSamplesButton_8_0->setChecked(true);
        chanel1SettingsBox_8 = new QGroupBox(WDF8Widget);
        chanel1SettingsBox_8->setObjectName(QStringLiteral("chanel1SettingsBox_8"));
        chanel1SettingsBox_8->setGeometry(QRect(205, 0, 90, 170));
        changeTriggerButton_8_1 = new QPushButton(chanel1SettingsBox_8);
        changeTriggerButton_8_1->setObjectName(QStringLiteral("changeTriggerButton_8_1"));
        changeTriggerButton_8_1->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_8_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_8_1->setCheckable(false);
        changeTriggerButton_8_1->setChecked(false);
        changeTriggerButton_8_1->setAutoRepeat(false);
        changeTriggerButton_8_1->setAutoDefault(false);
        positionSpinBox_8_1 = new QSpinBox(chanel1SettingsBox_8);
        positionSpinBox_8_1->setObjectName(QStringLiteral("positionSpinBox_8_1"));
        positionSpinBox_8_1->setEnabled(false);
        positionSpinBox_8_1->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_8_1->setMinimum(-500);
        positionSpinBox_8_1->setMaximum(500);
        thresholdSpinBox_8_1 = new QSpinBox(chanel1SettingsBox_8);
        thresholdSpinBox_8_1->setObjectName(QStringLiteral("thresholdSpinBox_8_1"));
        thresholdSpinBox_8_1->setEnabled(false);
        thresholdSpinBox_8_1->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_8_1->setMinimum(-500);
        thresholdSpinBox_8_1->setMaximum(500);
        thresholdSpinBox_8_1->setValue(20);
        samplesSpinBox_8_1 = new QSpinBox(chanel1SettingsBox_8);
        samplesSpinBox_8_1->setObjectName(QStringLiteral("samplesSpinBox_8_1"));
        samplesSpinBox_8_1->setEnabled(false);
        samplesSpinBox_8_1->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_8_1->setValue(10);
        DACOffsetSpinBox_8_1 = new QSpinBox(chanel1SettingsBox_8);
        DACOffsetSpinBox_8_1->setObjectName(QStringLiteral("DACOffsetSpinBox_8_1"));
        DACOffsetSpinBox_8_1->setEnabled(false);
        DACOffsetSpinBox_8_1->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_8_1->setMinimum(-500);
        DACOffsetSpinBox_8_1->setMaximum(500);
        scaleSpinBox_8_1 = new QComboBox(chanel1SettingsBox_8);
        scaleSpinBox_8_1->setObjectName(QStringLiteral("scaleSpinBox_8_1"));
        scaleSpinBox_8_1->setEnabled(false);
        scaleSpinBox_8_1->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_8_1->setEditable(true);
        positionResetButton_8_1 = new QPushButton(chanel1SettingsBox_8);
        positionResetButton_8_1->setObjectName(QStringLiteral("positionResetButton_8_1"));
        positionResetButton_8_1->setEnabled(false);
        positionResetButton_8_1->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_8_1->setIcon(icon12);
        DACOffsetResetButton_8_1 = new QPushButton(chanel1SettingsBox_8);
        DACOffsetResetButton_8_1->setObjectName(QStringLiteral("DACOffsetResetButton_8_1"));
        DACOffsetResetButton_8_1->setEnabled(false);
        DACOffsetResetButton_8_1->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_8_1->setIcon(icon12);
        channelIsDrawingButton_8_1 = new QPushButton(chanel1SettingsBox_8);
        channelIsDrawingButton_8_1->setObjectName(QStringLiteral("channelIsDrawingButton_8_1"));
        channelIsDrawingButton_8_1->setEnabled(false);
        channelIsDrawingButton_8_1->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_8_1->setIcon(icon13);
        channelIsDrawingButton_8_1->setCheckable(true);
        channelIsDrawingButton_8_1->setChecked(true);
        thresholdIsDrawingButton_8_1 = new QPushButton(chanel1SettingsBox_8);
        thresholdIsDrawingButton_8_1->setObjectName(QStringLiteral("thresholdIsDrawingButton_8_1"));
        thresholdIsDrawingButton_8_1->setEnabled(false);
        thresholdIsDrawingButton_8_1->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_8_1->setIcon(icon13);
        thresholdIsDrawingButton_8_1->setCheckable(true);
        thresholdIsDrawingButton_8_1->setChecked(false);
        blockSamplesButton_8_1 = new QPushButton(chanel1SettingsBox_8);
        blockSamplesButton_8_1->setObjectName(QStringLiteral("blockSamplesButton_8_1"));
        blockSamplesButton_8_1->setEnabled(false);
        blockSamplesButton_8_1->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_8_1->setIcon(icon19);
        blockSamplesButton_8_1->setCheckable(true);
        blockSamplesButton_8_1->setChecked(true);
        chanel2SettingsBox_8 = new QGroupBox(WDF8Widget);
        chanel2SettingsBox_8->setObjectName(QStringLiteral("chanel2SettingsBox_8"));
        chanel2SettingsBox_8->setGeometry(QRect(300, 0, 90, 170));
        changeTriggerButton_8_2 = new QPushButton(chanel2SettingsBox_8);
        changeTriggerButton_8_2->setObjectName(QStringLiteral("changeTriggerButton_8_2"));
        changeTriggerButton_8_2->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_8_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_8_2->setCheckable(false);
        changeTriggerButton_8_2->setChecked(false);
        changeTriggerButton_8_2->setAutoRepeat(false);
        changeTriggerButton_8_2->setAutoDefault(false);
        positionSpinBox_8_2 = new QSpinBox(chanel2SettingsBox_8);
        positionSpinBox_8_2->setObjectName(QStringLiteral("positionSpinBox_8_2"));
        positionSpinBox_8_2->setEnabled(false);
        positionSpinBox_8_2->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_8_2->setMinimum(-500);
        positionSpinBox_8_2->setMaximum(500);
        thresholdSpinBox_8_2 = new QSpinBox(chanel2SettingsBox_8);
        thresholdSpinBox_8_2->setObjectName(QStringLiteral("thresholdSpinBox_8_2"));
        thresholdSpinBox_8_2->setEnabled(false);
        thresholdSpinBox_8_2->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_8_2->setMinimum(-500);
        thresholdSpinBox_8_2->setMaximum(500);
        thresholdSpinBox_8_2->setValue(20);
        samplesSpinBox_8_2 = new QSpinBox(chanel2SettingsBox_8);
        samplesSpinBox_8_2->setObjectName(QStringLiteral("samplesSpinBox_8_2"));
        samplesSpinBox_8_2->setEnabled(false);
        samplesSpinBox_8_2->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_8_2->setValue(10);
        DACOffsetSpinBox_8_2 = new QSpinBox(chanel2SettingsBox_8);
        DACOffsetSpinBox_8_2->setObjectName(QStringLiteral("DACOffsetSpinBox_8_2"));
        DACOffsetSpinBox_8_2->setEnabled(false);
        DACOffsetSpinBox_8_2->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_8_2->setMinimum(-500);
        DACOffsetSpinBox_8_2->setMaximum(500);
        scaleSpinBox_8_2 = new QComboBox(chanel2SettingsBox_8);
        scaleSpinBox_8_2->setObjectName(QStringLiteral("scaleSpinBox_8_2"));
        scaleSpinBox_8_2->setEnabled(false);
        scaleSpinBox_8_2->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_8_2->setEditable(true);
        positionResetButton_8_2 = new QPushButton(chanel2SettingsBox_8);
        positionResetButton_8_2->setObjectName(QStringLiteral("positionResetButton_8_2"));
        positionResetButton_8_2->setEnabled(false);
        positionResetButton_8_2->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_8_2->setIcon(icon12);
        DACOffsetResetButton_8_2 = new QPushButton(chanel2SettingsBox_8);
        DACOffsetResetButton_8_2->setObjectName(QStringLiteral("DACOffsetResetButton_8_2"));
        DACOffsetResetButton_8_2->setEnabled(false);
        DACOffsetResetButton_8_2->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_8_2->setIcon(icon12);
        channelIsDrawingButton_8_2 = new QPushButton(chanel2SettingsBox_8);
        channelIsDrawingButton_8_2->setObjectName(QStringLiteral("channelIsDrawingButton_8_2"));
        channelIsDrawingButton_8_2->setEnabled(false);
        channelIsDrawingButton_8_2->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_8_2->setIcon(icon13);
        channelIsDrawingButton_8_2->setCheckable(true);
        channelIsDrawingButton_8_2->setChecked(true);
        thresholdIsDrawingButton_8_2 = new QPushButton(chanel2SettingsBox_8);
        thresholdIsDrawingButton_8_2->setObjectName(QStringLiteral("thresholdIsDrawingButton_8_2"));
        thresholdIsDrawingButton_8_2->setEnabled(false);
        thresholdIsDrawingButton_8_2->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_8_2->setIcon(icon13);
        thresholdIsDrawingButton_8_2->setCheckable(true);
        thresholdIsDrawingButton_8_2->setChecked(false);
        blockSamplesButton_8_2 = new QPushButton(chanel2SettingsBox_8);
        blockSamplesButton_8_2->setObjectName(QStringLiteral("blockSamplesButton_8_2"));
        blockSamplesButton_8_2->setEnabled(false);
        blockSamplesButton_8_2->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_8_2->setIcon(icon19);
        blockSamplesButton_8_2->setCheckable(true);
        blockSamplesButton_8_2->setChecked(true);
        chanel4SettingsBox_8 = new QGroupBox(WDF8Widget);
        chanel4SettingsBox_8->setObjectName(QStringLiteral("chanel4SettingsBox_8"));
        chanel4SettingsBox_8->setGeometry(QRect(490, 0, 90, 170));
        changeTriggerButton_8_4 = new QPushButton(chanel4SettingsBox_8);
        changeTriggerButton_8_4->setObjectName(QStringLiteral("changeTriggerButton_8_4"));
        changeTriggerButton_8_4->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_8_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_8_4->setCheckable(false);
        changeTriggerButton_8_4->setChecked(false);
        changeTriggerButton_8_4->setAutoRepeat(false);
        changeTriggerButton_8_4->setAutoDefault(false);
        positionSpinBox_8_4 = new QSpinBox(chanel4SettingsBox_8);
        positionSpinBox_8_4->setObjectName(QStringLiteral("positionSpinBox_8_4"));
        positionSpinBox_8_4->setEnabled(false);
        positionSpinBox_8_4->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_8_4->setMinimum(-500);
        positionSpinBox_8_4->setMaximum(500);
        thresholdSpinBox_8_4 = new QSpinBox(chanel4SettingsBox_8);
        thresholdSpinBox_8_4->setObjectName(QStringLiteral("thresholdSpinBox_8_4"));
        thresholdSpinBox_8_4->setEnabled(false);
        thresholdSpinBox_8_4->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_8_4->setMinimum(-500);
        thresholdSpinBox_8_4->setMaximum(500);
        thresholdSpinBox_8_4->setValue(20);
        samplesSpinBox_8_4 = new QSpinBox(chanel4SettingsBox_8);
        samplesSpinBox_8_4->setObjectName(QStringLiteral("samplesSpinBox_8_4"));
        samplesSpinBox_8_4->setEnabled(false);
        samplesSpinBox_8_4->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_8_4->setValue(10);
        DACOffsetSpinBox_8_4 = new QSpinBox(chanel4SettingsBox_8);
        DACOffsetSpinBox_8_4->setObjectName(QStringLiteral("DACOffsetSpinBox_8_4"));
        DACOffsetSpinBox_8_4->setEnabled(false);
        DACOffsetSpinBox_8_4->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_8_4->setMinimum(-500);
        DACOffsetSpinBox_8_4->setMaximum(500);
        scaleSpinBox_8_4 = new QComboBox(chanel4SettingsBox_8);
        scaleSpinBox_8_4->setObjectName(QStringLiteral("scaleSpinBox_8_4"));
        scaleSpinBox_8_4->setEnabled(false);
        scaleSpinBox_8_4->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_8_4->setEditable(true);
        positionResetButton_8_4 = new QPushButton(chanel4SettingsBox_8);
        positionResetButton_8_4->setObjectName(QStringLiteral("positionResetButton_8_4"));
        positionResetButton_8_4->setEnabled(false);
        positionResetButton_8_4->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_8_4->setIcon(icon12);
        DACOffsetResetButton_8_4 = new QPushButton(chanel4SettingsBox_8);
        DACOffsetResetButton_8_4->setObjectName(QStringLiteral("DACOffsetResetButton_8_4"));
        DACOffsetResetButton_8_4->setEnabled(false);
        DACOffsetResetButton_8_4->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_8_4->setIcon(icon12);
        channelIsDrawingButton_8_4 = new QPushButton(chanel4SettingsBox_8);
        channelIsDrawingButton_8_4->setObjectName(QStringLiteral("channelIsDrawingButton_8_4"));
        channelIsDrawingButton_8_4->setEnabled(false);
        channelIsDrawingButton_8_4->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_8_4->setIcon(icon13);
        channelIsDrawingButton_8_4->setCheckable(true);
        channelIsDrawingButton_8_4->setChecked(true);
        thresholdIsDrawingButton_8_4 = new QPushButton(chanel4SettingsBox_8);
        thresholdIsDrawingButton_8_4->setObjectName(QStringLiteral("thresholdIsDrawingButton_8_4"));
        thresholdIsDrawingButton_8_4->setEnabled(false);
        thresholdIsDrawingButton_8_4->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_8_4->setIcon(icon13);
        thresholdIsDrawingButton_8_4->setCheckable(true);
        thresholdIsDrawingButton_8_4->setChecked(false);
        blockSamplesButton_8_4 = new QPushButton(chanel4SettingsBox_8);
        blockSamplesButton_8_4->setObjectName(QStringLiteral("blockSamplesButton_8_4"));
        blockSamplesButton_8_4->setEnabled(false);
        blockSamplesButton_8_4->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_8_4->setIcon(icon19);
        blockSamplesButton_8_4->setCheckable(true);
        blockSamplesButton_8_4->setChecked(true);
        chanel6SettingsBox_8 = new QGroupBox(WDF8Widget);
        chanel6SettingsBox_8->setObjectName(QStringLiteral("chanel6SettingsBox_8"));
        chanel6SettingsBox_8->setGeometry(QRect(680, 0, 90, 170));
        changeTriggerButton_8_6 = new QPushButton(chanel6SettingsBox_8);
        changeTriggerButton_8_6->setObjectName(QStringLiteral("changeTriggerButton_8_6"));
        changeTriggerButton_8_6->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_8_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_8_6->setCheckable(false);
        changeTriggerButton_8_6->setChecked(false);
        changeTriggerButton_8_6->setAutoRepeat(false);
        changeTriggerButton_8_6->setAutoDefault(false);
        positionSpinBox_8_6 = new QSpinBox(chanel6SettingsBox_8);
        positionSpinBox_8_6->setObjectName(QStringLiteral("positionSpinBox_8_6"));
        positionSpinBox_8_6->setEnabled(false);
        positionSpinBox_8_6->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_8_6->setMinimum(-500);
        positionSpinBox_8_6->setMaximum(500);
        thresholdSpinBox_8_6 = new QSpinBox(chanel6SettingsBox_8);
        thresholdSpinBox_8_6->setObjectName(QStringLiteral("thresholdSpinBox_8_6"));
        thresholdSpinBox_8_6->setEnabled(false);
        thresholdSpinBox_8_6->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_8_6->setMinimum(-500);
        thresholdSpinBox_8_6->setMaximum(500);
        thresholdSpinBox_8_6->setValue(20);
        samplesSpinBox_8_6 = new QSpinBox(chanel6SettingsBox_8);
        samplesSpinBox_8_6->setObjectName(QStringLiteral("samplesSpinBox_8_6"));
        samplesSpinBox_8_6->setEnabled(false);
        samplesSpinBox_8_6->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_8_6->setValue(10);
        DACOffsetSpinBox_8_6 = new QSpinBox(chanel6SettingsBox_8);
        DACOffsetSpinBox_8_6->setObjectName(QStringLiteral("DACOffsetSpinBox_8_6"));
        DACOffsetSpinBox_8_6->setEnabled(false);
        DACOffsetSpinBox_8_6->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_8_6->setMinimum(-500);
        DACOffsetSpinBox_8_6->setMaximum(500);
        scaleSpinBox_8_6 = new QComboBox(chanel6SettingsBox_8);
        scaleSpinBox_8_6->setObjectName(QStringLiteral("scaleSpinBox_8_6"));
        scaleSpinBox_8_6->setEnabled(false);
        scaleSpinBox_8_6->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_8_6->setEditable(true);
        positionResetButton_8_6 = new QPushButton(chanel6SettingsBox_8);
        positionResetButton_8_6->setObjectName(QStringLiteral("positionResetButton_8_6"));
        positionResetButton_8_6->setEnabled(false);
        positionResetButton_8_6->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_8_6->setIcon(icon12);
        DACOffsetResetButton_8_6 = new QPushButton(chanel6SettingsBox_8);
        DACOffsetResetButton_8_6->setObjectName(QStringLiteral("DACOffsetResetButton_8_6"));
        DACOffsetResetButton_8_6->setEnabled(false);
        DACOffsetResetButton_8_6->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_8_6->setIcon(icon12);
        channelIsDrawingButton_8_6 = new QPushButton(chanel6SettingsBox_8);
        channelIsDrawingButton_8_6->setObjectName(QStringLiteral("channelIsDrawingButton_8_6"));
        channelIsDrawingButton_8_6->setEnabled(false);
        channelIsDrawingButton_8_6->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_8_6->setIcon(icon13);
        channelIsDrawingButton_8_6->setCheckable(true);
        channelIsDrawingButton_8_6->setChecked(true);
        thresholdIsDrawingButton_8_6 = new QPushButton(chanel6SettingsBox_8);
        thresholdIsDrawingButton_8_6->setObjectName(QStringLiteral("thresholdIsDrawingButton_8_6"));
        thresholdIsDrawingButton_8_6->setEnabled(false);
        thresholdIsDrawingButton_8_6->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_8_6->setIcon(icon13);
        thresholdIsDrawingButton_8_6->setCheckable(true);
        thresholdIsDrawingButton_8_6->setChecked(false);
        blockSamplesButton_8_6 = new QPushButton(chanel6SettingsBox_8);
        blockSamplesButton_8_6->setObjectName(QStringLiteral("blockSamplesButton_8_6"));
        blockSamplesButton_8_6->setEnabled(false);
        blockSamplesButton_8_6->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_8_6->setIcon(icon19);
        blockSamplesButton_8_6->setCheckable(true);
        blockSamplesButton_8_6->setChecked(true);
        chanel5SettingsBox_8 = new QGroupBox(WDF8Widget);
        chanel5SettingsBox_8->setObjectName(QStringLiteral("chanel5SettingsBox_8"));
        chanel5SettingsBox_8->setGeometry(QRect(585, 0, 90, 170));
        changeTriggerButton_8_5 = new QPushButton(chanel5SettingsBox_8);
        changeTriggerButton_8_5->setObjectName(QStringLiteral("changeTriggerButton_8_5"));
        changeTriggerButton_8_5->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_8_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_8_5->setCheckable(false);
        changeTriggerButton_8_5->setChecked(false);
        changeTriggerButton_8_5->setAutoRepeat(false);
        changeTriggerButton_8_5->setAutoDefault(false);
        positionSpinBox_8_5 = new QSpinBox(chanel5SettingsBox_8);
        positionSpinBox_8_5->setObjectName(QStringLiteral("positionSpinBox_8_5"));
        positionSpinBox_8_5->setEnabled(false);
        positionSpinBox_8_5->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_8_5->setMinimum(-500);
        positionSpinBox_8_5->setMaximum(500);
        thresholdSpinBox_8_5 = new QSpinBox(chanel5SettingsBox_8);
        thresholdSpinBox_8_5->setObjectName(QStringLiteral("thresholdSpinBox_8_5"));
        thresholdSpinBox_8_5->setEnabled(false);
        thresholdSpinBox_8_5->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_8_5->setMinimum(-500);
        thresholdSpinBox_8_5->setMaximum(500);
        thresholdSpinBox_8_5->setValue(20);
        samplesSpinBox_8_5 = new QSpinBox(chanel5SettingsBox_8);
        samplesSpinBox_8_5->setObjectName(QStringLiteral("samplesSpinBox_8_5"));
        samplesSpinBox_8_5->setEnabled(false);
        samplesSpinBox_8_5->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_8_5->setValue(10);
        DACOffsetSpinBox_8_5 = new QSpinBox(chanel5SettingsBox_8);
        DACOffsetSpinBox_8_5->setObjectName(QStringLiteral("DACOffsetSpinBox_8_5"));
        DACOffsetSpinBox_8_5->setEnabled(false);
        DACOffsetSpinBox_8_5->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_8_5->setMinimum(-500);
        DACOffsetSpinBox_8_5->setMaximum(500);
        scaleSpinBox_8_5 = new QComboBox(chanel5SettingsBox_8);
        scaleSpinBox_8_5->setObjectName(QStringLiteral("scaleSpinBox_8_5"));
        scaleSpinBox_8_5->setEnabled(false);
        scaleSpinBox_8_5->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_8_5->setEditable(true);
        positionResetButton_8_5 = new QPushButton(chanel5SettingsBox_8);
        positionResetButton_8_5->setObjectName(QStringLiteral("positionResetButton_8_5"));
        positionResetButton_8_5->setEnabled(false);
        positionResetButton_8_5->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_8_5->setIcon(icon12);
        DACOffsetResetButton_8_5 = new QPushButton(chanel5SettingsBox_8);
        DACOffsetResetButton_8_5->setObjectName(QStringLiteral("DACOffsetResetButton_8_5"));
        DACOffsetResetButton_8_5->setEnabled(false);
        DACOffsetResetButton_8_5->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_8_5->setIcon(icon12);
        channelIsDrawingButton_8_5 = new QPushButton(chanel5SettingsBox_8);
        channelIsDrawingButton_8_5->setObjectName(QStringLiteral("channelIsDrawingButton_8_5"));
        channelIsDrawingButton_8_5->setEnabled(false);
        channelIsDrawingButton_8_5->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_8_5->setIcon(icon13);
        channelIsDrawingButton_8_5->setCheckable(true);
        channelIsDrawingButton_8_5->setChecked(true);
        thresholdIsDrawingButton_8_5 = new QPushButton(chanel5SettingsBox_8);
        thresholdIsDrawingButton_8_5->setObjectName(QStringLiteral("thresholdIsDrawingButton_8_5"));
        thresholdIsDrawingButton_8_5->setEnabled(false);
        thresholdIsDrawingButton_8_5->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_8_5->setIcon(icon13);
        thresholdIsDrawingButton_8_5->setCheckable(true);
        thresholdIsDrawingButton_8_5->setChecked(false);
        blockSamplesButton_8_5 = new QPushButton(chanel5SettingsBox_8);
        blockSamplesButton_8_5->setObjectName(QStringLiteral("blockSamplesButton_8_5"));
        blockSamplesButton_8_5->setEnabled(false);
        blockSamplesButton_8_5->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_8_5->setIcon(icon19);
        blockSamplesButton_8_5->setCheckable(true);
        blockSamplesButton_8_5->setChecked(true);
        chanel7SettingsBox_8 = new QGroupBox(WDF8Widget);
        chanel7SettingsBox_8->setObjectName(QStringLiteral("chanel7SettingsBox_8"));
        chanel7SettingsBox_8->setGeometry(QRect(775, 0, 90, 170));
        changeTriggerButton_8_7 = new QPushButton(chanel7SettingsBox_8);
        changeTriggerButton_8_7->setObjectName(QStringLiteral("changeTriggerButton_8_7"));
        changeTriggerButton_8_7->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_8_7->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_8_7->setCheckable(false);
        changeTriggerButton_8_7->setChecked(false);
        changeTriggerButton_8_7->setAutoRepeat(false);
        changeTriggerButton_8_7->setAutoDefault(false);
        positionSpinBox_8_7 = new QSpinBox(chanel7SettingsBox_8);
        positionSpinBox_8_7->setObjectName(QStringLiteral("positionSpinBox_8_7"));
        positionSpinBox_8_7->setEnabled(false);
        positionSpinBox_8_7->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_8_7->setMinimum(-500);
        positionSpinBox_8_7->setMaximum(500);
        thresholdSpinBox_8_7 = new QSpinBox(chanel7SettingsBox_8);
        thresholdSpinBox_8_7->setObjectName(QStringLiteral("thresholdSpinBox_8_7"));
        thresholdSpinBox_8_7->setEnabled(false);
        thresholdSpinBox_8_7->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_8_7->setMinimum(-500);
        thresholdSpinBox_8_7->setMaximum(500);
        thresholdSpinBox_8_7->setValue(20);
        samplesSpinBox_8_7 = new QSpinBox(chanel7SettingsBox_8);
        samplesSpinBox_8_7->setObjectName(QStringLiteral("samplesSpinBox_8_7"));
        samplesSpinBox_8_7->setEnabled(false);
        samplesSpinBox_8_7->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_8_7->setValue(10);
        DACOffsetSpinBox_8_7 = new QSpinBox(chanel7SettingsBox_8);
        DACOffsetSpinBox_8_7->setObjectName(QStringLiteral("DACOffsetSpinBox_8_7"));
        DACOffsetSpinBox_8_7->setEnabled(false);
        DACOffsetSpinBox_8_7->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_8_7->setMinimum(-500);
        DACOffsetSpinBox_8_7->setMaximum(500);
        scaleSpinBox_8_7 = new QComboBox(chanel7SettingsBox_8);
        scaleSpinBox_8_7->setObjectName(QStringLiteral("scaleSpinBox_8_7"));
        scaleSpinBox_8_7->setEnabled(false);
        scaleSpinBox_8_7->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_8_7->setEditable(true);
        positionResetButton_8_7 = new QPushButton(chanel7SettingsBox_8);
        positionResetButton_8_7->setObjectName(QStringLiteral("positionResetButton_8_7"));
        positionResetButton_8_7->setEnabled(false);
        positionResetButton_8_7->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_8_7->setIcon(icon12);
        DACOffsetResetButton_8_7 = new QPushButton(chanel7SettingsBox_8);
        DACOffsetResetButton_8_7->setObjectName(QStringLiteral("DACOffsetResetButton_8_7"));
        DACOffsetResetButton_8_7->setEnabled(false);
        DACOffsetResetButton_8_7->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_8_7->setIcon(icon12);
        channelIsDrawingButton_8_7 = new QPushButton(chanel7SettingsBox_8);
        channelIsDrawingButton_8_7->setObjectName(QStringLiteral("channelIsDrawingButton_8_7"));
        channelIsDrawingButton_8_7->setEnabled(false);
        channelIsDrawingButton_8_7->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_8_7->setIcon(icon13);
        channelIsDrawingButton_8_7->setCheckable(true);
        channelIsDrawingButton_8_7->setChecked(true);
        thresholdIsDrawingButton_8_7 = new QPushButton(chanel7SettingsBox_8);
        thresholdIsDrawingButton_8_7->setObjectName(QStringLiteral("thresholdIsDrawingButton_8_7"));
        thresholdIsDrawingButton_8_7->setEnabled(false);
        thresholdIsDrawingButton_8_7->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_8_7->setIcon(icon13);
        thresholdIsDrawingButton_8_7->setCheckable(true);
        thresholdIsDrawingButton_8_7->setChecked(false);
        blockSamplesButton_8_7 = new QPushButton(chanel7SettingsBox_8);
        blockSamplesButton_8_7->setObjectName(QStringLiteral("blockSamplesButton_8_7"));
        blockSamplesButton_8_7->setEnabled(false);
        blockSamplesButton_8_7->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_8_7->setIcon(icon19);
        blockSamplesButton_8_7->setCheckable(true);
        blockSamplesButton_8_7->setChecked(true);
        chanel3SettingsBox_8 = new QGroupBox(WDF8Widget);
        chanel3SettingsBox_8->setObjectName(QStringLiteral("chanel3SettingsBox_8"));
        chanel3SettingsBox_8->setGeometry(QRect(395, 0, 90, 170));
        changeTriggerButton_8_3 = new QPushButton(chanel3SettingsBox_8);
        changeTriggerButton_8_3->setObjectName(QStringLiteral("changeTriggerButton_8_3"));
        changeTriggerButton_8_3->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_8_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_8_3->setCheckable(false);
        changeTriggerButton_8_3->setChecked(false);
        changeTriggerButton_8_3->setAutoRepeat(false);
        changeTriggerButton_8_3->setAutoDefault(false);
        positionSpinBox_8_3 = new QSpinBox(chanel3SettingsBox_8);
        positionSpinBox_8_3->setObjectName(QStringLiteral("positionSpinBox_8_3"));
        positionSpinBox_8_3->setEnabled(false);
        positionSpinBox_8_3->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_8_3->setMinimum(-500);
        positionSpinBox_8_3->setMaximum(500);
        thresholdSpinBox_8_3 = new QSpinBox(chanel3SettingsBox_8);
        thresholdSpinBox_8_3->setObjectName(QStringLiteral("thresholdSpinBox_8_3"));
        thresholdSpinBox_8_3->setEnabled(false);
        thresholdSpinBox_8_3->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_8_3->setMinimum(-500);
        thresholdSpinBox_8_3->setMaximum(500);
        thresholdSpinBox_8_3->setValue(20);
        samplesSpinBox_8_3 = new QSpinBox(chanel3SettingsBox_8);
        samplesSpinBox_8_3->setObjectName(QStringLiteral("samplesSpinBox_8_3"));
        samplesSpinBox_8_3->setEnabled(false);
        samplesSpinBox_8_3->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_8_3->setValue(10);
        DACOffsetSpinBox_8_3 = new QSpinBox(chanel3SettingsBox_8);
        DACOffsetSpinBox_8_3->setObjectName(QStringLiteral("DACOffsetSpinBox_8_3"));
        DACOffsetSpinBox_8_3->setEnabled(false);
        DACOffsetSpinBox_8_3->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_8_3->setMinimum(-500);
        DACOffsetSpinBox_8_3->setMaximum(500);
        scaleSpinBox_8_3 = new QComboBox(chanel3SettingsBox_8);
        scaleSpinBox_8_3->setObjectName(QStringLiteral("scaleSpinBox_8_3"));
        scaleSpinBox_8_3->setEnabled(false);
        scaleSpinBox_8_3->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_8_3->setEditable(true);
        positionResetButton_8_3 = new QPushButton(chanel3SettingsBox_8);
        positionResetButton_8_3->setObjectName(QStringLiteral("positionResetButton_8_3"));
        positionResetButton_8_3->setEnabled(false);
        positionResetButton_8_3->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_8_3->setIcon(icon12);
        DACOffsetResetButton_8_3 = new QPushButton(chanel3SettingsBox_8);
        DACOffsetResetButton_8_3->setObjectName(QStringLiteral("DACOffsetResetButton_8_3"));
        DACOffsetResetButton_8_3->setEnabled(false);
        DACOffsetResetButton_8_3->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_8_3->setIcon(icon12);
        channelIsDrawingButton_8_3 = new QPushButton(chanel3SettingsBox_8);
        channelIsDrawingButton_8_3->setObjectName(QStringLiteral("channelIsDrawingButton_8_3"));
        channelIsDrawingButton_8_3->setEnabled(false);
        channelIsDrawingButton_8_3->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_8_3->setIcon(icon13);
        channelIsDrawingButton_8_3->setCheckable(true);
        channelIsDrawingButton_8_3->setChecked(true);
        thresholdIsDrawingButton_8_3 = new QPushButton(chanel3SettingsBox_8);
        thresholdIsDrawingButton_8_3->setObjectName(QStringLiteral("thresholdIsDrawingButton_8_3"));
        thresholdIsDrawingButton_8_3->setEnabled(false);
        thresholdIsDrawingButton_8_3->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_8_3->setIcon(icon13);
        thresholdIsDrawingButton_8_3->setCheckable(true);
        thresholdIsDrawingButton_8_3->setChecked(false);
        blockSamplesButton_8_3 = new QPushButton(chanel3SettingsBox_8);
        blockSamplesButton_8_3->setObjectName(QStringLiteral("blockSamplesButton_8_3"));
        blockSamplesButton_8_3->setEnabled(false);
        blockSamplesButton_8_3->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_8_3->setIcon(icon19);
        blockSamplesButton_8_3->setCheckable(true);
        blockSamplesButton_8_3->setChecked(true);
        channelLabelBox_8 = new QGroupBox(WDF8Widget);
        channelLabelBox_8->setObjectName(QStringLiteral("channelLabelBox_8"));
        channelLabelBox_8->setGeometry(QRect(0, 0, 105, 170));
        thresholdLabel_8 = new QLabel(channelLabelBox_8);
        thresholdLabel_8->setObjectName(QStringLiteral("thresholdLabel_8"));
        thresholdLabel_8->setGeometry(QRect(10, 70, 91, 20));
        thresholdLabel_8->setLayoutDirection(Qt::RightToLeft);
        thresholdLabel_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        samplesLabel_8 = new QLabel(channelLabelBox_8);
        samplesLabel_8->setObjectName(QStringLiteral("samplesLabel_8"));
        samplesLabel_8->setGeometry(QRect(10, 95, 91, 20));
        samplesLabel_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        positionLabel_8 = new QLabel(channelLabelBox_8);
        positionLabel_8->setObjectName(QStringLiteral("positionLabel_8"));
        positionLabel_8->setGeometry(QRect(10, 45, 91, 20));
        positionLabel_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        DACOffsetLabel_8 = new QLabel(channelLabelBox_8);
        DACOffsetLabel_8->setObjectName(QStringLiteral("DACOffsetLabel_8"));
        DACOffsetLabel_8->setGeometry(QRect(10, 120, 91, 20));
        DACOffsetLabel_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        scaleLabel_8 = new QLabel(channelLabelBox_8);
        scaleLabel_8->setObjectName(QStringLiteral("scaleLabel_8"));
        scaleLabel_8->setGeometry(QRect(10, 145, 91, 20));
        scaleLabel_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        statusLabel_8 = new QLabel(channelLabelBox_8);
        statusLabel_8->setObjectName(QStringLiteral("statusLabel_8"));
        statusLabel_8->setGeometry(QRect(10, 15, 91, 24));
        statusLabel_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        WDFTabWidget->addTab(WDF8Widget, icon20, QString());
        WDF9Widget = new QWidget();
        WDF9Widget->setObjectName(QStringLiteral("WDF9Widget"));
        chanel2SettingsBox_9 = new QGroupBox(WDF9Widget);
        chanel2SettingsBox_9->setObjectName(QStringLiteral("chanel2SettingsBox_9"));
        chanel2SettingsBox_9->setGeometry(QRect(300, 0, 90, 170));
        changeTriggerButton_9_2 = new QPushButton(chanel2SettingsBox_9);
        changeTriggerButton_9_2->setObjectName(QStringLiteral("changeTriggerButton_9_2"));
        changeTriggerButton_9_2->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_9_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_9_2->setCheckable(false);
        changeTriggerButton_9_2->setChecked(false);
        changeTriggerButton_9_2->setAutoRepeat(false);
        changeTriggerButton_9_2->setAutoDefault(false);
        positionSpinBox_9_2 = new QSpinBox(chanel2SettingsBox_9);
        positionSpinBox_9_2->setObjectName(QStringLiteral("positionSpinBox_9_2"));
        positionSpinBox_9_2->setEnabled(false);
        positionSpinBox_9_2->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_9_2->setMinimum(-500);
        positionSpinBox_9_2->setMaximum(500);
        thresholdSpinBox_9_2 = new QSpinBox(chanel2SettingsBox_9);
        thresholdSpinBox_9_2->setObjectName(QStringLiteral("thresholdSpinBox_9_2"));
        thresholdSpinBox_9_2->setEnabled(false);
        thresholdSpinBox_9_2->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_9_2->setMinimum(-500);
        thresholdSpinBox_9_2->setMaximum(500);
        thresholdSpinBox_9_2->setValue(20);
        samplesSpinBox_9_2 = new QSpinBox(chanel2SettingsBox_9);
        samplesSpinBox_9_2->setObjectName(QStringLiteral("samplesSpinBox_9_2"));
        samplesSpinBox_9_2->setEnabled(false);
        samplesSpinBox_9_2->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_9_2->setValue(10);
        DACOffsetSpinBox_9_2 = new QSpinBox(chanel2SettingsBox_9);
        DACOffsetSpinBox_9_2->setObjectName(QStringLiteral("DACOffsetSpinBox_9_2"));
        DACOffsetSpinBox_9_2->setEnabled(false);
        DACOffsetSpinBox_9_2->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_9_2->setMinimum(-500);
        DACOffsetSpinBox_9_2->setMaximum(500);
        scaleSpinBox_9_2 = new QComboBox(chanel2SettingsBox_9);
        scaleSpinBox_9_2->setObjectName(QStringLiteral("scaleSpinBox_9_2"));
        scaleSpinBox_9_2->setEnabled(false);
        scaleSpinBox_9_2->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_9_2->setEditable(true);
        positionResetButton_9_2 = new QPushButton(chanel2SettingsBox_9);
        positionResetButton_9_2->setObjectName(QStringLiteral("positionResetButton_9_2"));
        positionResetButton_9_2->setEnabled(false);
        positionResetButton_9_2->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_9_2->setIcon(icon12);
        DACOffsetResetButton_9_2 = new QPushButton(chanel2SettingsBox_9);
        DACOffsetResetButton_9_2->setObjectName(QStringLiteral("DACOffsetResetButton_9_2"));
        DACOffsetResetButton_9_2->setEnabled(false);
        DACOffsetResetButton_9_2->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_9_2->setIcon(icon12);
        channelIsDrawingButton_9_2 = new QPushButton(chanel2SettingsBox_9);
        channelIsDrawingButton_9_2->setObjectName(QStringLiteral("channelIsDrawingButton_9_2"));
        channelIsDrawingButton_9_2->setEnabled(false);
        channelIsDrawingButton_9_2->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_9_2->setIcon(icon13);
        channelIsDrawingButton_9_2->setCheckable(true);
        channelIsDrawingButton_9_2->setChecked(true);
        thresholdIsDrawingButton_9_2 = new QPushButton(chanel2SettingsBox_9);
        thresholdIsDrawingButton_9_2->setObjectName(QStringLiteral("thresholdIsDrawingButton_9_2"));
        thresholdIsDrawingButton_9_2->setEnabled(false);
        thresholdIsDrawingButton_9_2->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_9_2->setIcon(icon13);
        thresholdIsDrawingButton_9_2->setCheckable(true);
        thresholdIsDrawingButton_9_2->setChecked(false);
        blockSamplesButton_9_2 = new QPushButton(chanel2SettingsBox_9);
        blockSamplesButton_9_2->setObjectName(QStringLiteral("blockSamplesButton_9_2"));
        blockSamplesButton_9_2->setEnabled(false);
        blockSamplesButton_9_2->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_9_2->setIcon(icon19);
        blockSamplesButton_9_2->setCheckable(true);
        blockSamplesButton_9_2->setChecked(true);
        chanel7SettingsBox_9 = new QGroupBox(WDF9Widget);
        chanel7SettingsBox_9->setObjectName(QStringLiteral("chanel7SettingsBox_9"));
        chanel7SettingsBox_9->setGeometry(QRect(775, 0, 90, 170));
        changeTriggerButton_9_7 = new QPushButton(chanel7SettingsBox_9);
        changeTriggerButton_9_7->setObjectName(QStringLiteral("changeTriggerButton_9_7"));
        changeTriggerButton_9_7->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_9_7->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_9_7->setCheckable(false);
        changeTriggerButton_9_7->setChecked(false);
        changeTriggerButton_9_7->setAutoRepeat(false);
        changeTriggerButton_9_7->setAutoDefault(false);
        positionSpinBox_9_7 = new QSpinBox(chanel7SettingsBox_9);
        positionSpinBox_9_7->setObjectName(QStringLiteral("positionSpinBox_9_7"));
        positionSpinBox_9_7->setEnabled(false);
        positionSpinBox_9_7->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_9_7->setMinimum(-500);
        positionSpinBox_9_7->setMaximum(500);
        thresholdSpinBox_9_7 = new QSpinBox(chanel7SettingsBox_9);
        thresholdSpinBox_9_7->setObjectName(QStringLiteral("thresholdSpinBox_9_7"));
        thresholdSpinBox_9_7->setEnabled(false);
        thresholdSpinBox_9_7->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_9_7->setMinimum(-500);
        thresholdSpinBox_9_7->setMaximum(500);
        thresholdSpinBox_9_7->setValue(20);
        samplesSpinBox_9_7 = new QSpinBox(chanel7SettingsBox_9);
        samplesSpinBox_9_7->setObjectName(QStringLiteral("samplesSpinBox_9_7"));
        samplesSpinBox_9_7->setEnabled(false);
        samplesSpinBox_9_7->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_9_7->setValue(10);
        DACOffsetSpinBox_9_7 = new QSpinBox(chanel7SettingsBox_9);
        DACOffsetSpinBox_9_7->setObjectName(QStringLiteral("DACOffsetSpinBox_9_7"));
        DACOffsetSpinBox_9_7->setEnabled(false);
        DACOffsetSpinBox_9_7->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_9_7->setMinimum(-500);
        DACOffsetSpinBox_9_7->setMaximum(500);
        scaleSpinBox_9_7 = new QComboBox(chanel7SettingsBox_9);
        scaleSpinBox_9_7->setObjectName(QStringLiteral("scaleSpinBox_9_7"));
        scaleSpinBox_9_7->setEnabled(false);
        scaleSpinBox_9_7->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_9_7->setEditable(true);
        positionResetButton_9_7 = new QPushButton(chanel7SettingsBox_9);
        positionResetButton_9_7->setObjectName(QStringLiteral("positionResetButton_9_7"));
        positionResetButton_9_7->setEnabled(false);
        positionResetButton_9_7->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_9_7->setIcon(icon12);
        DACOffsetResetButton_9_7 = new QPushButton(chanel7SettingsBox_9);
        DACOffsetResetButton_9_7->setObjectName(QStringLiteral("DACOffsetResetButton_9_7"));
        DACOffsetResetButton_9_7->setEnabled(false);
        DACOffsetResetButton_9_7->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_9_7->setIcon(icon12);
        channelIsDrawingButton_9_7 = new QPushButton(chanel7SettingsBox_9);
        channelIsDrawingButton_9_7->setObjectName(QStringLiteral("channelIsDrawingButton_9_7"));
        channelIsDrawingButton_9_7->setEnabled(false);
        channelIsDrawingButton_9_7->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_9_7->setIcon(icon13);
        channelIsDrawingButton_9_7->setCheckable(true);
        channelIsDrawingButton_9_7->setChecked(true);
        thresholdIsDrawingButton_9_7 = new QPushButton(chanel7SettingsBox_9);
        thresholdIsDrawingButton_9_7->setObjectName(QStringLiteral("thresholdIsDrawingButton_9_7"));
        thresholdIsDrawingButton_9_7->setEnabled(false);
        thresholdIsDrawingButton_9_7->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_9_7->setIcon(icon13);
        thresholdIsDrawingButton_9_7->setCheckable(true);
        thresholdIsDrawingButton_9_7->setChecked(false);
        blockSamplesButton_9_7 = new QPushButton(chanel7SettingsBox_9);
        blockSamplesButton_9_7->setObjectName(QStringLiteral("blockSamplesButton_9_7"));
        blockSamplesButton_9_7->setEnabled(false);
        blockSamplesButton_9_7->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_9_7->setIcon(icon19);
        blockSamplesButton_9_7->setCheckable(true);
        blockSamplesButton_9_7->setChecked(true);
        chanel0SettingsBox_9 = new QGroupBox(WDF9Widget);
        chanel0SettingsBox_9->setObjectName(QStringLiteral("chanel0SettingsBox_9"));
        chanel0SettingsBox_9->setGeometry(QRect(110, 0, 90, 170));
        changeTriggerButton_9_0 = new QPushButton(chanel0SettingsBox_9);
        changeTriggerButton_9_0->setObjectName(QStringLiteral("changeTriggerButton_9_0"));
        changeTriggerButton_9_0->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_9_0->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_9_0->setCheckable(false);
        changeTriggerButton_9_0->setChecked(false);
        changeTriggerButton_9_0->setAutoRepeat(false);
        changeTriggerButton_9_0->setAutoDefault(false);
        positionSpinBox_9_0 = new QSpinBox(chanel0SettingsBox_9);
        positionSpinBox_9_0->setObjectName(QStringLiteral("positionSpinBox_9_0"));
        positionSpinBox_9_0->setEnabled(false);
        positionSpinBox_9_0->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_9_0->setMinimum(-500);
        positionSpinBox_9_0->setMaximum(500);
        thresholdSpinBox_9_0 = new QSpinBox(chanel0SettingsBox_9);
        thresholdSpinBox_9_0->setObjectName(QStringLiteral("thresholdSpinBox_9_0"));
        thresholdSpinBox_9_0->setEnabled(false);
        thresholdSpinBox_9_0->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_9_0->setMinimum(-500);
        thresholdSpinBox_9_0->setMaximum(500);
        thresholdSpinBox_9_0->setValue(20);
        samplesSpinBox_9_0 = new QSpinBox(chanel0SettingsBox_9);
        samplesSpinBox_9_0->setObjectName(QStringLiteral("samplesSpinBox_9_0"));
        samplesSpinBox_9_0->setEnabled(false);
        samplesSpinBox_9_0->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_9_0->setValue(10);
        DACOffsetSpinBox_9_0 = new QSpinBox(chanel0SettingsBox_9);
        DACOffsetSpinBox_9_0->setObjectName(QStringLiteral("DACOffsetSpinBox_9_0"));
        DACOffsetSpinBox_9_0->setEnabled(false);
        DACOffsetSpinBox_9_0->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_9_0->setMinimum(-500);
        DACOffsetSpinBox_9_0->setMaximum(500);
        scaleSpinBox_9_0 = new QComboBox(chanel0SettingsBox_9);
        scaleSpinBox_9_0->setObjectName(QStringLiteral("scaleSpinBox_9_0"));
        scaleSpinBox_9_0->setEnabled(false);
        scaleSpinBox_9_0->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_9_0->setEditable(true);
        positionResetButton_9_0 = new QPushButton(chanel0SettingsBox_9);
        positionResetButton_9_0->setObjectName(QStringLiteral("positionResetButton_9_0"));
        positionResetButton_9_0->setEnabled(false);
        positionResetButton_9_0->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_9_0->setIcon(icon12);
        DACOffsetResetButton_9_0 = new QPushButton(chanel0SettingsBox_9);
        DACOffsetResetButton_9_0->setObjectName(QStringLiteral("DACOffsetResetButton_9_0"));
        DACOffsetResetButton_9_0->setEnabled(false);
        DACOffsetResetButton_9_0->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_9_0->setIcon(icon12);
        channelIsDrawingButton_9_0 = new QPushButton(chanel0SettingsBox_9);
        channelIsDrawingButton_9_0->setObjectName(QStringLiteral("channelIsDrawingButton_9_0"));
        channelIsDrawingButton_9_0->setEnabled(false);
        channelIsDrawingButton_9_0->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_9_0->setIcon(icon13);
        channelIsDrawingButton_9_0->setCheckable(true);
        channelIsDrawingButton_9_0->setChecked(true);
        thresholdIsDrawingButton_9_0 = new QPushButton(chanel0SettingsBox_9);
        thresholdIsDrawingButton_9_0->setObjectName(QStringLiteral("thresholdIsDrawingButton_9_0"));
        thresholdIsDrawingButton_9_0->setEnabled(false);
        thresholdIsDrawingButton_9_0->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_9_0->setIcon(icon13);
        thresholdIsDrawingButton_9_0->setCheckable(true);
        thresholdIsDrawingButton_9_0->setChecked(false);
        blockSamplesButton_9_0 = new QPushButton(chanel0SettingsBox_9);
        blockSamplesButton_9_0->setObjectName(QStringLiteral("blockSamplesButton_9_0"));
        blockSamplesButton_9_0->setEnabled(false);
        blockSamplesButton_9_0->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_9_0->setIcon(icon19);
        blockSamplesButton_9_0->setCheckable(true);
        blockSamplesButton_9_0->setChecked(true);
        chanel1SettingsBox_9 = new QGroupBox(WDF9Widget);
        chanel1SettingsBox_9->setObjectName(QStringLiteral("chanel1SettingsBox_9"));
        chanel1SettingsBox_9->setEnabled(true);
        chanel1SettingsBox_9->setGeometry(QRect(205, 0, 90, 170));
        changeTriggerButton_9_1 = new QPushButton(chanel1SettingsBox_9);
        changeTriggerButton_9_1->setObjectName(QStringLiteral("changeTriggerButton_9_1"));
        changeTriggerButton_9_1->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_9_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_9_1->setCheckable(false);
        changeTriggerButton_9_1->setChecked(false);
        changeTriggerButton_9_1->setAutoRepeat(false);
        changeTriggerButton_9_1->setAutoDefault(false);
        positionSpinBox_9_1 = new QSpinBox(chanel1SettingsBox_9);
        positionSpinBox_9_1->setObjectName(QStringLiteral("positionSpinBox_9_1"));
        positionSpinBox_9_1->setEnabled(false);
        positionSpinBox_9_1->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_9_1->setMinimum(-500);
        positionSpinBox_9_1->setMaximum(500);
        thresholdSpinBox_9_1 = new QSpinBox(chanel1SettingsBox_9);
        thresholdSpinBox_9_1->setObjectName(QStringLiteral("thresholdSpinBox_9_1"));
        thresholdSpinBox_9_1->setEnabled(false);
        thresholdSpinBox_9_1->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_9_1->setMinimum(-500);
        thresholdSpinBox_9_1->setMaximum(500);
        thresholdSpinBox_9_1->setValue(20);
        samplesSpinBox_9_1 = new QSpinBox(chanel1SettingsBox_9);
        samplesSpinBox_9_1->setObjectName(QStringLiteral("samplesSpinBox_9_1"));
        samplesSpinBox_9_1->setEnabled(false);
        samplesSpinBox_9_1->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_9_1->setValue(10);
        DACOffsetSpinBox_9_1 = new QSpinBox(chanel1SettingsBox_9);
        DACOffsetSpinBox_9_1->setObjectName(QStringLiteral("DACOffsetSpinBox_9_1"));
        DACOffsetSpinBox_9_1->setEnabled(false);
        DACOffsetSpinBox_9_1->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_9_1->setMinimum(-500);
        DACOffsetSpinBox_9_1->setMaximum(500);
        scaleSpinBox_9_1 = new QComboBox(chanel1SettingsBox_9);
        scaleSpinBox_9_1->setObjectName(QStringLiteral("scaleSpinBox_9_1"));
        scaleSpinBox_9_1->setEnabled(false);
        scaleSpinBox_9_1->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_9_1->setEditable(true);
        positionResetButton_9_1 = new QPushButton(chanel1SettingsBox_9);
        positionResetButton_9_1->setObjectName(QStringLiteral("positionResetButton_9_1"));
        positionResetButton_9_1->setEnabled(false);
        positionResetButton_9_1->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_9_1->setIcon(icon12);
        DACOffsetResetButton_9_1 = new QPushButton(chanel1SettingsBox_9);
        DACOffsetResetButton_9_1->setObjectName(QStringLiteral("DACOffsetResetButton_9_1"));
        DACOffsetResetButton_9_1->setEnabled(false);
        DACOffsetResetButton_9_1->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_9_1->setIcon(icon12);
        channelIsDrawingButton_9_1 = new QPushButton(chanel1SettingsBox_9);
        channelIsDrawingButton_9_1->setObjectName(QStringLiteral("channelIsDrawingButton_9_1"));
        channelIsDrawingButton_9_1->setEnabled(false);
        channelIsDrawingButton_9_1->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_9_1->setIcon(icon13);
        channelIsDrawingButton_9_1->setCheckable(true);
        channelIsDrawingButton_9_1->setChecked(true);
        thresholdIsDrawingButton_9_1 = new QPushButton(chanel1SettingsBox_9);
        thresholdIsDrawingButton_9_1->setObjectName(QStringLiteral("thresholdIsDrawingButton_9_1"));
        thresholdIsDrawingButton_9_1->setEnabled(false);
        thresholdIsDrawingButton_9_1->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_9_1->setIcon(icon13);
        thresholdIsDrawingButton_9_1->setCheckable(true);
        thresholdIsDrawingButton_9_1->setChecked(false);
        blockSamplesButton_9_1 = new QPushButton(chanel1SettingsBox_9);
        blockSamplesButton_9_1->setObjectName(QStringLiteral("blockSamplesButton_9_1"));
        blockSamplesButton_9_1->setEnabled(false);
        blockSamplesButton_9_1->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_9_1->setIcon(icon19);
        blockSamplesButton_9_1->setCheckable(true);
        blockSamplesButton_9_1->setChecked(true);
        chanel4SettingsBox_9 = new QGroupBox(WDF9Widget);
        chanel4SettingsBox_9->setObjectName(QStringLiteral("chanel4SettingsBox_9"));
        chanel4SettingsBox_9->setGeometry(QRect(490, 0, 90, 170));
        changeTriggerButton_9_4 = new QPushButton(chanel4SettingsBox_9);
        changeTriggerButton_9_4->setObjectName(QStringLiteral("changeTriggerButton_9_4"));
        changeTriggerButton_9_4->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_9_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_9_4->setCheckable(false);
        changeTriggerButton_9_4->setChecked(false);
        changeTriggerButton_9_4->setAutoRepeat(false);
        changeTriggerButton_9_4->setAutoDefault(false);
        positionSpinBox_9_4 = new QSpinBox(chanel4SettingsBox_9);
        positionSpinBox_9_4->setObjectName(QStringLiteral("positionSpinBox_9_4"));
        positionSpinBox_9_4->setEnabled(false);
        positionSpinBox_9_4->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_9_4->setMinimum(-500);
        positionSpinBox_9_4->setMaximum(500);
        thresholdSpinBox_9_4 = new QSpinBox(chanel4SettingsBox_9);
        thresholdSpinBox_9_4->setObjectName(QStringLiteral("thresholdSpinBox_9_4"));
        thresholdSpinBox_9_4->setEnabled(false);
        thresholdSpinBox_9_4->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_9_4->setMinimum(-500);
        thresholdSpinBox_9_4->setMaximum(500);
        thresholdSpinBox_9_4->setValue(20);
        samplesSpinBox_9_4 = new QSpinBox(chanel4SettingsBox_9);
        samplesSpinBox_9_4->setObjectName(QStringLiteral("samplesSpinBox_9_4"));
        samplesSpinBox_9_4->setEnabled(false);
        samplesSpinBox_9_4->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_9_4->setValue(10);
        DACOffsetSpinBox_9_4 = new QSpinBox(chanel4SettingsBox_9);
        DACOffsetSpinBox_9_4->setObjectName(QStringLiteral("DACOffsetSpinBox_9_4"));
        DACOffsetSpinBox_9_4->setEnabled(false);
        DACOffsetSpinBox_9_4->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_9_4->setMinimum(-500);
        DACOffsetSpinBox_9_4->setMaximum(500);
        scaleSpinBox_9_4 = new QComboBox(chanel4SettingsBox_9);
        scaleSpinBox_9_4->setObjectName(QStringLiteral("scaleSpinBox_9_4"));
        scaleSpinBox_9_4->setEnabled(false);
        scaleSpinBox_9_4->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_9_4->setEditable(true);
        positionResetButton_9_4 = new QPushButton(chanel4SettingsBox_9);
        positionResetButton_9_4->setObjectName(QStringLiteral("positionResetButton_9_4"));
        positionResetButton_9_4->setEnabled(false);
        positionResetButton_9_4->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_9_4->setIcon(icon12);
        DACOffsetResetButton_9_4 = new QPushButton(chanel4SettingsBox_9);
        DACOffsetResetButton_9_4->setObjectName(QStringLiteral("DACOffsetResetButton_9_4"));
        DACOffsetResetButton_9_4->setEnabled(false);
        DACOffsetResetButton_9_4->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_9_4->setIcon(icon12);
        channelIsDrawingButton_9_4 = new QPushButton(chanel4SettingsBox_9);
        channelIsDrawingButton_9_4->setObjectName(QStringLiteral("channelIsDrawingButton_9_4"));
        channelIsDrawingButton_9_4->setEnabled(false);
        channelIsDrawingButton_9_4->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_9_4->setIcon(icon13);
        channelIsDrawingButton_9_4->setCheckable(true);
        channelIsDrawingButton_9_4->setChecked(true);
        thresholdIsDrawingButton_9_4 = new QPushButton(chanel4SettingsBox_9);
        thresholdIsDrawingButton_9_4->setObjectName(QStringLiteral("thresholdIsDrawingButton_9_4"));
        thresholdIsDrawingButton_9_4->setEnabled(false);
        thresholdIsDrawingButton_9_4->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_9_4->setIcon(icon13);
        thresholdIsDrawingButton_9_4->setCheckable(true);
        thresholdIsDrawingButton_9_4->setChecked(false);
        blockSamplesButton_9_4 = new QPushButton(chanel4SettingsBox_9);
        blockSamplesButton_9_4->setObjectName(QStringLiteral("blockSamplesButton_9_4"));
        blockSamplesButton_9_4->setEnabled(false);
        blockSamplesButton_9_4->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_9_4->setIcon(icon19);
        blockSamplesButton_9_4->setCheckable(true);
        blockSamplesButton_9_4->setChecked(true);
        chanel3SettingsBox_9 = new QGroupBox(WDF9Widget);
        chanel3SettingsBox_9->setObjectName(QStringLiteral("chanel3SettingsBox_9"));
        chanel3SettingsBox_9->setGeometry(QRect(395, 0, 90, 170));
        changeTriggerButton_9_3 = new QPushButton(chanel3SettingsBox_9);
        changeTriggerButton_9_3->setObjectName(QStringLiteral("changeTriggerButton_9_3"));
        changeTriggerButton_9_3->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_9_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_9_3->setCheckable(false);
        changeTriggerButton_9_3->setChecked(false);
        changeTriggerButton_9_3->setAutoRepeat(false);
        changeTriggerButton_9_3->setAutoDefault(false);
        positionSpinBox_9_3 = new QSpinBox(chanel3SettingsBox_9);
        positionSpinBox_9_3->setObjectName(QStringLiteral("positionSpinBox_9_3"));
        positionSpinBox_9_3->setEnabled(false);
        positionSpinBox_9_3->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_9_3->setMinimum(-500);
        positionSpinBox_9_3->setMaximum(500);
        thresholdSpinBox_9_3 = new QSpinBox(chanel3SettingsBox_9);
        thresholdSpinBox_9_3->setObjectName(QStringLiteral("thresholdSpinBox_9_3"));
        thresholdSpinBox_9_3->setEnabled(false);
        thresholdSpinBox_9_3->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_9_3->setMinimum(-500);
        thresholdSpinBox_9_3->setMaximum(500);
        thresholdSpinBox_9_3->setValue(20);
        samplesSpinBox_9_3 = new QSpinBox(chanel3SettingsBox_9);
        samplesSpinBox_9_3->setObjectName(QStringLiteral("samplesSpinBox_9_3"));
        samplesSpinBox_9_3->setEnabled(false);
        samplesSpinBox_9_3->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_9_3->setValue(10);
        DACOffsetSpinBox_9_3 = new QSpinBox(chanel3SettingsBox_9);
        DACOffsetSpinBox_9_3->setObjectName(QStringLiteral("DACOffsetSpinBox_9_3"));
        DACOffsetSpinBox_9_3->setEnabled(false);
        DACOffsetSpinBox_9_3->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_9_3->setMinimum(-500);
        DACOffsetSpinBox_9_3->setMaximum(500);
        scaleSpinBox_9_3 = new QComboBox(chanel3SettingsBox_9);
        scaleSpinBox_9_3->setObjectName(QStringLiteral("scaleSpinBox_9_3"));
        scaleSpinBox_9_3->setEnabled(false);
        scaleSpinBox_9_3->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_9_3->setEditable(true);
        positionResetButton_9_3 = new QPushButton(chanel3SettingsBox_9);
        positionResetButton_9_3->setObjectName(QStringLiteral("positionResetButton_9_3"));
        positionResetButton_9_3->setEnabled(false);
        positionResetButton_9_3->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_9_3->setIcon(icon12);
        DACOffsetResetButton_9_3 = new QPushButton(chanel3SettingsBox_9);
        DACOffsetResetButton_9_3->setObjectName(QStringLiteral("DACOffsetResetButton_9_3"));
        DACOffsetResetButton_9_3->setEnabled(false);
        DACOffsetResetButton_9_3->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_9_3->setIcon(icon12);
        channelIsDrawingButton_9_3 = new QPushButton(chanel3SettingsBox_9);
        channelIsDrawingButton_9_3->setObjectName(QStringLiteral("channelIsDrawingButton_9_3"));
        channelIsDrawingButton_9_3->setEnabled(false);
        channelIsDrawingButton_9_3->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_9_3->setIcon(icon13);
        channelIsDrawingButton_9_3->setCheckable(true);
        channelIsDrawingButton_9_3->setChecked(true);
        thresholdIsDrawingButton_9_3 = new QPushButton(chanel3SettingsBox_9);
        thresholdIsDrawingButton_9_3->setObjectName(QStringLiteral("thresholdIsDrawingButton_9_3"));
        thresholdIsDrawingButton_9_3->setEnabled(false);
        thresholdIsDrawingButton_9_3->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_9_3->setIcon(icon13);
        thresholdIsDrawingButton_9_3->setCheckable(true);
        thresholdIsDrawingButton_9_3->setChecked(false);
        blockSamplesButton_9_3 = new QPushButton(chanel3SettingsBox_9);
        blockSamplesButton_9_3->setObjectName(QStringLiteral("blockSamplesButton_9_3"));
        blockSamplesButton_9_3->setEnabled(false);
        blockSamplesButton_9_3->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_9_3->setIcon(icon19);
        blockSamplesButton_9_3->setCheckable(true);
        blockSamplesButton_9_3->setChecked(true);
        chanel5SettingsBox_9 = new QGroupBox(WDF9Widget);
        chanel5SettingsBox_9->setObjectName(QStringLiteral("chanel5SettingsBox_9"));
        chanel5SettingsBox_9->setGeometry(QRect(585, 0, 90, 170));
        changeTriggerButton_9_5 = new QPushButton(chanel5SettingsBox_9);
        changeTriggerButton_9_5->setObjectName(QStringLiteral("changeTriggerButton_9_5"));
        changeTriggerButton_9_5->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_9_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_9_5->setCheckable(false);
        changeTriggerButton_9_5->setChecked(false);
        changeTriggerButton_9_5->setAutoRepeat(false);
        changeTriggerButton_9_5->setAutoDefault(false);
        positionSpinBox_9_5 = new QSpinBox(chanel5SettingsBox_9);
        positionSpinBox_9_5->setObjectName(QStringLiteral("positionSpinBox_9_5"));
        positionSpinBox_9_5->setEnabled(false);
        positionSpinBox_9_5->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_9_5->setMinimum(-500);
        positionSpinBox_9_5->setMaximum(500);
        thresholdSpinBox_9_5 = new QSpinBox(chanel5SettingsBox_9);
        thresholdSpinBox_9_5->setObjectName(QStringLiteral("thresholdSpinBox_9_5"));
        thresholdSpinBox_9_5->setEnabled(false);
        thresholdSpinBox_9_5->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_9_5->setMinimum(-500);
        thresholdSpinBox_9_5->setMaximum(500);
        thresholdSpinBox_9_5->setValue(20);
        samplesSpinBox_9_5 = new QSpinBox(chanel5SettingsBox_9);
        samplesSpinBox_9_5->setObjectName(QStringLiteral("samplesSpinBox_9_5"));
        samplesSpinBox_9_5->setEnabled(false);
        samplesSpinBox_9_5->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_9_5->setValue(10);
        DACOffsetSpinBox_9_5 = new QSpinBox(chanel5SettingsBox_9);
        DACOffsetSpinBox_9_5->setObjectName(QStringLiteral("DACOffsetSpinBox_9_5"));
        DACOffsetSpinBox_9_5->setEnabled(false);
        DACOffsetSpinBox_9_5->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_9_5->setMinimum(-500);
        DACOffsetSpinBox_9_5->setMaximum(500);
        scaleSpinBox_9_5 = new QComboBox(chanel5SettingsBox_9);
        scaleSpinBox_9_5->setObjectName(QStringLiteral("scaleSpinBox_9_5"));
        scaleSpinBox_9_5->setEnabled(false);
        scaleSpinBox_9_5->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_9_5->setEditable(true);
        positionResetButton_9_5 = new QPushButton(chanel5SettingsBox_9);
        positionResetButton_9_5->setObjectName(QStringLiteral("positionResetButton_9_5"));
        positionResetButton_9_5->setEnabled(false);
        positionResetButton_9_5->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_9_5->setIcon(icon12);
        DACOffsetResetButton_9_5 = new QPushButton(chanel5SettingsBox_9);
        DACOffsetResetButton_9_5->setObjectName(QStringLiteral("DACOffsetResetButton_9_5"));
        DACOffsetResetButton_9_5->setEnabled(false);
        DACOffsetResetButton_9_5->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_9_5->setIcon(icon12);
        channelIsDrawingButton_9_5 = new QPushButton(chanel5SettingsBox_9);
        channelIsDrawingButton_9_5->setObjectName(QStringLiteral("channelIsDrawingButton_9_5"));
        channelIsDrawingButton_9_5->setEnabled(false);
        channelIsDrawingButton_9_5->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_9_5->setIcon(icon13);
        channelIsDrawingButton_9_5->setCheckable(true);
        channelIsDrawingButton_9_5->setChecked(true);
        thresholdIsDrawingButton_9_5 = new QPushButton(chanel5SettingsBox_9);
        thresholdIsDrawingButton_9_5->setObjectName(QStringLiteral("thresholdIsDrawingButton_9_5"));
        thresholdIsDrawingButton_9_5->setEnabled(false);
        thresholdIsDrawingButton_9_5->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_9_5->setIcon(icon13);
        thresholdIsDrawingButton_9_5->setCheckable(true);
        thresholdIsDrawingButton_9_5->setChecked(false);
        blockSamplesButton_9_5 = new QPushButton(chanel5SettingsBox_9);
        blockSamplesButton_9_5->setObjectName(QStringLiteral("blockSamplesButton_9_5"));
        blockSamplesButton_9_5->setEnabled(false);
        blockSamplesButton_9_5->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_9_5->setIcon(icon19);
        blockSamplesButton_9_5->setCheckable(true);
        blockSamplesButton_9_5->setChecked(true);
        chanel6SettingsBox_9 = new QGroupBox(WDF9Widget);
        chanel6SettingsBox_9->setObjectName(QStringLiteral("chanel6SettingsBox_9"));
        chanel6SettingsBox_9->setGeometry(QRect(680, 0, 90, 170));
        changeTriggerButton_9_6 = new QPushButton(chanel6SettingsBox_9);
        changeTriggerButton_9_6->setObjectName(QStringLiteral("changeTriggerButton_9_6"));
        changeTriggerButton_9_6->setGeometry(QRect(10, 15, 50, 24));
        changeTriggerButton_9_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        changeTriggerButton_9_6->setCheckable(false);
        changeTriggerButton_9_6->setChecked(false);
        changeTriggerButton_9_6->setAutoRepeat(false);
        changeTriggerButton_9_6->setAutoDefault(false);
        positionSpinBox_9_6 = new QSpinBox(chanel6SettingsBox_9);
        positionSpinBox_9_6->setObjectName(QStringLiteral("positionSpinBox_9_6"));
        positionSpinBox_9_6->setEnabled(false);
        positionSpinBox_9_6->setGeometry(QRect(10, 45, 50, 20));
        positionSpinBox_9_6->setMinimum(-500);
        positionSpinBox_9_6->setMaximum(500);
        thresholdSpinBox_9_6 = new QSpinBox(chanel6SettingsBox_9);
        thresholdSpinBox_9_6->setObjectName(QStringLiteral("thresholdSpinBox_9_6"));
        thresholdSpinBox_9_6->setEnabled(false);
        thresholdSpinBox_9_6->setGeometry(QRect(10, 70, 50, 20));
        thresholdSpinBox_9_6->setMinimum(-500);
        thresholdSpinBox_9_6->setMaximum(500);
        thresholdSpinBox_9_6->setValue(20);
        samplesSpinBox_9_6 = new QSpinBox(chanel6SettingsBox_9);
        samplesSpinBox_9_6->setObjectName(QStringLiteral("samplesSpinBox_9_6"));
        samplesSpinBox_9_6->setEnabled(false);
        samplesSpinBox_9_6->setGeometry(QRect(10, 95, 50, 20));
        samplesSpinBox_9_6->setValue(10);
        DACOffsetSpinBox_9_6 = new QSpinBox(chanel6SettingsBox_9);
        DACOffsetSpinBox_9_6->setObjectName(QStringLiteral("DACOffsetSpinBox_9_6"));
        DACOffsetSpinBox_9_6->setEnabled(false);
        DACOffsetSpinBox_9_6->setGeometry(QRect(10, 120, 50, 20));
        DACOffsetSpinBox_9_6->setMinimum(-500);
        DACOffsetSpinBox_9_6->setMaximum(500);
        scaleSpinBox_9_6 = new QComboBox(chanel6SettingsBox_9);
        scaleSpinBox_9_6->setObjectName(QStringLiteral("scaleSpinBox_9_6"));
        scaleSpinBox_9_6->setEnabled(false);
        scaleSpinBox_9_6->setGeometry(QRect(10, 145, 50, 20));
        scaleSpinBox_9_6->setEditable(true);
        positionResetButton_9_6 = new QPushButton(chanel6SettingsBox_9);
        positionResetButton_9_6->setObjectName(QStringLiteral("positionResetButton_9_6"));
        positionResetButton_9_6->setEnabled(false);
        positionResetButton_9_6->setGeometry(QRect(65, 45, 20, 20));
        positionResetButton_9_6->setIcon(icon12);
        DACOffsetResetButton_9_6 = new QPushButton(chanel6SettingsBox_9);
        DACOffsetResetButton_9_6->setObjectName(QStringLiteral("DACOffsetResetButton_9_6"));
        DACOffsetResetButton_9_6->setEnabled(false);
        DACOffsetResetButton_9_6->setGeometry(QRect(65, 120, 20, 20));
        DACOffsetResetButton_9_6->setIcon(icon12);
        channelIsDrawingButton_9_6 = new QPushButton(chanel6SettingsBox_9);
        channelIsDrawingButton_9_6->setObjectName(QStringLiteral("channelIsDrawingButton_9_6"));
        channelIsDrawingButton_9_6->setEnabled(false);
        channelIsDrawingButton_9_6->setGeometry(QRect(65, 17, 20, 20));
        channelIsDrawingButton_9_6->setIcon(icon13);
        channelIsDrawingButton_9_6->setCheckable(true);
        channelIsDrawingButton_9_6->setChecked(true);
        thresholdIsDrawingButton_9_6 = new QPushButton(chanel6SettingsBox_9);
        thresholdIsDrawingButton_9_6->setObjectName(QStringLiteral("thresholdIsDrawingButton_9_6"));
        thresholdIsDrawingButton_9_6->setEnabled(false);
        thresholdIsDrawingButton_9_6->setGeometry(QRect(65, 70, 20, 20));
        thresholdIsDrawingButton_9_6->setIcon(icon13);
        thresholdIsDrawingButton_9_6->setCheckable(true);
        thresholdIsDrawingButton_9_6->setChecked(false);
        blockSamplesButton_9_6 = new QPushButton(chanel6SettingsBox_9);
        blockSamplesButton_9_6->setObjectName(QStringLiteral("blockSamplesButton_9_6"));
        blockSamplesButton_9_6->setEnabled(false);
        blockSamplesButton_9_6->setGeometry(QRect(65, 95, 20, 20));
        blockSamplesButton_9_6->setIcon(icon19);
        blockSamplesButton_9_6->setCheckable(true);
        blockSamplesButton_9_6->setChecked(true);
        channelLabelBox_9 = new QGroupBox(WDF9Widget);
        channelLabelBox_9->setObjectName(QStringLiteral("channelLabelBox_9"));
        channelLabelBox_9->setGeometry(QRect(0, 0, 105, 170));
        thresholdLabel_9 = new QLabel(channelLabelBox_9);
        thresholdLabel_9->setObjectName(QStringLiteral("thresholdLabel_9"));
        thresholdLabel_9->setGeometry(QRect(10, 70, 91, 20));
        thresholdLabel_9->setLayoutDirection(Qt::RightToLeft);
        thresholdLabel_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        samplesLabel_9 = new QLabel(channelLabelBox_9);
        samplesLabel_9->setObjectName(QStringLiteral("samplesLabel_9"));
        samplesLabel_9->setGeometry(QRect(10, 95, 91, 20));
        samplesLabel_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        positionLabel_9 = new QLabel(channelLabelBox_9);
        positionLabel_9->setObjectName(QStringLiteral("positionLabel_9"));
        positionLabel_9->setGeometry(QRect(10, 45, 91, 20));
        positionLabel_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        DACOffsetLabel_9 = new QLabel(channelLabelBox_9);
        DACOffsetLabel_9->setObjectName(QStringLiteral("DACOffsetLabel_9"));
        DACOffsetLabel_9->setGeometry(QRect(10, 120, 91, 20));
        DACOffsetLabel_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        scaleLabel_9 = new QLabel(channelLabelBox_9);
        scaleLabel_9->setObjectName(QStringLiteral("scaleLabel_9"));
        scaleLabel_9->setGeometry(QRect(10, 145, 91, 20));
        scaleLabel_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        statusLabel_9 = new QLabel(channelLabelBox_9);
        statusLabel_9->setObjectName(QStringLiteral("statusLabel_9"));
        statusLabel_9->setGeometry(QRect(10, 15, 91, 24));
        statusLabel_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        WDFTabWidget->addTab(WDF9Widget, icon20, QString());

        gridLayout->addWidget(WDFTabWidget, 0, 0, 1, 1);


        horizontalLayout->addWidget(channelsSettingBox);


        gridLayout_3->addWidget(settingsBlock, 1, 0, 1, 1);


        verticalLayout->addWidget(mainBox);

        MainWindowClass->setCentralWidget(centralWidget);

        retranslateUi(MainWindowClass);
        QObject::connect(exitButton, SIGNAL(released()), MainWindowClass, SLOT(close()));
        QObject::connect(connectButton, SIGNAL(clicked()), MainWindowClass, SLOT(connectSlot()));
        QObject::connect(settingsButton, SIGNAL(clicked()), MainWindowClass, SLOT(openSettingsSlot()));
        QObject::connect(startStopButton, SIGNAL(clicked()), MainWindowClass, SLOT(startStopSlot()));
        QObject::connect(blockSamplesButton_1_0, SIGNAL(toggled(bool)), samplesSpinBox_1_0, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_1_1, SIGNAL(toggled(bool)), samplesSpinBox_1_1, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_1_2, SIGNAL(toggled(bool)), samplesSpinBox_1_2, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_1_3, SIGNAL(toggled(bool)), samplesSpinBox_1_3, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_1_4, SIGNAL(toggled(bool)), samplesSpinBox_1_4, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_1_5, SIGNAL(toggled(bool)), samplesSpinBox_1_5, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_1_6, SIGNAL(toggled(bool)), samplesSpinBox_1_6, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_1_7, SIGNAL(toggled(bool)), samplesSpinBox_1_7, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_2_0, SIGNAL(toggled(bool)), samplesSpinBox_2_0, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_2_1, SIGNAL(toggled(bool)), samplesSpinBox_2_1, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_2_2, SIGNAL(toggled(bool)), samplesSpinBox_2_2, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_2_3, SIGNAL(toggled(bool)), samplesSpinBox_2_3, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_2_4, SIGNAL(toggled(bool)), samplesSpinBox_2_4, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_2_5, SIGNAL(toggled(bool)), samplesSpinBox_2_5, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_2_6, SIGNAL(toggled(bool)), samplesSpinBox_2_6, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_2_7, SIGNAL(toggled(bool)), samplesSpinBox_2_7, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_3_0, SIGNAL(toggled(bool)), samplesSpinBox_3_0, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_3_1, SIGNAL(toggled(bool)), samplesSpinBox_3_1, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_3_2, SIGNAL(toggled(bool)), samplesSpinBox_3_2, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_3_3, SIGNAL(toggled(bool)), samplesSpinBox_3_3, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_3_4, SIGNAL(toggled(bool)), samplesSpinBox_3_4, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_3_5, SIGNAL(toggled(bool)), samplesSpinBox_3_5, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_3_6, SIGNAL(toggled(bool)), samplesSpinBox_3_6, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_3_7, SIGNAL(toggled(bool)), samplesSpinBox_3_7, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_4_0, SIGNAL(toggled(bool)), samplesSpinBox_4_0, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_4_1, SIGNAL(toggled(bool)), samplesSpinBox_4_1, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_4_2, SIGNAL(toggled(bool)), samplesSpinBox_4_2, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_4_3, SIGNAL(toggled(bool)), samplesSpinBox_4_3, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_4_4, SIGNAL(toggled(bool)), samplesSpinBox_4_4, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_4_5, SIGNAL(toggled(bool)), samplesSpinBox_4_5, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_4_6, SIGNAL(toggled(bool)), samplesSpinBox_4_6, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_4_7, SIGNAL(toggled(bool)), samplesSpinBox_4_7, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_5_0, SIGNAL(toggled(bool)), samplesSpinBox_5_0, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_5_1, SIGNAL(toggled(bool)), samplesSpinBox_5_1, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_5_2, SIGNAL(toggled(bool)), samplesSpinBox_5_2, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_5_3, SIGNAL(toggled(bool)), samplesSpinBox_5_3, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_5_4, SIGNAL(toggled(bool)), samplesSpinBox_5_4, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_5_5, SIGNAL(toggled(bool)), samplesSpinBox_5_5, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_5_6, SIGNAL(toggled(bool)), samplesSpinBox_5_6, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_5_7, SIGNAL(toggled(bool)), samplesSpinBox_5_7, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_6_0, SIGNAL(toggled(bool)), samplesSpinBox_6_0, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_6_1, SIGNAL(toggled(bool)), samplesSpinBox_6_1, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_6_2, SIGNAL(toggled(bool)), samplesSpinBox_6_2, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_6_3, SIGNAL(toggled(bool)), samplesSpinBox_6_3, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_6_4, SIGNAL(toggled(bool)), samplesSpinBox_6_4, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_6_5, SIGNAL(toggled(bool)), samplesSpinBox_6_5, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_6_6, SIGNAL(toggled(bool)), samplesSpinBox_6_6, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_6_7, SIGNAL(toggled(bool)), samplesSpinBox_6_7, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_7_0, SIGNAL(toggled(bool)), samplesSpinBox_7_0, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_7_1, SIGNAL(toggled(bool)), samplesSpinBox_7_1, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_7_2, SIGNAL(toggled(bool)), samplesSpinBox_7_2, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_7_3, SIGNAL(toggled(bool)), samplesSpinBox_7_3, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_7_4, SIGNAL(toggled(bool)), samplesSpinBox_7_4, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_7_5, SIGNAL(toggled(bool)), samplesSpinBox_7_5, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_7_6, SIGNAL(toggled(bool)), samplesSpinBox_7_6, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_7_7, SIGNAL(toggled(bool)), samplesSpinBox_7_7, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_8_0, SIGNAL(toggled(bool)), samplesSpinBox_8_0, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_8_1, SIGNAL(toggled(bool)), samplesSpinBox_8_1, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_8_2, SIGNAL(toggled(bool)), samplesSpinBox_8_2, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_8_3, SIGNAL(toggled(bool)), samplesSpinBox_8_3, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_8_4, SIGNAL(toggled(bool)), samplesSpinBox_8_4, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_8_5, SIGNAL(toggled(bool)), samplesSpinBox_8_5, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_8_6, SIGNAL(toggled(bool)), samplesSpinBox_8_6, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_8_7, SIGNAL(toggled(bool)), samplesSpinBox_8_7, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_9_0, SIGNAL(toggled(bool)), samplesSpinBox_9_0, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_9_1, SIGNAL(toggled(bool)), samplesSpinBox_9_1, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_9_2, SIGNAL(toggled(bool)), samplesSpinBox_9_2, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_9_3, SIGNAL(toggled(bool)), samplesSpinBox_9_3, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_9_4, SIGNAL(toggled(bool)), samplesSpinBox_9_4, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_9_5, SIGNAL(toggled(bool)), samplesSpinBox_9_5, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_9_6, SIGNAL(toggled(bool)), samplesSpinBox_9_6, SLOT(setDisabled(bool)));
        QObject::connect(blockSamplesButton_9_7, SIGNAL(toggled(bool)), samplesSpinBox_9_7, SLOT(setDisabled(bool)));
        QObject::connect(bufferComboBox, SIGNAL(currentIndexChanged(int)), MainWindowClass, SLOT(bufferChangedSlot(int)));
        QObject::connect(postTriggerSpinBox, SIGNAL(valueChanged(int)), MainWindowClass, SLOT(setPostTriggerLengthSlot(int)));
        QObject::connect(errorButton, SIGNAL(clicked()), MainWindowClass, SLOT(openErrorsSlot()));
        QObject::connect(forceTriggerButton, SIGNAL(clicked()), MainWindowClass, SLOT(makeSoftwareTriggerSlot()));
        QObject::connect(externalTriggerButton, SIGNAL(clicked()), MainWindowClass, SLOT(changeExternalTriggerSlot()));
        QObject::connect(recordButton, SIGNAL(clicked()), MainWindowClass, SLOT(startStopWritingDataSlot()));

        exitButton->setDefault(false);
        tabWidget->setCurrentIndex(0);
        scaleTimeComboBox->setCurrentIndex(0);
        pushButton->setDefault(false);
        WDFTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "Digitizer by Khlopin Radium Institute", 0));
        controlButtons->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        helpButton->setToolTip(QApplication::translate("MainWindowClass", "\320\237\320\276\320\274\320\276\321\211\321\214", 0));
#endif // QT_NO_TOOLTIP
        helpButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        connectButton->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273\321\216\321\207\320\270\321\202\321\214", 0));
#endif // QT_NO_TOOLTIP
        connectButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        exitButton->setToolTip(QApplication::translate("MainWindowClass", "\320\227\321\213\320\272\321\200\321\213\321\202\321\214", 0));
#endif // QT_NO_TOOLTIP
        exitButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        openFileButton->setToolTip(QApplication::translate("MainWindowClass", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\237\320\260\320\277\320\272\321\203", 0));
#endif // QT_NO_TOOLTIP
        openFileButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        errorButton->setToolTip(QApplication::translate("MainWindowClass", "\320\226\321\203\321\200\320\275\320\260\320\273 \320\276\321\210\320\270\320\261\320\276\320\272", 0));
#endif // QT_NO_TOOLTIP
        errorButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        journalButton->setToolTip(QApplication::translate("MainWindowClass", "\320\226\321\203\321\200\320\275\320\260\320\273", 0));
#endif // QT_NO_TOOLTIP
        journalButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        magnifierButton->setToolTip(QApplication::translate("MainWindowClass", "\320\233\321\203\320\277\320\260", 0));
#endif // QT_NO_TOOLTIP
        magnifierButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        recordButton->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\277\320\270\321\201\321\214", 0));
#endif // QT_NO_TOOLTIP
        recordButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        settingsButton->setToolTip(QApplication::translate("MainWindowClass", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", 0));
#endif // QT_NO_TOOLTIP
        settingsButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        drawButton->setToolTip(QApplication::translate("MainWindowClass", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200", 0));
#endif // QT_NO_TOOLTIP
        drawButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        startStopButton->setToolTip(QApplication::translate("MainWindowClass", "\320\241\321\202\320\260\321\200\321\202", 0));
#endif // QT_NO_TOOLTIP
        startStopButton->setText(QString());
        mainBox->setTitle(QString());
        tabWidget->setTabText(tabWidget->indexOf(signalTab), QApplication::translate("MainWindowClass", "\320\241\320\270\320\263\320\275\320\260\320\273", 0));
        tabWidget->setTabText(tabWidget->indexOf(spectrumTab), QApplication::translate("MainWindowClass", "\320\241\320\277\320\265\320\272\321\202\321\200", 0));
        tabWidget->setTabText(tabWidget->indexOf(dataTab), QApplication::translate("MainWindowClass", "\320\236\320\261\321\200\320\260\320\261\320\276\321\202\320\272\320\260 \320\264\320\260\320\275\320\275\321\213\321\205", 0));
        settingsBlock->setTitle(QString());
        timeSettingBox->setTitle(QApplication::translate("MainWindowClass", "\320\237\320\276 \320\263\320\276\321\200\320\270\320\267\320\276\320\275\321\202\320\260\320\273\320\270", 0));
        bufferBox->setTitle(QApplication::translate("MainWindowClass", "\320\240\320\260\320\267\320\274\320\265\321\200 \320\261\321\203\321\204\320\265\321\200\320\260", 0));
        bufferComboBox->clear();
        bufferComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "2 KB", 0)
         << QApplication::translate("MainWindowClass", "4 KB", 0)
         << QApplication::translate("MainWindowClass", "8 KB", 0)
         << QApplication::translate("MainWindowClass", "16 KB", 0)
         << QApplication::translate("MainWindowClass", "32 KB", 0)
         << QApplication::translate("MainWindowClass", "64 KB", 0)
         << QApplication::translate("MainWindowClass", "128 KB", 0)
         << QApplication::translate("MainWindowClass", "256 KB", 0)
         << QApplication::translate("MainWindowClass", "512 KB", 0)
         << QApplication::translate("MainWindowClass", "1024 KB", 0)
         << QApplication::translate("MainWindowClass", "2048 KB", 0)
        );
#ifndef QT_NO_TOOLTIP
        scaleTimeBox->setToolTip(QApplication::translate("MainWindowClass", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261 (\320\262\321\200\320\265\320\274\321\217 \320\275\320\260 \320\264\320\265\320\273\320\265\320\275\320\270\320\265)", 0));
#endif // QT_NO_TOOLTIP
        scaleTimeBox->setTitle(QApplication::translate("MainWindowClass", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261", 0));
        scaleTimeComboBox->clear();
        scaleTimeComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1 \320\274\320\272\321\201/\320\264\320\265\320\273", 0)
         << QApplication::translate("MainWindowClass", "2 \320\274\320\272\321\201/\320\264\320\265\320\273", 0)
         << QApplication::translate("MainWindowClass", "4 \320\274\320\272\321\201/\320\264\320\265\320\273", 0)
         << QApplication::translate("MainWindowClass", "10 \320\274\320\272\321\201/\320\264\320\265\320\273", 0)
         << QApplication::translate("MainWindowClass", "20 \320\274\320\272\321\201/\320\264\320\265\320\273", 0)
         << QApplication::translate("MainWindowClass", "40 \320\274\320\272\321\201/\320\264\320\265\320\273", 0)
        );
        scaleTimeComboBox->setCurrentText(QApplication::translate("MainWindowClass", "1 \320\274\320\272\321\201/\320\264\320\265\320\273", 0));
#ifndef QT_NO_TOOLTIP
        positionTimeBox->setToolTip(QApplication::translate("MainWindowClass", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261 (\320\262\321\200\320\265\320\274\321\217 \320\275\320\260 \320\264\320\265\320\273\320\265\320\275\320\270\320\265)", 0));
#endif // QT_NO_TOOLTIP
        positionTimeBox->setTitle(QApplication::translate("MainWindowClass", "\320\237\320\276\320\267\320\270\321\206\320\270\321\217", 0));
#ifndef QT_NO_TOOLTIP
        positionResetButton_0_0->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_0_0->setText(QString());
        inversionButton->setText(QApplication::translate("MainWindowClass", "\320\230\320\275\320\262\320\265\321\200\321\201\320\270\321\217", 0));
        triggerSettingBox->setTitle(QApplication::translate("MainWindowClass", "\320\242\321\200\320\270\320\263\320\263\320\265\321\200", 0));
        postTriggerBox->setTitle(QApplication::translate("MainWindowClass", "\320\237\320\276\321\201\321\202-\320\242\321\200\320\270\320\263\320\263\320\265\321\200(%)", 0));
#ifndef QT_NO_TOOLTIP
        postTriggerIsDrawing->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        postTriggerIsDrawing->setText(QString());
        edgeBox->setTitle(QApplication::translate("MainWindowClass", "\320\227\320\260\320\277\321\203\321\201\320\272 \320\277\320\276 \321\201\320\277\320\260\320\264\321\203", 0));
        pushButton->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindowClass", "\320\240\320\265\320\266\320\270\320\274 \320\267\320\260\320\277\321\203\321\201\320\272\320\260", 0));
#ifndef QT_NO_TOOLTIP
        externalTriggerButton->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\275\320\265\321\210\320\275\320\270\320\271 \320\267\320\260\320\277\321\203\321\201\320\272", 0));
#endif // QT_NO_TOOLTIP
        externalTriggerButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        autoTriggerButton->setToolTip(QApplication::translate("MainWindowClass", "\320\220\320\262\321\202\320\276 \320\267\320\260\320\277\321\203\321\201\320\272", 0));
#endif // QT_NO_TOOLTIP
        autoTriggerButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        forceTriggerButton->setToolTip(QApplication::translate("MainWindowClass", "\320\237\321\200\320\270\320\275\321\203\320\264\320\270\321\202\320\265\320\273\321\214\320\275\321\213\320\271 \320\267\320\260\320\277\321\203\321\201\320\272", 0));
#endif // QT_NO_TOOLTIP
        forceTriggerButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        sinfleTriggerButton->setToolTip(QApplication::translate("MainWindowClass", "\320\236\320\264\320\270\320\275\320\276\321\207\320\275\321\213\320\271 \320\267\320\260\320\277\321\203\321\201\320\272", 0));
#endif // QT_NO_TOOLTIP
        sinfleTriggerButton->setText(QString());
        channelsSettingBox->setTitle(QApplication::translate("MainWindowClass", "\320\232\320\260\320\275\320\260\320\273\321\213", 0));
#ifndef QT_NO_TOOLTIP
        WDFTabWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        chanel0SettingsBox_1->setTitle(QApplication::translate("MainWindowClass", "CH0", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_1_0->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_1_0->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_1_0->clear();
        scaleSpinBox_1_0->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_1_0->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_1_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_1_0->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_1_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_1_0->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_1_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_1_0->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_1_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_1_0->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_1_0->setText(QString());
        channelLabelBox_1->setTitle(QApplication::translate("MainWindowClass", "\320\232\320\260\320\275\320\260\320\273", 0));
        thresholdLabel_1->setText(QApplication::translate("MainWindowClass", "\320\237\320\276\321\200\320\276\320\263(\320\274\320\222)", 0));
#ifndef QT_NO_TOOLTIP
        samplesLabel_1->setToolTip(QApplication::translate("MainWindowClass", "\320\224\320\273\320\270\321\202\320\265\320\273\321\214\320\275\320\276 \320\267\320\260\320\277\321\203\321\201\320\272\320\276\320\265\320\274\320\276\320\263\320\276 \320\270\320\274\320\277\321\203\320\273\321\214\321\201\320\260", 0));
#endif // QT_NO_TOOLTIP
        samplesLabel_1->setText(QApplication::translate("MainWindowClass", "\320\224\320\273\320\270\320\275\320\260 \320\270\320\274\320\277\321\203\320\273\321\214\321\201\320\260", 0));
        positionLabel_1->setText(QApplication::translate("MainWindowClass", "\320\237\320\276\320\267\320\270\321\206\320\270\321\217", 0));
        DACOffsetLabel_1->setText(QApplication::translate("MainWindowClass", "\320\241\320\274\320\265\321\211\320\265\320\275\320\270\320\265 DC(\320\274\320\222)", 0));
#ifndef QT_NO_TOOLTIP
        scaleLabel_1->setToolTip(QApplication::translate("MainWindowClass", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261 (\320\274\320\270\320\273\320\270\320\262\320\276\320\273\321\214\321\202 \320\275\320\260 \320\264\320\265\320\273\320\265\320\275\320\270\320\265)", 0));
#endif // QT_NO_TOOLTIP
        scaleLabel_1->setText(QApplication::translate("MainWindowClass", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261(\320\274\320\222/\320\264\320\265\320\273)", 0));
        statusLabel_1->setText(QApplication::translate("MainWindowClass", "\320\241\321\202\320\260\321\202\321\203\321\201", 0));
        chanel1SettingsBox_1->setTitle(QApplication::translate("MainWindowClass", "CH1", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_1_1->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_1_1->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_1_1->clear();
        scaleSpinBox_1_1->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_1_1->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_1_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_1_1->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_1_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_1_1->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_1_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_1_1->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_1_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_1_1->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_1_1->setText(QString());
        chanel2SettingsBox_1->setTitle(QApplication::translate("MainWindowClass", "CH2", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_1_2->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_1_2->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_1_2->clear();
        scaleSpinBox_1_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_1_2->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_1_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_1_2->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_1_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_1_2->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_1_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_1_2->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_1_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_1_2->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_1_2->setText(QString());
        chanel5SettingsBox_1->setTitle(QApplication::translate("MainWindowClass", "CH5", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_1_5->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_1_5->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_1_5->clear();
        scaleSpinBox_1_5->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_1_5->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_1_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_1_5->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_1_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_1_5->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_1_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_1_5->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_1_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_1_5->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_1_5->setText(QString());
        chanel4SettingsBox_1->setTitle(QApplication::translate("MainWindowClass", "CH4", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_1_4->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_1_4->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_1_4->clear();
        scaleSpinBox_1_4->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_1_4->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_1_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_1_4->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_1_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_1_4->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_1_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_1_4->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_1_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_1_4->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_1_4->setText(QString());
        chanel3SettingsBox_1->setTitle(QApplication::translate("MainWindowClass", "CH3", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_1_3->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_1_3->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_1_3->clear();
        scaleSpinBox_1_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_1_3->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_1_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_1_3->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_1_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_1_3->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_1_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_1_3->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_1_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_1_3->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_1_3->setText(QString());
        chanel7SettingsBox_1->setTitle(QApplication::translate("MainWindowClass", "CH7", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_1_7->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_1_7->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_1_7->clear();
        scaleSpinBox_1_7->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_1_7->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_1_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_1_7->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_1_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_1_7->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_1_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_1_7->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_1_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_1_7->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_1_7->setText(QString());
        chanel6SettingsBox_1->setTitle(QApplication::translate("MainWindowClass", "CH6", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_1_6->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_1_6->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_1_6->clear();
        scaleSpinBox_1_6->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_1_6->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_1_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_1_6->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_1_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_1_6->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_1_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_1_6->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_1_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_1_6->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_1_6->setText(QString());
        WDFTabWidget->setTabText(WDFTabWidget->indexOf(WDF1Widget), QApplication::translate("MainWindowClass", "\320\237\320\276\320\267\320\270\321\206\320\270\321\217 1", 0));
        chanel2SettingsBox_2->setTitle(QApplication::translate("MainWindowClass", "CH2", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_2_2->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_2_2->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_2_2->clear();
        scaleSpinBox_2_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_2_2->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_2_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_2_2->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_2_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_2_2->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_2_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_2_2->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_2_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_2_2->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_2_2->setText(QString());
        chanel6SettingsBox_2->setTitle(QApplication::translate("MainWindowClass", "CH6", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_2_6->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_2_6->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_2_6->clear();
        scaleSpinBox_2_6->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_2_6->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_2_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_2_6->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_2_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_2_6->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_2_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_2_6->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_2_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_2_6->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_2_6->setText(QString());
        chanel5SettingsBox_2->setTitle(QApplication::translate("MainWindowClass", "CH5", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_2_5->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_2_5->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_2_5->clear();
        scaleSpinBox_2_5->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_2_5->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_2_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_2_5->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_2_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_2_5->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_2_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_2_5->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_2_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_2_5->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_2_5->setText(QString());
        chanel3SettingsBox_2->setTitle(QApplication::translate("MainWindowClass", "CH3", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_2_3->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_2_3->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_2_3->clear();
        scaleSpinBox_2_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_2_3->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_2_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_2_3->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_2_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_2_3->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_2_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_2_3->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_2_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_2_3->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_2_3->setText(QString());
        chanel1SettingsBox_2->setTitle(QApplication::translate("MainWindowClass", "CH1", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_2_1->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_2_1->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_2_1->clear();
        scaleSpinBox_2_1->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_2_1->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_2_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_2_1->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_2_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_2_1->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_2_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_2_1->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_2_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_2_1->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_2_1->setText(QString());
        chanel4SettingsBox_2->setTitle(QApplication::translate("MainWindowClass", "CH4", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_2_4->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_2_4->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_2_4->clear();
        scaleSpinBox_2_4->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_2_4->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_2_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_2_4->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_2_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_2_4->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_2_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_2_4->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_2_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_2_4->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_2_4->setText(QString());
        chanel0SettingsBox_2->setTitle(QApplication::translate("MainWindowClass", "CH0", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_2_0->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_2_0->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_2_0->clear();
        scaleSpinBox_2_0->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_2_0->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_2_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_2_0->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_2_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_2_0->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_2_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_2_0->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_2_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_2_0->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_2_0->setText(QString());
        chanel7SettingsBox_2->setTitle(QApplication::translate("MainWindowClass", "CH7", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_2_7->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_2_7->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_2_7->clear();
        scaleSpinBox_2_7->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_2_7->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_2_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_2_7->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_2_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_2_7->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_2_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_2_7->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_2_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_2_7->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_2_7->setText(QString());
        channelLabelBox_2->setTitle(QApplication::translate("MainWindowClass", "\320\232\320\260\320\275\320\260\320\273", 0));
        thresholdLabel_2->setText(QApplication::translate("MainWindowClass", "\320\237\320\276\321\200\320\276\320\263(\320\274\320\222)", 0));
        samplesLabel_2->setText(QApplication::translate("MainWindowClass", "\320\224\320\273\320\270\320\275\320\260 \320\270\320\274\320\277\321\203\320\273\321\214\321\201\320\260", 0));
        positionLabel_2->setText(QApplication::translate("MainWindowClass", "\320\237\320\276\320\267\320\270\321\206\320\270\321\217", 0));
        DACOffsetLabel_2->setText(QApplication::translate("MainWindowClass", "\320\241\320\274\320\265\321\211\320\265\320\275\320\270\320\265 DC(\320\274\320\222)", 0));
#ifndef QT_NO_TOOLTIP
        scaleLabel_2->setToolTip(QApplication::translate("MainWindowClass", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261 (\320\274\320\270\320\273\320\270\320\262\320\276\320\273\321\214\321\202 \320\275\320\260 \320\264\320\265\320\273\320\265\320\275\320\270\320\265)", 0));
#endif // QT_NO_TOOLTIP
        scaleLabel_2->setText(QApplication::translate("MainWindowClass", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261(\320\274\320\222/\320\264\320\265\320\273)", 0));
        statusLabel_2->setText(QApplication::translate("MainWindowClass", "\320\241\321\202\320\260\321\202\321\203\321\201", 0));
        WDFTabWidget->setTabText(WDFTabWidget->indexOf(WDF2Widget), QApplication::translate("MainWindowClass", "\320\237\320\276\320\267\320\270\321\206\320\270\321\217 2", 0));
        chanel0SettingsBox_3->setTitle(QApplication::translate("MainWindowClass", "CH0", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_3_0->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_3_0->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_3_0->clear();
        scaleSpinBox_3_0->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_3_0->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_3_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_3_0->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_3_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_3_0->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_3_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_3_0->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_3_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_3_0->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_3_0->setText(QString());
        chanel1SettingsBox_3->setTitle(QApplication::translate("MainWindowClass", "CH1", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_3_1->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_3_1->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_3_1->clear();
        scaleSpinBox_3_1->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_3_1->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_3_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_3_1->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_3_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_3_1->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_3_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_3_1->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_3_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_3_1->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_3_1->setText(QString());
        chanel2SettingsBox_3->setTitle(QApplication::translate("MainWindowClass", "CH2", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_3_2->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_3_2->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_3_2->clear();
        scaleSpinBox_3_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_3_2->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_3_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_3_2->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_3_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_3_2->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_3_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_3_2->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_3_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_3_2->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_3_2->setText(QString());
        chanel4SettingsBox_3->setTitle(QApplication::translate("MainWindowClass", "CH4", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_3_4->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_3_4->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_3_4->clear();
        scaleSpinBox_3_4->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_3_4->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_3_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_3_4->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_3_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_3_4->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_3_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_3_4->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_3_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_3_4->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_3_4->setText(QString());
        chanel6SettingsBox_3->setTitle(QApplication::translate("MainWindowClass", "CH6", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_3_6->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_3_6->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_3_6->clear();
        scaleSpinBox_3_6->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_3_6->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_3_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_3_6->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_3_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_3_6->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_3_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_3_6->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_3_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_3_6->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_3_6->setText(QString());
        chanel5SettingsBox_3->setTitle(QApplication::translate("MainWindowClass", "CH5", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_3_5->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_3_5->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_3_5->clear();
        scaleSpinBox_3_5->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_3_5->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_3_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_3_5->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_3_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_3_5->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_3_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_3_5->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_3_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_3_5->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_3_5->setText(QString());
        chanel7SettingsBox_3->setTitle(QApplication::translate("MainWindowClass", "CH7", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_3_7->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_3_7->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_3_7->clear();
        scaleSpinBox_3_7->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_3_7->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_3_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_3_7->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_3_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_3_7->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_3_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_3_7->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_3_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_3_7->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_3_7->setText(QString());
        chanel3SettingsBox_3->setTitle(QApplication::translate("MainWindowClass", "CH3", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_3_3->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_3_3->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_3_3->clear();
        scaleSpinBox_3_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_3_3->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_3_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_3_3->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_3_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_3_3->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_3_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_3_3->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_3_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_3_3->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_3_3->setText(QString());
        channelLabelBox_3->setTitle(QApplication::translate("MainWindowClass", "\320\232\320\260\320\275\320\260\320\273", 0));
        thresholdLabel_3->setText(QApplication::translate("MainWindowClass", "\320\237\320\276\321\200\320\276\320\263(\320\274\320\222)", 0));
        samplesLabel_3->setText(QApplication::translate("MainWindowClass", "\320\224\320\273\320\270\320\275\320\260 \320\270\320\274\320\277\321\203\320\273\321\214\321\201\320\260", 0));
        positionLabel_3->setText(QApplication::translate("MainWindowClass", "\320\237\320\276\320\267\320\270\321\206\320\270\321\217", 0));
        DACOffsetLabel_3->setText(QApplication::translate("MainWindowClass", "\320\241\320\274\320\265\321\211\320\265\320\275\320\270\320\265 DC(\320\274\320\222)", 0));
#ifndef QT_NO_TOOLTIP
        scaleLabel_3->setToolTip(QApplication::translate("MainWindowClass", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261 (\320\274\320\270\320\273\320\270\320\262\320\276\320\273\321\214\321\202 \320\275\320\260 \320\264\320\265\320\273\320\265\320\275\320\270\320\265)", 0));
#endif // QT_NO_TOOLTIP
        scaleLabel_3->setText(QApplication::translate("MainWindowClass", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261(\320\274\320\222/\320\264\320\265\320\273)", 0));
        statusLabel_3->setText(QApplication::translate("MainWindowClass", "\320\241\321\202\320\260\321\202\321\203\321\201", 0));
        WDFTabWidget->setTabText(WDFTabWidget->indexOf(WDF3Widget), QApplication::translate("MainWindowClass", "\320\237\320\276\320\267\320\270\321\206\320\270\321\217 3", 0));
        chanel0SettingsBox_4->setTitle(QApplication::translate("MainWindowClass", "CH0", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_4_0->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_4_0->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_4_0->clear();
        scaleSpinBox_4_0->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_4_0->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_4_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_4_0->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_4_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_4_0->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_4_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_4_0->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_4_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_4_0->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_4_0->setText(QString());
        chanel1SettingsBox_4->setTitle(QApplication::translate("MainWindowClass", "CH1", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_4_1->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_4_1->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_4_1->clear();
        scaleSpinBox_4_1->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_4_1->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_4_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_4_1->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_4_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_4_1->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_4_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_4_1->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_4_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_4_1->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_4_1->setText(QString());
        chanel2SettingsBox_4->setTitle(QApplication::translate("MainWindowClass", "CH2", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_4_2->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_4_2->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_4_2->clear();
        scaleSpinBox_4_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_4_2->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_4_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_4_2->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_4_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_4_2->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_4_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_4_2->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_4_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_4_2->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_4_2->setText(QString());
        chanel4SettingsBox_4->setTitle(QApplication::translate("MainWindowClass", "CH4", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_4_4->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_4_4->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_4_4->clear();
        scaleSpinBox_4_4->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_4_4->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_4_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_4_4->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_4_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_4_4->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_4_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_4_4->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_4_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_4_4->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_4_4->setText(QString());
        chanel6SettingsBox_4->setTitle(QApplication::translate("MainWindowClass", "CH6", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_4_6->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_4_6->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_4_6->clear();
        scaleSpinBox_4_6->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_4_6->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_4_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_4_6->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_4_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_4_6->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_4_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_4_6->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_4_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_4_6->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_4_6->setText(QString());
        chanel5SettingsBox_4->setTitle(QApplication::translate("MainWindowClass", "CH5", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_4_5->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_4_5->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_4_5->clear();
        scaleSpinBox_4_5->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_4_5->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_4_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_4_5->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_4_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_4_5->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_4_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_4_5->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_4_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_4_5->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_4_5->setText(QString());
        chanel7SettingsBox_4->setTitle(QApplication::translate("MainWindowClass", "CH7", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_4_7->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_4_7->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_4_7->clear();
        scaleSpinBox_4_7->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_4_7->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_4_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_4_7->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_4_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_4_7->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_4_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_4_7->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_4_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_4_7->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_4_7->setText(QString());
        chanel3SettingsBox_4->setTitle(QApplication::translate("MainWindowClass", "CH3", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_4_3->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_4_3->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_4_3->clear();
        scaleSpinBox_4_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_4_3->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_4_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_4_3->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_4_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_4_3->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_4_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_4_3->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_4_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_4_3->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_4_3->setText(QString());
        channelLabelBox_4->setTitle(QApplication::translate("MainWindowClass", "\320\232\320\260\320\275\320\260\320\273", 0));
        thresholdLabel_4->setText(QApplication::translate("MainWindowClass", "\320\237\320\276\321\200\320\276\320\263(\320\274\320\222)", 0));
        samplesLabel_4->setText(QApplication::translate("MainWindowClass", "\320\224\320\273\320\270\320\275\320\260 \320\270\320\274\320\277\321\203\320\273\321\214\321\201\320\260", 0));
        positionLabel_4->setText(QApplication::translate("MainWindowClass", "\320\237\320\276\320\267\320\270\321\206\320\270\321\217", 0));
        DACOffsetLabel_4->setText(QApplication::translate("MainWindowClass", "\320\241\320\274\320\265\321\211\320\265\320\275\320\270\320\265 DC(\320\274\320\222)", 0));
#ifndef QT_NO_TOOLTIP
        scaleLabel_4->setToolTip(QApplication::translate("MainWindowClass", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261 (\320\274\320\270\320\273\320\270\320\262\320\276\320\273\321\214\321\202 \320\275\320\260 \320\264\320\265\320\273\320\265\320\275\320\270\320\265)", 0));
#endif // QT_NO_TOOLTIP
        scaleLabel_4->setText(QApplication::translate("MainWindowClass", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261(\320\274\320\222/\320\264\320\265\320\273)", 0));
        statusLabel_4->setText(QApplication::translate("MainWindowClass", "\320\241\321\202\320\260\321\202\321\203\321\201", 0));
        WDFTabWidget->setTabText(WDFTabWidget->indexOf(WDF4Widget), QApplication::translate("MainWindowClass", "\320\237\320\276\320\267\320\270\321\206\320\270\321\217 4", 0));
        chanel0SettingsBox_5->setTitle(QApplication::translate("MainWindowClass", "CH0", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_5_0->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_5_0->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_5_0->clear();
        scaleSpinBox_5_0->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_5_0->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_5_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_5_0->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_5_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_5_0->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_5_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_5_0->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_5_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_5_0->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_5_0->setText(QString());
        chanel1SettingsBox_5->setTitle(QApplication::translate("MainWindowClass", "CH1", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_5_1->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_5_1->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_5_1->clear();
        scaleSpinBox_5_1->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_5_1->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_5_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_5_1->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_5_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_5_1->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_5_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_5_1->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_5_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_5_1->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_5_1->setText(QString());
        chanel2SettingsBox_5->setTitle(QApplication::translate("MainWindowClass", "CH2", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_5_2->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_5_2->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_5_2->clear();
        scaleSpinBox_5_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_5_2->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_5_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_5_2->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_5_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_5_2->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_5_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_5_2->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_5_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_5_2->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_5_2->setText(QString());
        chanel4SettingsBox_5->setTitle(QApplication::translate("MainWindowClass", "CH4", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_5_4->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_5_4->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_5_4->clear();
        scaleSpinBox_5_4->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_5_4->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_5_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_5_4->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_5_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_5_4->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_5_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_5_4->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_5_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_5_4->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_5_4->setText(QString());
        chanel6SettingsBox_5->setTitle(QApplication::translate("MainWindowClass", "CH6", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_5_6->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_5_6->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_5_6->clear();
        scaleSpinBox_5_6->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_5_6->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_5_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_5_6->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_5_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_5_6->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_5_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_5_6->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_5_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_5_6->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_5_6->setText(QString());
        chanel5SettingsBox_5->setTitle(QApplication::translate("MainWindowClass", "CH5", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_5_5->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_5_5->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_5_5->clear();
        scaleSpinBox_5_5->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_5_5->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_5_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_5_5->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_5_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_5_5->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_5_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_5_5->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_5_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_5_5->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_5_5->setText(QString());
        chanel7SettingsBox_5->setTitle(QApplication::translate("MainWindowClass", "CH7", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_5_7->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_5_7->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_5_7->clear();
        scaleSpinBox_5_7->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_5_7->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_5_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_5_7->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_5_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_5_7->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_5_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_5_7->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_5_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_5_7->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_5_7->setText(QString());
        chanel3SettingsBox_5->setTitle(QApplication::translate("MainWindowClass", "CH3", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_5_3->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_5_3->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_5_3->clear();
        scaleSpinBox_5_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_5_3->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_5_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_5_3->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_5_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_5_3->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_5_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_5_3->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_5_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_5_3->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_5_3->setText(QString());
        channelLabelBox_5->setTitle(QApplication::translate("MainWindowClass", "\320\232\320\260\320\275\320\260\320\273", 0));
        thresholdLabel_5->setText(QApplication::translate("MainWindowClass", "\320\237\320\276\321\200\320\276\320\263(\320\274\320\222)", 0));
        samplesLabel_5->setText(QApplication::translate("MainWindowClass", "\320\224\320\273\320\270\320\275\320\260 \320\270\320\274\320\277\321\203\320\273\321\214\321\201\320\260", 0));
        positionLabel_5->setText(QApplication::translate("MainWindowClass", "\320\237\320\276\320\267\320\270\321\206\320\270\321\217", 0));
        DACOffsetLabel_5->setText(QApplication::translate("MainWindowClass", "\320\241\320\274\320\265\321\211\320\265\320\275\320\270\320\265 DC(\320\274\320\222)", 0));
#ifndef QT_NO_TOOLTIP
        scaleLabel_5->setToolTip(QApplication::translate("MainWindowClass", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261 (\320\274\320\270\320\273\320\270\320\262\320\276\320\273\321\214\321\202 \320\275\320\260 \320\264\320\265\320\273\320\265\320\275\320\270\320\265)", 0));
#endif // QT_NO_TOOLTIP
        scaleLabel_5->setText(QApplication::translate("MainWindowClass", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261(\320\274\320\222/\320\264\320\265\320\273)", 0));
        statusLabel_5->setText(QApplication::translate("MainWindowClass", "\320\241\321\202\320\260\321\202\321\203\321\201", 0));
        WDFTabWidget->setTabText(WDFTabWidget->indexOf(WDF5Widget), QApplication::translate("MainWindowClass", "\320\237\320\276\320\267\320\270\321\206\320\270\321\217 5", 0));
        chanel0SettingsBox_6->setTitle(QApplication::translate("MainWindowClass", "CH0", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_6_0->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_6_0->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_6_0->clear();
        scaleSpinBox_6_0->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_6_0->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_6_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_6_0->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_6_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_6_0->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_6_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_6_0->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_6_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_6_0->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_6_0->setText(QString());
        chanel1SettingsBox_6->setTitle(QApplication::translate("MainWindowClass", "CH1", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_6_1->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_6_1->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_6_1->clear();
        scaleSpinBox_6_1->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_6_1->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_6_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_6_1->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_6_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_6_1->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_6_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_6_1->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_6_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_6_1->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_6_1->setText(QString());
        chanel2SettingsBox_6->setTitle(QApplication::translate("MainWindowClass", "CH2", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_6_2->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_6_2->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_6_2->clear();
        scaleSpinBox_6_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_6_2->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_6_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_6_2->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_6_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_6_2->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_6_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_6_2->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_6_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_6_2->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_6_2->setText(QString());
        chanel4SettingsBox_6->setTitle(QApplication::translate("MainWindowClass", "CH4", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_6_4->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_6_4->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_6_4->clear();
        scaleSpinBox_6_4->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_6_4->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_6_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_6_4->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_6_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_6_4->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_6_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_6_4->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_6_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_6_4->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_6_4->setText(QString());
        chanel6SettingsBox_6->setTitle(QApplication::translate("MainWindowClass", "CH6", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_6_6->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_6_6->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_6_6->clear();
        scaleSpinBox_6_6->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_6_6->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_6_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_6_6->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_6_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_6_6->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_6_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_6_6->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_6_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_6_6->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_6_6->setText(QString());
        chanel5SettingsBox_6->setTitle(QApplication::translate("MainWindowClass", "CH5", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_6_5->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_6_5->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_6_5->clear();
        scaleSpinBox_6_5->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_6_5->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_6_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_6_5->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_6_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_6_5->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_6_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_6_5->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_6_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_6_5->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_6_5->setText(QString());
        chanel7SettingsBox_6->setTitle(QApplication::translate("MainWindowClass", "CH7", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_6_7->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_6_7->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_6_7->clear();
        scaleSpinBox_6_7->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_6_7->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_6_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_6_7->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_6_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_6_7->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_6_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_6_7->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_6_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_6_7->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_6_7->setText(QString());
        chanel3SettingsBox_6->setTitle(QApplication::translate("MainWindowClass", "CH3", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_6_3->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_6_3->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_6_3->clear();
        scaleSpinBox_6_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_6_3->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_6_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_6_3->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_6_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_6_3->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_6_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_6_3->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_6_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_6_3->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_6_3->setText(QString());
        channelLabelBox_6->setTitle(QApplication::translate("MainWindowClass", "\320\232\320\260\320\275\320\260\320\273", 0));
        thresholdLabel_6->setText(QApplication::translate("MainWindowClass", "\320\237\320\276\321\200\320\276\320\263(\320\274\320\222)", 0));
        samplesLabel_6->setText(QApplication::translate("MainWindowClass", "\320\224\320\273\320\270\320\275\320\260 \320\270\320\274\320\277\321\203\320\273\321\214\321\201\320\260", 0));
        positionLabel_6->setText(QApplication::translate("MainWindowClass", "\320\237\320\276\320\267\320\270\321\206\320\270\321\217", 0));
        DACOffsetLabel_6->setText(QApplication::translate("MainWindowClass", "\320\241\320\274\320\265\321\211\320\265\320\275\320\270\320\265 DC(\320\274\320\222)", 0));
#ifndef QT_NO_TOOLTIP
        scaleLabel_6->setToolTip(QApplication::translate("MainWindowClass", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261 (\320\274\320\270\320\273\320\270\320\262\320\276\320\273\321\214\321\202 \320\275\320\260 \320\264\320\265\320\273\320\265\320\275\320\270\320\265)", 0));
#endif // QT_NO_TOOLTIP
        scaleLabel_6->setText(QApplication::translate("MainWindowClass", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261(\320\274\320\222/\320\264\320\265\320\273)", 0));
        statusLabel_6->setText(QApplication::translate("MainWindowClass", "\320\241\321\202\320\260\321\202\321\203\321\201", 0));
        WDFTabWidget->setTabText(WDFTabWidget->indexOf(WDF6Widget), QApplication::translate("MainWindowClass", "\320\237\320\276\320\267\320\270\321\206\320\270\321\217 6", 0));
        chanel0SettingsBox_7->setTitle(QApplication::translate("MainWindowClass", "CH0", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_7_0->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_7_0->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_7_0->clear();
        scaleSpinBox_7_0->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_7_0->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_7_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_7_0->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_7_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_7_0->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_7_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_7_0->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_7_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_7_0->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_7_0->setText(QString());
        chanel1SettingsBox_7->setTitle(QApplication::translate("MainWindowClass", "CH1", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_7_1->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_7_1->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_7_1->clear();
        scaleSpinBox_7_1->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_7_1->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_7_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_7_1->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_7_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_7_1->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_7_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_7_1->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_7_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_7_1->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_7_1->setText(QString());
        chanel2SettingsBox_7->setTitle(QApplication::translate("MainWindowClass", "CH2", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_7_2->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_7_2->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_7_2->clear();
        scaleSpinBox_7_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_7_2->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_7_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_7_2->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_7_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_7_2->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_7_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_7_2->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_7_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_7_2->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_7_2->setText(QString());
        chanel4SettingsBox_7->setTitle(QApplication::translate("MainWindowClass", "CH4", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_7_4->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_7_4->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_7_4->clear();
        scaleSpinBox_7_4->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_7_4->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_7_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_7_4->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_7_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_7_4->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_7_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_7_4->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_7_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_7_4->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_7_4->setText(QString());
        chanel6SettingsBox_7->setTitle(QApplication::translate("MainWindowClass", "CH6", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_7_6->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_7_6->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_7_6->clear();
        scaleSpinBox_7_6->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_7_6->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_7_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_7_6->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_7_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_7_6->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_7_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_7_6->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_7_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_7_6->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_7_6->setText(QString());
        chanel5SettingsBox_7->setTitle(QApplication::translate("MainWindowClass", "CH5", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_7_5->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_7_5->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_7_5->clear();
        scaleSpinBox_7_5->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_7_5->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_7_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_7_5->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_7_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_7_5->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_7_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_7_5->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_7_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_7_5->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_7_5->setText(QString());
        chanel7SettingsBox_7->setTitle(QApplication::translate("MainWindowClass", "CH7", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_7_7->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_7_7->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_7_7->clear();
        scaleSpinBox_7_7->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_7_7->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_7_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_7_7->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_7_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_7_7->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_7_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_7_7->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_7_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_7_7->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_7_7->setText(QString());
        chanel3SettingsBox_7->setTitle(QApplication::translate("MainWindowClass", "CH3", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_7_3->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_7_3->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_7_3->clear();
        scaleSpinBox_7_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_7_3->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_7_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_7_3->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_7_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_7_3->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_7_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_7_3->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_7_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_7_3->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_7_3->setText(QString());
        channelLabelBox_7->setTitle(QApplication::translate("MainWindowClass", "\320\232\320\260\320\275\320\260\320\273", 0));
        thresholdLabel_7->setText(QApplication::translate("MainWindowClass", "\320\237\320\276\321\200\320\276\320\263(\320\274\320\222)", 0));
        samplesLabel_7->setText(QApplication::translate("MainWindowClass", "\320\224\320\273\320\270\320\275\320\260 \320\270\320\274\320\277\321\203\320\273\321\214\321\201\320\260", 0));
        positionLabel_7->setText(QApplication::translate("MainWindowClass", "\320\237\320\276\320\267\320\270\321\206\320\270\321\217", 0));
        DACOffsetLabel_7->setText(QApplication::translate("MainWindowClass", "\320\241\320\274\320\265\321\211\320\265\320\275\320\270\320\265 DC(\320\274\320\222)", 0));
#ifndef QT_NO_TOOLTIP
        scaleLabel_7->setToolTip(QApplication::translate("MainWindowClass", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261 (\320\274\320\270\320\273\320\270\320\262\320\276\320\273\321\214\321\202 \320\275\320\260 \320\264\320\265\320\273\320\265\320\275\320\270\320\265)", 0));
#endif // QT_NO_TOOLTIP
        scaleLabel_7->setText(QApplication::translate("MainWindowClass", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261(\320\274\320\222/\320\264\320\265\320\273)", 0));
        statusLabel_7->setText(QApplication::translate("MainWindowClass", "\320\241\321\202\320\260\321\202\321\203\321\201", 0));
        WDFTabWidget->setTabText(WDFTabWidget->indexOf(WDF7Widget), QApplication::translate("MainWindowClass", "\320\237\320\276\320\267\320\270\321\206\320\270\321\217 7", 0));
        chanel0SettingsBox_8->setTitle(QApplication::translate("MainWindowClass", "CH0", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_8_0->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_8_0->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_8_0->clear();
        scaleSpinBox_8_0->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_8_0->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_8_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_8_0->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_8_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_8_0->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_8_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_8_0->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_8_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_8_0->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_8_0->setText(QString());
        chanel1SettingsBox_8->setTitle(QApplication::translate("MainWindowClass", "CH1", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_8_1->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_8_1->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_8_1->clear();
        scaleSpinBox_8_1->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_8_1->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_8_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_8_1->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_8_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_8_1->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_8_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_8_1->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_8_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_8_1->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_8_1->setText(QString());
        chanel2SettingsBox_8->setTitle(QApplication::translate("MainWindowClass", "CH2", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_8_2->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_8_2->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_8_2->clear();
        scaleSpinBox_8_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_8_2->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_8_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_8_2->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_8_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_8_2->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_8_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_8_2->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_8_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_8_2->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_8_2->setText(QString());
        chanel4SettingsBox_8->setTitle(QApplication::translate("MainWindowClass", "CH4", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_8_4->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_8_4->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_8_4->clear();
        scaleSpinBox_8_4->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_8_4->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_8_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_8_4->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_8_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_8_4->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_8_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_8_4->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_8_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_8_4->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_8_4->setText(QString());
        chanel6SettingsBox_8->setTitle(QApplication::translate("MainWindowClass", "CH6", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_8_6->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_8_6->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_8_6->clear();
        scaleSpinBox_8_6->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_8_6->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_8_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_8_6->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_8_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_8_6->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_8_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_8_6->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_8_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_8_6->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_8_6->setText(QString());
        chanel5SettingsBox_8->setTitle(QApplication::translate("MainWindowClass", "CH5", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_8_5->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_8_5->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_8_5->clear();
        scaleSpinBox_8_5->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_8_5->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_8_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_8_5->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_8_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_8_5->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_8_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_8_5->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_8_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_8_5->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_8_5->setText(QString());
        chanel7SettingsBox_8->setTitle(QApplication::translate("MainWindowClass", "CH7", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_8_7->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_8_7->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_8_7->clear();
        scaleSpinBox_8_7->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_8_7->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_8_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_8_7->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_8_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_8_7->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_8_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_8_7->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_8_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_8_7->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_8_7->setText(QString());
        chanel3SettingsBox_8->setTitle(QApplication::translate("MainWindowClass", "CH3", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_8_3->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_8_3->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_8_3->clear();
        scaleSpinBox_8_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_8_3->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_8_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_8_3->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_8_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_8_3->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_8_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_8_3->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_8_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_8_3->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_8_3->setText(QString());
        channelLabelBox_8->setTitle(QApplication::translate("MainWindowClass", "\320\232\320\260\320\275\320\260\320\273", 0));
        thresholdLabel_8->setText(QApplication::translate("MainWindowClass", "\320\237\320\276\321\200\320\276\320\263(\320\274\320\222)", 0));
        samplesLabel_8->setText(QApplication::translate("MainWindowClass", "\320\224\320\273\320\270\320\275\320\260 \320\270\320\274\320\277\321\203\320\273\321\214\321\201\320\260", 0));
        positionLabel_8->setText(QApplication::translate("MainWindowClass", "\320\237\320\276\320\267\320\270\321\206\320\270\321\217", 0));
        DACOffsetLabel_8->setText(QApplication::translate("MainWindowClass", "\320\241\320\274\320\265\321\211\320\265\320\275\320\270\320\265 DC(\320\274\320\222)", 0));
#ifndef QT_NO_TOOLTIP
        scaleLabel_8->setToolTip(QApplication::translate("MainWindowClass", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261 (\320\274\320\270\320\273\320\270\320\262\320\276\320\273\321\214\321\202 \320\275\320\260 \320\264\320\265\320\273\320\265\320\275\320\270\320\265)", 0));
#endif // QT_NO_TOOLTIP
        scaleLabel_8->setText(QApplication::translate("MainWindowClass", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261(\320\274\320\222/\320\264\320\265\320\273)", 0));
        statusLabel_8->setText(QApplication::translate("MainWindowClass", "\320\241\321\202\320\260\321\202\321\203\321\201", 0));
        WDFTabWidget->setTabText(WDFTabWidget->indexOf(WDF8Widget), QApplication::translate("MainWindowClass", "\320\237\320\276\320\267\320\270\321\206\320\270\321\217 8", 0));
        chanel2SettingsBox_9->setTitle(QApplication::translate("MainWindowClass", "CH2", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_9_2->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_9_2->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_9_2->clear();
        scaleSpinBox_9_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_9_2->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_9_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_9_2->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_9_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_9_2->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_9_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_9_2->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_9_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_9_2->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_9_2->setText(QString());
        chanel7SettingsBox_9->setTitle(QApplication::translate("MainWindowClass", "CH7", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_9_7->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_9_7->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_9_7->clear();
        scaleSpinBox_9_7->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_9_7->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_9_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_9_7->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_9_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_9_7->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_9_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_9_7->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_9_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_9_7->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_9_7->setText(QString());
        chanel0SettingsBox_9->setTitle(QApplication::translate("MainWindowClass", "CH0", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_9_0->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_9_0->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_9_0->clear();
        scaleSpinBox_9_0->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_9_0->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_9_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_9_0->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_9_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_9_0->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_9_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_9_0->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_9_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_9_0->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_9_0->setText(QString());
        chanel1SettingsBox_9->setTitle(QApplication::translate("MainWindowClass", "CH1", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_9_1->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_9_1->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_9_1->clear();
        scaleSpinBox_9_1->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_9_1->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_9_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_9_1->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_9_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_9_1->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_9_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_9_1->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_9_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_9_1->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_9_1->setText(QString());
        chanel4SettingsBox_9->setTitle(QApplication::translate("MainWindowClass", "CH4", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_9_4->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_9_4->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_9_4->clear();
        scaleSpinBox_9_4->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_9_4->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_9_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_9_4->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_9_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_9_4->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_9_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_9_4->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_9_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_9_4->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_9_4->setText(QString());
        chanel3SettingsBox_9->setTitle(QApplication::translate("MainWindowClass", "CH3", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_9_3->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_9_3->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_9_3->clear();
        scaleSpinBox_9_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_9_3->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_9_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_9_3->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_9_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_9_3->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_9_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_9_3->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_9_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_9_3->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_9_3->setText(QString());
        chanel5SettingsBox_9->setTitle(QApplication::translate("MainWindowClass", "CH5", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_9_5->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_9_5->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_9_5->clear();
        scaleSpinBox_9_5->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_9_5->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_9_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_9_5->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_9_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_9_5->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_9_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_9_5->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_9_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_9_5->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_9_5->setText(QString());
        chanel6SettingsBox_9->setTitle(QApplication::translate("MainWindowClass", "CH6", 0));
#ifndef QT_NO_TOOLTIP
        changeTriggerButton_9_6->setToolTip(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", 0));
#endif // QT_NO_TOOLTIP
        changeTriggerButton_9_6->setText(QApplication::translate("MainWindowClass", "\320\222\321\213\320\272\320\273.", 0));
        scaleSpinBox_9_6->clear();
        scaleSpinBox_9_6->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1", 0)
         << QApplication::translate("MainWindowClass", "2", 0)
         << QApplication::translate("MainWindowClass", "5", 0)
         << QApplication::translate("MainWindowClass", "10", 0)
         << QApplication::translate("MainWindowClass", "20", 0)
         << QApplication::translate("MainWindowClass", "50", 0)
         << QApplication::translate("MainWindowClass", "100", 0)
        );
#ifndef QT_NO_TOOLTIP
        positionResetButton_9_6->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        positionResetButton_9_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        DACOffsetResetButton_9_6->setToolTip(QApplication::translate("MainWindowClass", "\320\241\320\261\321\200\320\276\321\201", 0));
#endif // QT_NO_TOOLTIP
        DACOffsetResetButton_9_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelIsDrawingButton_9_6->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        channelIsDrawingButton_9_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        thresholdIsDrawingButton_9_6->setToolTip(QApplication::translate("MainWindowClass", "\320\222\320\272\320\273./\320\262\321\213\320\272\320\273. \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\320\276\320\263\320\276\320\262\320\276\320\271 \320\273\320\270\320\275\320\270\320\270", 0));
#endif // QT_NO_TOOLTIP
        thresholdIsDrawingButton_9_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        blockSamplesButton_9_6->setToolTip(QApplication::translate("MainWindowClass", "\320\227\320\260\320\261\320\273\320\276\320\272./\321\200\320\260\320\267\320\261\320\273\320\276\320\272.", 0));
#endif // QT_NO_TOOLTIP
        blockSamplesButton_9_6->setText(QString());
        channelLabelBox_9->setTitle(QApplication::translate("MainWindowClass", "\320\232\320\260\320\275\320\260\320\273", 0));
        thresholdLabel_9->setText(QApplication::translate("MainWindowClass", "\320\237\320\276\321\200\320\276\320\263(\320\274\320\222)", 0));
        samplesLabel_9->setText(QApplication::translate("MainWindowClass", "\320\224\320\273\320\270\320\275\320\260 \320\270\320\274\320\277\321\203\320\273\321\214\321\201\320\260", 0));
        positionLabel_9->setText(QApplication::translate("MainWindowClass", "\320\237\320\276\320\267\320\270\321\206\320\270\321\217", 0));
        DACOffsetLabel_9->setText(QApplication::translate("MainWindowClass", "\320\241\320\274\320\265\321\211\320\265\320\275\320\270\320\265 DC(\320\274\320\222)", 0));
#ifndef QT_NO_TOOLTIP
        scaleLabel_9->setToolTip(QApplication::translate("MainWindowClass", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261 (\320\274\320\270\320\273\320\270\320\262\320\276\320\273\321\214\321\202 \320\275\320\260 \320\264\320\265\320\273\320\265\320\275\320\270\320\265)", 0));
#endif // QT_NO_TOOLTIP
        scaleLabel_9->setText(QApplication::translate("MainWindowClass", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261(\320\274\320\222/\320\264\320\265\320\273)", 0));
        statusLabel_9->setText(QApplication::translate("MainWindowClass", "\320\241\321\202\320\260\321\202\321\203\321\201", 0));
        WDFTabWidget->setTabText(WDFTabWidget->indexOf(WDF9Widget), QApplication::translate("MainWindowClass", "\320\237\320\276\320\267\320\270\321\206\320\270\321\217 9", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
