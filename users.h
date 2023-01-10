#pragma once
#include <iostream>
using namespace std;

class User1 {
private:
	string _username, _password;
	bool _mean;
public:
	User1(string username, string password, bool mean);
	string getpassword();
	string getname();
	void registration();
	void login();
};

class User2 {
private:
	string _username, _password;
	bool _mean;
public:
	User2(string username, string password, bool mean);
	string getpassword();
	string getname();
	void registration();
	void login();
};

class User3 {
private:
	string _username, _password;
	bool _mean;
public:
	User3(string username, string password, bool mean);
	string getpassword();
	string getname();
	void registration();
	void login();
};