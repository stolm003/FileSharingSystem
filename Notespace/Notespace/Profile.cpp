#include <iostream>
#include "Profile.h"


Profile::Profile()
{
	username = "";
	paswword = "";
}

void Profile::getProfile()
{
	string tempuser;
	cout << "Please enter a valid username: ";
	cin >> tempuser;
	if (checkUser(tempuser))
	{
		username = tempuser;
	}

}
void Profile::encryptPass()
bool Profile::Login(const username, string password)
bool Profile::checkUser(string username)
{

}