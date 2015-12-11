#include "dockwindows.h"
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QDockWidget>

DockWindows::DockWindows(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setWindowTitle(tr("DockWindows"));
	QTextEdit *te = new QTextEdit(this);
	te->setText(tr("Main WIndow"));
	te -> setAlignment(Qt::AlignCenter);
	setCentralWidget(te);

	//Í£¿¿´°¿Ú1
	QDockWidget *dock = new QDockWidget(tr("dock window1"), this);
	dock->setFeatures(QDockWidget::DockWidgetMovable);
	dock->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
	QTextEdit *te1 = new QTextEdit();
	te1->setText(tr("Window1,The dock widget can be moved between docks by the user"));
	dock->setWidget(te1);
	addDockWidget(Qt::RightDockWidgetArea, dock);

	//Í£¿¿´°¿Ú2
	dock = new QDockWidget(tr("dock window2"), this);
	dock->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable);
	QTextEdit *te2 = new QTextEdit();
	te2->setText(tr("Window2,The dock widget can be detached from the main window," "and floated as an independent window ,and can be closed"));
	dock->setWidget(te2);
	addDockWidget(Qt::RightDockWidgetArea, dock);

	//Í£¿¿´°¿Ú3
	dock = new QDockWidget(tr("dock window3"), this);
	dock->setFeatures(QDockWidget::AllDockWidgetFeatures);
	QTextEdit *te3 = new QTextEdit();
	te3->setText(tr("Window3,The dock widget can be moved,closed and floated"));
	dock->setWidget(te3);
	addDockWidget(Qt::RightDockWidgetArea, dock);
}

DockWindows::~DockWindows()
{

}
