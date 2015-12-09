#ifndef MYWIDGT_H
#define MYWIDGT_H

#include <QtWidgets/QWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtGui/QFont>
#include "ui_mywidgt.h"

class MyWidgt : public QWidget
{
	Q_OBJECT

public:
	MyWidgt(QWidget *parent = 0);
	~MyWidgt();

private:
	Ui::MyWidgtClass ui;
};

#endif // MYWIDGT_H
