// Chapter 5 in WB

#include <iostream>
using namespace std;

int main() {

	for (int count = 20; count <= 24; count++) {
		if (count % 2 == 0) {
			cout << count << " - even" << endl;
		}
		else {
			cout << count << " - odd" << endl;
		}
		//cout << count << endl;
	}
	
	return 0;
}