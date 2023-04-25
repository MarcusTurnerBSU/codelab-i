#include <iostream>
using namespace std;

int main() {

	double x, y, z;

	cout << "Enter a length for the triangle" << endl;
	cin >> x;

	cout << "Enter a length for the triangle" << endl;
	cin >> y;

	cout << "Enter a length for the triangle" << endl;
	cin >> z;

	if (x == y && y == z) {
		cout << "This is an Equilateral Triangle" << endl;
	}
	else if (x == y || x == z || y == z) {
		cout << "This is an Isosceles Triangle" << endl;
	}
	else {
		cout << "This is a Scalene Triangle" << endl;
	}
	return 0;
}