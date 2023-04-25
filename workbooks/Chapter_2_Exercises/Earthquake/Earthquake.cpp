#include <iostream>
#include <string>
using namespace std;

int main() {

	double magnitude;
	string type;

	cout << "Enter the earthquake magnitude.." << endl;
	cin >> magnitude;
	
	if (!isalpha(magnitude)) {
		if (magnitude > 0 && magnitude < 2) {
			type = "Micro.";
		}
		else if (magnitude >= 2 && magnitude < 3) {
			type = "Very Minor.";
		}
		else if (magnitude >= 3 && magnitude < 4) {
			type = "Minor.";
		}
		else if (magnitude >= 4 && magnitude < 5) {
			type = "Light.";
		}
		else if (magnitude >= 5 && magnitude < 6) {
			type = "Moderate.";
		}
		else if (magnitude >= 6 && magnitude < 7) {
			type = "Strong.";
		}
		else if (magnitude >= 7 && magnitude < 8) {
			type = "Major.";
		}
		else if (magnitude >= 8 && magnitude < 10) {
			type = "Great.";
		}
		else if (magnitude >= 10) {
			type = "Meterotic.";
		}
		else {
			type = "invalid.";
		}
	}
	else {
		cout << "That is an invalid input." << endl;
	}
	cout << "\nThat earthquake was: " << type << endl;

	return 0;
}