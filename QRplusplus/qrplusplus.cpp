#include <QtWidgets>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "qrplusplus.h"
#include "QrCode.hpp"

/*
* Default Constructor with initial setup.
*/
QRplusplus::QRplusplus(QWidget *parent) : QMainWindow(parent) {
	ui.setupUi(this);

	initMenuBar();
	initFileDirectory();
	initPushButton();
	initColorComboBox();
	initStatusBar();
}

/*
* Default Destructor
*/
QRplusplus::~QRplusplus(){
	// pass
}

/*
* A function to open a landing page site.
*/
void QRplusplus::openWeb() {
	QDesktopServices::openUrl
	(QUrl("", QUrl::TolerantMode)); // TODO: Insert website here
}

/*
* A function to open a Github page.
*/
void QRplusplus::openGithub() {
	QDesktopServices::openUrl
	(QUrl("https://github.com/coregameHD/QRplusplus", QUrl::TolerantMode));
}

/*
* Display 'Done' dialog with text to be encoded.
*/
void QRplusplus::doneDialog() {
	QMessageBox msgBox;
	msgBox.setIcon(QMessageBox::Information);
	QString msg = "Done!\n\nText to be encoded: \n" + ui.userTextInput->toPlainText();
	msgBox.setText(msg);
	msgBox.exec();
}

/*
* Display 'About Nayuki's QR Code Generator Library' Dialog.
*/
void QRplusplus::nayukiDialog() {
	QMessageBox msgBox;
	msgBox.setWindowTitle("About Nayuki's qrcodegen");
	msgBox.setTextFormat(Qt::RichText);
	msgBox.setText("<b>Nayuki's QR Code Generator Library</b>\
	<br>Copyright 2017 Project Nayuki. (MIT License)\
	<br><br><a href=\"https://www.nayuki.io/page/qr-code-generator-library\">\
	https://www.nayuki.io/page/qr-code-generator-library</a></p> \
	<br><br>Permission is hereby granted, free of charge, to any person obtaining \
	a copy of this software and associated documentation files (the \"Software\"), to \
	deal in the Software without restriction, including without limitation the rights \
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of \
	the Software, and to permit persons to whom the Software is furnished to do so, \
	subject to the following conditions:\
	<br><br>The above copyright notice and this permission notice shall be \
	included in all copies or substantial portions of the Software.\
	<br><br>The Software \
	is provided \"as is\", without warranty of any kind, express or implied, \
	including but not limited to the warranties of merchantability, fitness \
	for a particular purpose and noninfringement. In no event shall the authors or \
	copyright holders be liable for any claim, damages or other liability, whether \
	in an action of contract, tort or otherwise, arising from, out of or in connection \
	with the Software or the use or other dealings in the Software.");
	msgBox.exec();
}

/*
* Display true 'About' dialog.
*/
void QRplusplus::aboutDialog() {
	QMessageBox msgBox;
	msgBox.setWindowTitle("About QR++");
	msgBox.setTextFormat(Qt::RichText);
	msgBox.setText("<b>QRplusplus</b> \
	<br>C++ QR Code Generator\
	<br><br> Build with love by Coregame\
	<br><br><b>Github: </b><a href=\"https://github.com/coregameHD/QRplusplus\">\
	https://github.com/coregameHD/QRplusplus</a></p> \
	<br><b>Download: </b><a href=\"https://github.com/coregameHD/QRplusplus/releases\">\
	https://github.com/coregameHD/QRplusplus/releases</a></p>");
	msgBox.exec();
}

// ===================================
//			Qt Slots
// ===================================

/*
* When user open a program, by default, these buttons are disabled.
* enableButton() is a function to enable generateButton and clearButton
* if user enter any text in userTextInput textbox.
*/
void QRplusplus::enableButton() {
	ui.generateButton->setEnabled(!(ui.userTextInput->toPlainText().isEmpty()));
	ui.clearButton->setEnabled(!(ui.userTextInput->toPlainText().isEmpty()));
}

/*
* This function enables user to select a directory.
* By default, the dialog appear with current directory.
* Update file directory lineEdit and shows in the program.
*/
void QRplusplus::selectDirectory() {
	dir = QFileDialog::getExistingDirectory(this, tr("Select Directory"), QDir::currentPath());
	ui.lineEdit_fileDirectory->setText(dir);
}

/*
* Function to receive a text from userTextInput textbox.
* qrcodegen library will tranforms a text into QR Code as SVG format.
* Then, save generated SVG XML as a file, doneDialog will be appeared.
*/
void QRplusplus::generateQR() {
	// Convert from QString to const char*
	QString msgfromtextbox = ui.userTextInput->toPlainText();
	std::string stringtext = msgfromtextbox.toStdString();
	const char *text = stringtext.c_str();

	// Encode text into SVG XML format
	const qrcodegen::QrCode::Ecc &errCorLvl = qrcodegen::QrCode::Ecc::LOW;
	const qrcodegen::QrCode qr = qrcodegen::QrCode::encodeText(text, errCorLvl);
	
	// Save SVG XML into file
	std::ofstream myfile;
	myfile.open(dir.toStdString() + "/QRcode_output.svg");
	myfile << qr.toSvgString(QRplusplus::getBorderSize(), QRplusplus::getColor()) << std::endl;
	myfile.close();

	// Display doneDialog
	QRplusplus::doneDialog();

	// Change status
	ui.statusBar->showMessage("Done!");
}

/*
* A function to quit an application.
*/
void QRplusplus::exitApp() {
	QApplication::exit();
}

// ===================================
//			Getter Functions
// ===================================

/*
* Get current index from combobox_color and return its color in std::string format
* By default, it have 14 colors to choose. (Color palette from Android Material Design)
@return Hex color code without '#' symbol
*/
std::string QRplusplus::getColor() {
	// Get current index from comboBox_color
	int index = ui.comboBox_color->currentIndex();

	// Return the color from index
	switch (index) {
	case 0: return "000000"; break;	// Black (Default)
	case 1: return "F44336"; break;	// Red
	case 2: return "E91E63"; break; // Pink
	case 3: return "9C27B0"; break; // Purple
	case 4: return "673AB7"; break; // Deep Purple
	case 5: return "3F51B5"; break; // Indigo
	case 6: return "2196F3"; break; // Blue
	case 7: return "00BCD4"; break; // Cyan
	case 8: return "009688"; break; // Teal
	case 9: return "4CAF50"; break; // Green
	case 10: return "FF9800"; break; // Orange
	case 11: return "FF5722"; break; // Deep Orange
	case 12: return "795548"; break; // Brown
	case 13: return "4B4B4B"; break; // Grey
	}
}

// ===================================
//			UI Initialization
// ===================================

/*
* A function to initialize a menu bar.
*/
void QRplusplus::initMenuBar() {
	// Menu 'File'
	connect(ui.actionBrowse, &QAction::triggered, this, &QRplusplus::selectDirectory);
	connect(ui.actionOpen, &QAction::triggered, this, &QRplusplus::openFile);
	connect(ui.actionExit, &QAction::triggered, this, &QRplusplus::exitApp);

	// Menu 'About'
	connect(ui.actionWebsite, &QAction::triggered, this, &QRplusplus::openWeb);
	connect(ui.actionGithub, &QAction::triggered, this, &QRplusplus::openGithub);
	connect(ui.actionAbout_Qt, &QAction::triggered, this, &QRplusplus::aboutQt);
	connect(ui.actionAbout_Nayuki, &QAction::triggered, this, &QRplusplus::nayukiDialog);
	connect(ui.actionAbout, &QAction::triggered, this, &QRplusplus::aboutDialog);
}

/*
* A function to initialize file directory lineEdit.
@param dir	current path (system default)
*/
void QRplusplus::initFileDirectory() {
	// File directory
	dir = QDir::currentPath();
	ui.lineEdit_fileDirectory->setText(dir);
}

/*
* A function to initialize all pushButton.
*/
void QRplusplus::initPushButton() {
	// Push Button
	connect(ui.exitButton, SIGNAL(clicked()), this, SLOT(exitApp()));
	connect(ui.userTextInput, SIGNAL(textChanged()), this, SLOT(enableButton()));
	connect(ui.generateButton, SIGNAL(clicked()), this, SLOT(generateQR()));
	connect(ui.browseButton, SIGNAL(clicked()), this, SLOT(selectDirectory()));
}

/*
* Colorize each color in comboBox_color combobox.
* First parameter represent the index of comboBox_color.
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

/*
* A function to initialize status bar.
* Tooltip is a help text which tell user the function of each section of the program.
*/
void QRplusplus::initStatusBar() {
	// Status Bar
	ui.statusBar->showMessage("Status: Ready");

	// Tooltip
	ui.groupDirectory->setStatusTip("Select save file location.");
	ui.groupInput->setStatusTip("Enter your text to be put into the QR Code.");
	ui.groupCustomize->setStatusTip("Select QR Code Sizes and Colors.");
	ui.generateButton->setStatusTip("Click to generate a QR Code.");
	ui.exitButton->setStatusTip("Exit an application.");
}