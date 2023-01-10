#include "users.h"
#include <iostream>
using namespace std;

User1::User1(string username, string password, bool mean) : _username(username), _password(password), _mean(mean) {};

string User1::getname() {
	return _username;
}

string User1::getpassword() {
	return _password;
}

void User1::registration() {
	cout << "Enter username" << endl;
	cin >> _username;
	cout << "Your username is " << _username << endl
		<< "Enter password" << endl;
	cin >> _password;
	cout << "Password entered" << endl
		<< "Registration complete" << endl;
}

User2::User2(string username, string password, bool mean) : _username(username), _password(password), _mean(mean) {};

string User2::getname() {
	return _username;
}

string User2::getpassword() {
	return _password;
}

void User2::registration() {
	cout << "Enter username" << endl;
	cin >> _username;
	cout << "Your username is " << _username << endl
		<< "Enter password" << endl;
	cin >> _password;
	cout << "Password entered" << endl
		<< "Registration complete" << endl;
}

User3::User3(string username, string password, bool mean) : _username(username), _password(password), _mean(mean) {};

string User3::getname() {
	return _username;
}

string User3::getpassword() {
	return _password;
}

void User3::registration() {
	cout << "Enter username" << endl;
	cin >> _username;
	cout << "Your username is " << _username << endl
		<< "Enter password" << endl;
	cin >> _password;
	cout << "Password entered" << endl
		<< "Registration complete" << endl;
}