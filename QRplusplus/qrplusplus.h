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
	void openWeb() { QDesktopServices::openUrl
	(QUrl("https://coregame-th.com/", QUrl::TolerantMode));}
	void openGithub() { QDesktopServices::openUrl
	(QUrl("https://github.com/coregameHD/QRplusplus", QUrl::TolerantMode));}
	void openFile() {
		QDesktopServices::openUrl(QUrl::fromLocalFile(dir));
	}
	std::string getColor();

	// UI Initialization
	void initMenuBar();
	void initFileDirectory();
	void initPushButton();
	void initColorComboBox();
	void initStatusBar();

	// SLOT
	private slots:
	void exitApp();
	void doneDialog();
	void generateQR();
	void enableButton();
	void nayukiDialog();
	void aboutDialog();
	void selectDirectory();
	void aboutQt();
};

#endif // QRPLUSPLUS_H
