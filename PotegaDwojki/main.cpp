#include <iostream>

//jezeli najstarzy == 1 i reszta == 0
bool fun(unsigned int x)
{
    int a = 0;
    while (x)
    {
        // x = x >> 1;
        a += x & 1;
        x >>= 1;
    }
    return a == 1;
}

int main()
{
    for (int i = 0; i < 100000; i++)
    {
        if(fun(i))
        {
            printf("%d ", i);
        }
    }
    return 0;
}
