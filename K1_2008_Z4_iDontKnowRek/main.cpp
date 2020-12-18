#include <iostream>

int a(int m)
{
    if (m == 0)
    {
        return 1;
    }
    else if (m % 2 == 0)
    {
        return a(m - 1) + 2 * a(m / 2);
    }
    else
    {
        return a(m - 1);
    }
}

int main()
{
    std::cout << a(6);
    
    return 0;
}