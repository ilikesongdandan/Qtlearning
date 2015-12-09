#include "mywidgt.h"
#include <QtWidgets/QApplication>
#include <QtCore/QTime>
#include <QtWidgets/QLabel>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MyWidgt w;
	
	w.setGeometry(600, 100, 500, 120);
	w.show();
	
	
	
	MyWidgt *window = new MyWidgt();
	window->resize(320, 240);
	QLabel *datalabel = new QLabel(window);
	QDateTime *datatime = new QDateTime(QDateTime::currentDateTime());
	datalabel->setText(datatime->date().toString());
	datalabel->show();
	window->show();
	QPushButton *button = new QPushButton(QObject::tr("press me"), window);
	button->move(100, 100);
	button->show();
	
	return a.exec();
}
