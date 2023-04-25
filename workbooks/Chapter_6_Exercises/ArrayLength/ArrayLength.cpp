#include <iostream>
using namespace std;

int main() {

	int intArray[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	string stringArray[] = { "Hello", "Bye" };
	char charArray[] = { 'A', 'B', 'C' };

	cout << sizeof(intArray) / sizeof(intArray[0]) << endl;
	cout << sizeof(stringArray) / sizeof(stringArray[0]) << endl;
	cout << sizeof(charArray) / sizeof(charArray)[0] << endl;

	return 0;
}