#include <iostream>
#include "User.h"
#include <string>

using namespace std;


User::User() {
	userName = "";
	userEmail = "";
	userID = "";
	myNotes = Note();
}



void User::createNote(string newNote) {
	cout << "File Name: " << newNote << endl;
	myNotes.addNote(newNote);

}


User::User(string Name) {
	userName = userName;
	
}

void User::printNoteNames() {
	myNotes.printNoteList();
}