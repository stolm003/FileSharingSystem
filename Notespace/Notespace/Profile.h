#ifndef PROFILE_H
#define PROFILE_H
class Profile {

	private:
		std::int cryptpass;

	protected:
		std::string username;
		std::string password;
		

	public:
		Profile();
		void getProfile();
		void encryptPass();
		bool Login(const string username,string password);
		bool checkUsername(const string username);
		bool checkPass(string password);
};
#endif