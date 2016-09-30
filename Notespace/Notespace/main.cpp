//#include "notespace.h"
#include <QApplication>
#include <qpushbutton.h>

int main(int argc, char *argv[])
{
	QApplication prog(argc, argv);
	
	QPushButton *button = new QPushButton("Quit program");
	
	QObject::connect(button, SIGNAL(clicked()), &prog, SLOT(quit()));
	button->show();
	
	return prog.exec();
}
