/*
Relational operators will print (the numeric value) of TRUE(1) or FALSE(0) 
*/
#include <iostream>
using namespace std;

int main() {
	
	cout << boolalpha; // prints "false" and "true" instead of the numeric value 0 or 1

	int numberOne = 6;
	int numberTwo = 11;
	cout << (numberOne == numberTwo) << endl; // equal to. Is num1 the same as num2, no(false) prints a 0
	cout << (numberOne != numberTwo) << endl; // not equal to. is num1 different to num2, yes(true) print a 1 

	return 0;
}