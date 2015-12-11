#include "stackedwidget.h"
#include <QtWidgets/QHBoxLayout>
#include "ui_stackedwidget.h"

StackedWidget::StackedWidget(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	setWindowTitle(tr("StackedWidget"));
	list = new QListWidget(this);
	list->insertItem(0, tr("window1"));
	list->insertItem(1, tr("window2"));
	list->insertItem(2, tr("window3"));
	
	label1 = new QLabel(tr("window test1"));
	label2 = new QLabel(tr("window test2"));
	label3 = new QLabel(tr("window test3"));

	stack = new QStackedWidget(this);
	stack->addWidget(label1);
	stack->addWidget(label2);
	stack->addWidget(label3);

	QHBoxLayout *mainlayout = new QHBoxLayout(this);
	mainlayout->setMargin(5);
	mainlayout->setSpacing(5);
	mainlayout->addWidget(list);

	mainlayout->addWidget(stack, 0, Qt::AlignHCenter);
	mainlayout->setStretchFactor(list, 1);
	mainlayout->setStretchFactor(stack, 3);
	connect(list, SIGNAL(currentRowChanged(int)), stack, SLOT(setCurrentIndex(int)));




}

StackedWidget::~StackedWidget()
{

}
