#include <iostream>

void fun(int);

int main()
{
    int num;
    std::cin >> num;
    
    fun(num);

    return 0;
}

void fun(int n)
{
    if(n != 1)
    {
        fun(n - 1);
    }
    printf("%d ", n);
}