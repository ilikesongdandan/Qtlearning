#include "qt_widgt.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>

#include <QtGui/QIcon>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QLabel *label = new QLabel;
	label->setFixedWidth(100);
	QListWidget *listWidget = new QListWidget;
	listWidget->addItem(new QListWidgetItem(QIcon(QObject::tr("1.png")), QObject::tr("China")));
	listWidget->addItem(new QListWidgetItem(QIcon(QObject::tr("2.png")), QObject::tr("Hong Kong")));
	listWidget->addItem(new QListWidgetItem(QIcon(QObject::tr("3.png")), QObject::tr("Macau")));

	QHBoxLayout *mainlayout = new QHBoxLayout;
	mainlayout->addWidget(listWidget);
	mainlayout->addWidget(label);
	QObject::connect(listWidget, SIGNAL(currentTextChanged(QString)), label, SLOT(setText(QString)));

	QWidget *widget = new QWidget;
	widget->setLayout(mainlayout);
	widget->setWindowTitle(QObject::tr("QListWidget Demo"));
	widget->show();

	return a.exec();
}
