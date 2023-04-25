/*
A program that calculates and displays the area 'A' and circumference 'C' of a circle given it's radius 'R'.
User enters the 'R', program displays 'A' and 'C'.
*/

#include <iostream>
using namespace std;

int main() {
	
	double R;
	cout << "Enter the radius for the circle:" << endl;
	cin >> R;

	double A = 3.14 * (R * R);
	double C = 3.14 * (R * 2);

	cout << "Area is: " << A << endl;
	cout << "Circumference is: " << C << endl;
	   	
	return 0;
}