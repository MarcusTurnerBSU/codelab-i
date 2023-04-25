/*Value of A

int a; int b; int c; a = 3; b = 4; c = 5; b = c; a = b; a = 5 
int a = 3; int b = 3; int c = 4; c = b; b = a; a = c; = 3
double a = 3.0; double b = 6.0; double c = b / a; a = c; a = 2
int a = 1; int b = 4; a = a * b; a = 4
int a = 3; int b = 2; a = a % b; a = 1

Order of operation

Brackets
operators
division
multiplication
addition
subtraction

2 + 12 / 4; = 5
1 + 2 - 3 + 4 * 5; = 20
12 % 2 - 3 + 35 / 5; = 4


Maths

int a = 3; int	b = 10; int	c = 7; double x = 12.9; double y = 3.2;
	
a + b * c
a - b - c
a / b 
b / a
a - b / c
x / y
a + x / b
b - x / (y * c)
b % a
x % y
a % b / y*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	int a = 3; int b = 10; int c = 7; double x = 12.9; double y = 3.2;

	cout << fixed << setprecision(2); // printing to two decimal places
	cout << a + b * c << endl;
	cout << a - b - c << endl;
	cout << a / b << endl;
	cout << b / a << endl;
	cout << a - b / c << endl;
	cout << x / y << endl;
	cout << a + x / b << endl;
	cout << b - x / (y * c) << endl;
	cout << b % a << endl;
	//cout << x % y << endl; modulo only works with 'int'
	cout << a % b / y << endl;
	
	return 0;
}





