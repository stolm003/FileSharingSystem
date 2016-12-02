#include "profile.h"
#include "ui_profile.h"

/*Constructor used for passing the string id and storing the user
 * in the profile ui
 *
 */
Profile::Profile(QWidget *parent, QString id):
    QMainWindow(parent),
    ui(new Ui::Profile)
{
    ui->setupUi(this);
    Login conn;
    //set up variables for the singlenton design
    //implementation

    //check for the databaseConnection
    if(!conn.connOpen()){
        ui->connectionLabelStatus->setText("Failed to open database");
    }
    else{
        ui->connectionLabelStatus->setText("Connected");
    }

    //set the listviewtable
    //this->myNoteList.populate();
    for(int i = 0; i < 10; i++){
        oneNote curr = myNoteList.returnNote(i);
        ui->userNotesList->addItem(curr.noteName);

    }

    if(!conn.connOpen()){
        qDebug()<<"Fail to open the database";
        return;
    }
    conn.connOpen();
    QSqlQuery qry;
    qDebug() << "username";
    qDebug() << userID;

    qry.prepare("select * from Users where username='"+id+"'");
    if(qry.exec())
    {
        while(qry.next())
        {
            ui->userNameLine->setText(qry.value(7).toString()); //set the username
            ui->majorLine->setText(qry.value(5).toString()); //set major line
            ui->schoolLine->setText(qry.value(3).toString()); //set school line

        }
        conn.connClose();
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }




}


/*////////////////////////////////////////////////////////////////////////////////////////*/
//deafault constructor


Profile::Profile(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Profile)
{
    ui->setupUi(this);
    Login conn;
    //set up variables for the singlenton design
    //implementation

    //check for the databaseConnection
    if(!conn.connOpen()){
        ui->connectionLabelStatus->setText("Failed to open database");
    }
    else{
        ui->connectionLabelStatus->setText("Connected");
    }

    //set the listviewtable
    this->myNoteList.populate();
    for(int i = 0; i < 10; i++){
        oneNote curr = myNoteList.returnNote(i);
        ui->userNotesList->addItem(curr.noteName);

    }


   // QString name = "Juan";

    if(!conn.connOpen()){
        qDebug()<<"Fail to open the database";
        return;
    }
    conn.connOpen();
    QSqlQuery qry;
    qDebug() << "username";
    qDebug() << userID;

    qry.prepare("select * from Users where username='"+this->userID+"'");
    if(qry.exec())
    {
        while(qry.next())
        {
            ui->userNameLine->setText(qry.value(7).toString()); //set the username
            ui->majorLine->setText(qry.value(5).toString()); //set major line
            ui->schoolLine->setText(qry.value(3).toString()); //set school line

        }
        conn.connClose();
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }
}

/*//////////////////////////////////////////////////////////////////////////////////////////*/
/*default destructor
 *
 */


Profile::~Profile()
{
    delete ui;
}


/*///////////////////////////////////////////////////////////////////////////////*/
void Profile::on_actionAdd_Note_triggered()
{
    SearchNote openSearch(this, myNoteList);          //will send us the searchNote gui
    openSearch.setModal(true);
    openSearch.exec();

}


/*///////////////////////////////////////////////////////////////////////////////*/
void Profile::myNoteListAdd(oneNote newName){
    myNoteList.addNote(newName);
}



/*///////////////////////////////////////////////////////////////////////////////*/
//open the createNote screen
void Profile::on_actionCreate_Note_triggered()
{

    NoteCreator *userProfile = new NoteCreator(this, &myNoteList);
    userProfile->show();
}


/*///////////////////////////////////////////////////////////////////////////////*/

/*
 * not used*/
//set the userID
void Profile::setUserID(QString id){
    userID = id;
}



/*///////////////////////////////////////////////////////////////////////////////*/
//use to open the selected note list

void Profile::on_listOpenButton_clicked()
{
    QListWidgetItem *item = ui->userNotesList->currentItem();
    QString name = item->text();
    oneNote curr = myNoteList.searchNoteName(name);
    qDebug() << name;
    qDebug() << curr.noteName;
}
