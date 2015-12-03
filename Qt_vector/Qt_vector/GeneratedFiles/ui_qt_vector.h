/********************************************************************************
** Form generated from reading UI file 'qt_vector.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_VECTOR_H
#define UI_QT_VECTOR_H

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

class Ui_Qt_vectorClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Qt_vectorClass)
    {
        if (Qt_vectorClass->objectName().isEmpty())
            Qt_vectorClass->setObjectName(QStringLiteral("Qt_vectorClass"));
        Qt_vectorClass->resize(600, 400);
        menuBar = new QMenuBar(Qt_vectorClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Qt_vectorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Qt_vectorClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Qt_vectorClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Qt_vectorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Qt_vectorClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Qt_vectorClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Qt_vectorClass->setStatusBar(statusBar);

        retranslateUi(Qt_vectorClass);

        QMetaObject::connectSlotsByName(Qt_vectorClass);
    } // setupUi

    void retranslateUi(QMainWindow *Qt_vectorClass)
    {
        Qt_vectorClass->setWindowTitle(QApplication::translate("Qt_vectorClass", "Qt_vector", 0));
    } // retranslateUi

};

namespace Ui {
    class Qt_vectorClass: public Ui_Qt_vectorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_VECTOR_H
