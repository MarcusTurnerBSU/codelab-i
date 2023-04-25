#include <iostream> //input and output funionality
#include <string>
using namespace std; //using standard, looks for everything in the standard library

int main() { // //main function required by every c++ program
	double price = 0.99;
	cout << "This is a program written in C++" << endl; // output statement
	cout << "Please enter a number" << endl; // ask user for info
	int num1; // declare number variable 
	cin >> num1; // get value for number from user

	cout << "The number you entered was: " << num1 << endl;

	int num2 = 5;

	num2 = num2 + 10;
	num2 += 10;

	int sum = num1 + num2;
	cout << "The sum of " << num1 << "+" << num2 << "=" << sum << endl;
	cout << "The result of multiplication is: " << num1 * num2 << endl;

	string name = "Marcus ";
	string secondName = "Turner";
	string fullName = name + secondName;
	cout << fullName << endl;
	return 0; // return statement exit 0(int) for succesful execution
}