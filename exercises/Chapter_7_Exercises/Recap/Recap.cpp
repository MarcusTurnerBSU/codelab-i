#include <iostream>
#include <string>
using namespace std;

int num_check(int min, int max);
char get_grade(int mark);

int main() {


	int option;
	char cont = 'Y';
	string names[5];
	int marks[5];

	while (cont == 'Y') {

		cout << "Enter names and marks for 5 students:" << endl;

		for (int i = 0; i < 5; i++) {
			cout << "Student " << i + 1 << " name: " << endl;
			getline(cin, names[i]);
			cout << "Student " << i + 1 << "mark (0-100):" << endl;
			marks[i] = num_check(0, 100);
		}

		cout << "Data successfully entered!" << endl;

		do {
			cout << "Press 1 to view all marks" << endl;
			cout << "Press 2 to see the average mark" << endl;
			cout << "Press 3 to the student grades" << endl;
			cout << "Press 0 to quit" << endl;

			option = num_check(0, 3);

			switch (option) {
			case 1:
				for (int i = 0; i < 5; i++) {
					cout << names[i] << ":  " << marks[i] << endl;
				}
				break;
			case 2: {
				int total = 0;
				for (int i = 0; i < 5; i++) {
					total += marks[i];
				}
				int average = total / 5;
				cout << "Average mark: " << average << endl;
				break;
			}
			case 3:
				for (int i = 0; i < 5; i++) {
					cout << names[i] << ": " << get_grade(marks[i]) << endl;
				}
				break;

			}
		} while (option != 0);
		cout << "Would you like to enter a new set of students (Y)?" << endl;
		cin >> cont;
		cont = toupper(cont);
		cin.ignore();
	}
	cout << "Goodbye." << endl;

	return 0;
}

char get_grade(int mark) {
	if (mark < 40) {
		return 'F';
	}
	else if (mark < 50) {
		return 'E';
	}
	else if (mark < 60) {
		return 'D';
	}
	else if (mark < 70) {
		return 'C';
	}
	else if (mark < 80) {
		return 'B';
	}
	else {
		return 'A';
	}
}

int num_check(int min, int max) {
	int num;
	cin >> num;
	while (cin.fail() || num < min || num > max) {
		cout << "Invalid, must be between " << min << " - " << max << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> num;
	}
	cin.ignore(); //ignore leftover enter key
	return num;
}