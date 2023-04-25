#include <iostream>
using namespace std;

int main() {

	// int array that will store 10 values
	int marks[] = { 87, 65, 45, 77, 65, 99, 56, 43, 6, 19}; // short hand method

	// char array - store 5 values
	char grades[5] = { 'A', 'F', 'A', 'B', 'C' };

	string names[11]; //string array - store 11 values

	//cout << grades[3] << endl;
	cout << "The student marks are: " << endl;
	for (int i = 0; i < 10; i++) {
		cout << "Student " << i+1 << " marks out of 100 were: " << marks[i] << endl;
	}
	
	
	/*
	LONG HANDED WAY TO APPROACH TO ASSIGNING VALUES
	marks[0] = 87;
	marks[1] = 90;
	marks[2] = 65;
	marks[3] = 67;
	marks[4] = 93;
	marks[5] = 63;
	marks[6] = 70;
	marks[7] = 45;
	marks[8] = 21;
	marks[9] = 99;
	*/




	return 0;
}