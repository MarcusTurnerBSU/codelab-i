#include <iostream>
using namespace std;

void sum(int num1, int num2, int num3);

int main() {

	cout << "Enter three numbers to add them all together: " << endl;
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;

	sum(num1, num2, num3);

	return 0;
}

void sum(int num1, int num2, int num3) {
	int total = num1 + num2 + num3;
	cout << "The total amount of all three intergers are: " << total << endl;
}