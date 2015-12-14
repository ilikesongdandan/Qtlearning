#include "myqqexample.h"
#include "drawer.h"
#include "headers.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//MyQQExample w;
	//w.show();
	Drawer drawer;
	drawer.show();

	return a.exec();
}
