//// example in the workbook
//#include <iostream>
//using namespace std;
//
//int main() {
//	
//	int grade;
//
//	int grade = 69;
//
//	//use if else statement to check if grade is within certain range and output message dependant on result
//	if (grade > 70) {
//		cout << "You got an A" << endl;
//	}
//	else if ((grade >= 60) && (grade < 70)) { //note the compound conditions on the remaining else if's
//		cout << "You got an B" << endl;
//	}
//	else if ((grade >= 50) && (grade < 60)) {
//		cout << "You got an C" << endl;
//	}
//	else if ((grade >= 40) && (grade < 50)) {
//		cout << "You got an D" << endl;
//	}
//	else {
//		cout << "You got an F" << endl;
//	}
//
//	return 0;
//}

 //this my original code 

#include <iostream>
using namespace std;

int main() {

	int mark;

	cout << "Enter the mark." << endl;
	cin >> mark;


	if (mark >= 70) {
		cout << "You scored " << mark << "%. You have earned a A." << endl;
	}
	else if ((mark >= 60) && (mark < 70)) {
		cout << "You scored " << mark << "%. You have earned a B." << endl;
	}
	else if ((mark >= 50) && (mark < 60)) {
		cout << "You scored " << mark << "%. You have earned a C." << endl;
	}
	else if ((mark >= 40) && (mark < 50)) {
		cout << "You scored " << mark << "%. You have earned a D." << endl;
	}
	else {
		cout << "You scored " << mark << "%. Unfortunately, you have failed this exam." << endl;
	}
	return 0;
}
/*
// trying to add a while loop to check an integer is typed. if not error printed to the user and asked to print an int
#include <iostream>
using namespace std;

int main() {

	int mark;

	cout << "Enter the mark." << endl;
	cin >> mark;
	// added from Chapter_1_Exercises\Biography
	while (!(cin >> mark)) // checking to see if user's input is an int
	{
		cout << "Error: Please enter an integer: "; // this displays when user enters does not input an 'int'.
		cin.clear();
		cin.ignore(256, '\n'); //ignore the '256' characters, re-prints the error message until an 'int' is typed.
	}
	if (mark > 70) {
		cout << "You scored " << mark << "%. You have earned a A." << endl;
	}
	else if ((mark >= 60) && (mark < 70)) {
		cout << "You scored " << mark << "%. You have earned a B." << endl;
	}
	else if ((mark >= 50) && (mark < 60)) {
		cout << "You scored " << mark << "%. You have earned a C." << endl;
	}
	else if ((mark >= 40) && (mark < 50)) {
		cout << "You scored " << mark << "%. You have earned a D." << endl;
	}
	else {
		cout << "You scored " << mark << "%. Unfortunately, you have failed this exam." << endl;
	}
	return 0;
}

 **trying nest IF statement ver1
	if (isalpha(mark) &&  (isdigit(mark)) {
		cout << "That is a invalid input." << endl;
	}

	else if (mark >= 70)

		cout << "You scored " << mark << "%. You have earnt a A." << endl;

			else if ((mark >= 60) && (mark < 70)) {
				cout << "You scored " << mark << "%. You have earnt a B." << endl;
			}
			else if ((mark >= 50) && (mark < 60)) {
				cout << "You scored " << mark << "%. You have earnt a C." << endl;
			}
			else if ((mark >= 40) && (mark < 50)) {
				cout << "You scored " << mark << "%. You have earnt a D." << endl;
			}
			else if (mark < 40) {
				cout << "You scored " << mark << "%. Unfortnately, you have failed this exam." << endl;
			}
	}
	else {

		cout << "That is a invalid input." << endl;
	}
	return 0;
	}

 **trying nest IF statement ver2
	if (isdigit(mark)) {
		cout << mark << " That is an invalid input." << endl;
	}
	else
		if (mark >= 70) {
			cout << "You scored " << mark << "%. You have earned a A." << endl;
		}
		else if ((mark >= 60) && (mark < 70)) {
			cout << "You scored " << mark << "%. You have earned a B." << endl;
		}
		else if ((mark >= 50) && (mark < 60)) {
			cout << "You scored " << mark << "%. You have earned a C." << endl;
		}
		else if ((mark >= 40) && (mark < 50)) {
			cout << "You scored " << mark << "%. You have earned a D." << endl;
		}
		else if (mark > 40) {
			cout << "You scored " << mark << "%. Unfortunately, you failed this exam." << endl;
		}
	}
	else {
		cout << "That is a invalid input." << endl;
		}
		return 0;
}
*/