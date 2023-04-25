#include <iostream>
using namespace std;
//functions go outside and above(my peference) the main function (int main())
void stringGuide() {
	cout << "String 6: E" << endl;
	cout << "String 5: A" << endl;
	cout << "String 4: D" << endl;
	cout << "String 3: G" << endl;
	cout << "String 2: B" << endl;
	cout << "String 1: E" << endl;
}

int main() {
	cout << "Welcome to the magic music machine" << endl;
	stringGuide();
	cout << "Lots more code later do weant to run it again?" << endl;
	cout << "YESSSSSS THEY ALL SCREAM" << endl;

	for (int i = 0; i < 100; i++) {
		stringGuide();
	}



	return 0;
}