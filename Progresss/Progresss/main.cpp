#include "progresssdlg.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ProgresssDlg w;
	w.show();
	return a.exec();
}
