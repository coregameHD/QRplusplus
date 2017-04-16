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
	void aboutDialog();
	void selectDirectory();
	void aboutQt();
};

// ===================================
// UI Initialization
// ===================================

void QRplusplus::initMenuBar() {
	// Menu Bar
	connect(ui.actionBrowse, &QAction::triggered, this, &QRplusplus::selectDirectory);
	connect(ui.actionOpen, &QAction::triggered, this, &QRplusplus::openFile);
	connect(ui.actionExit, &QAction::triggered, this, &QRplusplus::exitApp);

	connect(ui.actionWebsite, &QAction::triggered, this, &QRplusplus::openWeb);
	connect(ui.actionGithub, &QAction::triggered, this, &QRplusplus::openGithub);
	connect(ui.actionAbout_Qt, &QAction::triggered, this, &QRplusplus::aboutQt);
	connect(ui.actionAbout, &QAction::triggered, this, &QRplusplus::aboutDialog);
}

void QRplusplus::initFileDirectory() {
	// File directory
	dir = QDir::currentPath();
	ui.lineEdit_fileDirectory->setText(dir);
}

void QRplusplus::initPushButton() {
	// Push Button
	connect(ui.exitButton, SIGNAL(clicked()), this, SLOT(exitApp()));
	connect(ui.userTextInput, SIGNAL(textChanged()), this, SLOT(enableButton()));
	connect(ui.generateButton, SIGNAL(clicked()), this, SLOT(generateQR()));
	connect(ui.browseButton, SIGNAL(clicked()), this, SLOT(selectDirectory()));
}

/*
* Colorize each color in comboBox_color combobox.
*/
void QRplusplus::initColorComboBox() {
	ui.comboBox_color->setItemData(1, QBrush(QColor(244, 67, 54)), Qt::TextColorRole); // Red
	ui.comboBox_color->setItemData(2, QBrush(QColor(233, 30, 99)), Qt::TextColorRole); // Pink
	ui.comboBox_color->setItemData(3, QBrush(QColor(156, 39, 176)), Qt::TextColorRole); // Purple
	ui.comboBox_color->setItemData(4, QBrush(QColor(103, 58, 183)), Qt::TextColorRole); // Deep Purple
	ui.comboBox_color->setItemData(5, QBrush(QColor(63, 81, 181)), Qt::TextColorRole); // Indigo
	ui.comboBox_color->setItemData(6, QBrush(QColor(33, 150, 243)), Qt::TextColorRole); // Blue
	ui.comboBox_color->setItemData(7, QBrush(QColor(0, 188, 212)), Qt::TextColorRole); // Cyan
	ui.comboBox_color->setItemData(8, QBrush(QColor(0, 150, 136)), Qt::TextColorRole); // Teal
	ui.comboBox_color->setItemData(9, QBrush(QColor(76, 175, 80)), Qt::TextColorRole); // Green
	ui.comboBox_color->setItemData(10, QBrush(QColor(255, 152, 0)), Qt::TextColorRole); // Orange
	ui.comboBox_color->setItemData(11, QBrush(QColor(255, 87, 34)), Qt::TextColorRole); // Deep Orange
	ui.comboBox_color->setItemData(12, QBrush(QColor(121, 85, 72)), Qt::TextColorRole); // Brown
	ui.comboBox_color->setItemData(13, QBrush(QColor(75, 75, 75)), Qt::TextColorRole); // Grey
}

void QRplusplus::initStatusBar() {
	// Status Bar
	ui.statusBar->showMessage("Status: Ready");

	// Status Tip
	ui.groupDirectory->setStatusTip("Select save file location.");
	ui.groupInput->setStatusTip("Enter your text to be put into the QR Code.");
	ui.groupCustomize->setStatusTip("Select QR Code Sizes and Colors.");
	ui.generateButton->setStatusTip("Click to generate a QR Code.");
	ui.exitButton->setStatusTip("Exit an application.");
}

#endif // QRPLUSPLUS_H
