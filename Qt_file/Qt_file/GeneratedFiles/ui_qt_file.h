/********************************************************************************
** Form generated from reading UI file 'qt_file.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_FILE_H
#define UI_QT_FILE_H

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

class Ui_Qt_fileClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Qt_fileClass)
    {
        if (Qt_fileClass->objectName().isEmpty())
            Qt_fileClass->setObjectName(QStringLiteral("Qt_fileClass"));
        Qt_fileClass->resize(600, 400);
        menuBar = new QMenuBar(Qt_fileClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Qt_fileClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Qt_fileClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Qt_fileClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Qt_fileClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Qt_fileClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Qt_fileClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Qt_fileClass->setStatusBar(statusBar);

        retranslateUi(Qt_fileClass);

        QMetaObject::connectSlotsByName(Qt_fileClass);
    } // setupUi

    void retranslateUi(QMainWindow *Qt_fileClass)
    {
        Qt_fileClass->setWindowTitle(QApplication::translate("Qt_fileClass", "Qt_file", 0));
    } // retranslateUi

};

namespace Ui {
    class Qt_fileClass: public Ui_Qt_fileClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_FILE_H
