/*
Tells the user if it's AM or PM, depending whether myBirthday equals true or false 
*/

#include <iostream>
using namespace std;

int main() {

	bool myBirthday = true; // yes or no, is it my birthday.
	int age = 23;

	if (myBirthday == true) {
		age++; // increment age by 1.
		cout << "It is my birthday. I am " << age << " years old"; // printing out to the user, their age
	}
	else {
		cout << "It is not my birthday" << endl; // this will print, if myBirthday = false
	}

	return 0;
}