#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	QRegExp regexp("[A-Za-z][1-9][0-9]{0,2}");
	ui.lineEdit->setValidator(new QRegExpValidator(regexp, this));
	connect(ui.okButton, SIGNAL(clicked()), this, SLOT(accepted()));
	connect(ui.cancleButton, SIGNAL(clicked()), this, SLOT(reject()));
}

Dialog::~Dialog()
{

}
void Dialog::on_lineEdit_textChanged()
{
	ui.okButton->setEnabled(ui.lineEdit->hasAcceptableInput());
}