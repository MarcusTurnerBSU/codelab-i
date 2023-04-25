/*
Girl buying USB sticks.
She wants to buy as many as she can.
Spend a total of £50 and USB's are £6 each.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

	int perUSB = 6;
	int totalAmount = 50;
	int usbPurc = totalAmount /  perUSB;
	int moneyLeft = totalAmount % perUSB;

	cout << "A girl heads to a computer shop to buy some USB sticks." << endl;
	cout << "She wants as many as she can get for "<< (char)156 
		<< totalAmount << ", they are " << (char)156 << perUSB <<  " each." << endl;
	cout << "She can purchase " << usbPurc << " USB's." << endl;
	cout << "She will have " << (char)156 << moneyLeft 
		<< " left after spending as much money as possible, without going over " << (char)156 << totalAmount << "." << endl;
	cout << "She'll be lucky to buy a freddo after Brexit!" << endl;

	return 0;
}
