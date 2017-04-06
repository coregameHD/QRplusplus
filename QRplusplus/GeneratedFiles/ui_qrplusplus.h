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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QRplusplusClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QRplusplusClass)
    {
        if (QRplusplusClass->objectName().isEmpty())
            QRplusplusClass->setObjectName(QStringLiteral("QRplusplusClass"));
        QRplusplusClass->resize(600, 400);
        menuBar = new QMenuBar(QRplusplusClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QRplusplusClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QRplusplusClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QRplusplusClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QRplusplusClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QRplusplusClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QRplusplusClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QRplusplusClass->setStatusBar(statusBar);

        retranslateUi(QRplusplusClass);

        QMetaObject::connectSlotsByName(QRplusplusClass);
    } // setupUi

    void retranslateUi(QMainWindow *QRplusplusClass)
    {
        QRplusplusClass->setWindowTitle(QApplication::translate("QRplusplusClass", "QRplusplus", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QRplusplusClass: public Ui_QRplusplusClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QRPLUSPLUS_H
