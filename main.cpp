#include "users.h"
#include <iostream>
#include <vector>
using namespace std;

User1 _User1("x", "x", false);
User2 _User2("x", "x", false);
User3 _User3("x", "x", false);

vector <string> messages1;
vector <string> messages2;
vector <string> messages3;


string login() {
	string x, y;
	cout << "Enter username" << endl;
	cin >> x;
	cout << "Enter password" << endl;
	cin >> y;
	if (x == _User1.getname() && y == _User1.getpassword()) { 
		cout << "correct" << endl;
		return _User1.getname();
	}
	else if (x == _User2.getname() && y == _User2.getpassword()) {
		cout << "correct" << endl;
		return _User2.getname();
	}
	else if (x == _User3.getname() && y == _User3.getpassword()) {
		cout << "correct" << endl;
		return _User3.getname();
	}
	else {
		return "incorrect";
	}
}

void authorized_user(string name) {
	cout << "Hello " << name << endl;
	bool b = true;
	while (b == true) {
		cout << "Enter 1 to send a message, 2 to send a message to someone, 3 to show messages or 4 to logout." << endl;
		int x;
		string mes, write_name;
		cin >> x;
		switch (x) {
		case(1):
			cin >> mes;
			cout << name << ": " << mes << endl;
			break;
		case(2):
			cout << "Write the name of the person to send the message to." << endl;
			cin >> write_name;
			if (write_name == _User1.getname()) {
				cout << "correct" << endl << "Write yout message" << endl;
				cin >> mes;
				string send_mes = name + " -> " + write_name + ": " + mes;
				messages1.push_back(send_mes);
				break;
			}
			else if (write_name == _User2.getname()) {
				cout << "correct" << endl << "Write yout message" << endl;
				cin >> mes;
				string send_mes = name + " -> " + write_name + ": " + mes;
				messages2.push_back(send_mes);
				break;
			}
			else if (write_name == _User3.getname()) {
				cout << "correct" << endl << "Write yout message" << endl;
				cin >> mes;
				string send_mes = name + " -> " + write_name + ": " + mes;
				messages3.push_back(send_mes);
				break;
			}
			else {
				cout << "incorrect" << endl;
				break;
			}
		case(3):
			if (name == _User1.getname()) {
				for (int i = 0; i < messages1.size(); i++) {
					cout << messages1[i] << endl;
				}
				break;
			}
			else if (name == _User2.getname()) {
				for (int i = 0; i < messages2.size(); i++) {
					cout << messages2[i] << endl;
				}
				break;
			}
			else if (name == _User3.getname()) {
				for (int i = 0; i < messages3.size(); i++) {
					cout << messages3[i] << endl;
				}
				break;
			}
		case(4):
			cout << "logout" << endl;
			b = false;
			break;
		}
	}
}

int main() {
	bool b = true;
	while (b == true) {
		cout << "Enter 1 to registr, 2 to login or 3 to quit." << endl;
		int x;
		cin >> x;
		switch (x) {
		case(1):
			if (_User1.getname() == "x") {
				_User1.registration();
			}
			else if (_User2.getname() == "x") {
				_User2.registration();
			}
			else if (_User3.getname() == "x") {
				_User3.registration();
			}
			else {
				cout << "No more space" << endl;
			}
			break;
		case(2):
			if (_User1.getname() != "x" || _User2.getname() != "x" || _User2.getname() != "x") {
				string a = login();
				if (a == _User1.getname()) {
					string name = _User1.getname();
					authorized_user(name);
					break;
				}
				else if (a == _User2.getname()) {
					string name = _User2.getname();
					authorized_user(name);
					break;
				}
				else if (a == _User3.getname()) {
					string name = _User3.getname();
					authorized_user(name);
					break;
				}
				else if (a == "incorrect") {
					cout << "incorrect" << endl;
					break;
				}
			}
			else {
				cout << "No registred users" << endl;
			}
			break;
		case(3):
			b = false;
			break;
		default:
			cout << "error" << endl;
			break;
		}
	}
	return 0;
}