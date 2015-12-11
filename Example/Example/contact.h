#ifndef CONTACT_H
#define CONTACT_H

#include <QtWidgets/QWidget>
#include "headers.h"
//#include <QtWidgets/QGridLayout>
//#include "ui_contact.h"

class Contact : public QWidget
{
	Q_OBJECT

public:
	Contact(QWidget *parent = 0);
	~Contact();

private:
	//Ui::Contact ui;
	QLabel *Emaillabel;
	QLineEdit *EmaliLineEdit;
	QLabel *Addrlabel;
	QLineEdit *AddrLineEdit;
	QLabel *CodeLabel;
	QLineEdit *CodeLineEdit;
	QLabel *MovTelLabel;
	QLineEdit *MovTelLineEdit;
	QCheckBox *MovTelCheckBox;
	QLabel *ProTelLabel;
	QLineEdit *ProTelEdit;
	QGridLayout *mainlayout;

};

#endif // CONTACT_H
