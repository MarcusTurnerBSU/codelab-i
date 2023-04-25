#include <iostream>
using namespace std;

int main() {
	
	double purcPrice;
	double salePrice;

	cout << "How much was your purchase?\n" << char(156);
	cin >> purcPrice; 

	cout << "How much was the sale?\n" << char(156);
	cin >> salePrice;

	if (purcPrice > salePrice) {
		cout << "The total loss is: " << char(156) << purcPrice - salePrice << endl;
	}
	else if (purcPrice < salePrice) {
		cout << "The total profit is: " << char(156) << salePrice - purcPrice << endl;
	}
	else if (purcPrice == salePrice) {
		cout << "You have broken even on this sale." << endl;
	}
	return 0;
}