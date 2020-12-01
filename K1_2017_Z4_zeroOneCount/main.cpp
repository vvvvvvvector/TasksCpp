#include <iostream>

bool func(unsigned int a, unsigned int b)
{
    int l1a = 0;
    int l0a = 0;
    while (a)
    {
        if (a & 1 == 1)
        {
            l1a++;
            a = a >> 1;
        }
        else
        {
            l0a++;
            a = a >> 1;
        }
    }
    // printf("l1a = %d, l0a = %d\n", l1a, l0a);
    int l1b = 0;
    int l0b = 0;
    while (b)
    {
        if (b & 1 == 1)
        {
            l1b++;
            b = b >> 1;
        }
        else
        {
            l0b++;
            b = b >> 1;
        }
    }
    // printf("l1b = %d, l0b = %d\n", l1b, l0b);
    return (l1a == l1b) && (l0a == l0b);
}

int main()
{
    std::cout << func(20, 24) << std::endl;
    std::cout << func(10, 12) << std::endl;
    std::cout << func(7, 13);
    
    return 0;
}