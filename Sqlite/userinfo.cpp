#include "userinfo.h"
#include "ui_userinfo.h"


UserInfo::UserInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserInfo)
{
    ui->setupUi(this);
}

UserInfo::~UserInfo()
{
    delete ui;
}



void UserInfo::on_addNoteButton_clicked()
{
    this->hide(); //hide the current page
    SearchNote searchNoteWindow;            //create the user window
    searchNoteWindow.setModal(true);
    searchNoteWindow.exec();
}
