#include <iostream>
using namespace std;

int main() {

	int userInput;
	char replay = 'Y';

	while (replay == 'Y') {
		cout << "Enter the 1 or 2 to receive a message." << endl;
		cin >> userInput;
		while (userInput == 1 || userInput == 2) {
			if (userInput == 1) {
				cout << "You have entered the number: 1" << endl;
			}
			else {
				cout << "You have entered the number: 2" << endl;
			}
			cout << "Enter the 1 or 2 to receive a message." << endl;
			cin >> userInput;
		}

		cout << "NO" << endl;
		cout << "Would you like to continue? (Y/N):" << endl;
		cin >> replay;
	}

	return 0;
}