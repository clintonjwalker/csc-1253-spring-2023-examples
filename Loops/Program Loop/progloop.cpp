#include <iostream>
using namespace std;

int main()
{
    bool running = true;
    int numberEntered;

    while(running)
    {
        cout << "Enter Number Please: ";
        cin >> numberEntered;

        if (numberEntered == 4)
            cout << "Woooo" << endl;

        if(numberEntered == 0)
            running = false;
    }
}