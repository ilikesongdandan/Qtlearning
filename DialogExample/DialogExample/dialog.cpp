#include "dialog.h"
#if _MSC_VER >= 1600  

#pragma execution_character_set("utf-8")  

#endif  

Dialog::Dialog(QWidget *parent)
	: QDialog(parent)
{
	//ui.setupUi(this);
	setWindowTitle(tr("各种标准对话框的实例"));
	fileBtn = new QPushButton(tr("文件框标准对话框实例"));
	fileLineEdit = new QLineEdit;
	mainLayout = new QGridLayout(this);
	mainLayout->addWidget(fileBtn, 0, 0);
	mainLayout->addWidget(fileLineEdit, 0, 1);
	connect(fileBtn, SIGNAL(clicked()), this, SLOT(showfile()));

	colorBtn = new QPushButton(tr("颜色标准对话框"));
	colorFrame = new QFrame;
	colorFrame->setFrameShape(QFrame::Box);
	colorFrame->setAutoFillBackground(true);

	mainLayout->addWidget(colorBtn, 1, 0);
	mainLayout->addWidget(colorFrame, 1, 1);
	connect(colorBtn, SIGNAL(clicked()), this, SLOT(showcolor()));

	fontBtn = new QPushButton(tr("字体标准对话框"));
	fontLineEdit = new QLineEdit(tr("Welcome"));
	mainLayout->addWidget(fontBtn, 2, 0);
	mainLayout->addWidget(fontLineEdit, 2, 1);
	connect(fontBtn, SIGNAL(clicked()), this, SLOT(showfont()));

	intputBtn = new QPushButton(tr("标准输入对话框实例"));
	mainLayout->addWidget(intputBtn, 3, 0);
	connect(intputBtn, SIGNAL(clicked()), this, SLOT(showInputDlg()));

	MsgBtn = new QPushButton(tr("标准消息对话框实例"));
	mainLayout->addWidget(MsgBtn, 3, 1);
	connect(MsgBtn, SIGNAL(clicked()),this,SLOT(showMxgDlg()));

	CustomBtn = new QPushButton(tr("用户自定义消息对话框实例"));
	label = new QLabel;
	label->setFrameStyle(QFrame::Panel | QFrame::Sunken);
	mainLayout->addWidget(CustomBtn, 4, 0);
	mainLayout->addWidget(label, 4, 1);
	connect(CustomBtn, SIGNAL(clicked()), this, SLOT(showCustomDlg()));

	mainLayout->setSizeConstraint(QLayout::SetFixedSize);
}

void Dialog::showfile(){
	QString s = QFileDialog::getOpenFileName(this, "open file dialog", "/", "C++ files(*.cpp)::C files(*.c)::Head files(*.h)");
	fileLineEdit->setText(s);
}

void Dialog::showcolor(){
	QColor  c = QColorDialog::getColor(Qt::blue);
	if (c.isValid()){
		colorFrame->setPalette(QPalette(c));
	}
}

void Dialog::showfont(){
	bool ok;
	QFont f = QFontDialog::getFont(&ok);
	if (ok){
		fontLineEdit->setFont(f);
	}
}

void Dialog::showInputDlg(){
	inputDlg = new InputDlg(this);
	inputDlg->show();
}
void Dialog::showMxgDlg(){
	msgDlg = new maxboxDlg(this);
	msgDlg->show();
}

void Dialog::showCustomDlg(){
	label->setText(tr("Custom Message Box"));
	QMessageBox customMsgBox;
	customMsgBox.setWindowTitle(tr("用户自定义消息框"));
	QPushButton *yesBtn = customMsgBox.addButton(tr("yes"), QMessageBox::ActionRole);
	QPushButton *noBtn = customMsgBox.addButton(tr("no"), QMessageBox::ActionRole);
	QPushButton *cancelBtn = customMsgBox.addButton(  QMessageBox::Cancel);

	customMsgBox.setText(tr("这是一个用户自定义消息框"));
	customMsgBox.setIconPixmap(QPixmap("1.png"));
	customMsgBox.exec();

	if (customMsgBox.clickedButton()==yesBtn)
	{
		label->setText(tr("CustomBox Message Box/Yes"));
	}
	if (customMsgBox.clickedButton() == noBtn)
	{
		label->setText(tr("CustomBox Message Box/no"));
	}
	if (customMsgBox.clickedButton() == cancelBtn)
	{
		label->setText(tr("CustomBox Message Box/cancel"));
	}
	return;
}

Dialog::~Dialog()
{

}
