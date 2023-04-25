/*
Part 1 cout << "My Name is " << name << "." "\nMy Hometown is " << hometown << "." "\nAnd I am " << age << " years of Age.";
Print to the console, my name, hometown and age.
store as a variable - appropriate data type
print on a new line.
only use "cout" once.
*/

/*
Want to come back and add new things:
- allows no numeric inputs for string variables
- print with capital letters
- allow only two numeric inputs
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

	string firstName;
	string lastName;
	string hometown;
	int age;

	cout << "What is your first Name?" << endl;
	cin >> firstName; 
	
	cout << "What is your second Name?" << endl;
	cin >> lastName;

	cout << "What is your Hometown?" << endl;
	cin >> hometown;

	cout << "How old are you?" << endl;
	while (!(cin >> age)) // checking to see if user's input is an int
	{
		cout << "Error: Please enter an integer: "; // this displays when user enters does not input an 'int'.
		cin.clear();
		cin.ignore(256, '\n'); //ignore the '256' characters, re-prints the error message until an 'int' is typed.
	}

	cout << "\nMy first name is " << firstName << " " << lastName << ".\nMy hometown is " 
		<< hometown << ".\nI am " << age << " years of age.";

	return 0;
}