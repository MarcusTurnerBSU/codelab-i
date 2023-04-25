#include <iostream>
using namespace std;

int main() {

	//char vowel[] = {'a', 'e', 'i', 'o', 'u'};
	char userLetter;

	cout << "Enter a letter." << endl;
	cin >> userLetter;

	if (isalpha(userLetter)) {
		if (userLetter == 'a' || userLetter == 'e' || userLetter == 'i' || userLetter == 'o' || userLetter == 'u') {
			cout << "This is a vowel." << endl;
		}
		else {
			cout << "This is a consonant." << endl;
		}
	}
	else {
		cout << "This is an invalid input" << endl;
		main();
	}
	return 0;
}