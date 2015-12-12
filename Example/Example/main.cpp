#include "content.h"
#include "headers.h"
#include <QtWidgets/QApplication>
#include <QtCore/QTextCodec>;

#if _MSC_VER >= 1600  

#pragma execution_character_set("utf-8")  

#endif  



int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QFont font("AR PL KaitiM GB", 12);
	a.setFont(font);
	QSplitter *splitterMain = new QSplitter(Qt::Horizontal, 0);
	splitterMain->setOpaqueResize(true);
	QListWidget *list = new QListWidget(splitterMain);
	list->insertItem(0, QObject::tr("基本信息"));
	list->insertItem(1, QObject::tr("联系方式"));
	list->insertItem(2, QObject::tr("详细资料"));

	Content *content = new Content(splitterMain);
	QObject::connect(list, SIGNAL(currentRowChanged(int)), content->stack, SLOT(setCurrentIndex(int)));

	//QObject::connect(content->CloseBtn, SIGNAL(clicked()), content, SLOT(content->close()));

	splitterMain->setWindowTitle(QObject::tr("修改用户资料"));
	splitterMain->setMinimumSize(splitterMain->minimumSize());
	splitterMain->setMaximumSize(splitterMain->maximumSize());
	

	splitterMain->setGeometry(200, 200,splitterMain->width(),splitterMain->height());
	splitterMain->setStretchFactor(1, 1);
	splitterMain->show();
	return a.exec();
}
