#include "contact.h"

#if _MSC_VER >= 1600  

#pragma execution_character_set("utf-8")  

#endif  
Contact::Contact(QWidget *parent)
	: QWidget(parent)
{
	//ui.setupUi(this);
	Emaillabel = new QLabel(tr("邮件地址"));
	EmaliLineEdit = new QLineEdit;

	Addrlabel = new QLabel(tr("联系地址："));
	AddrLineEdit = new QLineEdit;

	CodeLabel = new QLabel(tr("邮政编码："));
	CodeLineEdit = new QLineEdit;

	MovTelLabel = new QLabel(tr("移动电话："));
	MovTelLineEdit = new QLineEdit;
	MovTelCheckBox = new QCheckBox(tr("接收留言"));

	ProTelLabel = new QLabel(tr("办公电话："));
	ProTelEdit = new QLineEdit;

	mainlayout = new QGridLayout(this);
	mainlayout->setMargin(15);
	mainlayout->setSpacing(10);
	mainlayout->addWidget(Emaillabel, 0, 0);
	mainlayout->addWidget(EmaliLineEdit, 0, 1);
	mainlayout->addWidget(Addrlabel, 1, 0);
	mainlayout->addWidget(AddrLineEdit, 1, 1);
	mainlayout->addWidget(CodeLabel, 2, 0);
	mainlayout->addWidget(CodeLineEdit, 2, 1);
	mainlayout->addWidget(MovTelLabel, 3, 0);
	mainlayout->addWidget(MovTelLineEdit, 3, 1);
	mainlayout->addWidget(MovTelCheckBox, 3, 2);
	mainlayout->addWidget(ProTelLabel, 4, 0);
	mainlayout->addWidget(ProTelEdit, 4, 1);
	mainlayout->setSizeConstraint(QLayout::SetFixedSize);
}

Contact::~Contact()
{

}
