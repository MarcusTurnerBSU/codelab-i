#include <iostream>
using namespace std;

int main() {
	
	bool monday = true, tuesday = false, wednesday = true, thursday = true, friday = false;
	
		if (monday == true) {
			cout << "CodeLab at 11" << endl;
		}
		else if (tuesday == true) {
			cout << "No Uni today! Booooo" << endl;
		}
		if (wednesday == true) {
			cout << "CodeLab at 12" << endl;
		}
		if (thursday == true) {
			cout << "Intro to Computing at 2" << endl;
		}
		else if (friday == true) {
			cout << "No Uni" << endl;
		}
		else {
			cout << "It's the weekend" << endl;
		}
	int num1 = 6;
	int num2 = 10;

	num1++; //increment by 1
	num2--; //decrement by 1

	cout << "Num1 is: " << num1 << endl; //output num1
	cout << "Num2 is: " << num2 << endl; //output num2
	
	num2 += num1; // make num2 equal to the result of adding num1
	//num2 = num2 + num1; longhand way of doing the above
	cout << "Num2 is now: " << num2 << endl;
	
	num1 *= num2; //make num1 equal to the result of multiplyig num2
	cout << "Num2 is now: " << num1 << endl; //output num2

	if (num1 > 100) {
		cout << "Wow what a big number!" << endl;
	}
	else {
		cout << "Itsy bitsy teeny weeny little number" << endl;
	}
	return 0;
}