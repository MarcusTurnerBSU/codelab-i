#include <iostream>
using namespace std;

int main() {

	double money;
	int minutesLate;

	cout << "You are killing time in the middle of Bath City centre, " 
		"waiting for your friend who is always late." 
		"\nYou receive a text telling you how late they are going to be. \n" << endl;

	cout << "How much money do you have?" << endl;
	cin >> money;

	cout << "How long will your friend be?" << endl;
	cin >> minutesLate;

	if (minutesLate >= 15) {
		if (money > 2) {
			cout << "Go buy a coffee." << endl;
		}
		else {
			cout << "Go for a walk around town." << endl;
		}
	}
	else {
		cout << "Sit in the park and wait." << endl;
	}
	return 0;
}