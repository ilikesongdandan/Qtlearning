#include "content.h"

#if _MSC_VER >= 1600  

#pragma execution_character_set("utf-8")  

#endif  



Content::Content(QWidget *parent)
	: QFrame(parent)
{
	//ui.setupUi(this);
	stack = new QStackedWidget(this);
	stack->setFrameStyle(QFrame::Panel | QFrame::Raised);
	baseinfo = new BaseInfo();
	contact = new Contact();
	detail = new Deatail();

	stack->addWidget(baseinfo);
	stack->addWidget(contact);
	stack->addWidget(detail);

	AmendBtn = new QPushButton(tr("修改"));
	CloseBtn = new QPushButton(tr("关闭"));
	QHBoxLayout *BtnLayout = new QHBoxLayout();
	BtnLayout->addStretch(1);
	BtnLayout->addWidget(AmendBtn);
	BtnLayout->addWidget(CloseBtn);

	QVBoxLayout *RightLayout = new QVBoxLayout(this);
	RightLayout->setMargin(10);
	RightLayout->setSpacing(6);
	RightLayout->addWidget(stack);
	RightLayout->addLayout(BtnLayout);

	//connect(CloseBtn, SIGNAL(clicked()), this, SLOT(exec()));

}

Content::~Content()
{

}
