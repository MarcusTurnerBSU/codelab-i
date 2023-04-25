#include <iostream>
using namespace std;

int main() {

	int userInput;

	cout << "Enter a month (1-12):" << endl;
	cin >> userInput;

	switch (userInput) {
	case 1:
		cout << "January has 31 days in the month." << endl;
		break;
	case 2:
		cout << "February has 28 days in the month. Unless it's a leap year(every 4 years)."
			" It has 29 days in the month." << endl;
		break;
	case 3:
		cout << "March has 31 days in the month." << endl;
		break;
	case 4:
		cout << "April has 30 days in the month." << endl;
		break;
	case 5:
		cout << "May has 31 days in the month." << endl;
		break;
	case 6:
		cout << "June has 30 days in the month." << endl;
		break;
	case 7:
		cout << "July has 31 days in the month." << endl;
		break;
	case 8:
		cout << "August has 31 days in the month." << endl;
		break;
	case 9:
		cout << "September has 30 days in the month." << endl;
		break;
	case 10:
		cout << "October has 31 days in the month." << endl;
		break;
	case 11:
		cout << "November has 30 days in the month." << endl;
		break;
	case 12:
		cout << "December has 31 days in the month." << endl;
		break;
	default:
		cout << "That is an invalid input." << endl;
	}

	return 0;
}