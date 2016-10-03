#include "User.h"
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;


int main() {
	User myUser("Juan");
	string noteName;




	cout << "Create Note" << endl;
	cin >> noteName;

	

	cout << "Create Note" << endl;
	
	
	myUser.createNote(noteName);
	cin >> noteName;
	myUser.createNote(noteName);
	myUser.printNoteNames();

	

}