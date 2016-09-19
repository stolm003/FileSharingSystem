#ifndef NOTESPACE_H
#define NOTESPACE_H

#include <QtWidgets/QMainWindow>
#include "ui_notespace.h"

class Notespace : public QMainWindow
{
	Q_OBJECT

public:
	Notespace(QWidget *parent = 0);
	~Notespace();

private:
	Ui::NotespaceClass ui;
};

#endif // NOTESPACE_H
