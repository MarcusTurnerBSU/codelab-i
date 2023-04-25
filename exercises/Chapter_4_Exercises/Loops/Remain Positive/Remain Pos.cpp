#include <iostream>
using namespace std;

int main() {

	string password = "1234password";
	string userEntry;

	do {
		cout << "Enter your password" << endl;
		cin >> userEntry;
	} while (userEntry != password);
	   
	
	cout << "Enter the secure banking area" << endl;

	/*double num = 20;
	while (num > 0) {
		cout << num << endl;
		num -= 0.5;
	}
	int age;
	cout << "\n What's your age?" << endl;
	cin >> age;
	while (cin.fail()) {
		cout << "input is invalid, try again." << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> age;
	}*/
	return 0;
}