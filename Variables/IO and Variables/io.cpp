#include <string>
#include <iostream>
using namespace std;

int main()
{
    string userInputString;
    int userInputInteger;

    cout << "Input a string: " << endl;
    getline(cin, userInputString);

    cout << "Input an integer: " << endl;
    cin >> userInputInteger;
    cout << endl;

    int stringSize;
    stringSize = userInputString.size();

    bool stringIsEmpty;
    stringIsEmpty = userInputString.empty();

    char stringFrontCharacter;
    stringFrontCharacter = userInputString.front();

    char stringBackCharacter;
    stringBackCharacter = userInputString.back();

    cout << "User integer was: " << endl;
    cout << userInputInteger << endl;
    cout << "User string size was: " << endl;
    cout << stringSize << endl;
    cout << "User string is empty: " << endl;
    cout << stringIsEmpty << endl;
    cout << "User string first character: " << endl;
    cout << stringFrontCharacter << endl;
    cout << "User string last character: " << endl;
    cout << stringBackCharacter << endl;    
}