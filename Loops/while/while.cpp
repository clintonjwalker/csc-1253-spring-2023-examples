#include <iostream>
using namespace std;

int main()
{
    int counter;
    cin >> counter;

    if (counter < 0)
    {
        cout << "Invalid Counter" << endl;
        return 0;
    }

    int total = 1;

    while(counter > 0)
    { 
        total = total + (total * 2); 
        counter--;
    }

    cout << total;
}