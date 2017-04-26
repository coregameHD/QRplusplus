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
#include <QtWidgets/QLineEdit>
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
    QAction *actionOpen;
    QAction *actionWebsite;
    QAction *actionGithub;
    QAction *actionBrowse;
    QAction *actionGenerate_2;
    QAction *actionAbout_Qt;
    QAction *actionAbout_Nayuki;
    QWidget *centralWidget;
    QGroupBox *groupInput;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *inputLayout;
    QHBoxLayout *textLayout;
    QLabel *label_text;
    QSpacerItem *horizontalSpacer;
    QPushButton *pasteButton;
    QPushButton *clearButton;
    QPlainTextEdit *userTextInput;
    QGroupBox *groupCustomize;
    QWidget *gridLayoutWidget;
    QGridLayout *customizeLayout;
    QComboBox *comboBox_color;
    QLabel *label_errorCor;
    QComboBox *comboBox_errorlvl;
    QSpinBox *spinBox_borderSize;
    QLabel *label_color;
    QLabel *label_borderSize;
    QPushButton *generateButton;
    QPushButton *exitButton;
    QGroupBox *groupDirectory;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *directoryLayout;
    QLabel *label_saveto;
    QLineEdit *lineEdit_fileDirectory;
    QPushButton *browseButton;
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
        QIcon icon;
        icon.addFile(QStringLiteral("QRplusplus_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        QRplusplusClass->setWindowIcon(icon);
        actionGenerate = new QAction(QRplusplusClass);
        actionGenerate->setObjectName(QStringLiteral("actionGenerate"));
        actionGenerate->setEnabled(false);
        actionExit = new QAction(QRplusplusClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout = new QAction(QRplusplusClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionOpen = new QAction(QRplusplusClass);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionWebsite = new QAction(QRplusplusClass);
        actionWebsite->setObjectName(QStringLiteral("actionWebsite"));
        actionWebsite->setEnabled(false);
        actionGithub = new QAction(QRplusplusClass);
        actionGithub->setObjectName(QStringLiteral("actionGithub"));
        actionBrowse = new QAction(QRplusplusClass);
        actionBrowse->setObjectName(QStringLiteral("actionBrowse"));
        actionGenerate_2 = new QAction(QRplusplusClass);
        actionGenerate_2->setObjectName(QStringLiteral("actionGenerate_2"));
        actionAbout_Qt = new QAction(QRplusplusClass);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        actionAbout_Nayuki = new QAction(QRplusplusClass);
        actionAbout_Nayuki->setObjectName(QStringLiteral("actionAbout_Nayuki"));
        centralWidget = new QWidget(QRplusplusClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupInput = new QGroupBox(centralWidget);
        groupInput->setObjectName(QStringLiteral("groupInput"));
        groupInput->setGeometry(QRect(20, 100, 760, 281));
        groupInput->setMaximumSize(QSize(760, 360));
        verticalLayoutWidget = new QWidget(groupInput);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 30, 741, 231));
        inputLayout = new QVBoxLayout(verticalLayoutWidget);
        inputLayout->setSpacing(6);
        inputLayout->setContentsMargins(11, 11, 11, 11);
        inputLayout->setObjectName(QStringLiteral("inputLayout"));
        inputLayout->setContentsMargins(0, 0, 0, 0);
        textLayout = new QHBoxLayout();
        textLayout->setSpacing(6);
        textLayout->setObjectName(QStringLiteral("textLayout"));
        label_text = new QLabel(verticalLayoutWidget);
        label_text->setObjectName(QStringLiteral("label_text"));

        textLayout->addWidget(label_text);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        textLayout->addItem(horizontalSpacer);

        pasteButton = new QPushButton(verticalLayoutWidget);
        pasteButton->setObjectName(QStringLiteral("pasteButton"));

        textLayout->addWidget(pasteButton);

        clearButton = new QPushButton(verticalLayoutWidget);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setEnabled(false);

        textLayout->addWidget(clearButton);


        inputLayout->addLayout(textLayout);

        userTextInput = new QPlainTextEdit(verticalLayoutWidget);
        userTextInput->setObjectName(QStringLiteral("userTextInput"));

        inputLayout->addWidget(userTextInput);

        groupCustomize = new QGroupBox(centralWidget);
        groupCustomize->setObjectName(QStringLiteral("groupCustomize"));
        groupCustomize->setGeometry(QRect(20, 400, 600, 120));
        gridLayoutWidget = new QWidget(groupCustomize);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 30, 581, 61));
        customizeLayout = new QGridLayout(gridLayoutWidget);
        customizeLayout->setSpacing(6);
        customizeLayout->setContentsMargins(11, 11, 11, 11);
        customizeLayout->setObjectName(QStringLiteral("customizeLayout"));
        customizeLayout->setContentsMargins(0, 0, 0, 0);
        comboBox_color = new QComboBox(gridLayoutWidget);
        comboBox_color->setObjectName(QStringLiteral("comboBox_color"));

        customizeLayout->addWidget(comboBox_color, 3, 2, 1, 1);

        label_errorCor = new QLabel(gridLayoutWidget);
        label_errorCor->setObjectName(QStringLiteral("label_errorCor"));

        customizeLayout->addWidget(label_errorCor, 1, 0, 1, 1);

        comboBox_errorlvl = new QComboBox(gridLayoutWidget);
        comboBox_errorlvl->setObjectName(QStringLiteral("comboBox_errorlvl"));

        customizeLayout->addWidget(comboBox_errorlvl, 3, 0, 1, 1);

        spinBox_borderSize = new QSpinBox(gridLayoutWidget);
        spinBox_borderSize->setObjectName(QStringLiteral("spinBox_borderSize"));
        spinBox_borderSize->setMinimum(4);
        spinBox_borderSize->setMaximum(40);
        spinBox_borderSize->setValue(4);

        customizeLayout->addWidget(spinBox_borderSize, 3, 1, 1, 1);

        label_color = new QLabel(gridLayoutWidget);
        label_color->setObjectName(QStringLiteral("label_color"));

        customizeLayout->addWidget(label_color, 1, 2, 1, 1);

        label_borderSize = new QLabel(gridLayoutWidget);
        label_borderSize->setObjectName(QStringLiteral("label_borderSize"));

        customizeLayout->addWidget(label_borderSize, 1, 1, 1, 1);

        generateButton = new QPushButton(centralWidget);
        generateButton->setObjectName(QStringLiteral("generateButton"));
        generateButton->setEnabled(false);
        generateButton->setGeometry(QRect(640, 405, 140, 70));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        generateButton->setFont(font);
        exitButton = new QPushButton(centralWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(640, 490, 140, 28));
        groupDirectory = new QGroupBox(centralWidget);
        groupDirectory->setObjectName(QStringLiteral("groupDirectory"));
        groupDirectory->setGeometry(QRect(20, 20, 761, 61));
        horizontalLayoutWidget = new QWidget(groupDirectory);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 20, 741, 31));
        directoryLayout = new QHBoxLayout(horizontalLayoutWidget);
        directoryLayout->setSpacing(6);
        directoryLayout->setContentsMargins(11, 11, 11, 11);
        directoryLayout->setObjectName(QStringLiteral("directoryLayout"));
        directoryLayout->setContentsMargins(0, 0, 0, 0);
        label_saveto = new QLabel(horizontalLayoutWidget);
        label_saveto->setObjectName(QStringLiteral("label_saveto"));

        directoryLayout->addWidget(label_saveto);

        lineEdit_fileDirectory = new QLineEdit(horizontalLayoutWidget);
        lineEdit_fileDirectory->setObjectName(QStringLiteral("lineEdit_fileDirectory"));

        directoryLayout->addWidget(lineEdit_fileDirectory);

        browseButton = new QPushButton(horizontalLayoutWidget);
        browseButton->setObjectName(QStringLiteral("browseButton"));

        directoryLayout->addWidget(browseButton);

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
        label_text->setBuddy(userTextInput);
        label_errorCor->setBuddy(comboBox_errorlvl);
        label_color->setBuddy(comboBox_color);
        label_borderSize->setBuddy(spinBox_borderSize);
#endif // QT_NO_SHORTCUT

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionBrowse);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuAbout->addAction(actionWebsite);
        menuAbout->addAction(actionGithub);
        menuAbout->addSeparator();
        menuAbout->addAction(actionAbout_Qt);
        menuAbout->addAction(actionAbout_Nayuki);
        menuAbout->addAction(actionAbout);

        retranslateUi(QRplusplusClass);
        QObject::connect(clearButton, SIGNAL(clicked()), userTextInput, SLOT(clear()));
        QObject::connect(pasteButton, SIGNAL(clicked()), userTextInput, SLOT(paste()));

        QMetaObject::connectSlotsByName(QRplusplusClass);
    } // setupUi

    void retranslateUi(QMainWindow *QRplusplusClass)
    {
        QRplusplusClass->setWindowTitle(QApplication::translate("QRplusplusClass", "QR++ : QR Code Generator", Q_NULLPTR));
        actionGenerate->setText(QApplication::translate("QRplusplusClass", "Generate", Q_NULLPTR));
        actionExit->setText(QApplication::translate("QRplusplusClass", "Exit", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("QRplusplusClass", "About QR++", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("QRplusplusClass", "Open", Q_NULLPTR));
        actionWebsite->setText(QApplication::translate("QRplusplusClass", "Website (Coming Soon)", Q_NULLPTR));
        actionGithub->setText(QApplication::translate("QRplusplusClass", "Github", Q_NULLPTR));
        actionBrowse->setText(QApplication::translate("QRplusplusClass", "Browse...", Q_NULLPTR));
        actionGenerate_2->setText(QApplication::translate("QRplusplusClass", "Generate", Q_NULLPTR));
        actionAbout_Qt->setText(QApplication::translate("QRplusplusClass", "About Qt", Q_NULLPTR));
        actionAbout_Nayuki->setText(QApplication::translate("QRplusplusClass", "About QRcodegen", Q_NULLPTR));
        groupInput->setTitle(QApplication::translate("QRplusplusClass", "Input", Q_NULLPTR));
        label_text->setText(QApplication::translate("QRplusplusClass", "Text:", Q_NULLPTR));
        pasteButton->setText(QApplication::translate("QRplusplusClass", "Paste", Q_NULLPTR));
        clearButton->setText(QApplication::translate("QRplusplusClass", "Clear", Q_NULLPTR));
        userTextInput->setPlainText(QString());
        userTextInput->setPlaceholderText(QApplication::translate("QRplusplusClass", "Enter your text to be put into the QR Code...", Q_NULLPTR));
        groupCustomize->setTitle(QApplication::translate("QRplusplusClass", "Customize", Q_NULLPTR));
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
        label_errorCor->setText(QApplication::translate("QRplusplusClass", "Error Correction:", Q_NULLPTR));
        comboBox_errorlvl->clear();
        comboBox_errorlvl->insertItems(0, QStringList()
         << QApplication::translate("QRplusplusClass", "Low (Default)", Q_NULLPTR)
        );
        label_color->setText(QApplication::translate("QRplusplusClass", "Color:", Q_NULLPTR));
        label_borderSize->setText(QApplication::translate("QRplusplusClass", "Border Size:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        generateButton->setToolTip(QApplication::translate("QRplusplusClass", "Generate Button", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        generateButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        generateButton->setText(QApplication::translate("QRplusplusClass", "Generate", Q_NULLPTR));
        exitButton->setText(QApplication::translate("QRplusplusClass", "Exit", Q_NULLPTR));
        groupDirectory->setTitle(QApplication::translate("QRplusplusClass", "Directory", Q_NULLPTR));
        label_saveto->setText(QApplication::translate("QRplusplusClass", "Save to:", Q_NULLPTR));
        browseButton->setText(QApplication::translate("QRplusplusClass", "Browse...", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("QRplusplusClass", "File", Q_NULLPTR));
        menuAbout->setTitle(QApplication::translate("QRplusplusClass", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QRplusplusClass: public Ui_QRplusplusClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QRPLUSPLUS_H
