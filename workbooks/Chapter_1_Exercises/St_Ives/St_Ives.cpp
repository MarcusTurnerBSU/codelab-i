#include <iostream>
#include <string>
using namespace std;

int main() {

	// Part 1
	int man = 1;
	int wives = 7;
	int sacks = 7;
	int cats = 7;
	int kits = 7;

	cout << "As I was going to St. Ives, I met " << man << " man with " << wives << " wives" << endl;
	cout << "Each wife had " << sacks << " sacks, each sack had " << cats << " cats, each cat had " << kits << " kits." << endl;
	cout << "Kits, cats, sacks and wives," << endl;
	cout << "How many were going to St. Ives?" << endl;

	//Part 2 *copied as didn't understand at the time.
	int totalSacks = wives * sacks;
	int totalCats = wives * sacks * cats;
	int totalKits = wives * sacks * cats * kits;
	int totalTravellers = man + wives + totalSacks + totalCats + totalKits;

	cout << "Items travelling the other way = " << totalTravellers << endl;

	return 0;
}
