/********************************************************************************
** Form generated from reading UI file 'qt_textfile.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_TEXTFILE_H
#define UI_QT_TEXTFILE_H

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

class Ui_Qt_textfileClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Qt_textfileClass)
    {
        if (Qt_textfileClass->objectName().isEmpty())
            Qt_textfileClass->setObjectName(QStringLiteral("Qt_textfileClass"));
        Qt_textfileClass->resize(600, 400);
        menuBar = new QMenuBar(Qt_textfileClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Qt_textfileClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Qt_textfileClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Qt_textfileClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Qt_textfileClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Qt_textfileClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Qt_textfileClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Qt_textfileClass->setStatusBar(statusBar);

        retranslateUi(Qt_textfileClass);

        QMetaObject::connectSlotsByName(Qt_textfileClass);
    } // setupUi

    void retranslateUi(QMainWindow *Qt_textfileClass)
    {
        Qt_textfileClass->setWindowTitle(QApplication::translate("Qt_textfileClass", "Qt_textfile", 0));
    } // retranslateUi

};

namespace Ui {
    class Qt_textfileClass: public Ui_Qt_textfileClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_TEXTFILE_H
