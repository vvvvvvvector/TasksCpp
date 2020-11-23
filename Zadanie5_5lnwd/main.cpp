#include <iostream>

int nwd(int a, int b);
int nww(int a, int b);

int main()
{
    int a = 324;
    int b = 36;
    printf("nwd = %d, nww = %d", nwd(a, b), nww(a, b));
    return 0;
}

int nwd(int a, int b)
{
    while (b)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int nww(int a, int b)
{
    return a * b / nwd(a, b);
}