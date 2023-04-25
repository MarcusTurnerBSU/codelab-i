#include <iostream>
using namespace std;

int main() {

	// Ask Jake why is Part C wrong

	int myInt;
	//Part A int counter = 1;
	int counter;
	int even = 0;
	int odd = 0;

	// Part B lines 13 and 14. 'cin' changed on line 12 
	cout << "Enter a starting number: " << endl;
	cin >> counter;

	
	cout << "Enter a ending number:" << endl;
	cin >> myInt;

	while (counter <= myInt) {
		cout << counter << endl;

		if (counter%2==0) {
			even++;
		}
		else {
			odd++;
		}
		
		counter++;
	}
	cout << "The number of even numbers are: " << counter << endl;
	cout << "The number of odd numbers are: " << counter << endl;
	return 0;
}