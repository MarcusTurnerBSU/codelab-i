#include <iostream>
using namespace std;

int main() {

	bool hasPassport = true;
	bool hasDrivingLicense = false;
	bool drunk = true;

	if ((hasPassport == true || hasDrivingLicense == true) && drunk == true) {
		cout << "You may enter the club." << endl;
	}
	else {
		cout << "You may not pass" << endl;
	}
	/*int brotherA = 15;
	int brotherB = 12;

	if (brotherA > brotherB) {
		cout << "Brother A is younger" << endl;
	}

	

	int porridgeTemp = 40;

	if (porridgeTemp > 40 && porridgeTemp < 70) {
		cout << "That's just right." << endl;
	}
	else if (porridgeTemp <= 40) {
		cout << "Too cold" << endl;
	}
	else {
		cout << "Too hot" << endl;
	}
	
	int mark = 70;
	if (mark >= 60 && mark < 70) {
		cout << "You got a 2:1!" << endl;
	}
	else if (mark >= 70 && mark < 80) {
		cout << "You got a first!!" << endl;
	}
	int ayes = 300;
	int noes = 322;

	if (ayes > noes) {
		cout << "Boris has won" << endl;
	}
	else {
		cout << "Boris has been defeated! Yay!!" << endl;
	}
	
	string str1 = "Jake is Great.";
	string str2 = "Jake is really Great.";

	if (str1 != str2) {
		cout << "The Strings are not the same." << endl;
	}
	else {
		cout << "The Strings are the same" << endl;
	}
	*/
	return 0;
}