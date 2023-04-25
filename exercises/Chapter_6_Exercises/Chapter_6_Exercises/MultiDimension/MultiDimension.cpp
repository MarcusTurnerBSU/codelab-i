#include <iostream>
using namespace std;

int main() {

	string teams[3][4] = {
	{"Newcastle", "Man City", "Liverpool", "Chelsea"},
	{"Real Madrid", "Barcelona", "Athletico", "Deportivo"},
	{"PSG", "Lyon", "Metz", "Marseille"}

	};
	string country[3] = { "England", "Spain", "France" };
	for (int i = 0; i < 3; i++) {
		cout << country[i] << ":";
		for (int j = 0; j < 4; j++) {
			cout << teams[i][j] << " ";
		}
	}
	return 0;
	