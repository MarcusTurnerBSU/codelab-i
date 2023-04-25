#include <iostream>
using namespace std;

int main() {

	string answer = "Paris";
	string userAnswer;
	
	cout << "What is the capital of France?" << endl;
	cin >> userAnswer;
/*
	userAnswer[0] = toupper(userAnswer[0]); // allows the user to type 'p' and will still get the answer right
	userAnswer[1] = tolower(userAnswer[1]); // allows the user to type 'A' and will still get the answer right
	userAnswer[2] = tolower(userAnswer[2]);
	userAnswer[3] = tolower(userAnswer[3]);
	userAnswer[4] = tolower(userAnswer[4]);
*/	
	userAnswer[0] = toupper(userAnswer[0]);

	for (int i = 1; i < userAnswer.length(); i++) {
		userAnswer[i] = tolower(userAnswer[i]);
	}
		
	if (answer == userAnswer) {
		cout << answer << " Well done! That's correct." << endl;
	}
	else {
		cout << "Sorry! That's incorrect." << endl;
	}
	return 0;
}