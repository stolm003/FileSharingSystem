#include "notecreator.h"
#include "ui_notecreator.h"


NoteCreator::NoteCreator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NoteCreator)
{
   //QFontComboBox * fontBox = new QFontComboBox;
   //ui->formatToolBar->addWidget(fontBox);
    ui->setupUi(this);

}


/*
 * second constructor with the list parameter?? TEst
 */

NoteCreator::NoteCreator(QWidget *parent, Note *my_list):
    QMainWindow(parent),
    ui(new Ui::NoteCreator)
{
    ui->setupUi(this);
    this->list = *my_list;

}

NoteCreator::~NoteCreator()
{
    delete ui;
}


/*
 * copy what is in clipboard
 */
void NoteCreator::on_actionCopy_triggered()
{
    ui->writeSpace->copy();
}


/*
 * create the save function to save it in an specific file
 */
void NoteCreator::on_actionSave_triggered()
{

    QFile file(filePath);
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"..","File not open");
        return;
    }
    QTextStream out(&file);
    QString text = ui->writeSpace->toPlainText();
    out << text;
    file.flush();
    file.close();
}


/*
 *Errases everything on the screen
 *
*/
void NoteCreator::on_actionCut_triggered()
{
    ui->writeSpace->cut();
}


//paste what ever is in your
void NoteCreator::on_actionPaste_triggered()
{
    ui->writeSpace->paste();
}


//erase everything from the writeSpace to start new writing
void NoteCreator::on_actionNew_triggered()
{
    filePath = "";
    ui->writeSpace->setText("");
}

//open an existing file
void NoteCreator::on_actionOpen_File_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open File");
    QFile file(fileName);
    filePath = fileName;
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"..","File not open");
        return;
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->writeSpace->setText(text);
    file.close();
}


/*
 * Saves to a specific location
 */
void NoteCreator::on_actionSave_As_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Open File");
    QFile file(fileName);
    filePath = fileName;
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"..","File not open");
        return;
    }
    QTextStream out(&file);
    QString text = ui->writeSpace->toPlainText();
    out << text;
    file.flush();
    file.close();
}

//set underline text
void NoteCreator::on_actionUnderline_triggered()
{
    if(ui->writeSpace->fontUnderline() == false){
        ui->writeSpace->setFontUnderline(true);
    }
    else{
        ui->writeSpace->setFontUnderline(false);
    }

}

//set italic text
void NoteCreator::on_actionItalics_triggered()
{
    if(ui->writeSpace->fontItalic() == false){
      ui->writeSpace->setFontItalic(true);
    }
    else{
      ui->writeSpace->setFontItalic(false);
    }

}


//set font weight(bold)
void NoteCreator::on_actionBold_triggered()
{
    if(ui->writeSpace->fontWeight() == 1){
        ui->writeSpace->setFontWeight(10);
    }
    else{
        ui->writeSpace->setFontWeight(1);
    }
}




//enables the font toolwizard
void NoteCreator::on_actionFont_triggered()
{
    bool checkFont;
    QFont font = QFontDialog::getFont(&checkFont, this);
    if(checkFont){
        ui->writeSpace->setFont(font);
    }
    else{
        return;
    }

}


//font combo box set up

void NoteCreator::on_fontComboBox_activated(const QString &arg1)
{
    ui->writeSpace->setFont(arg1);
}


//font color text diaglog
void NoteCreator::on_actionFont_Color_triggered()
{
    QColor fontColor = QColorDialog::getColor(Qt::white, this);
    ui->writeSpace->setTextColor(fontColor);
}



//enable highlight color

void NoteCreator::on_actionHighlight_Color_triggered()
{
    QColor highlight = QColorDialog::getColor(Qt::white, this);
    ui->writeSpace->setTextBackgroundColor(highlight);
}


/*
 * utalize to create a count number of words field link to a label
 * if the text inside the widget changes, it will activate it
 */
void NoteCreator::on_writeSpace_textChanged()
{

   /* int wordCount = 1;

    for(int i = 0 ; i < ui->writeSpace->toPlainText().length(); i++){
        if(ui->writeSpace->toPlainText().at(i) == ' '){
            wordCount++;
        }
    }
    */
    //qDebug() << wordCount;


    int wordCount = ui->writeSpace->toPlainText().split(QRegExp("(\\s|\\n|\\r)+")
                                                      , QString::SkipEmptyParts).count();
    ui->wordCountLabel->setText("#  of Words: " + QString::number(wordCount));



}


/*
 * function use to store the note into the array notelist
 */
void NoteCreator::on_actionSave_As_Online_triggered()
{
    QString noteName, noteMajor, noteComments, noteContent;//use to acquire the information
    noteName = ui->noteNameLine->text();
    noteMajor = ui->noteMajorLine->text();
    noteComments = ui->commntTextEdit->toPlainText();
    noteContent = ui->writeSpace->toPlainText();
    //testing purposes
    //qDebug() << noteName;
    //qDebug() << noteMajor;
    //qDebug() << noteComments;
    //qDebug() << noteContent;
    oneNote temp;
    temp.noteName = noteName;
    temp.noteMajor = noteMajor;
    temp.noteComments = noteComments;
    temp.noteContent = noteContent;

    list.addNote(temp);

    this->hide();


}
