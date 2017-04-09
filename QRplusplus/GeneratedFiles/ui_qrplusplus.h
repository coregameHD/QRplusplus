/********************************************************************************
** Form generated from reading UI file 'qrplusplus.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QRPLUSPLUS_H
#define UI_QRPLUSPLUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QRplusplusClass
{
public:
    QAction *actionOpen;
    QAction *actionExit;
    QAction *actionAbout;
    QWidget *centralWidget;
    QGroupBox *groupInput;
    QLabel *label;
    QLineEdit *lineEdit;
    QGroupBox *groupCustomize;
    QLabel *label_2;
    QSpinBox *spinBox_pixelsize;
    QLabel *label_3;
    QComboBox *comboBox_errorcor;
    QLabel *label_4;
    QSpinBox *spinBox_marginsize;
    QLabel *label_5;
    QComboBox *comboBox_color;
    QPushButton *generateButton;
    QPushButton *exitButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QRplusplusClass)
    {
        if (QRplusplusClass->objectName().isEmpty())
            QRplusplusClass->setObjectName(QStringLiteral("QRplusplusClass"));
        QRplusplusClass->resize(800, 600);
        QRplusplusClass->setMaximumSize(QSize(800, 600));
        actionOpen = new QAction(QRplusplusClass);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionExit = new QAction(QRplusplusClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout = new QAction(QRplusplusClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(QRplusplusClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupInput = new QGroupBox(centralWidget);
        groupInput->setObjectName(QStringLiteral("groupInput"));
        groupInput->setGeometry(QRect(20, 20, 760, 360));
        groupInput->setMaximumSize(QSize(760, 360));
        label = new QLabel(groupInput);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 55, 16));
        lineEdit = new QLineEdit(groupInput);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(30, 60, 700, 280));
        lineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        groupCustomize = new QGroupBox(centralWidget);
        groupCustomize->setObjectName(QStringLiteral("groupCustomize"));
        groupCustomize->setGeometry(QRect(20, 400, 600, 120));
        label_2 = new QLabel(groupCustomize);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 30, 71, 16));
        spinBox_pixelsize = new QSpinBox(groupCustomize);
        spinBox_pixelsize->setObjectName(QStringLiteral("spinBox_pixelsize"));
        spinBox_pixelsize->setGeometry(QRect(20, 60, 121, 22));
        spinBox_pixelsize->setValue(5);
        label_3 = new QLabel(groupCustomize);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(160, 30, 111, 16));
        comboBox_errorcor = new QComboBox(groupCustomize);
        comboBox_errorcor->setObjectName(QStringLiteral("comboBox_errorcor"));
        comboBox_errorcor->setGeometry(QRect(160, 60, 121, 22));
        label_4 = new QLabel(groupCustomize);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(300, 30, 111, 16));
        spinBox_marginsize = new QSpinBox(groupCustomize);
        spinBox_marginsize->setObjectName(QStringLiteral("spinBox_marginsize"));
        spinBox_marginsize->setGeometry(QRect(300, 60, 121, 22));
        spinBox_marginsize->setValue(4);
        label_5 = new QLabel(groupCustomize);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(440, 30, 111, 16));
        comboBox_color = new QComboBox(groupCustomize);
        comboBox_color->setObjectName(QStringLiteral("comboBox_color"));
        comboBox_color->setGeometry(QRect(440, 60, 121, 22));
        generateButton = new QPushButton(centralWidget);
        generateButton->setObjectName(QStringLiteral("generateButton"));
        generateButton->setGeometry(QRect(640, 410, 141, 71));
        exitButton = new QPushButton(centralWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(640, 490, 141, 28));
        QRplusplusClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QRplusplusClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        QRplusplusClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QRplusplusClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QRplusplusClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QRplusplusClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QRplusplusClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuAbout->addAction(actionAbout);

        retranslateUi(QRplusplusClass);

        QMetaObject::connectSlotsByName(QRplusplusClass);
    } // setupUi

    void retranslateUi(QMainWindow *QRplusplusClass)
    {
        QRplusplusClass->setWindowTitle(QApplication::translate("QRplusplusClass", "QRplusplus", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("QRplusplusClass", "Open", Q_NULLPTR));
        actionExit->setText(QApplication::translate("QRplusplusClass", "Exit", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("QRplusplusClass", "About", Q_NULLPTR));
        groupInput->setTitle(QApplication::translate("QRplusplusClass", "Input", Q_NULLPTR));
        label->setText(QApplication::translate("QRplusplusClass", "Text:", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("QRplusplusClass", "Insert text here...", Q_NULLPTR));
        groupCustomize->setTitle(QApplication::translate("QRplusplusClass", "Customize", Q_NULLPTR));
        label_2->setText(QApplication::translate("QRplusplusClass", "Pixel Size:", Q_NULLPTR));
        label_3->setText(QApplication::translate("QRplusplusClass", "Error Correction:", Q_NULLPTR));
        comboBox_errorcor->clear();
        comboBox_errorcor->insertItems(0, QStringList()
         << QApplication::translate("QRplusplusClass", "Low", Q_NULLPTR)
         << QApplication::translate("QRplusplusClass", "Medium", Q_NULLPTR)
         << QApplication::translate("QRplusplusClass", "Quartile", Q_NULLPTR)
         << QApplication::translate("QRplusplusClass", "High", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("QRplusplusClass", "Margin Size:", Q_NULLPTR));
        label_5->setText(QApplication::translate("QRplusplusClass", "Color:", Q_NULLPTR));
        comboBox_color->clear();
        comboBox_color->insertItems(0, QStringList()
         << QApplication::translate("QRplusplusClass", "Black", Q_NULLPTR)
        );
        generateButton->setText(QApplication::translate("QRplusplusClass", "Generate", Q_NULLPTR));
        exitButton->setText(QApplication::translate("QRplusplusClass", "Exit", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("QRplusplusClass", "File", Q_NULLPTR));
        menuAbout->setTitle(QApplication::translate("QRplusplusClass", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QRplusplusClass: public Ui_QRplusplusClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QRPLUSPLUS_H
