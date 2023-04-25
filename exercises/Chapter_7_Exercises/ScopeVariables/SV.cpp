#include <iostream>
using namespace std;

int aGlobalVariable = 100;

void myFunc() {
	string name = "Jake";
	cout << name << endl;
	cout << aGlobalVariable << endl;
}
int anotherFunc(int num) {
	num = num + num;
	cout << "Num after addition in function is: " << num << endl;
	return num;
}
int main() {

	cout << aGlobalVariable << endl;
	int num = 10;

	num = anotherFunc(num);
	
	cout << num << endl;

	if (num == 10) {
		num++;
		if (num == 11) {
			num = 10;
			int anotherNum = 9;
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}

	for (int i = 0; i < 20; i++) {
	cout << i << endl;
}
	return 0;
}