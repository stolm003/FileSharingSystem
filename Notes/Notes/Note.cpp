#include "Note.h"
#include <iostream>
#include <string>
#include <fstream>
#include <fstream>
#include <cstdlib>


using namespace std;


Note::Note() {
	indexCounter = 0;
}

Note::Note(string name) {
	oneNote current;
	current.noteName = name;
	current.NoteId = indexCounter; //save the index counter as an ID
	myList[indexCounter] = current;
	indexCounter++;
}

void Note::printNoteList() {

	cout << "---------------Note List-----------------" << endl;

	for (int i = 0; i < indexCounter; i++) {
		oneNote current;
		current = myList[i];
		cout << current.noteName << endl;
		
	}
}


void Note::addNote(std::string note) {
	
	oneNote current;
	current.noteName = note;
	current.NoteId = indexCounter; //save the index counter as an ID
	myList[indexCounter] = current;
	indexCounter++;
	
	cout << "------------------------------------------------" << endl;
	cout << "Name File to View: " << endl;
	string fileName;
	cin >> fileName;
	writeNote(fileName, note);
}

void Note::writeNote(string fileName, string noteName) {
	cout << "------------------------------------------------" << endl;
	cout << endl;
	cout << "Content on file: " << endl;
	cout << "***********************************************" << endl;
	this->readFile(fileName);
	cout << "-----------------------------------------------" << endl;
	cout << "Add File?(Yes or No): ";
	string answer;
	cin >> answer;
	if (answer == "Yes") {
		this->linkFile(fileName, noteName);
	}
	else {
		cout <<"Good bye" << endl;
	}


}



void Note::readFile(string fileName) {
	string line;
	ifstream myfile(fileName);
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
		myfile.close();
	}
	else cout << "Unable to open file";

}



void Note::linkFile(string fileName, string newFile) {
	ifstream fin;
	fin.open(fileName);
	ofstream fout;
	fout.open(newFile);
	char ch;
	while (!fin.eof()) {
		fin.get(ch);
		fout << ch;
	}
	fin.close();
}

/*void Note::addComments(string comments) {
//noteComments = comments;
}

void Note::changeName(string name) {
//noteName = name;
}*/