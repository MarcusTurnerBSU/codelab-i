#include <iostream>
#include <string>
using namespace std;

int main() {

	char grade;
	cout << "What grade did you get?" << endl;
	cin >> grade;
	grade = toupper(grade);

	switch (grade) {
	case 'A':
		cout << "You got a First" << endl;
		break;
	case 'B':
		cout << "You got a 2:1" << endl;
		break;

	case 'C':
		cout << "You got a 2:2" << endl;
		break;
	case 'D':
		cout << "You got a Third" << endl;
		break;
	default:
		cout << "This is not a valid grade" << endl;

	}


	return 0;