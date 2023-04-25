#include <iostream>
#include <string>
using namespace std;

int main() {

	bool musicalFriend;
	string friendPlays;
	
	cout << "Do you play a musical instrument? 1: Yes / 0: No" << endl;
	cin >> musicalFriend;

	cout << "What instrument do you play?" << endl;
	cin >> friendPlays;

	if (musicalFriend) {
		if (friendPlays == "guitar" || friendPlays == "drums") {
			cout << "We can start a band!" << endl;
		}
		else {
			cout << "I need a drummer or guitarist." << endl;
		}
	}
	else {
		cout << "We can't start a band." << endl;
	}
	return 0;
}