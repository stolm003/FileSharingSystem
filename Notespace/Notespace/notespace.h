#ifndef NOTESPACE_H
#define NOTESPACE_H
#include <qapplication.h>
#include <QtWidgets/QMainWindow>
#include <QApplication>
#include "ui_notespace.h"

class Notespace : public QMainWindow
{
	Q_OBJECT

public:
	Notespace(QWidget *parent = 0);
	~Notespace();
	

private:
	Ui::NotespaceClass ui;
	//void searchButton(std::string file);
};

#endif // NOTESPACE_H
