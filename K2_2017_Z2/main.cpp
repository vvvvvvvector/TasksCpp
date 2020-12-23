#include <iostream>
#include <cstring>

char *func(char *str)
{
    char *new_str = new char[strlen(str) + 1];
    for (int i = 0; str[i]; i++)
    {
        if (str[i] <= 'Z' && str[i] >= 'A')
        {
            new_str[i] = str[i] + 32;
        }
        else if (str[i] == ' ')
        {
            while (str[i] == ' ')
            {
                new_str[i] = str[i];
                i++;
            }
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                new_str[i] = str[i] - 32;
            }
            else if (str[i] <= 'Z' && str[i] >= 'A')
            {
                new_str[i] = str[i] + 32;
            }
        }
        else
        {
            new_str[i] = str[i];
        }
        new_str[strlen(str)] = '\0';
    }
    return new_str;
}

int main()
{
    char str[] = "Dark Side of the Moon";
    // char str[] = "  Dark Side    of   the Moon";

    char *new_str = func(str);

    std::cout << str << std::endl;

    std::cout << new_str;

    delete[] new_str;
    return 0;
}