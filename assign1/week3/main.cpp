#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

void lineBreak()
{
    std::cout << std::string(89, ' ') << '+' << std::endl;
}

unsigned long int calculateIP(int ip1, int ip2, int ip3, int ip4)
{
    return ip1 * pow(256., 3) + ip2 * pow(256., 2) + ip3 * 256 + ip4;
}

std::string ipToString(int ip1, int ip2, int ip3, int ip4)
{
    return std::to_string(ip1) + '.' + std::to_string(ip2) + '.' + std::to_string(ip3) + '.' + std::to_string(ip4);
}

int main()
{
    std::string serialNumber;
    std::string userName;
    std::string employeeName;
    char type;
    int coreCount; // positive, non zero
    double coreFrequency;
    std::string macAddress;
    short int ip1, ip2, ip3, ip4; // store the 4 octets of the ip
    unsigned long int ip;

    std::cout << "enter your username: ";
    getline(std::cin, userName);

    std::cout << "enter your employee's name: ";
    getline(std::cin, employeeName);

    std::cout << "enter the serial number: ";
    getline(std::cin, serialNumber);
        
    std::cout << "enter your computer type (S D L T P): ";
    std::cin >> type;

    std::cout << "enter cpu core count: ";
    std::cin >> coreCount;

    std::cout << "enter cpu core frequency: ";
    std::cin >> coreFrequency;
    std::cin.ignore();
        
    std::cout << "enter mac address: ";
    getline(std::cin, macAddress);

    std::cout << "enter ip without dots: ";
    std::cin >> ip1;
    std::cin >> ip2;
    std::cin >> ip3;
    std::cin >> ip4;
    ip = calculateIP(ip1, ip2, ip3, ip4);

    // now to make the output look pretty
    lineBreak();
    std::cout << "| user:" << std::right << std::setw(13) << std::setfill(' ') << userName << " | ";
    std::cout << "employee name:" << std::right << std::setw(20) << std::setfill(' ') << employeeName << " | ";
    std::cout << "serial number:" << std::right << std::setw(14) << std::setfill(' ') << serialNumber << " |" << std::endl;

    lineBreak();
    std::cout << "| type: " << type << " | ";
    std::cout << "cores: " << coreCount << " | ";
    std::cout << "speed:" << std::right << std::setw(4) << std::setfill(' ') << coreFrequency << "GHz | ";
    std::cout << "mac:" << std::right << std::setw(23) << std::setfill(' ') << macAddress << " | ";
    std::cout << "ip:" << std::right << std::setw(16) << std::setfill(' ') << ipToString(ip1, ip2, ip3, ip4) << " |" << std::endl;

    lineBreak();
    std::cout << '|' << std::right << std::setw(52) << std::setfill(' ') << "ip as int: " + std::to_string(ip);
    std::cout << std::string(36, ' ') << '|' << std::endl;

    lineBreak();
}
