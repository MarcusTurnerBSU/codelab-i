/*
Theme Park program to check entry
copied from ** GitHub\codelab-i-MarcusTurnerBSU\exercises\Chapter_2_Exercises\Chapter_2_Exercises.sln
*/

#include <iostream>
using namespace std;

int main() {

	double heightRestriction;
	int ageRestriction;

	cout << "What is your height in metres?" << endl;
	cin >> heightRestriction;

	cout << "What is your age?" << endl;
	cin >> ageRestriction;

	if (heightRestriction > 0.6 && ageRestriction >= 5) {
		cout << "You can go on this ride." << endl;
	}
	else {
		cout << "You can't go on this ride." << endl;
	}

	return 0;
}