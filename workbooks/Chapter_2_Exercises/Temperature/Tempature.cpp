/*
program to convert Fahrenheit to Celsius
EDIT: the user can now decide to convert °C to °F or °F to °C 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int userInput;
	double Fahr;
	double Cel;
	
		cout << "Hello, please enter an option:\n" 
			"1: To convert from Fahrenheit to Celsius.\n" 
			"2: To convert Celsius to Fahrenheit.\n";
		cin >> userInput;
	
		if (userInput == 1) {
			cout << "Enter " << char(248) << "F?" << endl;
			cin >> Fahr;
			Cel = (Fahr - 32) * 0.5556;
			cout << "You have selected " << Fahr << char(248) << "F. It will now be converted into " << char(248) << "C.\n" 
				<< Fahr << char(248) << "F is... "  << Cel << char(248) << "C." << endl;
		}
		else if (userInput == 2) {
			cout << "Enter " << char(248) << "C?" << endl;
			cin >> Cel;
			Fahr = (Cel * 1.8) + 32;
			cout << "You have selected " << Cel << char(248) << "C. It will now be converted into " << char(248) << "F.\n" 
				<< Cel << char(248) << "C is... " << Fahr << char(248) << "F." << endl;
		}
		else {
			cout << "That in an invalid option." << endl;
			main();
		}

	return 0;
}
/*
Part 1
	double Fahr = 84;
	double Cel = (Fahr - 32) * 0.5556;

	cout << "Fahrenheit is " << Fahr << "\nCelsius is " << Cel << endl;

	cout << "You have input: " << char(248) << Fahr << " Fahrenheit.\nThe program will now convert, " << Fahr << " Fahrenheit into Celsius: " << fixed << setprecision(2) << Cel << char(248) << "C.";
	cout << "Enter a temperature in Fahrenheit..\n";
	cin >> Fahr;
	double Cel = (Fahr - 32) * 0.5556;
*/