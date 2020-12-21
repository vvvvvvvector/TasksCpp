#include <iostream>

int func(const char str[], int num)
{
    int num_str = 0;
    int len = 0;
    while(str[len]) len++;
    for (int i = 0; i < len; i++)
    {
        num_str += (str[i] - '0') << (len - i - 1);
    }
    return num_str + num;
}

int main()
{
    char num_bin[] = "1111011";
    int num = 123;

    std::cout << func(num_bin, num);

    return 0;
}