#include <iostream>

int func(int, int);

int main()
{
    int m, n;
    std::cin >> m >> n;
    std::cout << func(m, n);
    return 0;
}

int func(int m, int n)
{
    if (m == 0)
    {
        return n + 1;
    }
    else if (m > 0 && n == 0)
    {
        return func(m - 1, 1);
    }
    else if (m > 0 && n > 0)
    {
        return func(m - 1, func(m, n - 1));
    }
    else
    {
        return -1;
    }
}