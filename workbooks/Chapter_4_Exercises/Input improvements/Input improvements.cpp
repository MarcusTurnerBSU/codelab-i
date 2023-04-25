#include <iostream>
using namespace std;

int main() {

	// ask Jake how to implement 'N' to loop back round
	char input;
	do {
		cout << "Would you like to Quit (Y/N?)" << endl;
		cin >> input;
		input = toupper(input);
		cin.ignore(1000, '\n');
	} while( (input != 'Y') && (input != 'N') );

	
	return 0;
}