// There are 6 errors in this code
// Go through the code carefully and fix each error
// You will have to fix all 6 errors for the programme to work

#include <iostream>
#include <string>
using namespace std;

int main(){
        
    //declare variables for address
    string streetName = "Westmead Lane"
    string houseNumber = 38;
    string townname = "Bristol";
    
    //print full address
    cout << "I live at " << houseNumber << ": " + streetName << ", ' << townName << endl;
    
    system("pause");
    return 0;
}
