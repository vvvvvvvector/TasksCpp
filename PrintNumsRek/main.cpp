#include <iostream>

void fun(int num)
{
    if (num > 1)
    {
        fun(num - 1);
    }
    printf("%d ", num);
}

int main()
{
    fun(10);

    return 0;
}