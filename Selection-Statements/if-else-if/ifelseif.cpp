#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    if (number > 10)
    {
        cout << "Too Large" << endl;
    }
    else if(number < 0)
    {
        cout << "Too Small" << endl;
    }
    else
    {
        cout << "Good" << endl;
    }
}