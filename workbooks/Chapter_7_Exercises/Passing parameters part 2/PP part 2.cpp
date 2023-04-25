#include <iostream>
#include <iomanip>
using namespace std;

void average(int num1, int num2, int num3);

int main() {

	cout << setprecision(2) << fixed;

	cout << "Enter three double numbers to gain an average: " << endl;
	double num1, num2, num3;
	cin >> num1 >> num2 >> num3;

	average(num1, num2, num3);
	return 0;
}

void average(int num1, int num2, int num3) {
	int total = num1 + num2 + num3;
	cout << "The average of the three numbers: " << total / 3 << endl;
}