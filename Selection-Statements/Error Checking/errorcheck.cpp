#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    // in this example I require a positive number
    if (number <= 0)
    {
        cout << "Too Low" << endl;
        return 0;
    }

    cout << "Good Number" << endl;
}