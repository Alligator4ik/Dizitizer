/********************************************************************************
** Form generated from reading UI file 'settingswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWINDOW_H
#define UI_SETTINGSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsWindowController
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *activeWDFs;
    QTableWidget *VMECommSetting;
    QCheckBox *WDF1;
    QCheckBox *WDF2;
    QCheckBox *WDF3;
    QCheckBox *WDF4;
    QCheckBox *WDF5;
    QCheckBox *WDF6;
    QCheckBox *WDF7;
    QCheckBox *WDF8;
    QCheckBox *WDF9;
    QWidget *ChannelColorSetting;
    QTableWidget *ColorSetting;
    QLabel *Color_CH_0;
    QLabel *Color_CH_1;
    QLabel *Color_CH_2;
    QLabel *Color_CH_3;
    QLabel *Color_CH_4;
    QLabel *Color_CH_5;
    QLabel *Color_CH_6;
    QLabel *Color_CH_7;
    QPushButton *EditColor_CH_0;
    QPushButton *EditColor_CH_1;
    QPushButton *EditColor_CH_2;
    QPushButton *EditColor_CH_3;
    QPushButton *EditColor_CH_4;
    QPushButton *EditColor_CH_5;
    QPushButton *EditColor_CH_6;
    QPushButton *EditColor_CH_7;
    QSpinBox *WidthSignal_CH_3;
    QSpinBox *WidthSignal_CH_4;
    QSpinBox *WidthSignal_CH_5;
    QSpinBox *WidthSignal_CH_6;
    QSpinBox *WidthSignal_CH_7;
    QSpinBox *WidthSignal_CH_0;
    QSpinBox *WidthSignal_CH_2;
    QSpinBox *WidthSignal_CH_1;
    QSpinBox *WidthTrigger_CH_5;
    QSpinBox *WidthTrigger_CH_1;
    QSpinBox *WidthTrigger_CH_3;
    QSpinBox *WidthTrigger_CH_4;
    QSpinBox *WidthTrigger_CH_0;
    QSpinBox *WidthTrigger_CH_2;
    QSpinBox *WidthTrigger_CH_6;
    QSpinBox *WidthTrigger_CH_7;
    QComboBox *TrigLine_CH_0;
    QComboBox *TrigLine_CH_1;
    QComboBox *TrigLine_CH_2;
    QComboBox *TrigLine_CH_3;
    QComboBox *TrigLine_CH_4;
    QComboBox *TrigLine_CH_5;
    QComboBox *TrigLine_CH_6;
    QComboBox *TrigLine_CH_7;
    QLabel *currentWDFLabel;
    QComboBox *currentWDFInColorTab;
    QWidget *ViewerSetting;
    QGroupBox *groupBox;
    QLabel *label;
    QPushButton *postTriggerIsDrawing;
    QGroupBox *groupBox_2;
    QPushButton *postTriggerIsDrawing_10;
    QLabel *label_10;
    QSpinBox *spinBox;
    QComboBox *comboBox;
    QGroupBox *groupBox_3;
    QComboBox *comboBox_3;

    void setupUi(QMainWindow *SettingsWindowController)
    {
        if (SettingsWindowController->objectName().isEmpty())
            SettingsWindowController->setObjectName(QStringLiteral("SettingsWindowController"));
        SettingsWindowController->setEnabled(true);
        SettingsWindowController->resize(635, 364);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SettingsWindowController->sizePolicy().hasHeightForWidth());
        SettingsWindowController->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(SettingsWindowController);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(centralWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(15, 125));
        tabWidget->setElideMode(Qt::ElideLeft);
        tabWidget->setTabBarAutoHide(false);
        activeWDFs = new QWidget();
        activeWDFs->setObjectName(QStringLiteral("activeWDFs"));
        VMECommSetting = new QTableWidget(activeWDFs);
        if (VMECommSetting->columnCount() < 5)
            VMECommSetting->setColumnCount(5);
        QIcon icon;
        icon.addFile(QStringLiteral("../Desktop/CAEN-UI/used.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem->setIcon(icon);
        VMECommSetting->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (VMECommSetting->rowCount() < 9)
            VMECommSetting->setRowCount(9);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        VMECommSetting->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        VMECommSetting->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        VMECommSetting->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        VMECommSetting->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        VMECommSetting->setVerticalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        VMECommSetting->setVerticalHeaderItem(5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        VMECommSetting->setVerticalHeaderItem(6, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        VMECommSetting->setVerticalHeaderItem(7, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        VMECommSetting->setVerticalHeaderItem(8, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        VMECommSetting->setItem(0, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(0, 1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(0, 2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(0, 3, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(0, 4, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        VMECommSetting->setItem(1, 0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(1, 1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(1, 2, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(1, 3, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(1, 4, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        __qtablewidgetitem24->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(2, 1, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        __qtablewidgetitem25->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(2, 2, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(2, 3, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(2, 4, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        __qtablewidgetitem28->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(3, 1, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        __qtablewidgetitem29->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(3, 2, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        __qtablewidgetitem30->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(3, 3, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        __qtablewidgetitem31->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(3, 4, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        __qtablewidgetitem32->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(4, 1, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        __qtablewidgetitem33->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(4, 2, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        __qtablewidgetitem34->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(4, 3, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        __qtablewidgetitem35->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(4, 4, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        __qtablewidgetitem36->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(5, 1, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        __qtablewidgetitem37->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(5, 2, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        __qtablewidgetitem38->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(5, 3, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        __qtablewidgetitem39->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(5, 4, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        __qtablewidgetitem40->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(6, 1, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        __qtablewidgetitem41->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(6, 2, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        __qtablewidgetitem42->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(6, 3, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        __qtablewidgetitem43->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(6, 4, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        __qtablewidgetitem44->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(7, 1, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        __qtablewidgetitem45->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(7, 2, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        __qtablewidgetitem46->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(7, 3, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        __qtablewidgetitem47->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(7, 4, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        __qtablewidgetitem48->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(8, 1, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        __qtablewidgetitem49->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(8, 2, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        __qtablewidgetitem50->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(8, 3, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        __qtablewidgetitem51->setTextAlignment(Qt::AlignCenter);
        VMECommSetting->setItem(8, 4, __qtablewidgetitem51);
        VMECommSetting->setObjectName(QStringLiteral("VMECommSetting"));
        VMECommSetting->setGeometry(QRect(10, 7, 461, 301));
        VMECommSetting->setRowCount(9);
        VMECommSetting->setColumnCount(5);
        VMECommSetting->horizontalHeader()->setDefaultSectionSize(83);
        VMECommSetting->horizontalHeader()->setMinimumSectionSize(23);
        VMECommSetting->horizontalHeader()->setStretchLastSection(true);
        VMECommSetting->verticalHeader()->setDefaultSectionSize(30);
        VMECommSetting->verticalHeader()->setMinimumSectionSize(30);
        VMECommSetting->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        VMECommSetting->verticalHeader()->setStretchLastSection(true);
        WDF1 = new QCheckBox(activeWDFs);
        WDF1->setObjectName(QStringLiteral("WDF1"));
        WDF1->setGeometry(QRect(30, 40, 15, 15));
        WDF2 = new QCheckBox(activeWDFs);
        WDF2->setObjectName(QStringLiteral("WDF2"));
        WDF2->setGeometry(QRect(30, 70, 15, 15));
        WDF3 = new QCheckBox(activeWDFs);
        WDF3->setObjectName(QStringLiteral("WDF3"));
        WDF3->setGeometry(QRect(30, 100, 15, 15));
        WDF4 = new QCheckBox(activeWDFs);
        WDF4->setObjectName(QStringLiteral("WDF4"));
        WDF4->setGeometry(QRect(30, 130, 15, 15));
        WDF5 = new QCheckBox(activeWDFs);
        WDF5->setObjectName(QStringLiteral("WDF5"));
        WDF5->setGeometry(QRect(30, 160, 15, 15));
        WDF6 = new QCheckBox(activeWDFs);
        WDF6->setObjectName(QStringLiteral("WDF6"));
        WDF6->setGeometry(QRect(30, 190, 15, 15));
        WDF7 = new QCheckBox(activeWDFs);
        WDF7->setObjectName(QStringLiteral("WDF7"));
        WDF7->setGeometry(QRect(30, 220, 15, 15));
        WDF8 = new QCheckBox(activeWDFs);
        WDF8->setObjectName(QStringLiteral("WDF8"));
        WDF8->setGeometry(QRect(30, 250, 15, 15));
        WDF9 = new QCheckBox(activeWDFs);
        WDF9->setObjectName(QStringLiteral("WDF9"));
        WDF9->setGeometry(QRect(30, 280, 15, 15));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../Desktop/CAEN-UI/Setting/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(activeWDFs, icon1, QString());
        ChannelColorSetting = new QWidget();
        ChannelColorSetting->setObjectName(QStringLiteral("ChannelColorSetting"));
        ColorSetting = new QTableWidget(ChannelColorSetting);
        if (ColorSetting->columnCount() < 5)
            ColorSetting->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        ColorSetting->setHorizontalHeaderItem(0, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        ColorSetting->setHorizontalHeaderItem(1, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        ColorSetting->setHorizontalHeaderItem(2, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        ColorSetting->setHorizontalHeaderItem(3, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        ColorSetting->setHorizontalHeaderItem(4, __qtablewidgetitem56);
        if (ColorSetting->rowCount() < 8)
            ColorSetting->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        ColorSetting->setVerticalHeaderItem(0, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        ColorSetting->setVerticalHeaderItem(1, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        ColorSetting->setVerticalHeaderItem(2, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        ColorSetting->setVerticalHeaderItem(3, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        ColorSetting->setVerticalHeaderItem(4, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        ColorSetting->setVerticalHeaderItem(5, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        ColorSetting->setVerticalHeaderItem(6, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        ColorSetting->setVerticalHeaderItem(7, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        __qtablewidgetitem65->setTextAlignment(Qt::AlignCenter);
        ColorSetting->setItem(0, 0, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        __qtablewidgetitem66->setTextAlignment(Qt::AlignCenter);
        ColorSetting->setItem(1, 0, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        __qtablewidgetitem67->setTextAlignment(Qt::AlignCenter);
        ColorSetting->setItem(2, 0, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        __qtablewidgetitem68->setTextAlignment(Qt::AlignCenter);
        ColorSetting->setItem(3, 0, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        __qtablewidgetitem69->setTextAlignment(Qt::AlignCenter);
        ColorSetting->setItem(4, 0, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        __qtablewidgetitem70->setTextAlignment(Qt::AlignCenter);
        ColorSetting->setItem(5, 0, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        __qtablewidgetitem71->setTextAlignment(Qt::AlignCenter);
        ColorSetting->setItem(6, 0, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        __qtablewidgetitem72->setTextAlignment(Qt::AlignCenter);
        ColorSetting->setItem(7, 0, __qtablewidgetitem72);
        ColorSetting->setObjectName(QStringLiteral("ColorSetting"));
        ColorSetting->setGeometry(QRect(10, 32, 461, 271));
        ColorSetting->setLineWidth(1);
        ColorSetting->horizontalHeader()->setCascadingSectionResizes(false);
        ColorSetting->horizontalHeader()->setDefaultSectionSize(80);
        ColorSetting->horizontalHeader()->setHighlightSections(true);
        ColorSetting->horizontalHeader()->setMinimumSectionSize(30);
        ColorSetting->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        ColorSetting->horizontalHeader()->setStretchLastSection(true);
        ColorSetting->verticalHeader()->setCascadingSectionResizes(false);
        ColorSetting->verticalHeader()->setDefaultSectionSize(30);
        ColorSetting->verticalHeader()->setHighlightSections(true);
        ColorSetting->verticalHeader()->setMinimumSectionSize(30);
        ColorSetting->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        ColorSetting->verticalHeader()->setStretchLastSection(true);
        Color_CH_0 = new QLabel(ChannelColorSetting);
        Color_CH_0->setObjectName(QStringLiteral("Color_CH_0"));
        Color_CH_0->setGeometry(QRect(90, 60, 40, 20));
        Color_CH_0->setAutoFillBackground(false);
        Color_CH_0->setStyleSheet(QLatin1String("border: 2px solid  #a0a0a0 ;\n"
"background-color: rgb(0, 255, 255);"));
        Color_CH_1 = new QLabel(ChannelColorSetting);
        Color_CH_1->setObjectName(QStringLiteral("Color_CH_1"));
        Color_CH_1->setGeometry(QRect(90, 90, 40, 20));
        Color_CH_1->setAutoFillBackground(false);
        Color_CH_1->setStyleSheet(QLatin1String("border: 2px solid  #a0a0a0 ;\n"
"background-color: rgb(255, 128, 0);"));
        Color_CH_2 = new QLabel(ChannelColorSetting);
        Color_CH_2->setObjectName(QStringLiteral("Color_CH_2"));
        Color_CH_2->setGeometry(QRect(90, 120, 40, 20));
        Color_CH_2->setAutoFillBackground(false);
        Color_CH_2->setStyleSheet(QLatin1String("border: 2px solid  #a0a0a0 ;\n"
"background-color: rgb(255, 255, 128);"));
        Color_CH_3 = new QLabel(ChannelColorSetting);
        Color_CH_3->setObjectName(QStringLiteral("Color_CH_3"));
        Color_CH_3->setGeometry(QRect(90, 150, 40, 20));
        Color_CH_3->setAutoFillBackground(false);
        Color_CH_3->setStyleSheet(QLatin1String("border: 2px solid  #a0a0a0 ;\n"
"background-color: rgb(128, 255, 128);"));
        Color_CH_4 = new QLabel(ChannelColorSetting);
        Color_CH_4->setObjectName(QStringLiteral("Color_CH_4"));
        Color_CH_4->setGeometry(QRect(90, 210, 40, 20));
        Color_CH_4->setAutoFillBackground(false);
        Color_CH_4->setStyleSheet(QLatin1String("border: 2px solid  #a0a0a0 ;\n"
"background-color: rgb(255, 0, 0);"));
        Color_CH_5 = new QLabel(ChannelColorSetting);
        Color_CH_5->setObjectName(QStringLiteral("Color_CH_5"));
        Color_CH_5->setGeometry(QRect(90, 180, 40, 20));
        Color_CH_5->setAutoFillBackground(false);
        Color_CH_5->setStyleSheet(QLatin1String("border: 2px solid  #a0a0a0 ;\n"
"background-color: rgb(0, 0, 255);"));
        Color_CH_6 = new QLabel(ChannelColorSetting);
        Color_CH_6->setObjectName(QStringLiteral("Color_CH_6"));
        Color_CH_6->setGeometry(QRect(90, 240, 40, 20));
        Color_CH_6->setAutoFillBackground(false);
        Color_CH_6->setStyleSheet(QLatin1String("border: 2px solid  #a0a0a0 ;\n"
"background-color:rgb(255, 0, 255);"));
        Color_CH_7 = new QLabel(ChannelColorSetting);
        Color_CH_7->setObjectName(QStringLiteral("Color_CH_7"));
        Color_CH_7->setGeometry(QRect(90, 270, 40, 20));
        Color_CH_7->setAutoFillBackground(false);
        Color_CH_7->setStyleSheet(QLatin1String("border: 2px solid  #a0a0a0 ;\n"
"background-color: green;"));
        EditColor_CH_0 = new QPushButton(ChannelColorSetting);
        EditColor_CH_0->setObjectName(QStringLiteral("EditColor_CH_0"));
        EditColor_CH_0->setGeometry(QRect(135, 60, 20, 20));
        EditColor_CH_0->setMaximumSize(QSize(20, 20));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../Desktop/CAEN-UI/Edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        EditColor_CH_0->setIcon(icon2);
        EditColor_CH_0->setCheckable(false);
        EditColor_CH_0->setChecked(false);
        EditColor_CH_1 = new QPushButton(ChannelColorSetting);
        EditColor_CH_1->setObjectName(QStringLiteral("EditColor_CH_1"));
        EditColor_CH_1->setGeometry(QRect(135, 90, 20, 20));
        EditColor_CH_1->setMaximumSize(QSize(20, 20));
        EditColor_CH_1->setIcon(icon2);
        EditColor_CH_1->setCheckable(false);
        EditColor_CH_1->setChecked(false);
        EditColor_CH_2 = new QPushButton(ChannelColorSetting);
        EditColor_CH_2->setObjectName(QStringLiteral("EditColor_CH_2"));
        EditColor_CH_2->setGeometry(QRect(135, 120, 20, 20));
        EditColor_CH_2->setMaximumSize(QSize(20, 20));
        EditColor_CH_2->setIcon(icon2);
        EditColor_CH_2->setCheckable(false);
        EditColor_CH_2->setChecked(false);
        EditColor_CH_3 = new QPushButton(ChannelColorSetting);
        EditColor_CH_3->setObjectName(QStringLiteral("EditColor_CH_3"));
        EditColor_CH_3->setGeometry(QRect(135, 150, 20, 20));
        EditColor_CH_3->setMaximumSize(QSize(20, 20));
        EditColor_CH_3->setIcon(icon2);
        EditColor_CH_3->setCheckable(false);
        EditColor_CH_3->setChecked(false);
        EditColor_CH_4 = new QPushButton(ChannelColorSetting);
        EditColor_CH_4->setObjectName(QStringLiteral("EditColor_CH_4"));
        EditColor_CH_4->setGeometry(QRect(135, 180, 20, 20));
        EditColor_CH_4->setMaximumSize(QSize(20, 20));
        EditColor_CH_4->setIcon(icon2);
        EditColor_CH_4->setCheckable(false);
        EditColor_CH_4->setChecked(false);
        EditColor_CH_5 = new QPushButton(ChannelColorSetting);
        EditColor_CH_5->setObjectName(QStringLiteral("EditColor_CH_5"));
        EditColor_CH_5->setGeometry(QRect(135, 210, 20, 20));
        EditColor_CH_5->setMaximumSize(QSize(20, 20));
        EditColor_CH_5->setIcon(icon2);
        EditColor_CH_5->setCheckable(false);
        EditColor_CH_5->setChecked(false);
        EditColor_CH_6 = new QPushButton(ChannelColorSetting);
        EditColor_CH_6->setObjectName(QStringLiteral("EditColor_CH_6"));
        EditColor_CH_6->setGeometry(QRect(135, 240, 20, 20));
        EditColor_CH_6->setMaximumSize(QSize(20, 20));
        EditColor_CH_6->setIcon(icon2);
        EditColor_CH_6->setCheckable(false);
        EditColor_CH_6->setChecked(false);
        EditColor_CH_7 = new QPushButton(ChannelColorSetting);
        EditColor_CH_7->setObjectName(QStringLiteral("EditColor_CH_7"));
        EditColor_CH_7->setGeometry(QRect(135, 270, 20, 20));
        EditColor_CH_7->setMaximumSize(QSize(20, 20));
        EditColor_CH_7->setIcon(icon2);
        EditColor_CH_7->setCheckable(false);
        EditColor_CH_7->setChecked(false);
        WidthSignal_CH_3 = new QSpinBox(ChannelColorSetting);
        WidthSignal_CH_3->setObjectName(QStringLiteral("WidthSignal_CH_3"));
        WidthSignal_CH_3->setGeometry(QRect(178, 150, 40, 20));
        WidthSignal_CH_4 = new QSpinBox(ChannelColorSetting);
        WidthSignal_CH_4->setObjectName(QStringLiteral("WidthSignal_CH_4"));
        WidthSignal_CH_4->setGeometry(QRect(178, 180, 40, 20));
        WidthSignal_CH_5 = new QSpinBox(ChannelColorSetting);
        WidthSignal_CH_5->setObjectName(QStringLiteral("WidthSignal_CH_5"));
        WidthSignal_CH_5->setGeometry(QRect(178, 210, 40, 20));
        WidthSignal_CH_6 = new QSpinBox(ChannelColorSetting);
        WidthSignal_CH_6->setObjectName(QStringLiteral("WidthSignal_CH_6"));
        WidthSignal_CH_6->setGeometry(QRect(178, 240, 40, 20));
        WidthSignal_CH_7 = new QSpinBox(ChannelColorSetting);
        WidthSignal_CH_7->setObjectName(QStringLiteral("WidthSignal_CH_7"));
        WidthSignal_CH_7->setGeometry(QRect(178, 270, 40, 20));
        WidthSignal_CH_0 = new QSpinBox(ChannelColorSetting);
        WidthSignal_CH_0->setObjectName(QStringLiteral("WidthSignal_CH_0"));
        WidthSignal_CH_0->setGeometry(QRect(178, 60, 40, 20));
        WidthSignal_CH_2 = new QSpinBox(ChannelColorSetting);
        WidthSignal_CH_2->setObjectName(QStringLiteral("WidthSignal_CH_2"));
        WidthSignal_CH_2->setGeometry(QRect(178, 120, 40, 20));
        WidthSignal_CH_1 = new QSpinBox(ChannelColorSetting);
        WidthSignal_CH_1->setObjectName(QStringLiteral("WidthSignal_CH_1"));
        WidthSignal_CH_1->setGeometry(QRect(178, 90, 40, 20));
        WidthTrigger_CH_5 = new QSpinBox(ChannelColorSetting);
        WidthTrigger_CH_5->setObjectName(QStringLiteral("WidthTrigger_CH_5"));
        WidthTrigger_CH_5->setGeometry(QRect(400, 210, 40, 20));
        WidthTrigger_CH_1 = new QSpinBox(ChannelColorSetting);
        WidthTrigger_CH_1->setObjectName(QStringLiteral("WidthTrigger_CH_1"));
        WidthTrigger_CH_1->setGeometry(QRect(400, 90, 40, 20));
        WidthTrigger_CH_3 = new QSpinBox(ChannelColorSetting);
        WidthTrigger_CH_3->setObjectName(QStringLiteral("WidthTrigger_CH_3"));
        WidthTrigger_CH_3->setGeometry(QRect(400, 150, 40, 20));
        WidthTrigger_CH_4 = new QSpinBox(ChannelColorSetting);
        WidthTrigger_CH_4->setObjectName(QStringLiteral("WidthTrigger_CH_4"));
        WidthTrigger_CH_4->setGeometry(QRect(400, 180, 40, 20));
        WidthTrigger_CH_0 = new QSpinBox(ChannelColorSetting);
        WidthTrigger_CH_0->setObjectName(QStringLiteral("WidthTrigger_CH_0"));
        WidthTrigger_CH_0->setGeometry(QRect(400, 60, 40, 20));
        WidthTrigger_CH_2 = new QSpinBox(ChannelColorSetting);
        WidthTrigger_CH_2->setObjectName(QStringLiteral("WidthTrigger_CH_2"));
        WidthTrigger_CH_2->setGeometry(QRect(400, 120, 40, 20));
        WidthTrigger_CH_6 = new QSpinBox(ChannelColorSetting);
        WidthTrigger_CH_6->setObjectName(QStringLiteral("WidthTrigger_CH_6"));
        WidthTrigger_CH_6->setGeometry(QRect(400, 240, 40, 20));
        WidthTrigger_CH_7 = new QSpinBox(ChannelColorSetting);
        WidthTrigger_CH_7->setObjectName(QStringLiteral("WidthTrigger_CH_7"));
        WidthTrigger_CH_7->setGeometry(QRect(400, 270, 40, 20));
        TrigLine_CH_0 = new QComboBox(ChannelColorSetting);
        TrigLine_CH_0->setObjectName(QStringLiteral("TrigLine_CH_0"));
        TrigLine_CH_0->setGeometry(QRect(240, 60, 120, 20));
        TrigLine_CH_1 = new QComboBox(ChannelColorSetting);
        TrigLine_CH_1->setObjectName(QStringLiteral("TrigLine_CH_1"));
        TrigLine_CH_1->setGeometry(QRect(240, 90, 120, 20));
        TrigLine_CH_2 = new QComboBox(ChannelColorSetting);
        TrigLine_CH_2->setObjectName(QStringLiteral("TrigLine_CH_2"));
        TrigLine_CH_2->setGeometry(QRect(240, 120, 120, 20));
        TrigLine_CH_3 = new QComboBox(ChannelColorSetting);
        TrigLine_CH_3->setObjectName(QStringLiteral("TrigLine_CH_3"));
        TrigLine_CH_3->setGeometry(QRect(240, 150, 120, 20));
        TrigLine_CH_4 = new QComboBox(ChannelColorSetting);
        TrigLine_CH_4->setObjectName(QStringLiteral("TrigLine_CH_4"));
        TrigLine_CH_4->setGeometry(QRect(240, 180, 120, 20));
        TrigLine_CH_5 = new QComboBox(ChannelColorSetting);
        TrigLine_CH_5->setObjectName(QStringLiteral("TrigLine_CH_5"));
        TrigLine_CH_5->setGeometry(QRect(240, 210, 120, 20));
        TrigLine_CH_6 = new QComboBox(ChannelColorSetting);
        TrigLine_CH_6->setObjectName(QStringLiteral("TrigLine_CH_6"));
        TrigLine_CH_6->setGeometry(QRect(240, 240, 120, 20));
        TrigLine_CH_7 = new QComboBox(ChannelColorSetting);
        TrigLine_CH_7->setObjectName(QStringLiteral("TrigLine_CH_7"));
        TrigLine_CH_7->setGeometry(QRect(240, 270, 120, 20));
        currentWDFLabel = new QLabel(ChannelColorSetting);
        currentWDFLabel->setObjectName(QStringLiteral("currentWDFLabel"));
        currentWDFLabel->setGeometry(QRect(60, 0, 91, 16));
        currentWDFInColorTab = new QComboBox(ChannelColorSetting);
        currentWDFInColorTab->setObjectName(QStringLiteral("currentWDFInColorTab"));
        currentWDFInColorTab->setGeometry(QRect(170, 0, 31, 22));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../Desktop/CAEN-UI/Setting/2.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(ChannelColorSetting, icon3, QString());
        ViewerSetting = new QWidget();
        ViewerSetting->setObjectName(QStringLiteral("ViewerSetting"));
        groupBox = new QGroupBox(ViewerSetting);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 70, 91, 51));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 40, 20));
        label->setAutoFillBackground(false);
        label->setStyleSheet(QLatin1String("border: 2px solid #a0a0a0;\n"
"background-color: rgb(0, 0, 0);"));
        postTriggerIsDrawing = new QPushButton(groupBox);
        postTriggerIsDrawing->setObjectName(QStringLiteral("postTriggerIsDrawing"));
        postTriggerIsDrawing->setGeometry(QRect(60, 20, 20, 20));
        postTriggerIsDrawing->setMaximumSize(QSize(20, 20));
        postTriggerIsDrawing->setIcon(icon2);
        postTriggerIsDrawing->setCheckable(false);
        postTriggerIsDrawing->setChecked(false);
        groupBox_2 = new QGroupBox(ViewerSetting);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(110, 70, 271, 51));
        postTriggerIsDrawing_10 = new QPushButton(groupBox_2);
        postTriggerIsDrawing_10->setObjectName(QStringLiteral("postTriggerIsDrawing_10"));
        postTriggerIsDrawing_10->setGeometry(QRect(60, 20, 20, 20));
        postTriggerIsDrawing_10->setMaximumSize(QSize(20, 20));
        postTriggerIsDrawing_10->setIcon(icon2);
        postTriggerIsDrawing_10->setCheckable(false);
        postTriggerIsDrawing_10->setChecked(false);
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 20, 40, 20));
        label_10->setAutoFillBackground(false);
        label_10->setStyleSheet(QLatin1String("border: 2px solid #a0a0a0;\n"
"background-color: rgb(192, 192, 192);"));
        spinBox = new QSpinBox(groupBox_2);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(90, 20, 40, 20));
        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(140, 20, 121, 20));
        groupBox_3 = new QGroupBox(ViewerSetting);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 10, 70, 50));
        comboBox_3 = new QComboBox(groupBox_3);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(10, 20, 50, 20));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../Desktop/CAEN-UI/Setting/3.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(ViewerSetting, icon4, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        SettingsWindowController->setCentralWidget(centralWidget);

        retranslateUi(SettingsWindowController);
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsWindowController, SLOT(close()));
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingsWindowController, SLOT(acceptedSlot()));
        QObject::connect(currentWDFInColorTab, SIGNAL(currentIndexChanged(int)), SettingsWindowController, SLOT(WDFChangedInChannelTabSlot(int)));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SettingsWindowController);
    } // setupUi

    void retranslateUi(QMainWindow *SettingsWindowController)
    {
        SettingsWindowController->setWindowTitle(QApplication::translate("SettingsWindowController", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", 0));
#ifndef QT_NO_TOOLTIP
        tabWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem = VMECommSetting->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("SettingsWindowController", "\320\242\320\270\320\277 \321\201\320\262\321\217\320\267\320\270", 0));
        QTableWidgetItem *___qtablewidgetitem1 = VMECommSetting->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("SettingsWindowController", "\320\235\320\276\320\274\320\265\321\200 \321\201\320\267\321\217\320\267\320\270", 0));
        QTableWidgetItem *___qtablewidgetitem2 = VMECommSetting->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QApplication::translate("SettingsWindowController", "\320\235\320\276\320\274\320\265\321\200 \321\203\320\267\320\273\320\260", 0));
        QTableWidgetItem *___qtablewidgetitem3 = VMECommSetting->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QApplication::translate("SettingsWindowController", "\320\221\320\260\320\267\320\276\320\262\321\213\320\271 \320\260\320\264\321\200\320\265\321\201", 0));
        QTableWidgetItem *___qtablewidgetitem4 = VMECommSetting->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("SettingsWindowController", "1", 0));
        QTableWidgetItem *___qtablewidgetitem5 = VMECommSetting->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("SettingsWindowController", "2", 0));
        QTableWidgetItem *___qtablewidgetitem6 = VMECommSetting->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("SettingsWindowController", "3", 0));
        QTableWidgetItem *___qtablewidgetitem7 = VMECommSetting->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("SettingsWindowController", "4", 0));
        QTableWidgetItem *___qtablewidgetitem8 = VMECommSetting->verticalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("SettingsWindowController", "5", 0));
        QTableWidgetItem *___qtablewidgetitem9 = VMECommSetting->verticalHeaderItem(5);
        ___qtablewidgetitem9->setText(QApplication::translate("SettingsWindowController", "6", 0));
        QTableWidgetItem *___qtablewidgetitem10 = VMECommSetting->verticalHeaderItem(6);
        ___qtablewidgetitem10->setText(QApplication::translate("SettingsWindowController", "7", 0));
        QTableWidgetItem *___qtablewidgetitem11 = VMECommSetting->verticalHeaderItem(7);
        ___qtablewidgetitem11->setText(QApplication::translate("SettingsWindowController", "8", 0));
        QTableWidgetItem *___qtablewidgetitem12 = VMECommSetting->verticalHeaderItem(8);
        ___qtablewidgetitem12->setText(QApplication::translate("SettingsWindowController", "9", 0));

        const bool __sortingEnabled = VMECommSetting->isSortingEnabled();
        VMECommSetting->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem13 = VMECommSetting->item(0, 1);
        ___qtablewidgetitem13->setText(QApplication::translate("SettingsWindowController", "\320\236\320\277\321\202\320\270\321\207\320\265\321\201\320\272\320\260\321\217", 0));
        QTableWidgetItem *___qtablewidgetitem14 = VMECommSetting->item(0, 2);
        ___qtablewidgetitem14->setText(QApplication::translate("SettingsWindowController", "0", 0));
        QTableWidgetItem *___qtablewidgetitem15 = VMECommSetting->item(0, 3);
        ___qtablewidgetitem15->setText(QApplication::translate("SettingsWindowController", "0", 0));
        QTableWidgetItem *___qtablewidgetitem16 = VMECommSetting->item(0, 4);
        ___qtablewidgetitem16->setText(QApplication::translate("SettingsWindowController", "0x32100000", 0));
        QTableWidgetItem *___qtablewidgetitem17 = VMECommSetting->item(1, 1);
        ___qtablewidgetitem17->setText(QApplication::translate("SettingsWindowController", "\320\236\320\277\321\202\320\270\321\207\320\265\321\201\320\272\320\260\321\217", 0));
        QTableWidgetItem *___qtablewidgetitem18 = VMECommSetting->item(1, 2);
        ___qtablewidgetitem18->setText(QApplication::translate("SettingsWindowController", "0", 0));
        QTableWidgetItem *___qtablewidgetitem19 = VMECommSetting->item(1, 3);
        ___qtablewidgetitem19->setText(QApplication::translate("SettingsWindowController", "1", 0));
        QTableWidgetItem *___qtablewidgetitem20 = VMECommSetting->item(1, 4);
        ___qtablewidgetitem20->setText(QApplication::translate("SettingsWindowController", "0x42100000", 0));
        QTableWidgetItem *___qtablewidgetitem21 = VMECommSetting->item(2, 1);
        ___qtablewidgetitem21->setText(QApplication::translate("SettingsWindowController", "\320\236\320\277\321\202\320\270\321\207\320\265\321\201\320\272\320\260\321\217", 0));
        QTableWidgetItem *___qtablewidgetitem22 = VMECommSetting->item(2, 2);
        ___qtablewidgetitem22->setText(QApplication::translate("SettingsWindowController", "0", 0));
        QTableWidgetItem *___qtablewidgetitem23 = VMECommSetting->item(2, 3);
        ___qtablewidgetitem23->setText(QApplication::translate("SettingsWindowController", "2", 0));
        QTableWidgetItem *___qtablewidgetitem24 = VMECommSetting->item(3, 1);
        ___qtablewidgetitem24->setText(QApplication::translate("SettingsWindowController", "\320\236\320\277\321\202\320\270\321\207\320\265\321\201\320\272\320\260\321\217", 0));
        QTableWidgetItem *___qtablewidgetitem25 = VMECommSetting->item(3, 2);
        ___qtablewidgetitem25->setText(QApplication::translate("SettingsWindowController", "0", 0));
        QTableWidgetItem *___qtablewidgetitem26 = VMECommSetting->item(3, 3);
        ___qtablewidgetitem26->setText(QApplication::translate("SettingsWindowController", "3", 0));
        QTableWidgetItem *___qtablewidgetitem27 = VMECommSetting->item(4, 1);
        ___qtablewidgetitem27->setText(QApplication::translate("SettingsWindowController", "\320\236\320\277\321\202\320\270\321\207\320\265\321\201\320\272\320\260\321\217", 0));
        QTableWidgetItem *___qtablewidgetitem28 = VMECommSetting->item(4, 2);
        ___qtablewidgetitem28->setText(QApplication::translate("SettingsWindowController", "0", 0));
        QTableWidgetItem *___qtablewidgetitem29 = VMECommSetting->item(4, 3);
        ___qtablewidgetitem29->setText(QApplication::translate("SettingsWindowController", "4", 0));
        QTableWidgetItem *___qtablewidgetitem30 = VMECommSetting->item(5, 1);
        ___qtablewidgetitem30->setText(QApplication::translate("SettingsWindowController", "\320\236\320\277\321\202\320\270\321\207\320\265\321\201\320\272\320\260\321\217", 0));
        QTableWidgetItem *___qtablewidgetitem31 = VMECommSetting->item(5, 2);
        ___qtablewidgetitem31->setText(QApplication::translate("SettingsWindowController", "0", 0));
        QTableWidgetItem *___qtablewidgetitem32 = VMECommSetting->item(5, 3);
        ___qtablewidgetitem32->setText(QApplication::translate("SettingsWindowController", "5", 0));
        QTableWidgetItem *___qtablewidgetitem33 = VMECommSetting->item(6, 1);
        ___qtablewidgetitem33->setText(QApplication::translate("SettingsWindowController", "\320\236\320\277\321\202\320\270\321\207\320\265\321\201\320\272\320\260\321\217", 0));
        QTableWidgetItem *___qtablewidgetitem34 = VMECommSetting->item(6, 2);
        ___qtablewidgetitem34->setText(QApplication::translate("SettingsWindowController", "0", 0));
        QTableWidgetItem *___qtablewidgetitem35 = VMECommSetting->item(6, 3);
        ___qtablewidgetitem35->setText(QApplication::translate("SettingsWindowController", "6", 0));
        QTableWidgetItem *___qtablewidgetitem36 = VMECommSetting->item(7, 1);
        ___qtablewidgetitem36->setText(QApplication::translate("SettingsWindowController", "\320\236\320\277\321\202\320\270\321\207\320\265\321\201\320\272\320\260\321\217", 0));
        QTableWidgetItem *___qtablewidgetitem37 = VMECommSetting->item(7, 2);
        ___qtablewidgetitem37->setText(QApplication::translate("SettingsWindowController", "0", 0));
        QTableWidgetItem *___qtablewidgetitem38 = VMECommSetting->item(7, 3);
        ___qtablewidgetitem38->setText(QApplication::translate("SettingsWindowController", "7", 0));
        QTableWidgetItem *___qtablewidgetitem39 = VMECommSetting->item(8, 1);
        ___qtablewidgetitem39->setText(QApplication::translate("SettingsWindowController", "\320\236\320\277\321\202\320\270\321\207\320\265\321\201\320\272\320\260\321\217", 0));
        QTableWidgetItem *___qtablewidgetitem40 = VMECommSetting->item(8, 2);
        ___qtablewidgetitem40->setText(QApplication::translate("SettingsWindowController", "0", 0));
        QTableWidgetItem *___qtablewidgetitem41 = VMECommSetting->item(8, 3);
        ___qtablewidgetitem41->setText(QApplication::translate("SettingsWindowController", "8", 0));
        VMECommSetting->setSortingEnabled(__sortingEnabled);

        WDF1->setText(QString());
        WDF2->setText(QString());
        WDF3->setText(QString());
        WDF4->setText(QString());
        WDF5->setText(QString());
        WDF6->setText(QString());
        WDF7->setText(QString());
        WDF8->setText(QString());
        WDF9->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(activeWDFs), QString());
        QTableWidgetItem *___qtablewidgetitem42 = ColorSetting->horizontalHeaderItem(0);
        ___qtablewidgetitem42->setText(QApplication::translate("SettingsWindowController", "\320\232\320\260\320\275\320\260\320\273", 0));
        QTableWidgetItem *___qtablewidgetitem43 = ColorSetting->horizontalHeaderItem(1);
        ___qtablewidgetitem43->setText(QApplication::translate("SettingsWindowController", "\320\246\320\262\320\265\321\202", 0));
        QTableWidgetItem *___qtablewidgetitem44 = ColorSetting->horizontalHeaderItem(2);
        ___qtablewidgetitem44->setText(QApplication::translate("SettingsWindowController", "\320\250\320\270\321\200\320\270\320\275\320\260", 0));
        QTableWidgetItem *___qtablewidgetitem45 = ColorSetting->horizontalHeaderItem(3);
        ___qtablewidgetitem45->setText(QApplication::translate("SettingsWindowController", "\320\233\320\270\320\275\320\270\321\217 \320\277\320\276\321\200\320\276\320\263\320\260", 0));
        QTableWidgetItem *___qtablewidgetitem46 = ColorSetting->horizontalHeaderItem(4);
        ___qtablewidgetitem46->setText(QApplication::translate("SettingsWindowController", "\320\250\320\270\321\200\320\270\320\275\320\260 \320\277\320\276\321\200\320\276\320\263\320\260", 0));
        QTableWidgetItem *___qtablewidgetitem47 = ColorSetting->verticalHeaderItem(0);
        ___qtablewidgetitem47->setText(QApplication::translate("SettingsWindowController", "1", 0));
        QTableWidgetItem *___qtablewidgetitem48 = ColorSetting->verticalHeaderItem(1);
        ___qtablewidgetitem48->setText(QApplication::translate("SettingsWindowController", "2", 0));
        QTableWidgetItem *___qtablewidgetitem49 = ColorSetting->verticalHeaderItem(2);
        ___qtablewidgetitem49->setText(QApplication::translate("SettingsWindowController", "3", 0));
        QTableWidgetItem *___qtablewidgetitem50 = ColorSetting->verticalHeaderItem(3);
        ___qtablewidgetitem50->setText(QApplication::translate("SettingsWindowController", "4", 0));
        QTableWidgetItem *___qtablewidgetitem51 = ColorSetting->verticalHeaderItem(4);
        ___qtablewidgetitem51->setText(QApplication::translate("SettingsWindowController", "5", 0));
        QTableWidgetItem *___qtablewidgetitem52 = ColorSetting->verticalHeaderItem(5);
        ___qtablewidgetitem52->setText(QApplication::translate("SettingsWindowController", "6", 0));
        QTableWidgetItem *___qtablewidgetitem53 = ColorSetting->verticalHeaderItem(6);
        ___qtablewidgetitem53->setText(QApplication::translate("SettingsWindowController", "7", 0));
        QTableWidgetItem *___qtablewidgetitem54 = ColorSetting->verticalHeaderItem(7);
        ___qtablewidgetitem54->setText(QApplication::translate("SettingsWindowController", "8", 0));

        const bool __sortingEnabled1 = ColorSetting->isSortingEnabled();
        ColorSetting->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem55 = ColorSetting->item(0, 0);
        ___qtablewidgetitem55->setText(QApplication::translate("SettingsWindowController", "CH0", 0));
        QTableWidgetItem *___qtablewidgetitem56 = ColorSetting->item(1, 0);
        ___qtablewidgetitem56->setText(QApplication::translate("SettingsWindowController", "CH1", 0));
        QTableWidgetItem *___qtablewidgetitem57 = ColorSetting->item(2, 0);
        ___qtablewidgetitem57->setText(QApplication::translate("SettingsWindowController", "CH2", 0));
        QTableWidgetItem *___qtablewidgetitem58 = ColorSetting->item(3, 0);
        ___qtablewidgetitem58->setText(QApplication::translate("SettingsWindowController", "CH3", 0));
        QTableWidgetItem *___qtablewidgetitem59 = ColorSetting->item(4, 0);
        ___qtablewidgetitem59->setText(QApplication::translate("SettingsWindowController", "CH4", 0));
        QTableWidgetItem *___qtablewidgetitem60 = ColorSetting->item(5, 0);
        ___qtablewidgetitem60->setText(QApplication::translate("SettingsWindowController", "CH5", 0));
        QTableWidgetItem *___qtablewidgetitem61 = ColorSetting->item(6, 0);
        ___qtablewidgetitem61->setText(QApplication::translate("SettingsWindowController", "CH6", 0));
        QTableWidgetItem *___qtablewidgetitem62 = ColorSetting->item(7, 0);
        ___qtablewidgetitem62->setText(QApplication::translate("SettingsWindowController", "CH7", 0));
        ColorSetting->setSortingEnabled(__sortingEnabled1);

        Color_CH_0->setText(QString());
        Color_CH_1->setText(QString());
        Color_CH_2->setText(QString());
        Color_CH_3->setText(QString());
        Color_CH_4->setText(QString());
        Color_CH_5->setText(QString());
        Color_CH_6->setText(QString());
        Color_CH_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        EditColor_CH_0->setToolTip(QApplication::translate("SettingsWindowController", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0));
#endif // QT_NO_TOOLTIP
        EditColor_CH_0->setText(QString());
#ifndef QT_NO_TOOLTIP
        EditColor_CH_1->setToolTip(QApplication::translate("SettingsWindowController", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0));
#endif // QT_NO_TOOLTIP
        EditColor_CH_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        EditColor_CH_2->setToolTip(QApplication::translate("SettingsWindowController", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0));
#endif // QT_NO_TOOLTIP
        EditColor_CH_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        EditColor_CH_3->setToolTip(QApplication::translate("SettingsWindowController", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0));
#endif // QT_NO_TOOLTIP
        EditColor_CH_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        EditColor_CH_4->setToolTip(QApplication::translate("SettingsWindowController", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0));
#endif // QT_NO_TOOLTIP
        EditColor_CH_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        EditColor_CH_5->setToolTip(QApplication::translate("SettingsWindowController", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0));
#endif // QT_NO_TOOLTIP
        EditColor_CH_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        EditColor_CH_6->setToolTip(QApplication::translate("SettingsWindowController", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0));
#endif // QT_NO_TOOLTIP
        EditColor_CH_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        EditColor_CH_7->setToolTip(QApplication::translate("SettingsWindowController", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0));
#endif // QT_NO_TOOLTIP
        EditColor_CH_7->setText(QString());
        TrigLine_CH_0->clear();
        TrigLine_CH_0->insertItems(0, QStringList()
         << QApplication::translate("SettingsWindowController", "\320\241\320\277\320\273\320\276\321\210\320\275\320\260\321\217", 0)
         << QApplication::translate("SettingsWindowController", "\320\237\321\203\320\275\320\272\321\202\320\270\321\200\320\275\320\260\321\217", 0)
         << QApplication::translate("SettingsWindowController", "\320\250\321\202\321\200\320\270\321\205\320\277\321\203\320\275\320\272\321\202\320\270\321\200\320\275\320\260\321\217", 0)
        );
        TrigLine_CH_1->clear();
        TrigLine_CH_1->insertItems(0, QStringList()
         << QApplication::translate("SettingsWindowController", "\320\241\320\277\320\273\320\276\321\210\320\275\320\260\321\217", 0)
         << QApplication::translate("SettingsWindowController", "\320\237\321\203\320\275\320\272\321\202\320\270\321\200\320\275\320\260\321\217", 0)
         << QApplication::translate("SettingsWindowController", "\320\250\321\202\321\200\320\270\321\205\320\277\321\203\320\275\320\272\321\202\320\270\321\200\320\275\320\260\321\217", 0)
        );
        TrigLine_CH_2->clear();
        TrigLine_CH_2->insertItems(0, QStringList()
         << QApplication::translate("SettingsWindowController", "\320\241\320\277\320\273\320\276\321\210\320\275\320\260\321\217", 0)
         << QApplication::translate("SettingsWindowController", "\320\237\321\203\320\275\320\272\321\202\320\270\321\200\320\275\320\260\321\217", 0)
         << QApplication::translate("SettingsWindowController", "\320\250\321\202\321\200\320\270\321\205\320\277\321\203\320\275\320\272\321\202\320\270\321\200\320\275\320\260\321\217", 0)
        );
        TrigLine_CH_3->clear();
        TrigLine_CH_3->insertItems(0, QStringList()
         << QApplication::translate("SettingsWindowController", "\320\241\320\277\320\273\320\276\321\210\320\275\320\260\321\217", 0)
         << QApplication::translate("SettingsWindowController", "\320\237\321\203\320\275\320\272\321\202\320\270\321\200\320\275\320\260\321\217", 0)
         << QApplication::translate("SettingsWindowController", "\320\250\321\202\321\200\320\270\321\205\320\277\321\203\320\275\320\272\321\202\320\270\321\200\320\275\320\260\321\217", 0)
        );
        TrigLine_CH_4->clear();
        TrigLine_CH_4->insertItems(0, QStringList()
         << QApplication::translate("SettingsWindowController", "\320\241\320\277\320\273\320\276\321\210\320\275\320\260\321\217", 0)
         << QApplication::translate("SettingsWindowController", "\320\237\321\203\320\275\320\272\321\202\320\270\321\200\320\275\320\260\321\217", 0)
         << QApplication::translate("SettingsWindowController", "\320\250\321\202\321\200\320\270\321\205\320\277\321\203\320\275\320\272\321\202\320\270\321\200\320\275\320\260\321\217", 0)
        );
        TrigLine_CH_5->clear();
        TrigLine_CH_5->insertItems(0, QStringList()
         << QApplication::translate("SettingsWindowController", "\320\241\320\277\320\273\320\276\321\210\320\275\320\260\321\217", 0)
         << QApplication::translate("SettingsWindowController", "\320\237\321\203\320\275\320\272\321\202\320\270\321\200\320\275\320\260\321\217", 0)
         << QApplication::translate("SettingsWindowController", "\320\250\321\202\321\200\320\270\321\205\320\277\321\203\320\275\320\272\321\202\320\270\321\200\320\275\320\260\321\217", 0)
        );
        TrigLine_CH_6->clear();
        TrigLine_CH_6->insertItems(0, QStringList()
         << QApplication::translate("SettingsWindowController", "\320\241\320\277\320\273\320\276\321\210\320\275\320\260\321\217", 0)
         << QApplication::translate("SettingsWindowController", "\320\237\321\203\320\275\320\272\321\202\320\270\321\200\320\275\320\260\321\217", 0)
         << QApplication::translate("SettingsWindowController", "\320\250\321\202\321\200\320\270\321\205\320\277\321\203\320\275\320\272\321\202\320\270\321\200\320\275\320\260\321\217", 0)
        );
        TrigLine_CH_7->clear();
        TrigLine_CH_7->insertItems(0, QStringList()
         << QApplication::translate("SettingsWindowController", "\320\241\320\277\320\273\320\276\321\210\320\275\320\260\321\217", 0)
         << QApplication::translate("SettingsWindowController", "\320\237\321\203\320\275\320\272\321\202\320\270\321\200\320\275\320\260\321\217", 0)
         << QApplication::translate("SettingsWindowController", "\320\250\321\202\321\200\320\270\321\205\320\277\321\203\320\275\320\272\321\202\320\270\321\200\320\275\320\260\321\217", 0)
        );
        currentWDFLabel->setText(QApplication::translate("SettingsWindowController", "\320\242\320\265\320\272\321\203\321\211\320\260\321\217 \320\277\320\273\320\260\321\202\320\260:", 0));
        currentWDFInColorTab->clear();
        currentWDFInColorTab->insertItems(0, QStringList()
         << QApplication::translate("SettingsWindowController", "1", 0)
         << QApplication::translate("SettingsWindowController", "2", 0)
         << QApplication::translate("SettingsWindowController", "3", 0)
         << QApplication::translate("SettingsWindowController", "4", 0)
         << QApplication::translate("SettingsWindowController", "5", 0)
         << QApplication::translate("SettingsWindowController", "6", 0)
         << QApplication::translate("SettingsWindowController", "7", 0)
         << QApplication::translate("SettingsWindowController", "8", 0)
         << QApplication::translate("SettingsWindowController", "9", 0)
        );
        tabWidget->setTabText(tabWidget->indexOf(ChannelColorSetting), QString());
        groupBox->setTitle(QApplication::translate("SettingsWindowController", "\320\227\320\260\320\264\320\275\320\270\320\271 \320\277\320\273\320\260\320\275 ", 0));
        label->setText(QString());
#ifndef QT_NO_TOOLTIP
        postTriggerIsDrawing->setToolTip(QApplication::translate("SettingsWindowController", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0));
#endif // QT_NO_TOOLTIP
        postTriggerIsDrawing->setText(QString());
        groupBox_2->setTitle(QApplication::translate("SettingsWindowController", "\320\241\320\265\321\202\320\272\320\260", 0));
#ifndef QT_NO_TOOLTIP
        postTriggerIsDrawing_10->setToolTip(QApplication::translate("SettingsWindowController", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0));
#endif // QT_NO_TOOLTIP
        postTriggerIsDrawing_10->setText(QString());
        label_10->setText(QString());
#ifndef QT_NO_TOOLTIP
        spinBox->setToolTip(QApplication::translate("SettingsWindowController", "Width", 0));
#endif // QT_NO_TOOLTIP
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("SettingsWindowController", "\320\221\320\265\320\267 \321\201\320\265\321\202\320\272\320\270", 0)
         << QApplication::translate("SettingsWindowController", "\320\241\320\277\320\273\320\276\321\210\320\275\320\260\321\217", 0)
         << QApplication::translate("SettingsWindowController", "\320\237\321\203\320\275\320\272\321\202\320\270\321\200\320\275\320\260\321\217", 0)
         << QApplication::translate("SettingsWindowController", "\320\250\321\202\321\200\320\270\321\205\320\277\321\203\320\275\320\272\321\202\320\270\321\200\320\275\320\260\321\217", 0)
        );
#ifndef QT_NO_TOOLTIP
        groupBox_3->setToolTip(QApplication::translate("SettingsWindowController", "\320\242\320\270\320\277 \320\262\321\205\320\276\320\264\321\217\321\211\320\265\320\263\320\276/\320\270\321\201\321\205\320\276\320\264\321\217\321\211\320\265\320\263\320\276 \321\201\320\270\320\263\320\275\320\260\320\273\320\260", 0));
#endif // QT_NO_TOOLTIP
        groupBox_3->setTitle(QApplication::translate("SettingsWindowController", "I/O", 0));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("SettingsWindowController", "NIM", 0)
         << QApplication::translate("SettingsWindowController", "TTL", 0)
        );
        tabWidget->setTabText(tabWidget->indexOf(ViewerSetting), QString());
    } // retranslateUi

};

namespace Ui {
    class SettingsWindowController: public Ui_SettingsWindowController {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWINDOW_H
