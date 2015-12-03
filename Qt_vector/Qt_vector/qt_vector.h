#ifndef QT_VECTOR_H
#define QT_VECTOR_H

#include <QtWidgets/QMainWindow>
#include "ui_qt_vector.h"

class Qt_vector : public QMainWindow
{
	Q_OBJECT

public:
	Qt_vector(QWidget *parent = 0);
	~Qt_vector();

private:
	Ui::Qt_vectorClass ui;
};

#endif // QT_VECTOR_H
