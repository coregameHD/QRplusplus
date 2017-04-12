#ifndef QRPLUSPLUS_H
#define QRPLUSPLUS_H

#include <QtWidgets>
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
	std::string fileDirectory;
	QString dir;
	int borderSize() { return ui.spinBox_borderSize->value(); }
	std::string getColor();

	private slots:
	void exitApp();
	void doneDialog();
	void generateQR();
	void enableButton();
	void aboutDialog();
	void selectDirectory();
};

#endif // QRPLUSPLUS_H
