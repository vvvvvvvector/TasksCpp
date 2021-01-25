#include <iostream>
#include <cstring>
#include <algorithm>

void func(char *&str)
{
    int count_spaces = 0;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == ' ')
            count_spaces++;
    }
    char *new_str = new char[strlen(str) - count_spaces + 1]{'\0'};
    for (int i = 0, k = 0; str[i]; i++)
    {
        if (str[i] != ' ')
        {
            new_str[k] = str[i];
            k++;
        }
    }
    str = new char[strlen(new_str) + 1]{'\0'};
    std::copy(new_str, new_str + strlen(new_str), str);
    delete[] new_str;
}

int main()
{
    char *str = "   Ala ma   kota LUL";

    func(str);

    std::cout << str << std::endl;

    delete[] str;
    return 0;
}