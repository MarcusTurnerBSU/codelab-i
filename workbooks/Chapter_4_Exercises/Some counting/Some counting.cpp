//Chapter 5 in WB

#include <iostream>
using namespace std;

int main() {

/* 
	1. count = 0;   count <= 50;  count++
	2. count = 50;  count >=  0;  count--
	3. count = 30;  count <= 50;  count++
	4. count = 50;  count >= 10;  count-=2
	5. count = 100; count <= 200; count+=5
*/

	for (int count = 100; count <= 200; count+=5) {
		cout << count << endl;
	}
	return 0;
}