#include <iostream>
#include <ctime>

int lehmar(int);

const int N = 10;

int main()
{
    int r;

    for (int i = 0; i < N; i++)
    {
        r = lehmar(r);
        int x = r / (2147483647 / 11);
        printf("%d\n", x);
    }

    return 0;
}

int lehmar(int x)
{
    const unsigned int n = 2147483647;
    const unsigned int g = 16807;
    x = (g * x) % n;
    return x;
}
