#ifndef QT_TEXTFILE_H
#define QT_TEXTFILE_H

#include <QtWidgets/QMainWindow>
#include "ui_qt_textfile.h"

class Qt_textfile : public QMainWindow
{
	Q_OBJECT

public:
	Qt_textfile(QWidget *parent = 0);
	~Qt_textfile();

private:
	Ui::Qt_textfileClass ui;
};

#endif // QT_TEXTFILE_H
