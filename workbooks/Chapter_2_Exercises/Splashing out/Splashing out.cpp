/*
program that tells the user whether or not they can afford a computer game
*/

#include <iostream>
using namespace std;

int main() {

	double costGame = 40;
	int money;

	cout << "How much money do you have?" << endl;	
	cout << (char)156; cin >> money;

	if (money >= 40) {
		cout << "Buy computer game." << endl;
	} 
	else {
		cout << "I need to save up more money!" << endl;
	} 
	cout << "How much money I need to save up: " << (char)156 << costGame - money << endl;
	
	return 0;
}