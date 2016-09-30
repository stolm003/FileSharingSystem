#ifndef INCLUDE_H
#define INCLUDE_H
#include "Note.h"

class User {
private:
	std::string userName;
	std::string userEmail;
	std::string userID;
	Note myNotes;

protected:
	//User();


public:
	//static User *instance();
	User();
	User(std::string Name);
	void createNote(std::string newNote);

	void printNoteNames();
	//Note.NoteId addNote(const string &Note.name);
	//void removeNote(int noteID);
	//void renameNote(int noteID, const std::string &newNoteName);
	//void addComments(int noteID);

};

#endif