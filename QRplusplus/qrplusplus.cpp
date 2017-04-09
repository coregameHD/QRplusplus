#include "qrplusplus.h"
#include <QtWidgets/QMessageBox>

QRplusplus::QRplusplus(QWidget *parent) : QMainWindow(parent)
{
	ui.setupUi(this);

	// exitButton = Quit an application
	connect(ui.exitButton, SIGNAL(clicked()), this, SLOT(exitapp()));
	connect(ui.generateButton, SIGNAL(clicked()), this, SLOT(donedialog()));
}

QRplusplus::~QRplusplus()
{

}

// A function to quit an application
void QRplusplus::exitapp() {
	QApplication::exit();
}

void QRplusplus::donedialog() {
	QMessageBox msgBox;
	QString msg = "Hello " + ui.lineEdit->text();
	msgBox.setText(msg);
	msgBox.exec();
}