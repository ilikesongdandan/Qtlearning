#include "mywidgt.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtGui/QFont>

MyWidgt::MyWidgt(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setMinimumSize(200, 120);
	setMaximumSize(500, 120);


	QPushButton *quit = new QPushButton("Quit", this);
	quit->setGeometry(40, 40, 100, 60);
	quit->setFont(QFont("Times", 18, QFont::Bold));
	connect(quit, SIGNAL(clicked()), qApp, SLOT(quit()));
}

MyWidgt::~MyWidgt()
{
	
}
