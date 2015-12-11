#ifndef DEATAIL_H
#define DEATAIL_H

#include <QtWidgets/QWidget>
//#include "ui_deatail.h"
#include "headers.h"

class Deatail : public QWidget
{
	Q_OBJECT

public:
	Deatail(QWidget *parent = 0);
	~Deatail();

private:
	//Ui::Deatail ui;
	QLabel *nationallabel;
	QComboBox *nationalComBox;
	QLabel *ProvinceLabel;
	QComboBox *ProvinceComBox;
	QLabel *Citylabel;
	QLineEdit *CityEdit;
	QLabel *IntroduceLabel;
	QTextEdit *IntroduceEdit;
	QGridLayout *mainLayout;
};

#endif // DEATAIL_H
