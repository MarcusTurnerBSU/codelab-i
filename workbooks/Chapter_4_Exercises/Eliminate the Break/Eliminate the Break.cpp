#include <iostream>
using namespace std;

int main() {

	int userNum;
	int count = 1;

	cout << "Enter a whole number: " << endl;
	cin >> userNum;

	while (count <= userNum) {
		cout << count << endl;
		count++;
	}
	
	

	//int count = 1;
	//while (true) {
	//	cout << count << endl;
	//	if (count <= userNum) {
	//		//break;
	//		count++;
	//	}
	//	//count++;

	return 0;
}