#include "qt_vector.h"
#include <QtWidgets/QApplication>
#include <QtCore/QDebug>
#include <QtCore/QList>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Qt_vector w;
	w.show();
	QList<QString> list;
	list << "a" << "b" << "c" << "d";
	QListIterator<QString> i(list);
	while (i.hasNext()){
		qDebug() << i.next();
	}

	QList<QString> list1;
	list1 << "A" << "B" << "C" << "D";

	QList<QString>::iterator i1;
	for (i1 = list1.begin(); i1 != list1.end(); ++i1) {
		*i1 = (*i1).toLower();
	}
	QList<QString>::const_iterator i2;
	for (i2 = list1.constBegin(); i2 != list1.constEnd(); ++i2) {
		qDebug() << *i2;
	}

	QList<int> ilist;
	ilist << 1 << 2 << 3 << 4 << 5 << 6 << 7 << 8;
	QMutableListIterator<int> j(ilist);
	while (j.hasNext())
	{
		if (j.next() % 2 != 0){
			j.remove();
		}
		qDebug() << j.next();
	}

	QList<int> ilist1;
	ilist1 << 123 << 211 << 113 << 423 << 125 << 16 << 27 << 38;
	QMutableListIterator<int> n(ilist1);
	while (n.hasNext())
	{
		if (n.next() >200){
			n.setValue(200);
		}
		//qDebug() << n.next();
	}
	while (n.hasPrevious())
	{
		qDebug() << n.previous();
	}



	QMap<int, int> map;
	map.insert(1, 2);
	map.insert(3, 4);
	map.insert(5, 6);
	map.insert(7, 8);
	QMap<int, int>::const_iterator i3;
	for (i3 = map.constBegin(); i3 != map.constEnd(); ++i3) {
		qDebug() << i3.key() << ":" << i3.value();
	}

	QMap<int, int>::iterator i3_;
	i3_ = map.find(5);
	if (i3_!= map.end()){
		i3_.value() = 5;
	}
	QMap<int, int>::const_iterator i3_1;
	for (i3_1 = map.constBegin(); i3_1 != map.constEnd();++i3_1)
	{
		qDebug() << i3_1.key() << ":" << i3_1.value();
	}

	return a.exec();
}
