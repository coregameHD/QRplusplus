#include "qrplusplus.h"
#include "QrCode.hpp"
#include <QtWidgets>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

/*
* Default Constructor
*/
QRplusplus::QRplusplus(QWidget *parent) : QMainWindow(parent)
{
	ui.setupUi(this);
	this->setWindowTitle("QRplusplus : QR Code Generator");
	//ui.textEdit->setStatusTip("XXX");
	//this->setStatusTip("Status: Ready");
	//ui.statusBar->setStyleSheet("color: blue");
	ui.statusBar->showMessage("Text!");

	//File directory
	dir = QDir::currentPath();
	ui.lineEdit_fileDirectory->setText(dir);

	// Menu Bar
	connect(ui.actionGenerate, &QAction::triggered, this, &QRplusplus::generateQR);
	connect(ui.actionExit, &QAction::triggered, this, &QRplusplus::exitApp);
	connect(ui.actionAbout, &QAction::triggered, this, &QRplusplus::aboutDialog);

	// Push Button
	connect(ui.exitButton, SIGNAL(clicked()), this, SLOT(exitApp()));
	connect(ui.userTextInput, SIGNAL(textChanged()), this, SLOT(enableButton()));
	connect(ui.generateButton, SIGNAL(clicked()), this, SLOT(generateQR()));
	connect(ui.browseButton, SIGNAL(clicked()), this, SLOT(selectDirectory()));

	// Color Combobox
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
* Default Degenerator
*/
QRplusplus::~QRplusplus(){

}

/* 
* A function to quit an application 
*/
void QRplusplus::exitApp() {
	QApplication::exit();
}

/*
* When user open a program, by default, these buttons are disabled.
* enableButton() is a function to enable actionGenerate, generateButton, and clearButton
if user enter any text in userTextInput textbox.
*/
void QRplusplus::enableButton() {
	ui.actionGenerate->setEnabled(!(ui.userTextInput->toPlainText().isEmpty()));
	ui.generateButton->setEnabled(!(ui.userTextInput->toPlainText().isEmpty()));
	ui.clearButton->setEnabled(!(ui.userTextInput->toPlainText().isEmpty()));
}

/*
* Display 'Done' dialog
*/
void QRplusplus::doneDialog() {
	QMessageBox msgBox;
	msgBox.setIcon(QMessageBox::Information);
	QString msg = "Done!!\n\nText: \n" + ui.userTextInput->toPlainText();
	msgBox.setText(msg);
	msgBox.exec();
}

/*
* Display 'About' dialog
*/
void QRplusplus::aboutDialog() {
	QMessageBox msgBox;
	msgBox.setIcon(QMessageBox::Information);
	QString msg = "QRplusplus : QR Code Generator\n\nBuild with love by Coregame";
	msgBox.setText(msg);
	msgBox.exec();
}

/* 
* Get current index from combobox_color and return its color in std::string format
* By default, it have 14 colors to choose. (Color palette from Android Material Design) 
* @return Hex color code without '#' symbol
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

/*
* Function to receive a text from userTextInput textbox.
* qrcodegen library will tranforms a text into QR Code in SVG Format.
* Then, save SVG XML into file, doneDialog will be appeared.
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
	myfile << qr.toSvgString(QRplusplus::borderSize(), QRplusplus::getColor()) << std::endl;
	myfile.close();

	// Display doneDialog
	QRplusplus::doneDialog();
}

void QRplusplus::selectDirectory() {
	dir = QFileDialog::getExistingDirectory(this,
		tr("Select Directory"), QDir::currentPath());
	ui.lineEdit_fileDirectory->setText(dir);
}