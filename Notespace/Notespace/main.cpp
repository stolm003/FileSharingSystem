#include "notespace.h"
#include <QtCore/QCoreApplication>
#include <QtWidgets/QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	Notespace w;

	qDebug() << "Hello World";

	w.show();
	return a.exec();
}
