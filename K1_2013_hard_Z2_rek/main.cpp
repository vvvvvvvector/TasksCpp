#include <iostream>
#include <cmath>

int func(int k, int n)
{
    if(k == 0)
    {
        return n;
    }
    else if(func(k - 1, n) % 2 == 0)
    {
        return func(k - 1, n) / 2;
    }
    else
    {
        return 3 * func(k - 1, n) + 1;
    }
}

int main()
{
    std::cout << func(3, 3);
    
    return 0;
}