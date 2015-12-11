#ifndef CONTENT_H
#define CONTENT_H

#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QLabel>

#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>

#include <QtGui/QPixmap>


#include "baseinfo.h"
#include "contact.h"
#include "deatail.h"
//#include "ui_content.h"


class Content : public QFrame
{
	Q_OBJECT

public:
	Content(QWidget *parent = 0);
	~Content();
	QStackedWidget *stack;
	QPushButton *AmendBtn;
	QPushButton *CloseBtn;

	BaseInfo *baseinfo;
	Contact *contact;
	Deatail *detail;

private:
	//Ui::ContentClass ui;
private slots :
	//void closed1();
};
//void Content::closed1(){
	//close();
//}
#endif // CONTENT_H
