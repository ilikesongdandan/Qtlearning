#ifndef MAXBOXDLG_H
#define MAXBOXDLG_H

#include <QDialog>
#include "headers.h"

class maxboxDlg : public QDialog
{
	Q_OBJECT

public:
	maxboxDlg(QWidget *parent);
	~maxboxDlg();

private:
	QLabel *label;
	QPushButton *quessionBtn;
	QPushButton *infomationBtn;
	QPushButton *warningBtn;
	QPushButton *criticalBtn;
	QPushButton *aboutBtn;
	QPushButton *aboutQtBtn;
	QGridLayout *mainLayout;
	private slots:
	void showQuessionMsg();
	void showInformationMsg();
	void showWarningMsg();
	void showCriticalMsg();
	void showAboutMsg();
	void showAboutQtMsg();
		
};

#endif // MAXBOXDLG_H
