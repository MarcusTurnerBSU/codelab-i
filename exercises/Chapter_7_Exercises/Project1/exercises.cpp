#include <iostream>
using namespace std;

double sumItems(double item1, double item2) {
	return item1 + item2;
}

void saySomething(string msg) {
	cout << msg << endl;
}

string greeting(int time) {
	if (time < 12) {
		return "Good Morning";
	}
	else {
		return "Good Afternoon";
	}
}

int main() {

	saySomething("What time is it?");
	int userInput;
	cin >> userInput;
	//cout << greeting(userInput) << endl;
	saySomething(greeting(userInput));

//	double duck = 10.50;
//	double whiskey = 45.79;
//	saySomething("How much money do you have?");
//	double money;
//	cin >> money;
//
//	if (sumItems(duck, whiskey) >= money) {
//	saySomething("get drunk with some ducks!!!");
//}
//	else {
//		saySomething("Boooooo save some more money");
//	}
//	
//	double total = sumItems(45.79, 10.50);
//	cout << "Sum of 45 + 1 = " << total << endl;
//	
//	return 0;
//}