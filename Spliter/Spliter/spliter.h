#ifndef SPLITER_H
#define SPLITER_H

#include <QtWidgets/QMainWindow>
#include "ui_spliter.h"

class Spliter : public QMainWindow
{
	Q_OBJECT

public:
	Spliter(QWidget *parent = 0);
	~Spliter();

private:
	Ui::SpliterClass ui;
};

#endif // SPLITER_H
