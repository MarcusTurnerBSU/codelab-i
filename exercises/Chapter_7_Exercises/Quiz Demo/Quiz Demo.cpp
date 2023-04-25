#include <iostream>
#include <string>
using namespace std;

void runGame(string questions[], string answers[], int level);
int inputCheck(string menu, int limit);
string modifyQuestion(string q, int mod);

int main() {

	string qs[2][4] = {
		{"England", "Wales", "France", "Germany" },
		{"Brazil", "Peru", "Argentina", "Columbia"}
	}; //array to store question country
	string ans[2][4] = {
		{"London", "Cardiff" , "Paris", "Berlin" },
		{ "Brasila", "Lima", "Buenos Aires", "Bogota" }
	}; //array to store answer 
	
	char replay;
	do {
		string menu;
		menu = "1: European Capitals\n2: South American Capitals";
		int choice = inputCheck(menu, 2);

		menu = "1: Easy\n2: Medium\n3: Hard";
		int difficulty = inputCheck(menu, 3);

		switch (choice) {
		case 1:
			runGame(qs[0], ans[0], difficulty);
			break;
		case 2:
			runGame(qs[1], ans[1], difficulty);
			break;
		}
		cout << "Would you like to play again? (Y)" << endl;
		cin >> replay;
	} while (toupper(replay) == 'Y');


	return 0;
}

int inputCheck(string menu, int limit) {
	cout << menu << endl;
	int num;
	cin >> num;
	while (cin.fail() || num < 1 || num >limit) {
		cout << "Invalid Input." << endl;
		cout << menu << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> num;
	}
	return num;
}
string modifyQuestion(string q, int mod) {
	for (int i = 0; i < q.length(); i++) {
		if (i % mod == 0) {
			q[i] = '*';
		}
	} return q;
}

void runGame(string questions[], string answers[], int level) {
	cin.ignore(1000, '\n');
	int lives = 3; //store the number of lives the player has
	string answer; //declare variable for user input
	int count = 0; //variable to keep track of question/answer
	int score = 0; //variable to keep track of user score

	while (lives > 0 && count < 4) { //while loop will keep running as long as lives are more than 0 and count less than 4

		string question = questions[count];
		if (level == 2) {
			question = modifyQuestion(question, 6);
		}
		else if (level == 3) {
			question = modifyQuestion(question, 2);
		}

		cout << "What is the capital of " << question << "?" << endl; //ask user a question by accessing the question array
		getline(cin, answer); //Get the users answer from cin and assign to answer variable - getline allows us to get cities with spaces in the name (e.g. Mexico City)
		answer[0] = toupper(answer[0]); //convert first letter of user answer to upper case
		if (answer == answers[count]) { //checking users answer against value in answers array
			cout << "Correct" << endl; //inform them they were right
			count++; //increment count so user gets next question
			score++; //increment score
		}
		else {//if guessed wrong
			lives--; //decrement lives
			cout << "You got it wrong, try again. You have " << lives << " lives remaining." << endl; //inform the user they were wrong
		}
	}

	if (lives == 0 && score == 0) { //if user lost all lives and didn't get one right
		cout << "Haha you suck!" << endl;
	}
	else { //user got at least 1 question correct
		cout << "You got " << score << " correct and had " << lives << " lives remaining." << endl;
	}
}
