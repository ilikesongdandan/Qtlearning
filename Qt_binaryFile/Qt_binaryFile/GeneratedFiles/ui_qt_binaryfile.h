/********************************************************************************
** Form generated from reading UI file 'qt_binaryfile.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_BINARYFILE_H
#define UI_QT_BINARYFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Qt_binaryFileClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Qt_binaryFileClass)
    {
        if (Qt_binaryFileClass->objectName().isEmpty())
            Qt_binaryFileClass->setObjectName(QStringLiteral("Qt_binaryFileClass"));
        Qt_binaryFileClass->resize(600, 400);
        menuBar = new QMenuBar(Qt_binaryFileClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Qt_binaryFileClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Qt_binaryFileClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Qt_binaryFileClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Qt_binaryFileClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Qt_binaryFileClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Qt_binaryFileClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Qt_binaryFileClass->setStatusBar(statusBar);

        retranslateUi(Qt_binaryFileClass);

        QMetaObject::connectSlotsByName(Qt_binaryFileClass);
    } // setupUi

    void retranslateUi(QMainWindow *Qt_binaryFileClass)
    {
        Qt_binaryFileClass->setWindowTitle(QApplication::translate("Qt_binaryFileClass", "Qt_binaryFile", 0));
    } // retranslateUi

};

namespace Ui {
    class Qt_binaryFileClass: public Ui_Qt_binaryFileClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_BINARYFILE_H
