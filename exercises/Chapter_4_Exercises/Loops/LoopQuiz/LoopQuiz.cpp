#include <iostream>
#include <string>
using namespace std;

int main() {

	string qs[] = { "England", "Wales", "France", "Germany", "Spain"};
	string ans[] = { "London", "Cardiff", "Paris", "Berlin" "Madrid"};
	int lives = 3; // int to store users lives
	string answer; //stores user answer
	int count = 0;
	int score = 0;

	while (lives > 0 && count < 5) { // keep asking user the question while they have lives remaining
		cout << "What is the capital of " << qs[count] << "?" << endl;
		cin >> answer;
		answer[0] = toupper(answer[0]);
		if (answer == ans[count]) {
			cout << "Correct!" << endl;
			//break; quit the while loop
			count++; // increment count to get next question
		}
		else {
			lives--; // take a life away
			cout << "Incorrect, try again. You have " << lives << "lives remaining." << endl;
		}
	}

	if (lives == 0 && score == 0) {
		cout << "Haha you suck" << endl;
	}
	else {
		cout << "You got " << score << " right and had " << lives << " lives remaining!" << endl;
	}

	return 0;
}