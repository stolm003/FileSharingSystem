#include "login.h"
#include "ui_login.h"


Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);


    if(!connOpen()){
        ui->statusLabel->setText("Failed to open the database");
    }
    else{
        ui->statusLabel->setText("Connected");
    }
    //singleton->setLogin(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_clicked()
{
    QString username, password;
    username = ui->lineEditUser->text();
    password = ui->lineEditPassword->text();

    if(!connOpen()){
        qDebug() << "Failed to open the database";
        return;
    }

   // connOpen();
    QSqlQuery qry;
    qry.prepare("select *from Users where username='"+username+"' and password='"+password+"'");
    QString id;

    if(qry.exec())
    {

       int count = 0;

       while(qry.next())
        {

           count++;

        }
        if(count==1)
        {
            ui->statusLabel->setText("username and password is correct");
           // connClose();    //close the connection with data base
            this->hide(); //hide the current page
            Profile *userProfile;
            userProfile= new Profile(this, username);
            qDebug()<<username;
            userProfile->setUserID(username);
            userProfile->show();


        }
        else if(count > 1)
        {
            ui->statusLabel->setText("Duplicate username and password");
        }
        else if(count < 1)
        {
            ui->statusLabel->setText("username and password are not correct");
        }
    }

}


//take to the create user window

void Login::on_pushButton_2_clicked()
{
    //connClose();
    //CreateUser openCreate;
    //openCreate.setModal(true);
    //this->hide();
    //openCreate.exec();
    ui->pagesStack->setCurrentIndex(1);

}



/*===================================================================================================
 * Initiate_page2
 *
 *
 */
void Login::on_signUpButton_clicked()
{
    bool userCheck = false;
    Login conn;
    QString name, email, username, password;
    name = ui->nameLineEdit->text();
    email = ui->emailLineEdit->text();
    username = ui->userNameLineEdit->text();
    password = ui->passwordLineEdit->text();
    QSqlQuery qry;
    try{
        if(!conn.connOpen()){
            throw 0;  //first check if the database could be open
        }

        conn.connOpen(); //open the database

        //now check if the username created is already in the database
        userCheck = this->checkForRepeatedUser(username); //pass in the username QString

        if(userCheck == true){
            throw 1; //if the username has been found then throw an error
        }

        //if the username is good, then prepare query

        qry.prepare("insert into Users (Name,email,username,password) values ('"+name+"', '"+email+"', '"+username+"', '"+password+"')");

        //execute the query
        if(qry.exec())
        {
            QMessageBox::critical(this,tr("User Created"),tr("Information Saved"));
            conn.connClose();   //closing the connection from the database
        }
        else{
            throw 2; //if the user was not created throw an exception
        }


    }catch(int x){
        if(x == 0){
          qDebug() << "Failed to open the database";
        }
        else if(x == 1){
          qDebug() << "Username is already in use: Chose different username";
          ui->errorLabel->setText("Username is already in user, chose a different one");
        }
        else if (x == 2){

            qDebug() << "Unable to create user";
            //QMessageBox::critical(this,tr("Error::"),tr("Username already in use")); //must be declare this way
            ui->errorLabel->setText("User not created: error");

        }
    }



}

/*
 * Use it to abort creating a new user
 */
void Login::on_quitButton_clicked()
{
    ui->pagesStack->setCurrentIndex(0);
}



/*
 *Function will be used in the create User window in order
 * to check if the new user creates a repeated username;
 */
bool Login::checkForRepeatedUser(QString user){
    QSqlQuery qry;
    qry.prepare("select *from Users where username='"+user+"'");

    if(qry.exec())
    {

       int count = 0;

       while(qry.next())
        {
           count++; //means that it found the user
        }
       if(count == 1){
           return true;
       }
       else if (count == 0){
           return false;
       }

    }
    else{
        QMessageBox::critical(this,tr("Database"),tr("Unable to connect"));
        return false;
    }

}
