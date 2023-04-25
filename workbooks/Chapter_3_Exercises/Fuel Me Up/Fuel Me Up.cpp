#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double petrolPrice = 1.25; double dieselPrice = 1.31;
	int numLitres;
	char userInput;

	cout << "Please select which fuel you would like to use: (D/P):"
		"\nD: Diesel Price is: " << char(156) << dieselPrice <<
		"\nP: Petrol Price is: " << char(156) << petrolPrice << endl;
	cin >> userInput;

	cout << "How many litres of fuel want you like: " << endl;
	cin >> numLitres;

	if (numLitres > 0) {
		switch (userInput) {
		case 'D':
		case 'd':
			cout << setprecision(2) << fixed;
			cout << "You have selected Diesel." << endl;
			cout << "You have selected " << numLitres << " litres of Diesel.\nThe total price is: "
				<< char(156) << numLitres * dieselPrice  << endl;
			break;
		case 'P':
		case 'p':
			cout << setprecision(2) << fixed;
			cout << "You have selected Petrol." << endl;
			cout << "You have selected " << numLitres << " litres of Petrol.\nThe total price is: "
				<< char(156) << numLitres * dieselPrice << endl;
			break;
		default:
			cout << "This is an invalid input" << endl;
		}

		return 0;
	}
}
