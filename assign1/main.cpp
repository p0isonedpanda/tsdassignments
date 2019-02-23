#include <iostream>
#include <string>
#include "cipher.h"

int main()
{
    int input;
    std::string output;

    // take user input
    std::cout << "enter a number: ";
    std::cin >> input;

    // exit with error if non numeric input
    if (std::cin.fail())
    {
        std::cout << "invalid input" << std::endl;
        return 1;
    }

    // clear cin buffer for next input
    std::cin.ignore();

    output = std::to_string(input);
    switch(output.length())
    {
        case 2:
        case 3:
            output = TwoThreeDig(output);
            break;

        case 4:
        case 5:
        case 6:
        case 7:
            output = FourDig(output);
            break;

        case 8:
            {
                // we need to ask the user if they want extra protection or not
                std::string choice;

                std::cout << "would you like extra protection? [y/n]: ";
                getline(std::cin, choice);

                // should only ever enter this loop if the user does not enter y or n
                while (!(choice == "y" || choice == "n"))
                {
                    std::cout << "please enter a valid choice";
                    getline(std::cin, choice);
                }
            
                if (choice == "y") output = EightDig(output);
                else output = FourDig(output);
            }

            break;

        default:
            std::cout << "invalid length of number" << std::endl;
            return 1;
    }
    
    std::cout << output << std::endl;

    return 0;
}
