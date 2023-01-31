#include <string>
#include <iostream>
using namespace std;

int main()
{
    int userInputOne;
    int userInputTwo;
    int userInputThree;

    cout << "Input first integer: " << endl;
    cin >> userInputOne;
    cout << endl;

    cout << "Input second integer: " << endl;
    cin >> userInputTwo;
    cout << endl;

    cout << "Input third integer: " << endl;
    cin >> userInputThree;
    cout << endl;

    cout << "Printing all inputted ints: " << endl;
    cout << userInputOne << " " << userInputTwo
         << " " << userInputThree << endl;
}