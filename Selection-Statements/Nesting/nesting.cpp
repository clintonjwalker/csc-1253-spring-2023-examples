#include <iostream>
using namespace std;

int main()
{
    int number1;
    cin >> number1;

    int number2;
    cin >> number2;

    // Nesting can be useful for dependent things
    if (number1 > number2)
    {
        cout << "Executing first position" << endl;

        if (number2*10 > number1)
        {
            cout << "Executing here" << endl;
        }
    }
    else
    {
        cout << "Number 1 is smaller" << endl;
    }
}