#include <iostream>
using namespace std;

int main() {

	//cout << "Would you like sugar? (Y/N)" << endl; // ask user a question
	//char userInput; // variable to store their input
	//cin >> userInput; // get user input

	//switch (userInput) {
	//case 'Y':
	//case 'y':
	//	cout << "Adding sugar!!" << endl;
	//	break;
	//case 'N':
	//case 'n':
	//	cout << "Sweet enough already, I see!!" << endl;
	//	break;
	//default:
	//	cout << "Not a valid option" << endl;
	//}

	cout << "Enter two numbers." << endl; // ask user for numbers
	int num1, num2; //variables to store user numbers
	cin >> num1 >> num2; //get input into variables

	cout << "Pick a calcuation" << endl;
	cout << "1: Addition\n2: Subtraction\n3: Multipication\n4: Division" << endl;
	int input; //variable to store users selected menu option
	cin >> input; //get users menu option

	switch (input) { // evalute input variable in switch
	case 1: // case values for possible user input value
		cout << num1 + num2 << endl; //code we want to run if case matches
		break;
	case 2:
		cout << num1 - num2 << endl;
		break;
	case 3:
		cout << num1 * num2 << endl;
		break;
	case 4:
		cout << num1 / num2 << endl;
		break;
	default:
		cout << "Input not recognised." << endl;
		main();
	}
	return 0;
}