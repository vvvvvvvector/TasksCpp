#include <iostream>

int func(unsigned int m, unsigned int k)
{
    if(m <= 0)
    {
        return 0;
    }
    if(m > 0 && m < 10)
    {
        return k + func(m - 1, k);
    }
    else
    {
        return 2 * func(m - 1, k) + func(m - 2, k);
    }
}

int main()
{
    std::cout << func(1, 2) << std::endl;
    std::cout << func(0, 0) << std::endl;
    std::cout << func(3, 3) << std::endl;
    std::cout << func(4, 4) << std::endl;
    std::cout << func(2, 10);
    
    return 0;
}