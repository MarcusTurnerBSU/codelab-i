#include <iostream>
using namespace std;

int main() {
    
    cout << "Welcome to the dragon slay game! You will go through a series of chambers and must slay the dragon!" << endl;
    cout << "Available controls are:\n1: go up\n2: go down\n3: go left\n4: go right\n0: pick up items\n5: to slay the dragon.\n6: to view inventory." << endl;
    cout <<"You are in a hallway. There is a door to the left of you." << endl;
    
    int pickup = 0;
    int up = 1;
    int down = 2;
    int left = 3;
    int right = 4;
    int slay = 5;
    int inventory = 6;
    string inventoryList = "You have the following items:";
    
    int userInput;
    
    bool firstValidMove = false;
    
    do {
        cout << "What would you like to do?" << endl;
        cin >> userInput;
        if (userInput == left) {
            cout << "You go left." << endl;
            firstValidMove = true;
        }else if(userInput == inventory){
            cout << inventoryList << endl;
        } else {
            cout << "You can't go that way. Try again." << endl;
        }
    } while (!firstValidMove);
    
    cout << "You are at a grandiose staircase. There is an ajar armor cabinet with a sword in it. The staircase is blocked going down." << endl;
    
    bool secondValidMove = false;
    bool hasSword = false;
    
    do {
        cout << "What would you like to do?" << endl;
        cin >> userInput;
        if (userInput == pickup) {
            cout << "You pick up a sword" << endl;
            inventoryList += " sword, ";
            hasSword = true;
        } else if (userInput == up) {
            cout << "You go up." << endl;
            secondValidMove = true;
        } else if(userInput == inventory){
            cout << inventoryList << endl;
        }else {
            cout << "You can't do that. Try again." << endl;
        }
    } while (!secondValidMove);
    
    cout << "At the top of the staircase your way is blocked by a dragon!!!" << endl;
    
    bool thirdValidMove = false;
    
    do {
        cout << "What would you like to do?" << endl;
        cin >> userInput;
        if (userInput == slay) {
            if (hasSword == true) {
                cout << "You use your mighty sword and slay the dragon! You open the door behind the dragon and find the castle treasure!" << endl;
                inventoryList += "treasure, ";
            } else {
                cout << "You use your bare hands to slay the dragon but don't succeed! Try the game again. Perhaps pickup a weapon or two?" << endl;
            }
            thirdValidMove = true;
        }else if(userInput == inventory){
            cout << inventoryList << endl;
        } else {
            cout << "Quick! Slay the dragon! Use the slay command (press 5)!" << endl;
        }
    } while (!thirdValidMove);
    
    bool fourthValidMove = false;
    
    cout << "You may have the treasure but that's not the end, you hear the screams of the princess in the dungeon " << endl;
    
    do {
        cout << "What would you like to do?" << endl;
        cin >> userInput;
        if (userInput == down) {
            cout << "You head down the stairs quickly, on your way you pick carefully pick up a bottle of poison" << endl;
            inventoryList += "poison, ";
            fourthValidMove = true;
        }else if(userInput == inventory){
            cout << inventoryList << endl;
        } else {
            cout << "You can't do that! Try again." << endl;
        }
    } while (!fourthValidMove);
                 
                 
    cout << "Where could this adventure lead next..." << endl;
    
    
    return 0;
}
