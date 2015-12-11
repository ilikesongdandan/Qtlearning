#ifndef BASEINFO_H
#define BASEINFO_H

#include <QtWidgets/QWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QLayout>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QFrame>
#include <QtGui/QPixmap>

//#include "ui_baseinfo.h"

class BaseInfo : public QWidget
{
	Q_OBJECT

public:
	BaseInfo(QWidget *parent = 0);
	~BaseInfo();
	

private:
	//Ui::BaseInfo ui;
	//left
	QLabel *userNameLabel;
	QLabel *NameLabel;
	QLabel *SexLabel;
	QLabel *DepartmentLabel;
	QLabel *AgeLabel;
	QLabel *OtherLabel;
	QLineEdit *userNameLineEdit;
	QLineEdit *NameLineEdit;
	QComboBox *SexComboBox;
	QTextEdit *DepartmentTextEdit;
	QLineEdit *AgeLineEdit;
	QGridLayout *leftLayout;
	//right
	QLabel *headLabel;
	QLabel *headIconLabel;
	QPushButton *UpdateHeadBtn;
	QHBoxLayout *topRightLayout;
	QLabel *Introductionlabel;
	QTextEdit *IntroductionTextEdit;
	QVBoxLayout *RightLayout;

	/*//bottom
	QPushButton *OkBtn;
	QPushButton *CancelBtn;
	QHBoxLayout *ButtomLayout;*/
};

#endif // BASEINFO_H
