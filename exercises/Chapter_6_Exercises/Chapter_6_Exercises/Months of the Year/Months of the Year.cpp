#include <iostream>
using namespace std;

int main() {

	string months[] = { "January", "February", "March", "April", "May", "June", 
		"July", "August", "September", "October", "November", "December" };

	for (int i = 0; i < 12; i++) {
		cout << months[i] << endl;
	}

	return 0;
}