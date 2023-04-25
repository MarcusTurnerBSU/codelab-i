#include <iostream>
using namespace std;

int main() {
	
	int num;

	cout << "Enter a number:" << endl;
	cin >> num; 

	if (num > 0) {
		cout << "This number is positive" << endl;
	}
	else if (num < 0) {
		cout << "This number is negative" << endl;
	}
	else {
		cout << "This is zero" << endl;
	}
	
	
	
	return 0;
}