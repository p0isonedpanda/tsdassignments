#include <iostream>
#include <string>

int main()
{
    // take user input, validate it, store it in an array
    std::string input;

    std::cout << "enter your credit card number: ";
    getline(std::cin, input);

    if (input.length() > 20)
    {
        std::cout << "invalid length of number" << std::endl;
        return 1;
    }

    // convert the underlying ascii codes to their relative ints so we can use them as such
    for (int i = 0; i < input.length(); i++) input[i] -= '0';

    std::cout << (int)input[0] << std::endl;

    return 0;
}
