#include <iostream>

int func(int);

int main()
{
    std::cout << func(47) << std::endl;
    std::cout << func(89);

    return 0;
}

int func(int n)
{
    for (int i = n + 1;; i++)
    {
        bool isPrime = true;
        for (int j = 2; j < n && isPrime; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
            }
        }
        if (isPrime)
            return i;
    }
}