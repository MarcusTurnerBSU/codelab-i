// Chapter 5 example of nested for loops
#include <iostream>
using namespace std;

int main() 
{

	for (int i = 1; i <= 5; i++) 
	{  // for (int j = 1; j <= 5; j++) prints 5x5 "*" 
		for (int j = i; j <= 5; j++) 
		{
			cout << "*";

		}
		cout << endl;
		
	}
	return 0;
}