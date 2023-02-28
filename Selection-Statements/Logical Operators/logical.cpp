#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    if(number > 10 || number < 0)
    {
        cout << "I don't like it" << endl;
    }
    else
    {
        cout << "I like it" << endl;
    }
}