#include <iostream>
using namespace std;

int main() {

	/*int num;
	cout << "Gimme a number" << endl;
	cin >> num;

	while (cin.fail()) {
		cout << "Invalid data. enter a number" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> num;
		
	}*/

	cout << "While loop version" << endl;
	int num = 0;
		while (num <= 10) {
			cout << num << endl;
			num++;
		}
		cout << "\nFor loop version" << endl;
		for (int i = 0; i < 10; i++)
			cout << i << endl;
	return 0;
}