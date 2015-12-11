#ifndef DIALOG_H
#define DIALOG_H

#include <QtWidgets/QDialog>
#include "ui_dialog.h"
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QLayout>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QHBoxLayout>

class dialog : public QDialog
{
	Q_OBJECT

public:
	dialog(QWidget *parent = 0);
	~dialog();

private:
	Ui::dialogClass ui;
	
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

	//bottom
	QPushButton *OkBtn;
	QPushButton *CancelBtn;
	QHBoxLayout *ButtomLayout;
};

#endif // DIALOG_H
