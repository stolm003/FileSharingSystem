#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include "profile.h"
#include "createuser.h"
#include "qdebug.h"


namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT



public:
    QSqlDatabase myDataBase;

    /*
     * **********************************************
     * Function to close the connection to the server
     *
     */
    void connClose(){
      myDataBase.close();
      myDataBase.removeDatabase(QSqlDatabase::defaultConnection);
    }

    /********************************************
     * Function to open the connection to the server
     *
     */
    bool connOpen(){
        myDataBase = QSqlDatabase::addDatabase("QSQLITE");
        myDataBase.setDatabaseName("C:/Users/rjuan/Desktop/sqLite/notesUser.sqlite");

        if(!myDataBase.open()){                     //if not connected to data base
            qDebug()<<("Failed to open the database");
            return false;
        }
        else{
            qDebug()<<("Connected"); //if connected to the database
            return true;
        }

    }



public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_signUpButton_clicked();

    void on_quitButton_clicked();

private:
    Ui::Login *ui;
   // Profile userProfile;

    //inner functions
public:
    bool checkForRepeatedUser(QString user);
};

#endif // LOGIN_H
