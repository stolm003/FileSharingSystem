/********************************************************************************
** Form generated from reading UI file 'notespace.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTESPACE_H
#define UI_NOTESPACE_H

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

class Ui_NotespaceClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *NotespaceClass)
    {
        if (NotespaceClass->objectName().isEmpty())
            NotespaceClass->setObjectName(QStringLiteral("NotespaceClass"));
        NotespaceClass->resize(600, 400);
        menuBar = new QMenuBar(NotespaceClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        NotespaceClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(NotespaceClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        NotespaceClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(NotespaceClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        NotespaceClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(NotespaceClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        NotespaceClass->setStatusBar(statusBar);

        retranslateUi(NotespaceClass);

        QMetaObject::connectSlotsByName(NotespaceClass);
    } // setupUi

    void retranslateUi(QMainWindow *NotespaceClass)
    {
        NotespaceClass->setWindowTitle(QApplication::translate("NotespaceClass", "Notespace", 0));
    } // retranslateUi

};

namespace Ui {
    class NotespaceClass: public Ui_NotespaceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTESPACE_H
