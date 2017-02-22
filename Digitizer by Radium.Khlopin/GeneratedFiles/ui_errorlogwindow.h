/********************************************************************************
** Form generated from reading UI file 'errorlogwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORLOGWINDOW_H
#define UI_ERRORLOGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_errorLogWindow
{
public:
    QGridLayout *gridLayout;
    QTableWidget *mainWidget;

    void setupUi(QDialog *errorLogWindow)
    {
        if (errorLogWindow->objectName().isEmpty())
            errorLogWindow->setObjectName(QStringLiteral("errorLogWindow"));
        errorLogWindow->resize(998, 471);
        gridLayout = new QGridLayout(errorLogWindow);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mainWidget = new QTableWidget(errorLogWindow);
        if (mainWidget->columnCount() < 5)
            mainWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        mainWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        mainWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        mainWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        mainWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignCenter);
        mainWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        mainWidget->setObjectName(QStringLiteral("mainWidget"));
        mainWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mainWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        mainWidget->setTextElideMode(Qt::ElideNone);
        mainWidget->setSortingEnabled(true);
        mainWidget->horizontalHeader()->setDefaultSectionSize(50);
        mainWidget->horizontalHeader()->setMinimumSectionSize(30);
        mainWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        mainWidget->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(mainWidget, 0, 0, 1, 1);


        retranslateUi(errorLogWindow);

        QMetaObject::connectSlotsByName(errorLogWindow);
    } // setupUi

    void retranslateUi(QDialog *errorLogWindow)
    {
        errorLogWindow->setWindowTitle(QApplication::translate("errorLogWindow", "\320\226\321\203\321\200\320\275\320\260\320\273 \320\276\321\210\320\270\320\261\320\276\320\272", 0));
        QTableWidgetItem *___qtablewidgetitem = mainWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("errorLogWindow", "\320\222\321\200\320\265\320\274\321\217", 0));
        QTableWidgetItem *___qtablewidgetitem1 = mainWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("errorLogWindow", "\320\237\320\273\320\260\321\202\320\260", 0));
        QTableWidgetItem *___qtablewidgetitem2 = mainWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("errorLogWindow", "\320\232\320\276\320\264 \320\276\321\210\320\270\320\261\320\272\320\270", 0));
        QTableWidgetItem *___qtablewidgetitem3 = mainWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("errorLogWindow", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265", 0));
        QTableWidgetItem *___qtablewidgetitem4 = mainWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("errorLogWindow", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265 (\320\276\321\210\320\270\320\261\320\272\320\260 \320\262\320\276\320\267\320\275\320\270\320\272\320\273\320\260 \320\277\321\200\320\270 ...)", 0));
    } // retranslateUi

};

namespace Ui {
    class errorLogWindow: public Ui_errorLogWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORLOGWINDOW_H
