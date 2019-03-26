#include <iostream>

// just declare a few functions
double add(double a, double b);
double mul(double a, double b);
double div(double a, double b);

bool running = true;

int main()
{
    do
    {
        std::cout << "input a number: ";
        double a;
        std::cin >> a;
        std::cout << "input another number: ";
        double b;
        std::cin >> b;

        std::cout << "1. add\n2. multiply\n3. divide\n4. exit" << std::endl;
        std::cout << "select an option: ";
        int input;
        std::cin >> input;

        switch (input)
        {
            case 1:
                std::cout << add(a, b) << std::endl;
                break;

            case 2:
                std::cout << mul(a, b) << std::endl;
                break;

            case 3:
                std::cout << div(a, b) << std::endl;
                break;

            case 4:
                running = false;
                break;

            default:
                std::cout << "sorry, don't think i recognised what you want to do. please try again." << std::endl;
                break;
        }
    }
    while (running);

    std::cout << "goodbye!" << std::endl;
}

double add(double a, double b)
{
    return a + b;
}

double mul(double a, double b)
{
    return a * b;
}

double div(double a, double b)
{
    return a / b;
}
