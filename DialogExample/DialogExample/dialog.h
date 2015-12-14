#ifndef DIALOG_H
#define DIALOG_H

#include <QtWidgets/QDialog>
//#include "ui_dialog.h"
#include "headers.h"
#include "inputdlg.h"
#include "maxboxdlg.h"

class Dialog : public QDialog
{
	Q_OBJECT

public:
	Dialog(QWidget *parent = 0);
	~Dialog();

private:
	//Ui::DialogClass ui;
	QPushButton *fileBtn;
	QLineEdit *fileLineEdit;
	QGridLayout *mainLayout;

	QPushButton *colorBtn;
	QFrame *colorFrame;

	QPushButton *fontBtn;
	QLineEdit *fontLineEdit;

	QPushButton *intputBtn;
	InputDlg *inputDlg;

	QPushButton *MsgBtn;
	maxboxDlg *msgDlg;

	QPushButton *CustomBtn;
	QLabel *label;
private slots:
	void showfile();
	void showcolor();
	void showfont();
	void showInputDlg();
	void showMxgDlg();
	void showCustomDlg();
};

#endif // DIALOG_H
