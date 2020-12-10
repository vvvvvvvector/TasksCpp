#include <iostream>

int func(int n)
{
    int sum = 0;
    for (int i = n; i <= 2 * n; i++)
    {
        if(i & 1)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    std::cout << func(5);
    
    return 0;
}