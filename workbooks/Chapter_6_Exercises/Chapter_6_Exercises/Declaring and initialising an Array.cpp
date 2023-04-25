#include <iostream>
using namespace std;

int main() {
	//Part 1
	char charArray[26];
	int intArray[10];
	string stringArray[4];
	double doubleArray[18];
	//Part 2
// a)                 						
	intArray[0] = 1; 	  
	intArray[1] = 2; 	  
	intArray[2] = 3; 					  
	intArray[3] = 4;	      
	intArray[4] = 5;		  
	intArray[5] = 6;			   
	intArray[6] = 7;                                
	intArray[7] = 8;	
// b) 
	stringArray[0] = "Hello";
	stringArray[1] = "Bye";
// c)
	charArray[0] = 'A';
	charArray[1] = 'B';
	charArray[2] = 'C';
// d)
	doubleArray[0] = 1.0;
	doubleArray[1] = 2.0;
	doubleArray[2] = 3.0;
	doubleArray[3] = 4.0;
	doubleArray[4] = 5.0;
// e)
	intArray[0] = 10;
	intArray[1] = 20;
	intArray[2] = 30;
	intArray[3] = 40;
	intArray[4] = 50;
	intArray[5] = 60;
	// Part 3
// a)
	string stringArray[] = { "", "a", "aa", "aaa" };
// b)
	int intArray[] = { 1, 10, 100, 1000, 10000 };
// c)	
	bool boolArray[] = { true, false, false, true };
// d)
	double doubleArray[] = { 5.6, 1.8, 4.34, 7.65 };
	return 0;
}