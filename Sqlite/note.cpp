#include "Note.h"
#include <iostream>
#include <string>
#include <fstream>
#include <fstream>
#include <cstdlib>
#include <QDebug>


using namespace std;


Note::Note() {
    indexCounter = 0;
}

Note::Note(QString name) {
    oneNote current;
    current.noteName = name;
    current.NoteId = indexCounter; //save the index counter as an ID
    myList[indexCounter] = current;
    indexCounter++;
}


/*
 * Note creator constructor use to populate a note in one full constructor
 */
Note::Note(QString name, QString school, QString major){
    oneNote temp;
    temp.noteName = name;
    temp.noteMajor = major;
    temp.noteSchool = school;

    //put the newly added note to the list
    myList[indexCounter] = temp;
    indexCounter++;
}

void Note::printNoteList() {



    for (int i = 0; i < indexCounter; i++) {
        oneNote current;
        current = myList[i];
        qDebug()<<current.noteName;

    }
}


void Note::addNote(oneNote note) {
    //check if the the list is empty
    if(indexCounter == 0){
        myList[indexCounter] = note;

    }
    else{
        indexCounter++;
        myList[indexCounter] = note;
    }
}


//test the list populate
void Note::populate(){
    for(int i = 0; i < 10; i++){
        oneNote temp;
        temp.noteName = QString::number(i) + "Note";
        myList[i] = temp;
    }

}

oneNote Note::returnNote(int index){
    return myList[index];
}


oneNote Note::searchNoteName(QString name){
    for(int i = 0; i < 10; i++){
        if(myList[i].noteName == name){
            return myList[i];
        }
        if(i >= 10){
            exit;
        }
    }
}



//know how manny notes are in the list
int Note::returnIndexCounter(){
    return indexCounter;
}



/*void Note::addComments(string comments) {
//noteComments = comments;
}

void Note::changeName(string name) {
//noteName = name;
}*/
