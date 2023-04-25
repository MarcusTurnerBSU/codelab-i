#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

	//consts are variables whose value cannot be modified later
	const int COVERAGE = 350; // paint covers 350 sq ft per gallon 
	int length; int width; int height; int windows; int doors; // declare integers length, width, and height 
	double totalSqFt; double paintNeeded; // declare double totalSqFt; declare double paintNeeded; 

	// prompt for and read in the length of the room 
	cout << "Enter the length of the room in feet:" << endl;
	cin >> length;

	// prompt for and read in the width of the room 
	cout << "Enter the width of the room in feet:" << endl;
	cin >> width;

	// prompt for and read in the height of the room 
	cout << "Enter the height of the room feet:" << endl;
	cin >> height;

	// prompt for and read in number of windows
	cout << "Enter the amount of windows:" << endl;
	cin >> windows;

	// prompt for and read in number of doors
	cout << "Enter the amount of doors;" << endl;
	cin >> doors;

	// Compute the total square feet to be painted - think about the dimensions of each wall assuming standard four wall room.
	totalSqFt = ((length * height) * 2) + ((width * height) * 2) - (20 * doors) - (15 * windows);

	// Compute the amount of paint needed 
	paintNeeded = totalSqFt / COVERAGE;

	// Print the length, width, and height of the room, the total square feet and number of gallons of paint required
	cout << "Length: " << length << endl;
	cout << "Width: " << width << endl;
	cout << "Height: " << height << endl;
	cout << "Total Square Feet: " << totalSqFt << endl;
	cout << "Gallons of Paint: " << fixed << setprecision(2) << paintNeeded << endl;

	cin.get();
}