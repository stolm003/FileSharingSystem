#ifndef PROFILE_H
#define PROFILE_H

#include <QMainWindow>
#include "login.h"
#include "searchnote.h"
#include "note.h"
#include <QDebug>
#include "notecreator.h"
#include <QtCore>
#include <QtGui>
#include <QtWidgets>

namespace Ui {
class Profile;

}

class Profile : public QMainWindow
{
    Q_OBJECT



public:
    explicit Profile(QWidget *parent = 0);
    explicit Profile(QWidget *parent, QString id);
    ~Profile();




private slots:
    void on_actionAdd_Note_triggered();

    void on_actionCreate_Note_triggered();



    void on_listOpenButton_clicked();

private:
    Ui::Profile *ui;

private:
    QString name;
    QString major;
    QString school;
    Note myNoteList; //keep track of your notes
    QString userID; //keep track of who is loged in



public:
    void myNoteListAdd(oneNote newName);
    void setUserID(QString id); //use to set the userID

};

#endif // PROFILE_H
