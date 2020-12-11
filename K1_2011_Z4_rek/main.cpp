#include <iostream>

int a(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        return a(n - 1) + a(n - 2);
    }
    else
    {
        return a(n - 1) + a(n - 2);
    }
}

int main()
{
    std::cout << a(4) << std::endl;
    std::cout << a(3);

    return 0;
}