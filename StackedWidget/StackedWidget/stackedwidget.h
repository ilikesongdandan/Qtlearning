#ifndef STACKEDWIDGET_H
#define STACKEDWIDGET_H

#include <QtWidgets/QDialog>
#include "ui_stackedwidget.h"
#include <QtWidgets/QListWidget>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QLabel>

class StackedWidget : public QDialog
{
	Q_OBJECT

public:
	StackedWidget(QWidget *parent = 0);
	~StackedWidget();

private:
	Ui::StackedWidgetClass ui;
	QListWidget *list;
	QStackedWidget *stack;
	QLabel *label1;
	QLabel *label2;
	QLabel *label3;

};

#endif // STACKEDWIDGET_H
