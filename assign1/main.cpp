#include <iostream>
#include <string>
#include "utility.h"

int main()
{
    int input;
    string output;

    // take user input
    cout << "enter a number: ";
    cin >> input;

    // exit with error if non numeric input
    if (cin.fail())
    {
        cout << "invalid input" << endl;
        return 1;
    }

    output = std::to_string(input);
    switch(output.length())
    {
        case 2:
            cout << "length 2" << endl;
            break;

        case 3:
            cout << "length 3" << endl;
            break;

        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
            cout << "length >=4" << endl;
            break;

        default:
            cout << "invalid length of number" << endl;
            return 1;
    }

    return 0;
}
