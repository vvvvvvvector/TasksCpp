#include <iostream>

int fun(unsigned int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return fun(n - 1) + 2 * fun(n - 2) + 3;
    }
}

int main()
{
    std::cout << fun(4);
    
    return 0;
}