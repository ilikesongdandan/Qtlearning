#include "baseinfo.h"
#if _MSC_VER >= 1600  

#pragma execution_character_set("utf-8")  

#endif  


BaseInfo::BaseInfo(QWidget *parent)
	: QWidget(parent)
{
	//ui.setupUi(this);
	//setWindowTitle(tr("UserInfo"));
	//lefty
	userNameLabel = new QLabel(tr("用户名："));
	userNameLineEdit = new QLineEdit;
	NameLabel = new QLabel(tr("姓名："));
	NameLineEdit = new QLineEdit;
	SexLabel = new QLabel(tr("性别："));
	SexComboBox = new QComboBox;
	SexComboBox->addItem(tr("女"));
	SexComboBox->addItem(tr("男"));
	DepartmentLabel = new QLabel(tr("部门："));
	DepartmentTextEdit = new QTextEdit;
	AgeLabel = new QLabel(tr("年龄："));
	AgeLineEdit = new QLineEdit;
	OtherLabel = new QLabel(tr("备注："));
	OtherLabel->setFrameStyle(QFrame::Panel | QFrame::Sunken);

	leftLayout = new QGridLayout();
	leftLayout->addWidget(userNameLabel, 0, 0);
	leftLayout->addWidget(userNameLineEdit, 0, 1);

	leftLayout->addWidget(NameLabel, 1, 0);
	leftLayout->addWidget(NameLineEdit, 1, 1);

	leftLayout->addWidget(SexLabel, 2, 0);
	leftLayout->addWidget(SexComboBox, 2, 1);

	leftLayout->addWidget(DepartmentLabel, 3, 0);
	leftLayout->addWidget(DepartmentTextEdit, 3, 1);

	leftLayout->addWidget(AgeLabel, 4, 0);
	leftLayout->addWidget(AgeLineEdit, 4, 1);

	leftLayout->addWidget(OtherLabel, 5, 0, 1, 2);

	leftLayout->setColumnStretch(0, 1);
	leftLayout->setColumnStretch(1, 3);

	//right
	headLabel = new QLabel(tr("头像"));
	headIconLabel = new QLabel;
	QPixmap icon("3.png");
	headIconLabel->setPixmap(icon);
	headIconLabel->resize(icon.width(), icon.height());
	UpdateHeadBtn = new QPushButton(tr("更新"));

	topRightLayout = new QHBoxLayout();
	topRightLayout->setSpacing(20);
	topRightLayout->addWidget(headLabel);
	topRightLayout->addWidget(headIconLabel);
	topRightLayout->addWidget(UpdateHeadBtn);
	Introductionlabel = new QLabel(tr("个人说明："));
	IntroductionTextEdit = new QTextEdit;

	RightLayout = new QVBoxLayout();
	RightLayout->setMargin(10);
	RightLayout->addLayout(topRightLayout);
	RightLayout->addWidget(Introductionlabel);
	RightLayout->addWidget(IntroductionTextEdit);

	/*//bottom
	OkBtn = new QPushButton(tr("确定"));
	CancelBtn = new QPushButton(tr("取消"));

	ButtomLayout = new QHBoxLayout();
	ButtomLayout->addStretch();
	ButtomLayout->addWidget(OkBtn);
	ButtomLayout->addWidget(CancelBtn);*/

	QGridLayout *mainlayout = new QGridLayout(this);
	mainlayout->setMargin(15);
	mainlayout->setSpacing(10);
	mainlayout->addLayout(leftLayout, 0, 0);
	mainlayout->addLayout(RightLayout, 0, 1);
	//mainlayout->addLayout(ButtomLayout, 1, 0, 1, 2);
	mainlayout->setSizeConstraint(QLayout::SetFixedSize);
}

BaseInfo::~BaseInfo()
{

}
