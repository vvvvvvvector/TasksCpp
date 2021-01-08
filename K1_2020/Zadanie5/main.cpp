#include <iostream>

char digit2letter(char c)
{
    if (c >= '0' && c <= '9')
    {
        return 'a' + (c - '0');
    }
    else
    {
        return c;
    }
}

int main()
{
    //const int size = 11;
    //char str[size];
    //std::cin >> str;

    char str[] = "ab62CD13aZ";

    for (int i = 0; str[i]; i++)
    {
        str[i] = digit2letter(str[i]);
    }

    std::cout << str << std::endl;

    return 0;
}