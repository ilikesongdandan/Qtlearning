#include "qt_textfile.h"
#include <QtWidgets/QApplication>
#include <QtCore/QTextStream>
#include <QtCore/QFile>
#include <QtCore/QDebug>
#include <QtCore/QDir>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Qt_textfile w;
	w.show();
	qDebug() << QDir::currentPath() << endl;
	QFile data("file.txt");
	/*if (data.open(QFile::WriteOnly | QIODevice::Truncate)){
		QTextStream out(&data);
		out << "The answer is " << 42;
	}
	data.flush();*/
	//QFile data("file.txt");
	if (data.open(QFile::ReadOnly)){
		QTextStream in(&data);
		QString str1,str2,str3;
		int ans = 0;
		in >> str1 >>str2>>str3>> ans;
		qDebug() << str1<<str2<<str3 << ans << endl;
	}

	return a.exec();
}
