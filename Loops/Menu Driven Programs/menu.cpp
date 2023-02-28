#include <iostream>
using namespace std;

int main()
{
    int optionEntered;
    bool running = true;

    while(running)
    {
        cout << "Your Options Are:" << endl;
        cout << "1: Print A Keith" << endl;
        cout << "2: Cat A Char" << endl;
        cout << "3: Excitement" << endl;
        cout << "0: Exit" << endl << endl;
        cin >> optionEntered;

        switch (optionEntered)
        {
            case 1:
                cout << "Keith" << endl << endl;
                break;
            case 2:
                char userLetter;
                cout << "Enter Letter, Yes: ";
                cin >> userLetter;
                cout << userLetter << endl << endl;
                break;
            case 3:
                cout << "!!!!!!!!!" << endl << endl;
                break;
            case 0:
                cout << endl << "Goodbye" << endl;
                running = false;
                break;
            default:
                cout << "Invalid Option" << endl << endl;
        }
    }
}
