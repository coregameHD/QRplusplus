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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QRplusplusClass
{
public:
    QAction *actionGenerate;
    QAction *actionExit;
    QAction *actionAbout;
    QWidget *centralWidget;
    QGroupBox *groupInput;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *pasteButton;
    QPushButton *clearButton;
    QPlainTextEdit *userTextInput;
    QGroupBox *groupCustomize;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QSpinBox *spinBox_pixelsize;
    QComboBox *comboBox_errorlvl;
    QSpinBox *spinBox_borderSize;
    QComboBox *comboBox_color;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *generateButton;
    QPushButton *exitButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QRplusplusClass)
    {
        if (QRplusplusClass->objectName().isEmpty())
            QRplusplusClass->setObjectName(QStringLiteral("QRplusplusClass"));
        QRplusplusClass->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QRplusplusClass->sizePolicy().hasHeightForWidth());
        QRplusplusClass->setSizePolicy(sizePolicy);
        QRplusplusClass->setMinimumSize(QSize(800, 600));
        QRplusplusClass->setMaximumSize(QSize(800, 600));
        actionGenerate = new QAction(QRplusplusClass);
        actionGenerate->setObjectName(QStringLiteral("actionGenerate"));
        actionGenerate->setEnabled(false);
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
        verticalLayoutWidget = new QWidget(groupInput);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 30, 741, 301));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pasteButton = new QPushButton(verticalLayoutWidget);
        pasteButton->setObjectName(QStringLiteral("pasteButton"));

        horizontalLayout->addWidget(pasteButton);

        clearButton = new QPushButton(verticalLayoutWidget);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setEnabled(false);

        horizontalLayout->addWidget(clearButton);


        verticalLayout->addLayout(horizontalLayout);

        userTextInput = new QPlainTextEdit(verticalLayoutWidget);
        userTextInput->setObjectName(QStringLiteral("userTextInput"));

        verticalLayout->addWidget(userTextInput);

        groupCustomize = new QGroupBox(centralWidget);
        groupCustomize->setObjectName(QStringLiteral("groupCustomize"));
        groupCustomize->setGeometry(QRect(20, 400, 600, 120));
        gridLayoutWidget = new QWidget(groupCustomize);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 30, 561, 61));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 3, 1, 1);

        spinBox_pixelsize = new QSpinBox(gridLayoutWidget);
        spinBox_pixelsize->setObjectName(QStringLiteral("spinBox_pixelsize"));
        spinBox_pixelsize->setValue(5);

        gridLayout->addWidget(spinBox_pixelsize, 3, 0, 1, 1);

        comboBox_errorlvl = new QComboBox(gridLayoutWidget);
        comboBox_errorlvl->setObjectName(QStringLiteral("comboBox_errorlvl"));

        gridLayout->addWidget(comboBox_errorlvl, 3, 1, 1, 1);

        spinBox_borderSize = new QSpinBox(gridLayoutWidget);
        spinBox_borderSize->setObjectName(QStringLiteral("spinBox_borderSize"));
        spinBox_borderSize->setMinimum(4);
        spinBox_borderSize->setMaximum(40);
        spinBox_borderSize->setValue(4);

        gridLayout->addWidget(spinBox_borderSize, 3, 2, 1, 1);

        comboBox_color = new QComboBox(gridLayoutWidget);
        comboBox_color->setObjectName(QStringLiteral("comboBox_color"));

        gridLayout->addWidget(comboBox_color, 3, 3, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 2, 1, 1);

        generateButton = new QPushButton(centralWidget);
        generateButton->setObjectName(QStringLiteral("generateButton"));
        generateButton->setEnabled(false);
        generateButton->setGeometry(QRect(640, 410, 140, 70));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        generateButton->setFont(font);
        exitButton = new QPushButton(centralWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(640, 490, 140, 28));
        QRplusplusClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QRplusplusClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        QRplusplusClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(QRplusplusClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QRplusplusClass->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        label->setBuddy(userTextInput);
        label_5->setBuddy(comboBox_color);
        label_3->setBuddy(comboBox_errorlvl);
        label_2->setBuddy(spinBox_pixelsize);
        label_4->setBuddy(spinBox_borderSize);
#endif // QT_NO_SHORTCUT

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionGenerate);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuAbout->addAction(actionAbout);

        retranslateUi(QRplusplusClass);
        QObject::connect(clearButton, SIGNAL(clicked()), userTextInput, SLOT(clear()));
        QObject::connect(pasteButton, SIGNAL(clicked()), userTextInput, SLOT(paste()));

        QMetaObject::connectSlotsByName(QRplusplusClass);
    } // setupUi

    void retranslateUi(QMainWindow *QRplusplusClass)
    {
        QRplusplusClass->setWindowTitle(QApplication::translate("QRplusplusClass", "QRplusplus", Q_NULLPTR));
        actionGenerate->setText(QApplication::translate("QRplusplusClass", "Generate", Q_NULLPTR));
        actionExit->setText(QApplication::translate("QRplusplusClass", "Exit", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("QRplusplusClass", "About", Q_NULLPTR));
        groupInput->setTitle(QApplication::translate("QRplusplusClass", "Input", Q_NULLPTR));
        label->setText(QApplication::translate("QRplusplusClass", "Text:", Q_NULLPTR));
        pasteButton->setText(QApplication::translate("QRplusplusClass", "Paste", Q_NULLPTR));
        clearButton->setText(QApplication::translate("QRplusplusClass", "Clear", Q_NULLPTR));
        userTextInput->setPlainText(QString());
        userTextInput->setPlaceholderText(QApplication::translate("QRplusplusClass", "Enter your text to be put into the QR Code...", Q_NULLPTR));
        groupCustomize->setTitle(QApplication::translate("QRplusplusClass", "Customize", Q_NULLPTR));
        label_5->setText(QApplication::translate("QRplusplusClass", "Color:", Q_NULLPTR));
        comboBox_errorlvl->clear();
        comboBox_errorlvl->insertItems(0, QStringList()
         << QApplication::translate("QRplusplusClass", "Low (Default)", Q_NULLPTR)
         << QApplication::translate("QRplusplusClass", "Medium", Q_NULLPTR)
         << QApplication::translate("QRplusplusClass", "Quartile", Q_NULLPTR)
         << QApplication::translate("QRplusplusClass", "High", Q_NULLPTR)
        );
        comboBox_color->clear();
        comboBox_color->insertItems(0, QStringList()
         << QApplication::translate("QRplusplusClass", "Black (Default)", Q_NULLPTR)
         << QApplication::translate("QRplusplusClass", "Red", Q_NULLPTR)
         << QApplication::translate("QRplusplusClass", "Pink", Q_NULLPTR)
         << QApplication::translate("QRplusplusClass", "Purple", Q_NULLPTR)
         << QApplication::translate("QRplusplusClass", "Deep Purple", Q_NULLPTR)
         << QApplication::translate("QRplusplusClass", "Indigo", Q_NULLPTR)
         << QApplication::translate("QRplusplusClass", "Blue", Q_NULLPTR)
         << QApplication::translate("QRplusplusClass", "Cyan", Q_NULLPTR)
         << QApplication::translate("QRplusplusClass", "Teal", Q_NULLPTR)
         << QApplication::translate("QRplusplusClass", "Green", Q_NULLPTR)
         << QApplication::translate("QRplusplusClass", "Orange", Q_NULLPTR)
         << QApplication::translate("QRplusplusClass", "Deep Orange", Q_NULLPTR)
         << QApplication::translate("QRplusplusClass", "Brown", Q_NULLPTR)
         << QApplication::translate("QRplusplusClass", "Grey", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("QRplusplusClass", "Error Correction:", Q_NULLPTR));
        label_2->setText(QApplication::translate("QRplusplusClass", "Pixel Size:", Q_NULLPTR));
        label_4->setText(QApplication::translate("QRplusplusClass", "Border Size:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        generateButton->setToolTip(QApplication::translate("QRplusplusClass", "Generate Button", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        generateButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
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
