#include <iostream>

int func(char *str, int num)
{
    int str_value = 0;
    int str_len = 0;
    while (str[str_len])
    {
        str_len++;
    }
    for (int i = 0; i < str_len; i++)
    {
        str_value += (str[i] - '0') << (str_len - i - 1);
    }
    return str_value & num;
}

int main()
{
    char *str = "1111010";
    int num = 123;

    std::cout << func(str, num);

    return 0;
}