#ifndef DIALOG_H
#define DIALOG_H

#include <QtWidgets/QDialog>
#include "ui_dialog.h"

class Dialog : public QDialog
{
	Q_OBJECT

public:
	Dialog(QWidget *parent = 0);
	~Dialog();

private:
	Ui::DialogClass ui;

private slots:
	void on_lineEdit_textChanged();
};

#endif // DIALOG_H
