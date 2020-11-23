#include <iostream>

void fun(int a, int b)
{
    if(a < b)
    {
        printf("%d ", a);
        if (a != b)
        {
            fun(a + 1, b);
        }
    }
    else
    {
        printf("%d ", a);
        if (a != b)
        {
            fun(a - 1, b);
        }
    }
}

int main()
{
    fun(10, 15);
    printf("\n");
    fun(20, 15);
    return 0;
}