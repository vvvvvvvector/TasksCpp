#include <iostream>

void func(int);

int main()
{
    void (*pfunc)(int) = func;

    pfunc(50);

    return 0;
}

void func(int n)
{
    for (int i = 0; i <= n; i++)
    {
        if (!(i & 1))
        {
            printf("%d ", i);
        }
    }
}