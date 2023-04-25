/*
if statement:
elif statment:

The second block will only execute here if the first one did not, and the second check is true.

if statement:
else:

The first statement will execute if it is true, while the second will execute if the first is false.

Program that tells you user if they can legally vote
*/

#include <iostream>
using namespace std;

int main() {
	
	int age = 16;
	if (age >= 18) { // checking if age is greater than or equal to 18 
		cout << "You can legally vote in the UK." << endl; // will print if = true
	}
	else {
		cout << "You must wait till you are 18, to vote." << endl; // will print if = false
	}
	
	return 0;
}