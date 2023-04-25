#include <iostream>
using namespace std;

int main() {

	for (int i = 10; i >= 0; i--) {
		cout << i << endl;
	}
	cout << "We have lift off!" << endl;

	for (int i = 0; i < 5; i++) {
		//cout << "i is " << i << endl; printing which set is on
		//for (int j = i; j < 5; j++) { this prints one less each time because i increments every set
		for (int j = 0; j < 5; j++) {
			cout << "*";
		}
		cout << endl;
}
	cout << "We continue here" << endl;
	
	
	
	
	
	return 0;

	
}