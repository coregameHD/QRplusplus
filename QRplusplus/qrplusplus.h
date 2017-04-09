#ifndef QRPLUSPLUS_H
#define QRPLUSPLUS_H

#include <QtWidgets/QMainWindow>
#include "ui_qrplusplus.h"

class QRplusplus : public QMainWindow
{
	Q_OBJECT

public:
	QRplusplus(QWidget *parent = 0);
	~QRplusplus();

private:
	Ui::QRplusplusClass ui;
	private slots:
	void exitapp();
	void donedialog();
};

#endif // QRPLUSPLUS_H
