/*#include <iostream>
#include "Profile.h"
#include <string>


Profile::Profile()
{
	username = "";
	password = "";
}

void Profile::getProfile()
{
	std::string tempuser;
	std::string temppass;
	std::cout << "Please enter a valid username: ";
	std::cin >> tempuser;
	if (checkUsername(tempuser))
	{
		std::cout << "Please enter passowrd: ";
		std::cin >> temppass;
		if (checkPass)
		{
			std::cout << "Login successful.\n";
		}
		else
			std::cout << "Invalid password.\n";
	}
	else
		std::cout << "Invalid username\n";

}
void Profile::encryptPass()
{

}
bool Profile::Login(const std::string username, std::string password)
{

}
bool Profile::checkUsername(std::string username)
{

}
bool Profile::checkPass(std::string password)

*/