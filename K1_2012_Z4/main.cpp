#include <iostream>

int func(int n)
{
    if (n <= 0 || n == 10)
    {
        return 0;
    }
    else
    {
        return 2 * func(n - 1) + func(n - 2) + 5; 
    }
}

int main()
{
    std::cout << func(4);
    
    return 0;
}