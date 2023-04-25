/*
Program that allows the user to input a range of sided shapes
tells the user the shape depending how many sides they have entered.
*/

#include <iostream>
using namespace std;

int main() {
	
	int sides;

	cout << "Enter a number of sides?" << endl;
	cin >> sides;

	if (sides == 3) {
		cout << "A three sided shape is a Triangle." << endl;
	}

	else if (sides == 4) {
		cout << "A four sided shape is a Quadrilateral." << endl;
	}
	else if (sides == 5) {
		cout << "A five sided shape is a Pentagon." << endl;
	}
	else if (sides == 6) {
		cout << "A six sided shape is a Hexagon." << endl;
	}
	else if (sides == 7) {
		cout << "A seven sided shape is a Heptagon." << endl;
	}
	else if (sides == 8) {
		cout << "A eight sided shape is a Octagon." << endl;
	}
	else if (sides == 9) {
		cout << "A nine sided shape is a Nonagon." << endl;
	}
	else if (sides == 10) {
		cout << "A ten sided shape is a Decagon." << endl;
	}
	//else if (sides == 1, 2 || sides > 10) long handed way of writing it
	else {	// only need 'else' as everything else has been checked. Doesn't parameters
		cout << "Number isn't valid. Pick again." << endl;
		
		main(); // recalling the main function so the user can try again and input a correct 'int'
	}
	
	return 0;
}