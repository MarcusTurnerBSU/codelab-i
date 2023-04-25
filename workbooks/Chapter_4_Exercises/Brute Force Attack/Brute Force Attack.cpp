#include <iostream>	
using namespace std;

int main() {

	string password = "246";
	string userInput;
	int attempts = 5;

	while (true) {
		cout << "What is the three digit passcode?" << endl;
		cin >> userInput;
		attempts--;

		//**ask Jake how to implement only 3 digit numbers, not allow char inputs. give them one chance with char inputs


		//if (!isdigit(userInput)) {
		//	cout << "Please enter an integer." << endl;
		//}
		//else {
		//	//continue;
			if (userInput == password) {
				cout << "You have cracked the code!" << endl;
				break;
			}
			else {
				cout << "You have guessed incorrectly.\nPlease try again."
					"\nYou have " << attempts << " attempts left." << endl;
			}
			if (attempts == 0) {
				cout << "You have failed. The police are on their way!" << endl;
				break;
			}
		}
		return 0;
	}
//}
