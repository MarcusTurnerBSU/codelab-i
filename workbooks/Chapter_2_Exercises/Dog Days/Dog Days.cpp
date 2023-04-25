/*
Converting human years to dog years
*/
#include <iostream>
#include <math.h>
using namespace std;

int main() {

	// > 0 && < 2 = human years * 10.5 dog years
	// > 2 = human years * 4 dog years

	double humanYears;
	double dogYears;
	
	cout << "Please enter the amount of human years to convert into dog years." << endl;
	cin >> humanYears;

	if (humanYears < 0) {
		cout << "You can't input a negative number!" << endl;
		main();
	}
	else if (humanYears < 2) {
		dogYears = humanYears * 10.5;
		// code it written like this for readability, stops the string extending past the edge of the screen
		cout << "You have selected " << humanYears
			<< " human years, to be converted into dog years.\nResult: " 
			<< dogYears << " dog years." << endl;
	}
	else {
		double leftOver = humanYears - 2;
		dogYears = (2 * 10.5) + (leftOver * 4);
		cout << "You have selected " << humanYears
			<< " human years, to be converted into dog years.\nResult: "
			<< dogYears << " dog years." << endl;
	}
	
	return 0;
}