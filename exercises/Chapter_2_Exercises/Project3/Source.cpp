#include <iostream>
using namespace std;

int main() {

	bool zombieAtDoor = true;
	bool decideToFight = false;
	int numBullets = 0;
	int strength = 20;
	int zombieStrength = 44;

	if (zombieAtDoor) {
		cout << "Would you like yo fight? 1: Yes / 0: No" << endl;
		cin >> decideToFight;
		if (decideToFight && numBullets > 0) {
			cout << "Grab your weapons!" << endl;
			if (zombieStrength > strength) {
				cout << "You got overwhelmed by the zombie" << endl;
			}
			else {
				cout << "You blew his head off!" << endl;
			}
		}
		else {
			cout << "Let your buddy in" << endl;
		}
	}
	return 0;
