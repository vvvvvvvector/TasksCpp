#include <iostream>
#include <ctime>

int func(int k, int x)
{
    if(k == 0)
    {
        return 1;
    }
    if(k == 1)
    {
        return x;
    }
    else
    {
        return 2 * x * func(k - 1, x) - func(k - 2, x);
    }
}

int main(void)
{
    std::cout << func(5, 2);
    
    return 0;
}
