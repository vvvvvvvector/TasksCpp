#include <iostream>

int fun(int, int);

int main()
{
    printf("%d", fun(1, 1));

    return 0;
}

int fun(int n, int m)
{
    if (m == 0)
    {
        return n;
    }
    else if (m > n)
    {
        return fun(m, n);
    }
    else if (n >= m && m > 0)
    {
        return n - m + fun(n - 1, m) + fun(n, m - 1);
    }
}