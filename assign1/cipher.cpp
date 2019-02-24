#include <string>
#include <bits/stdc++.h>
#include "cipher.h"

int CharToNum(char input)
{
    return input - '0';
}

char NumToChar(int input)
{
    return (char)(input + '0');
}

std::string TwoThreeDig(std::string input)
{
    std::reverse(input.begin(), input.end());
    return input;
}

std::string FourDig(std::string input)
{
    for (int i = input.length() - 1; i >= 0; i--)
    {
        int temp = CharToNum(input[i]);
        temp += input.length() - i;
        temp %= 10;
        input[i] = NumToChar(temp);
    }

    return input;
}

std::string EightDig(std::string input)
{
    std::string output = FourDig(input);
    std::reverse(output.begin(), output.end());

    return output;
}

std::string DecFourDig(std::string input)
{
    for (int i = input.length() - 1; i >= 0; i--)
    {
        int temp = CharToNum(input[i]);
        // reverse the modulus shit somehow
        temp -= input.length() - i;
        input[i] = NumToChar(temp);
    }

    return input;
}

std::string DecEightDig(std::string input)
{
    std::reverse(input.begin(), input.end());
    std::string output = FourDig(input);

    return output;
}
