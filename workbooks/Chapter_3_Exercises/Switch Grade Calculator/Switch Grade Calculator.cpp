#include <iostream>
using namespace std;

int main() {

	int marks;

	cout << "Enter the student marks." << endl;
	cin >> marks;
	
	marks = marks / 10;
	switch (marks) {
	case 0:
	case 1:
	case 2:
	case 3:
		cout << "The student has got a F." << endl;
		break;
	case 4:
		cout << "The student has got an E." << endl;
		break;
	case 5:
		cout << "The student has got a D." << endl;
		break;
	case 6:
		cout << "The student has got a C." << endl;
		break;
	case 7:
		cout << "The student has got a B." << endl;
		break;
	case 8:
	case 9:
	case 10:
		cout << "The student has got a A." << endl;
		break;
	}


	return 0;

}