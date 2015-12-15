#ifndef PROGRESSSDLG_H
#define PROGRESSSDLG_H

#include <QtWidgets/QDialog>
#include "headers.h"
//#include "ui_progresssdlg.h"

class ProgresssDlg : public QDialog
{
	Q_OBJECT

public:
	ProgresssDlg(QWidget *parent = 0);
	~ProgresssDlg();

private:
	//Ui::ProgresssDlgClass ui;
	QLabel *fileNum;
	QLineEdit *fileNumLineEdit;
	QLabel *progressType;
	QComboBox *comboBox;
	QProgressBar *progressBar;
	QPushButton *startBtn;
	QGridLayout *mainLayout;


private slots:
	void stratProgress();
};

#endif // PROGRESSSDLG_H
