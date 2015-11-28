#include "qt_binaryfile.h"
#include <QtWidgets/QApplication>
#include <QtCore/QFile>
#include <QtCore/QDebug>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Qt_binaryFile w;
	w.show();
	/*	//write
	QFile file("file.dat");
	file.open(QIODevice::ReadWrite);
	QDataStream out(&file);
	out << QString("the answer is");
	out << (qint32)42;

	//read
	//QFile file("file.dat");
	file.open(QIODevice::ReadWrite);
	QDataStream in(&file);
	QString str;
	qint32 num;
	in >> str >> num;
	file.close();
	*/
	QFile file("file.dat");
	file.open(QIODevice::ReadWrite);
	QDataStream stream(&file);
	QString str = "the answer is 46";
	QString strout;
	//stream << str;
	//file.flush();
	//stream << strout;
	stream << str;
	stream.device()->seek(0);
	stream >> strout;
	
	return a.exec();
}
