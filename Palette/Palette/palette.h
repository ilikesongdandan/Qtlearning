#ifndef PALETTE_H
#define PALETTE_H

#include <QtWidgets/QDialog>
//#include "ui_palette.h"
#include "headers.h"

class Palette : public QDialog
{
	Q_OBJECT

public:
	Palette(QWidget *parent = 0);
	~Palette();
	void createCtrlFrame();
	void createContentFrame();
	void fillColorList(QComboBox *);

private:
	//Ui::PaletteClass ui;
	QFrame *ctrlFrame;
	QLabel *windowLabel;
	QComboBox *windowComboBox;
	QLabel *windowTextLabel;
	QComboBox *windowTextComboBox;
	QLabel *buttonLabel;
	QComboBox *buttonComboBox;
	QLabel *buttonTextLabel;
	QComboBox *buttonTextComboBox;
	QLabel *baseLabel;
	QComboBox *baseComboBox;
	QFrame *contentFrame();


	private slots:


};

#endif // PALETTE_H
