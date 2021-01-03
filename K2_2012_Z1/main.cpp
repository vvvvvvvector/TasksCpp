#include <iostream>

#define SWAP(a, b)     \
    {                  \
        auto temp = a; \
        a = b;         \
        b = temp;      \
    }

#define SORT(a, b, c)   \
    {                   \
        if (a > b)      \
            SWAP(a, b); \
        if (a > c)      \
            SWAP(a, c); \
        if (b > c)      \
            SWAP(b, c); \
    }

int main()
{
    int a = 7;
    int b = 1;
    int c = -1;

    SORT(a, b, c);

    std::cout << a << " " << b << " " << c;

    return 0;
}