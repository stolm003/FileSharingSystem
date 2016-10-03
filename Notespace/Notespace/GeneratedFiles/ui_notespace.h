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
#include <QtWidgets/QHBoxLayout>
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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *searchButton;
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
        preViewText->setGeometry(QRect(10, 40, 231, 331));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 10, 91, 21));
        label->setMouseTracking(false);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(250, 300, 361, 71));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAutoFillBackground(false);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setLayoutDirection(Qt::LeftToRight);
        lineEdit->setAutoFillBackground(false);

        horizontalLayout_2->addWidget(lineEdit);

        searchButton = new QPushButton(layoutWidget);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setLayoutDirection(Qt::LeftToRight);
        searchButton->setAutoFillBackground(false);

        horizontalLayout_2->addWidget(searchButton);

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
        label_2->setText(QApplication::translate("NotespaceClass", "Search for file: ", 0));
        searchButton->setText(QApplication::translate("NotespaceClass", "Search", 0));
    } // retranslateUi

};

namespace Ui {
    class NotespaceClass: public Ui_NotespaceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTESPACE_H
