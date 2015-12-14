#ifndef MYQQEXAMPLE_H
#define MYQQEXAMPLE_H

#include <QtWidgets/QDialog>
//#include "ui_myqqexample.h"

class MyQQExample : public QDialog
{
	Q_OBJECT

public:
	MyQQExample(QWidget *parent = 0);
	~MyQQExample();

private:
	//Ui::MyQQExampleClass ui;
};

#endif // MYQQEXAMPLE_H
