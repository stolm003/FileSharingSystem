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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NotespaceClass
{
public:
    QWidget *centralWidget;
    QTextEdit *preViewText;
    QLabel *label;
    QPushButton *Search;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *NotespaceClass)
    {
        if (NotespaceClass->objectName().isEmpty())
            NotespaceClass->setObjectName(QStringLiteral("NotespaceClass"));
        NotespaceClass->resize(617, 419);
        centralWidget = new QWidget(NotespaceClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        preViewText = new QTextEdit(centralWidget);
        preViewText->setObjectName(QStringLiteral("preViewText"));
        preViewText->setGeometry(QRect(10, 40, 211, 231));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 10, 91, 21));
        label->setMouseTracking(false);
        Search = new QPushButton(centralWidget);
        Search->setObjectName(QStringLiteral("Search"));
        Search->setGeometry(QRect(390, 340, 93, 28));
        Search->setLayoutDirection(Qt::LeftToRight);
        Search->setAutoFillBackground(false);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(200, 340, 181, 31));
        lineEdit->setLayoutDirection(Qt::LeftToRight);
        lineEdit->setAutoFillBackground(false);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(54, 340, 151, 20));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAutoFillBackground(false);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        NotespaceClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(NotespaceClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        NotespaceClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(NotespaceClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        NotespaceClass->setStatusBar(statusBar);

        retranslateUi(NotespaceClass);

        QMetaObject::connectSlotsByName(NotespaceClass);
    } // setupUi

    void retranslateUi(QMainWindow *NotespaceClass)
    {
        NotespaceClass->setWindowTitle(QApplication::translate("NotespaceClass", "Notespace", 0));
        label->setText(QApplication::translate("NotespaceClass", "Preview", 0));
        Search->setText(QApplication::translate("NotespaceClass", "Search", 0));
        label_2->setText(QApplication::translate("NotespaceClass", "Search for file: ", 0));
    } // retranslateUi

};

namespace Ui {
    class NotespaceClass: public Ui_NotespaceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTESPACE_H
