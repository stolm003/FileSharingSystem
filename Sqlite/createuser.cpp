#include "createuser.h"
#include "ui_createuser.h"
#include "login.h"


CreateUser::CreateUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateUser)
{
    ui->setupUi(this);
    Login conn;

    //check for the databaseConnection
    if(!conn.connOpen()){
        ui->connLabel->setText("Failed to open database");
    }
    else{
        ui->connLabel->setText("Connected");
    }
}

CreateUser::~CreateUser()
{
    delete ui;
}

void CreateUser::on_pushButton_clicked()
{
    Login conn;
    QString name, email, username, password;
    name = ui->nameLineEdit->text();
    email = ui->emailLineEdit->text();
    username = ui->usernameLineEdit->text();
    password = ui->passwordLineEdit->text();

    if(!conn.connOpen()){
        qDebug() << "Failed to open the database";
        return;
    }

    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("insert into Users (Name,email,username,password) values ('"+name+"', '"+email+"', '"+username+"', '"+password+"')");

    if(qry.exec())
    {
        QMessageBox::critical(this,tr("User Created"),tr("Information Saved"));
        conn.connClose();   //closing the connection from the database
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text()); //must be declare this way
    }


}
