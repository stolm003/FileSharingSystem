#ifndef NOTE_H
#define NOTE_H
#include <iostream>
#include <fstream>


struct oneNote {
	int NoteId;
	std::string noteName;
	std::string noteComments; //store the comments
	std::string noteCourse;
	std::string pathToFile;
};



class Note : public oneNote {
private:
	oneNote myList[10];
	int indexCounter;
	void readFile(std::string fileName);
	void linkFile(std::string fileName, std::string newFile);

public:
	Note();
	Note(std::string name);
	void addNote(std::string note);
	void printNoteList();
	void writeNote(std::string fileName, std::string noteName);

	//void changeName(std::string name);
	//void addComments(std::string comments);

};


#endif
