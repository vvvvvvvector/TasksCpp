#include <iostream>

int bin2dec(char str[])
{
    int value = 0;
    int len = 0;
    while (str[len])
    {
        len++;
    }
    for (int i = 0; i < len; i++)
    {
        value += (str[i] - '0') << (len - 1 - i);
    }
    return value;
}

int main()
{
    char binNum[30];
    std::cin >> binNum;

    printf("binNum = %s\ndecNum = %d", binNum, bin2dec(binNum));

    return 0;
}