#include <iostream>

void func(unsigned int a, unsigned int b)
{
    if(a == 0 || a == 1)
    {
        a = 2;
    }
    for (int i = a; i <= b; i++)
    {
        bool isPrime = true;
        for (int j = 2; j < i && isPrime; j++)
        {
            if(i % j == 0)
            {
                isPrime = false;
            }
        }
        if (isPrime)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    func(50, 150);
    
    return 0;
}