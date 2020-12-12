#include <iostream>

void func(unsigned int, unsigned int);

int main()
{
    func(4, 5);

    printf("\n");

    func(8, 2);

    return 0;
}

void func(unsigned int n, unsigned int m)
{
    if (m > n)
        return;
    for (int i = 0; i < n; i++)
    {
        if (i % m == 0)
            std::cout << i << " ";
    }
}