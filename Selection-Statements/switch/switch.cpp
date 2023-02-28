#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    switch(number)
    {
        case 0:  cout << "Zero" << endl; break;
        case 5:  cout << "Five" << endl; break;
        case 10: cout << "Ten" << endl; break;
        default: cout << "Something Else" << endl;
    }
}