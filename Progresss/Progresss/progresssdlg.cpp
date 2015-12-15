#include "progresssdlg.h"
#if _MSC_VER >= 1600  

#pragma execution_character_set("utf-8")  

#endif  


ProgresssDlg::ProgresssDlg(QWidget *parent)
	: QDialog(parent)
{
	//ui.setupUi(this);
	QFont font("ZYSong18030", 12);
	setFont(font);
	setWindowTitle(tr("Progress"));

	fileNum = new QLabel(tr("�ļ���Ŀ��"));
	fileNumLineEdit = new QLineEdit;
	fileNumLineEdit->setText("100000");

	progressType = new QLabel(tr("��ʾ���ͣ�"));
	comboBox = new QComboBox;
	comboBox->addItem(tr("porgressBar"));
	comboBox->addItem(tr("progressDialog"));

	progressBar = new QProgressBar;

	startBtn = new QPushButton;
	startBtn->setText(tr("��ʼ"));

	mainLayout = new QGridLayout(this);
	mainLayout->addWidget(fileNum, 0, 0);
	mainLayout->addWidget(fileNumLineEdit, 0, 1);
	mainLayout->addWidget(progressType, 1, 0);
	mainLayout->addWidget(comboBox, 1, 1);
	mainLayout->addWidget(progressBar, 2, 0, 1, 2);
	mainLayout->addWidget(startBtn, 3, 1);
	mainLayout->setMargin(15);
	mainLayout->setSpacing(10);
	connect(startBtn, SIGNAL(clicked()), this, SLOT(stratProgress()));
}

ProgresssDlg::~ProgresssDlg()
{

}
void ProgresssDlg::stratProgress(){
	bool ok;
	int num = fileNumLineEdit->text().toInt(&ok);

	if (comboBox->currentIndex() == 0){
		progressBar->setRange(0, num);
		for (int i = 1; i < num + 1;i++)
		{
			progressBar->setValue(i);
		}
	}
	else if (comboBox->currentIndex() == 1){
		QProgressDialog *progressDialog = new QProgressDialog(this);
		QFont font("ZYSong18030", 12);
		progressDialog->setFont(font);
		progressDialog->setWindowTitle(tr("Please Wait"));
		progressDialog->setWindowModality(Qt::WindowModal);
		progressDialog->setMinimumDuration(5);
		progressDialog->setLabelText(tr("Copying..."));
		progressDialog->setCancelButtonText(tr("Cancel"));
		progressDialog->setRange(0, num);
		for (int i = 1; i < num + 1;i++)
		{
			progressDialog->setValue(i);
			if (progressDialog->wasCanceled())
				return;
		}
	}
}