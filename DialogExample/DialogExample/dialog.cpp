#include "dialog.h"
#if _MSC_VER >= 1600  

#pragma execution_character_set("utf-8")  

#endif  

Dialog::Dialog(QWidget *parent)
	: QDialog(parent)
{
	//ui.setupUi(this);
	setWindowTitle(tr("���ֱ�׼�Ի����ʵ��"));
	fileBtn = new QPushButton(tr("�ļ����׼�Ի���ʵ��"));
	fileLineEdit = new QLineEdit;
	mainLayout = new QGridLayout(this);
	mainLayout->addWidget(fileBtn, 0, 0);
	mainLayout->addWidget(fileLineEdit, 0, 1);
	connect(fileBtn, SIGNAL(clicked()), this, SLOT(showfile()));

	colorBtn = new QPushButton(tr("��ɫ��׼�Ի���"));
	colorFrame = new QFrame;
	colorFrame->setFrameShape(QFrame::Box);
	colorFrame->setAutoFillBackground(true);

	mainLayout->addWidget(colorBtn, 1, 0);
	mainLayout->addWidget(colorFrame, 1, 1);
	connect(colorBtn, SIGNAL(clicked()), this, SLOT(showcolor()));

	fontBtn = new QPushButton(tr("�����׼�Ի���"));
	fontLineEdit = new QLineEdit(tr("Welcome"));
	mainLayout->addWidget(fontBtn, 2, 0);
	mainLayout->addWidget(fontLineEdit, 2, 1);
	connect(fontBtn, SIGNAL(clicked()), this, SLOT(showfont()));

	intputBtn = new QPushButton(tr("��׼����Ի���ʵ��"));
	mainLayout->addWidget(intputBtn, 3, 0);
	connect(intputBtn, SIGNAL(clicked()), this, SLOT(showInputDlg()));

	MsgBtn = new QPushButton(tr("��׼��Ϣ�Ի���ʵ��"));
	mainLayout->addWidget(MsgBtn, 3, 1);
	connect(MsgBtn, SIGNAL(clicked()),this,SLOT(showMxgDlg()));


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

Dialog::~Dialog()
{

}
