#include "qt_file.h"
#include <QtWidgets/QApplication>
#include <QtCore/QDebug>
#include <QtCore/QFile>
#include <QtCore/QDataStream>
#include <QtCore/QFileInfo>
#include <QtCore/QDir>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Qt_file w;
	w.show();
	qDebug() << QDir::currentPath();
	QFile file("in.txt");
	if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
		qDebug() << "file open failed.";
		return -1;
	}
	else {
		while (!file.atEnd())
		{
			qDebug() << file.readLine();
		}
	}
	QFileInfo info(file);
	qDebug() << info.isDir();
	qDebug() << info.isExecutable();
	qDebug() << info.baseName();
	qDebug() << info.completeBaseName();
	qDebug() << info.suffix();
	qDebug() << info.completeSuffix();


	return a.exec();
}
