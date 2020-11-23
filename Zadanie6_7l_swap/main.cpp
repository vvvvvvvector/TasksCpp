#include <iostream>
#include <cstdlib>
#include <ctime>

void swap(int *, int &);

int main()
{
    int a = 5;
    int b = 9;

    printf("a = %d, b = %d\n", a, b);

    swap(&a, b);

    printf("a = %d, b = %d", a, b);

    return 0;
}

void swap(int *a, int &b)
{
    int temp = *a;
    *a = b;
    b = temp;
}