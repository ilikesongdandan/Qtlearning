#include "deatail.h"
#if _MSC_VER >= 1600  

#pragma execution_character_set("utf-8")  

#endif  
Deatail::Deatail(QWidget *parent)
	: QWidget(parent)
{
	//ui.setupUi(this);
	nationallabel = new QLabel(tr("����/��ַ��"));
	nationalComBox = new QComboBox;
	nationalComBox->insertItem(0, tr("�й�"));
	nationalComBox->insertItem(1, tr("����"));
	nationalComBox->insertItem(2, tr("Ӣ��"));

	ProvinceLabel = new QLabel(tr("ʡ�ݣ�"));
	ProvinceComBox = new QComboBox;
	ProvinceComBox->insertItem(0, tr("����"));
	ProvinceComBox->insertItem(1, tr("ɽ��"));
	ProvinceComBox->insertItem(2, tr("�㽭"));

	Citylabel = new QLabel(tr("���У�"));
	CityEdit = new QLineEdit;

	IntroduceLabel = new QLabel(tr("����˵����"));
	IntroduceEdit = new QTextEdit;

	mainLayout = new QGridLayout(this);
	mainLayout->setMargin(15);
	mainLayout->setSpacing(10);
	mainLayout->addWidget(nationallabel, 0, 0);
	mainLayout->addWidget(nationalComBox, 0, 1);
	mainLayout->addWidget(ProvinceLabel, 1, 0);
	mainLayout->addWidget(ProvinceComBox, 1, 1);
	mainLayout->addWidget(Citylabel, 2, 0);
	mainLayout->addWidget(CityEdit, 2, 1);
	mainLayout->addWidget(IntroduceLabel, 3, 0);
	mainLayout->addWidget(IntroduceEdit, 3, 1);
	mainLayout->setSizeConstraint(QLayout::SetFixedSize);
}

Deatail::~Deatail()
{

}
