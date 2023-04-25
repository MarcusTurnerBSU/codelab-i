/*
program to convert Fahrenheit to Celsius
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	double Fahr;
	cout << "Enter a temperature in Fahrenheit..\n";
	cin >> Fahr;
	
	double Cel = (Fahr - 32) * 0.5556;

	cout << "You have input: " << char(248) << Fahr << " Fahrenheit.\nThe program will now convert, " << Fahr << " Fahrenheit into Celsius: " << fixed << setprecision(2) << Cel << char(248) << "C.";
	
/*	
	Part 1
	double Fahr = 84;
	double Cel = (Fahr - 32) * 0.5556; 
	cout << "Fahrenheit is " << Fahr << "\nCelsius is " << Cel << endl;
*/
	
	return 0;
}