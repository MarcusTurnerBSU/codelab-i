/*
Part 1
A program that tells the user the if, it is AM and PM,
while using a 24 hour clock

	if (currentTime > 12) { // 3 is not greater than 12 so this cout is printed
		cout << "It's PM" << endl;
	}
	else if(currentTime < 12) { // only when the input value is higher than 12 will this cout be printed
		cout << "It's AM" << endl;

Part 2 tells the user what time of the day it is. 
*/

#include <iostream>
using namespace std;

int main() {

	int currentTime = 3;

	if (currentTime < 12) {
		cout << "Good Morning." << endl;
	}
	else if (currentTime < 18) {
		cout << "Good Afternoon." << endl;
	}
	else if (currentTime < 21) {
		cout << "Good Evening." << endl;
	}
	else if (currentTime < 24) {
		cout << "Good Night." << endl;
	}
	else {
		cout << "Time not valid" << endl;
	}
	return 0;
}