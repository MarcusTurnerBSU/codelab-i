#include <iostream>
using namespace std;

void displayMenu();

int main() {

	void displayMenu();
	return 0;
}

void displayMenu() {
	string products[4][7] = {
	{ "Snickers", "Crunchie", "Twirl",
	"Mars", "Galaxy", "KitKat", "Maltesers" },

	{ "Skittles", "Jelly Babies", "Wine Gums",
	"Haribos", "Starburst", "Love Hearts", "Fruit Pastilles" },

	{ "Hula Hoops", "Quavers","Wotsis",
	"Walkers Ready Salted", "Walkers Cheese & Onion",
	"Walkers Salt & Vinegar", "Doritos Cool Original" },

	{ "Coca-Cola", "Diet Coke", "Mineral Water",
	"Pepsi Max", "Fanta", "Sprite", "Ribena" }
	};

	double prices[4][7] = {
		{0.60, 0.60, 0.60, 0.60, 1.00, 1.00, 1.00},
		{0.85, 0.85, 0.65, 0.65, 0.65, 0.65, 0.85},
		{0.60, 1.48, 1.48, 1.25, 0.60, 0.35, 0.60},
		{1.48, 1.33, 0.75, 1.10, 1.33, 1.33, 1.30}

	};
}