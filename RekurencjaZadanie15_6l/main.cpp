#include <iostream>

int func(unsigned int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else if(n % 2 == 0)
    {
        return func(n - 1) + n;
    }
    else
    {
        return func(n - 1) * n;
    }
}

int main()
{
    printf("%d", func(5));
    
    return 0;
}