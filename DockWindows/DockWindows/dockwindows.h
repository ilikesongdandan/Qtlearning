#ifndef DOCKWINDOWS_H
#define DOCKWINDOWS_H

#include <QtWidgets/QMainWindow>
#include "ui_dockwindows.h"

class DockWindows : public QMainWindow
{
	Q_OBJECT

public:
	DockWindows(QWidget *parent = 0);
	~DockWindows();

private:
	Ui::DockWindowsClass ui;
};

#endif // DOCKWINDOWS_H
