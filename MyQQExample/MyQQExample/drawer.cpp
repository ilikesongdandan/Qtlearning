#include "drawer.h"
#if _MSC_VER >= 1600  

#pragma execution_character_set("utf-8")  

#endif  

Drawer::Drawer(QWidget *parent)
	: QToolBox(parent)
{
	setWindowTitle(tr("My QQ"));
	toolBtn1_1 = new QToolButton;
	toolBtn1_1->setText(tr("����"));
	toolBtn1_1->setIcon(QPixmap("1.png"));
	toolBtn1_1->setIconSize(QPixmap("1.png").size());
	toolBtn1_1->setAutoRaise(true);
	toolBtn1_1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

	toolBtn1_2 = new QToolButton;
	toolBtn1_2->setText(tr("����"));
	toolBtn1_2->setIcon(QPixmap("2.png"));
	toolBtn1_2->setIconSize(QPixmap("2.png").size());
	toolBtn1_2->setAutoRaise(true);
	toolBtn1_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

	toolBtn1_3 = new QToolButton;
	toolBtn1_3->setText(tr("����"));
	toolBtn1_3->setIcon(QPixmap("3.png"));
	toolBtn1_3->setIconSize(QPixmap("3.png").size());
	toolBtn1_3->setAutoRaise(true);
	toolBtn1_3->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

	toolBtn1_4 = new QToolButton;
	toolBtn1_4->setText(tr("С��"));
	toolBtn1_4->setIcon(QPixmap("4.png"));
	toolBtn1_4->setIconSize(QPixmap("4.png").size());
	toolBtn1_4->setAutoRaise(true);
	toolBtn1_4->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

	toolBtn1_5= new QToolButton;
	toolBtn1_5->setText(tr("С��"));
	toolBtn1_5->setIcon(QPixmap("5.png"));
	toolBtn1_5->setIconSize(QPixmap("5.png").size());
	toolBtn1_5->setAutoRaise(true);
	toolBtn1_5->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

	QGroupBox *groupBox1 = new QGroupBox;
	QVBoxLayout *layout1 = new QVBoxLayout(groupBox1);
	layout1->setMargin(10);
	layout1->setAlignment(Qt::AlignHCenter);
	layout1->addWidget(toolBtn1_1);
	layout1->addWidget(toolBtn1_2);
	layout1->addWidget(toolBtn1_3);
	layout1->addWidget(toolBtn1_4);
	layout1->addWidget(toolBtn1_5);
	layout1->addStretch();

	toolBtn2_1 = new QToolButton;
	toolBtn2_1->setText(tr("С��"));
	toolBtn2_1->setIcon(QPixmap("5.png"));
	toolBtn2_1->setIconSize(QPixmap("5.png").size());
	toolBtn2_1->setAutoRaise(true);
	toolBtn2_1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

	toolBtn2_2 = new QToolButton;
	toolBtn2_2->setText(tr("С��"));
	toolBtn2_2->setIcon(QPixmap("6.png"));
	toolBtn2_2->setIconSize(QPixmap("6.png").size());
	toolBtn2_2->setAutoRaise(true);
	toolBtn2_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

	QGroupBox *groupBox2 = new QGroupBox;
	QVBoxLayout *layout2 = new QVBoxLayout(groupBox2);
	layout2->setMargin(10);
	layout2->setAlignment(Qt::AlignHCenter);
	layout2->addWidget(toolBtn2_1);
	layout2->addWidget(toolBtn2_2);

	toolBtn3_1 = new QToolButton;
	toolBtn3_1->setText(tr("С��"));
	toolBtn3_1->setIcon(QPixmap("6.png"));
	toolBtn3_1->setIconSize(QPixmap("6.png").size());
	toolBtn3_1->setAutoRaise(true);
	toolBtn3_1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

	toolBtn3_2 = new QToolButton;
	toolBtn3_2->setText(tr("С��"));
	toolBtn3_2->setIcon(QPixmap("7.png"));
	toolBtn3_2->setIconSize(QPixmap("7.png").size());
	toolBtn3_2->setAutoRaise(true);
	toolBtn3_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

	QGroupBox *groupBox3 = new QGroupBox;
	QVBoxLayout *layout3= new QVBoxLayout(groupBox3);
	layout3->setMargin(10);
	layout3->setAlignment(Qt::AlignHCenter);
	layout3->addWidget(toolBtn3_1);
	layout3->addWidget(toolBtn3_2);

	this->addItem((QWidget*)groupBox1, tr("�ҵĺ���"));
	this->addItem((QWidget*)groupBox2, tr("İ����"));
	this->addItem((QWidget*)groupBox3, tr("������"));
}

Drawer::~Drawer()
{

}
