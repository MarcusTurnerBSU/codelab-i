#include <iostream>
#include <string>
using namespace std;

int main() {

	string name;
	cout << "What is your name?" << endl;
	//cin >> name;
	getline(cin, name);

	cout << "Pick an option" << endl;
	cout << "==============" << endl;
	cout << "1: Login" << endl;
	cout << "2: Register" << endl;
	cout << "3: Forgot Password" << endl;

	int userInput;
	cin >> userInput;

	switch (userInput) {
	case 1:
		cout << "Hi " << name << " let's get logged in!" << endl;
		break;
	case 2:
		cout << "Hi " << name << " let's get registered!" << endl;
		break;
	case 3:
		cout << "Oh no " << name << " you forgot your password, bad luck!" << endl;
		break;
	default:
		cout << "Invalid option selected!" << endl;
	}
	return 0;
}