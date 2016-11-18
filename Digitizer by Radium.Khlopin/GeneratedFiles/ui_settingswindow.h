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
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsWindowController
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *activeWDFs;
    QWidget *gridLayoutWidget;
    QGridLayout *WDFLayout;
    QCheckBox *WDF2;
    QCheckBox *WDF1;
    QCheckBox *WDF3;
    QCheckBox *WDF4;
    QCheckBox *WDF5;
    QCheckBox *WDF6;
    QCheckBox *WDF7;
    QCheckBox *WDF8;
    QCheckBox *WDF9;
    QWidget *tab_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QMainWindow *SettingsWindowController)
    {
        if (SettingsWindowController->objectName().isEmpty())
            SettingsWindowController->setObjectName(QStringLiteral("SettingsWindowController"));
        SettingsWindowController->setEnabled(true);
        SettingsWindowController->resize(630, 360);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SettingsWindowController->sizePolicy().hasHeightForWidth());
        SettingsWindowController->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(SettingsWindowController);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(30, 10, 581, 291));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setTabBarAutoHide(false);
        activeWDFs = new QWidget();
        activeWDFs->setObjectName(QStringLiteral("activeWDFs"));
        gridLayoutWidget = new QWidget(activeWDFs);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 0, 291, 141));
        WDFLayout = new QGridLayout(gridLayoutWidget);
        WDFLayout->setSpacing(6);
        WDFLayout->setContentsMargins(11, 11, 11, 11);
        WDFLayout->setObjectName(QStringLiteral("WDFLayout"));
        WDFLayout->setContentsMargins(0, 0, 0, 0);
        WDF2 = new QCheckBox(gridLayoutWidget);
        WDF2->setObjectName(QStringLiteral("WDF2"));

        WDFLayout->addWidget(WDF2, 0, 1, 1, 1);

        WDF1 = new QCheckBox(gridLayoutWidget);
        WDF1->setObjectName(QStringLiteral("WDF1"));

        WDFLayout->addWidget(WDF1, 0, 0, 1, 1);

        WDF3 = new QCheckBox(gridLayoutWidget);
        WDF3->setObjectName(QStringLiteral("WDF3"));

        WDFLayout->addWidget(WDF3, 0, 2, 1, 1);

        WDF4 = new QCheckBox(gridLayoutWidget);
        WDF4->setObjectName(QStringLiteral("WDF4"));

        WDFLayout->addWidget(WDF4, 1, 0, 1, 1);

        WDF5 = new QCheckBox(gridLayoutWidget);
        WDF5->setObjectName(QStringLiteral("WDF5"));

        WDFLayout->addWidget(WDF5, 1, 1, 1, 1);

        WDF6 = new QCheckBox(gridLayoutWidget);
        WDF6->setObjectName(QStringLiteral("WDF6"));

        WDFLayout->addWidget(WDF6, 1, 2, 1, 1);

        WDF7 = new QCheckBox(gridLayoutWidget);
        WDF7->setObjectName(QStringLiteral("WDF7"));

        WDFLayout->addWidget(WDF7, 2, 0, 1, 1);

        WDF8 = new QCheckBox(gridLayoutWidget);
        WDF8->setObjectName(QStringLiteral("WDF8"));

        WDFLayout->addWidget(WDF8, 2, 1, 1, 1);

        WDF9 = new QCheckBox(gridLayoutWidget);
        WDF9->setObjectName(QStringLiteral("WDF9"));

        WDFLayout->addWidget(WDF9, 2, 2, 1, 1);

        tabWidget->addTab(activeWDFs, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        buttonBox = new QDialogButtonBox(centralWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(450, 320, 161, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        SettingsWindowController->setCentralWidget(centralWidget);

        retranslateUi(SettingsWindowController);
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsWindowController, SLOT(close()));
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingsWindowController, SLOT(acceptedSlot()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsWindowController);
    } // setupUi

    void retranslateUi(QMainWindow *SettingsWindowController)
    {
        SettingsWindowController->setWindowTitle(QApplication::translate("SettingsWindowController", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", 0));
        WDF2->setText(QApplication::translate("SettingsWindowController", "WDF2", 0));
        WDF1->setText(QApplication::translate("SettingsWindowController", "WDF1", 0));
        WDF3->setText(QApplication::translate("SettingsWindowController", "WDF3", 0));
        WDF4->setText(QApplication::translate("SettingsWindowController", "WDF4", 0));
        WDF5->setText(QApplication::translate("SettingsWindowController", "WDF5", 0));
        WDF6->setText(QApplication::translate("SettingsWindowController", "WDF6", 0));
        WDF7->setText(QApplication::translate("SettingsWindowController", "WDF7", 0));
        WDF8->setText(QApplication::translate("SettingsWindowController", "WDF8", 0));
        WDF9->setText(QApplication::translate("SettingsWindowController", "WDF9", 0));
        tabWidget->setTabText(tabWidget->indexOf(activeWDFs), QApplication::translate("SettingsWindowController", "\320\220\320\272\321\202\320\270\320\262\320\275\321\213\320\265 \320\277\320\273\320\260\321\202\321\213", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SettingsWindowController", "Tab 2", 0));
    } // retranslateUi

};

namespace Ui {
    class SettingsWindowController: public Ui_SettingsWindowController {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWINDOW_H
