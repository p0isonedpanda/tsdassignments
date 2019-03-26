#include <iostream>
#include <cmath>

int main()
{
    const double PI = 3.14159;

    double i, e, r, f, l, c;
    std::cout << "please enter...\nresistance in ohms: ";
    std::cin >> r;
    std::cout << "frequency of the current in hertz: ";
    std::cin >> f;
    std::cout << "capacitance in farads: ";
    std::cin >> c;
    std::cout << "inductance in henrys: ";
    std::cin >> l;
    std::cout << "and electromotive force in volts: ";
    std::cin >> e;

    i = e / std::sqrt(std::pow(r, 2) + std::pow(((2 * PI * f * l) - (1 / (2 * PI * f * c))), 2));
    std::cout << i << std::endl;

    return 0;
}
