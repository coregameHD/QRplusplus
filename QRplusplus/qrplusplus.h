#ifndef QRPLUSPLUS_H
#define QRPLUSPLUS_H

#include <QtWidgets/QMainWindow>
#include "ui_qrplusplus.h"
#include <string>

class QRplusplus : public QMainWindow
{
	Q_OBJECT

public:
	QRplusplus(QWidget *parent = 0);
	~QRplusplus();

private:
	Ui::QRplusplusClass ui;
	int borderSize() { return ui.spinBox_borderSize->value(); }
	std::string getColor();

	private slots:
	void exitApp();
	void doneDialog();
	void generateQR();
	void enableButton();
	void aboutDialog();
};

#endif // QRPLUSPLUS_H
