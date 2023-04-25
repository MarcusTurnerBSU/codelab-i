// Chapter 5 in WB

#include <iostream>
using namespace std;

int main() {

	string myWord = "Marcus";

	for (int i = 0; i < myWord.length(); i++) {
		cout << myWord.at(i) << endl;
	}
	
	//string myWord = "Joe";
	//cout << myWord.at(0) << endl;
	//cout << myWord.at(1) << endl;
	//cout << myWord.at(2) << endl;

	return 0;
}