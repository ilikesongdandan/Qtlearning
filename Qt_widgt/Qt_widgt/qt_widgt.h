#ifndef QT_WIDGT_H
#define QT_WIDGT_H

#include <QtWidgets/QMainWindow>
#include "ui_qt_widgt.h"
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QHBoxLayout>

class Qt_widgt : public QMainWindow
{
	Q_OBJECT

public:
	Qt_widgt(QWidget *parent = 0);
	~Qt_widgt();
	
private:
	Ui::Qt_widgtClass ui;
	
};

#endif // QT_WIDGT_H
