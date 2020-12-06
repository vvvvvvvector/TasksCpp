#include <iostream>

int func(unsigned int);

int main()
{
    int n = func(21);
    std::cout << n;

    return 0;
}

int func(unsigned int a)
{
    int n = 0;
    for (int i = 1; i <= a; i++)
    {
        if(a % i == 0 && i % 2 != 0)
        {
            n++;
        }
    }
    return n;
}