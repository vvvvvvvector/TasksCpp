#include <iostream>
#include <algorithm>
#include <cstring>

bool func(char c) { return c >= 'a' && c <= 'z'; }

int main()
{
    char *str = new char[100];
    std::cin >> str;

    char *str1 = new char[strlen(str) + 1]{'\0'};

    char *begin = std::copy_if(str, str + strlen(str), str1, func);
    std::fill(begin, str1 + strlen(str), '-');

    std::cout << str1;

    return 0;
}