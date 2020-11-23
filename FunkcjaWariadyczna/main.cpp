#include <iostream>
#include <stdarg.h>

int sum(int, ...);

int main()
{
    printf("%d", sum(4, 1, 2, 3, 4));

    return 0;
}

int sum(int n, ...)
{
    int sum = 0;
    va_list ap;
    va_start(ap, n);
    for (int i = 0; i < n; i++)
    {
        sum += va_arg(ap, int);
    }
    va_end(ap);
    return sum;
}