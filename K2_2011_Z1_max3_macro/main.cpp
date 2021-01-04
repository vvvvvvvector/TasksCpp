#include <iostream>

#define MAX2(a, b) (((a) > (b)) ? (a) : (b))

#define MAX3(a, b, c) MAX2(MAX2(a, b), c)

int main()
{
    int a = 10;
    int b = 5;
    int c = -1;

    std::cout << MAX3(a, b, c);

    return 0;
}