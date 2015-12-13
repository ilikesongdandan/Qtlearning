#include "maxboxdlg.h"
#include "headers.h"
#if _MSC_VER >= 1600  

#pragma execution_character_set("utf-8")  

#endif  
maxboxDlg::maxboxDlg(QWidget *parent)
	: QDialog(parent)
{
	setWindowTitle(tr("标准消息对话框的实例"));
	label = new QLabel(tr("请选择一种消息框"));
	quessionBtn = new QPushButton(tr("QuessionMsg"));
	infomationBtn = new QPushButton(tr("InformationMsg"));
	warningBtn = new QPushButton(tr("WarningMsg"));
	criticalBtn = new QPushButton(tr("CriticalMsg"));
	aboutBtn = new QPushButton(tr("AboutMsg"));
	aboutQtBtn = new QPushButton(tr("AboutQtMsg"));

	mainLayout = new QGridLayout(this);
	mainLayout->addWidget(label, 0, 0, 1, 2);
	mainLayout->addWidget(quessionBtn, 1, 0);
	mainLayout->addWidget(infomationBtn,1, 1);
	mainLayout->addWidget(warningBtn, 2, 0);
	mainLayout->addWidget(criticalBtn, 2, 1);
	mainLayout->addWidget(aboutBtn, 3, 0);
	mainLayout->addWidget(aboutQtBtn, 3, 1);

	connect(quessionBtn, SIGNAL(clicked()), this, SLOT(showQuessionMsg()));
	connect(infomationBtn, SIGNAL(clicked()), this, SLOT(showInformationMsg()));
	connect(warningBtn, SIGNAL(clicked()), this, SLOT(showWarningMsg()));
	connect(criticalBtn, SIGNAL(clicked()), this, SLOT(showCriticalMsg()));
	connect(aboutBtn, SIGNAL(clicked()), this, SLOT(showAboutMsg()));
	connect(aboutQtBtn, SIGNAL(clicked()), this, SLOT(showAboutQtMsg()));
}

void maxboxDlg::showQuessionMsg(){
	//label = new QLabel(tr("Question Message Box"));
	label->setText(tr("Question Message Box"));
	switch (QMessageBox::question(this,tr("Question消息框"),tr("您现在已经完成修改，是否要结束程序？"),QMessageBox::Ok|QMessageBox::Cancel,QMessageBox::Ok))
	{
	case QMessageBox::Ok:
		label->setText("Question button/Ok");
		break;
	case  QMessageBox::Cancel:
		label->setText("Question button/Cancel");
		break;
	default:
		break;
	}
	return;
}
void maxboxDlg::showInformationMsg(){
	label->setText(tr("Information Message Box"));
	QMessageBox::information(this, tr("Information 消息框"),tr("这个是Information消息测试框，欢迎您"));
	return;
}
void maxboxDlg::showWarningMsg(){
	label->setText(tr("Warning Message Box"));
	switch (QMessageBox::warning(this, tr("Warning 消息框"), tr("您修改的内容未保存，是否保存修改？"),QMessageBox::Save|QMessageBox::Discard|QMessageBox::Cancel,QMessageBox::Save))
	{
	case QMessageBox::Save:
		label->setText(tr("Warning button/Save"));
		break;
	case QMessageBox::Discard:
		label->setText(tr("Warning button/Discard"));
		break;
	case QMessageBox::Cancel:
		label->setText(tr("Warning button/Cancel"));
		break;
	default:
		break;
	}
	return;
}
void maxboxDlg::showCriticalMsg(){
	label->setText(tr("Critical Message Box"));
	QMessageBox::critical(this, tr("Critical消息框"), tr("这个是Critical消息测试框，欢迎您"));
	return;
}
void maxboxDlg::showAboutMsg(){
	label->setText(tr("About Message Box"));
	QMessageBox::about(this, tr("About 消息框"), tr("这个是About消息测试框，欢迎您"));
	return;
}
void maxboxDlg::showAboutQtMsg(){
	label->setText(tr("AboutQt Message Box"));
	QMessageBox::aboutQt(this, tr("AboutQt 消息框"));
	return;
}


maxboxDlg::~maxboxDlg()
{

}
