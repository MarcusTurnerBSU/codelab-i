#include <iostream>
using namespace std;

int main() {

	for (int i = 1; i <= 7; i++) {
		// for (int j = 1; j <= 7; j++) prints 7x7 "*"
		for (int j = i; j <= 7; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}