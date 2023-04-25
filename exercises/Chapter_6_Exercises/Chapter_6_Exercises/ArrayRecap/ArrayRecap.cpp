#include <iostream>
using namespace std;

int main() {
	
	//int numbers[] = { 43, 67, 87, 54, 2 }; //declare and init array
	int numbers[5];
	
	cout << "Enter 5 numbers" << endl; 
	for (int i = 0; i < 5; i++) {
		cout << "Number " << i + 1 << ": ";
		cin >> numbers[i];
	}

	//cout << numbers[1] << endl; this will print 67

	int total = 0; //variable to store total
	for (int i = 0; i < 5; i++) {
		total += numbers[i]; //add each array value to total
	}

	cout << "Total of values is: " << total << endl;

	return 0;
}