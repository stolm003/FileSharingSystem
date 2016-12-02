#ifndef NOTE_H
#define NOTE_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

struct oneNote {
    int NoteId;
    QString noteName;
    QString noteComments; //store the comments
    QString noteMajor;
    QString noteSchool;
    QString pateString;
    QString noteContent;
};



class Note : public oneNote {
private:
    oneNote myList[10];
    int indexCounter;

public:
    Note();
    Note(QString name);
    Note(QString name, QString school, QString major);
    void addNote(oneNote note);
    void printNoteList();

    //populate a sample list
    void populate();
    oneNote returnNote(int index);
    oneNote searchNoteName(QString name);
    int returnIndexCounter();




    //void changeName(std::string name);
    //void addComments(std::string comments);

};

#endif // NOTE_H
