#include "spliter.h"
#include <QtWidgets/QApplication>
#include <QtGui/QFont>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	
	QFont font("ZYSong18030", 12);
	a.setFont(font);
	//主分割窗口
	QSplitter *splitterMain = new QSplitter(Qt::Horizontal, 0);
	QTextEdit *textleft = new QTextEdit(QObject::tr("left widget"), splitterMain);
	textleft->setAlignment(Qt::AlignCenter);

	//右部分割窗口
	QSplitter *spilitterRight = new QSplitter(Qt::Vertical, splitterMain);
	spilitterRight->setOpaqueResize(false);
	QTextEdit *textup = new QTextEdit(QObject::tr("top widget"), spilitterRight);
	textup->setAlignment(Qt::AlignCenter);
	QTextEdit *textbottom = new QTextEdit(QObject::tr("bottom widget"), spilitterRight);
	textbottom->setAlignment(Qt::AlignCenter);
	splitterMain->setStretchFactor(1, 1);
	splitterMain->setWindowTitle(QObject::tr("Splitter"));
	splitterMain->show();


	//Spliter w;
	//w.show();
	return a.exec();
}
