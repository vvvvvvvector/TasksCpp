#include <iostream>

int sum(unsigned int num)
{
    if(num == 0)
    {
        return num;
    }
    return (num % 10) + sum(num / 10);
}

int main()
{
    printf("%d", sum(123));
    
    return 0;
}