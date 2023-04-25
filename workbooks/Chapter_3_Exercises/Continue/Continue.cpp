#include <iostream>
using namespace std;

int main() {

	char userInput;

	cout << "Would you like to continue? (Y/N): " << endl;
	cin >> userInput;

	switch (userInput) {
	case 'Y':
	case 'y':
		cout << "Continue playing the game..." << endl;
		break;	
	case 'N':
	case 'n':
		cout << "The game will stop now." << endl;
		break;
	default:
		cout << "That input is not valid." << endl;
	}

	return 0;
}