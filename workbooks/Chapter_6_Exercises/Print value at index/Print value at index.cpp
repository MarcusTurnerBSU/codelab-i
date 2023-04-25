#include <iostream>
using namespace std;

int main() {

	string vehicles[5] = { "Car", "Train", "Tractor", "Skiff", "Tank" };
	cout << vehicles[3] << "\n" << vehicles[0] << endl;
	cout << vehicles[2] << " " << vehicles[4] << endl;
	cout << vehicles[0] << " " << vehicles[3] << " " << vehicles[1] << endl;

	return 0;
}