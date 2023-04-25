/*
program that works out if the number is odd or even


#include <iostream>
using namespace std;

int main() {
	
	int oddNumber = 1;
	int evenNumber = 2;

	cout << "Input a number." << endl;
	cin >> oddNumber || evenNumber;

	if (oddNumber || evenNumber) {
		cout << "You have selected an odd number." << endl;
	}
	else {
		cout << "You have selected an even number." << endl;
	}

	return 0;
}*/

#include <iostream>
using namespace std;

int main() {
	int x; //declare and initalise x

	cout << "Pick a number?" << endl;
	cin >> x;

	if (x % 2 == 0) { //check x modulus 2. If the result is 0 then there is no remainder after division and the value of x must be even
		cout << "Number " << x << " is even" << endl; //output even statement
	}
	else {
		cout << "Number " << x << " is odd" << endl; //output odd statement
	}
	return 0;
}