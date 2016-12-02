#include "mainuser.h"
#include "ui_mainuser.h"

MainUser::MainUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainUser)
{
    ui->setupUi(this);
}

MainUser::~MainUser()
{
    delete ui;
}

void MainUser::on_addNotesButton_clicked()
{
    this->hide(); //hide the current page
    SearchNote searchNoteWindow;            //create the user window
    searchNoteWindow.setModal(true);
    searchNoteWindow.exec();
}
