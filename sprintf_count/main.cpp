#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

int func(int x, int d)
{
    // int n = snprintf(NULL, 0, "%d", x);
    // char *x_str = new char[n + 1];
    char x_str[20] = {'\0'};
    sprintf(x_str, "%d", x);
    return std::count(x_str, x_str + strlen(x_str), d + '0');
}

int main()
{
    std::cout << func(123444, 4) << std::endl;
    std::cout << func(133334, 3) << std::endl;
    std::cout << func(113334, 1);

    return 0;
}