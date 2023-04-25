#include <iostream>
using namespace std;

//void helloWorld() {
//	cout << "Hello World" << endl;
//}
//// default parameter values
//void output(string msg = "Jake Hobbs") {
//	msg.append("Ducks");
//	cout << msg << endl;
//}
//
//int sum(int a, int b) {
//	int total = a + b;
//	return a+b;
//}
//
//void increment(int &num) { // no longer copies, allow to add by reference  
//	num = num + 1;
//	cout << "num in increment function is: " << num << endl;
//}

void display(int a) {
	cout << "int is: " << a << endl;
}

void display(string str) {
	cout << "string is: " << str << endl;
}

void display(string name, int age) {
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}

int main() {

	display(6);
	display("Jake Hobbs");
	display("Jake Hobbs ", 31);

	//int num = 9;
	//cout << num << endl;
	//cout << &num << endl; //where this lives in the computer's memory
	//increment(num);
	//cout << "num in main is: " << num << endl;

	//string str1 = "CodeLab";
	//output(str1);
	//cout << str1 << endl;

	//cout << "Enter two values" << endl;
	//int num1, num2;
	//cin >> num1 >> num2;

	//int total = sum(num1, num2);
	//cout << total << endl;
	//cout << sum(60, 12) << endl;

	//output("CodeLab"); //this will override the default
	//output(); //this will output default parameter

	return 0;
}