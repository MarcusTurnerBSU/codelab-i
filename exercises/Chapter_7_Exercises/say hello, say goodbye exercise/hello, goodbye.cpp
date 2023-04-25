#include <iostream>
using namespace std;
void saySomething(string msg) {
	cout << msg << endl;
}
void hello() {
	cout << "Welcome to my program" << endl;
	cout << "End of program" << endl;
}

/*void*/ int myCalculation(int num) {
	num *= 2;
	num += 8;
	cout << "The result of the calculation is: " << num << endl;
	return num;
}

int main() {

	saySomething("Welome to my Program");
	char replay;
	do {
		
		saySomething("Enter a number");
		int userNum;
		cin >> userNum;
		userNum = myCalculation(userNum);
		cout << "user num is still " << userNum << endl;
		saySomething("Would you like to enter another number (Y)?");
		cin >> replay;
		replay = toupper(replay);
	} while (replay == 'Y');
	saySomething("Let's call it again");
	myCalculation(4);


	saySomething("End of Program");
	return 0;
}