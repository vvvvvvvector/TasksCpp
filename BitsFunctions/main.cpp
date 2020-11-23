#include <iostream>

int onBit(unsigned int num, unsigned int n)
{
    unsigned int m = 1 << n;
    num = num | m;
    return num;
}

int offBit(unsigned int num, unsigned int n)
{
    unsigned int m = 1 << n;
    m = ~m;
    return num & m;
}

int reverse(unsigned int num, unsigned int n)
{
    unsigned int m = 1 << n;
    num = num ^ m;
    return num;
}

int main()
{
    printf("%d\n", onBit(10, 0));
    printf("%d\n", offBit(10, 3));
    printf("%d", reverse(9, 0));

    return 0;
}