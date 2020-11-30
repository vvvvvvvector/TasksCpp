#include <iostream>

void swap(void *, void *, int);

int main()
{
    // int a = 10;
    // int b = 7;

    // char a = '<';
    // char b = 'm';

    double a = 12.4;
    double b = 8.123;

    std::cout << "a = " << a << ", b = " << b << std::endl;

    swap(&a, &b, sizeof(a));

    std::cout << "a = " << a << ", b = " << b;

    return 0;
}

void swap(void *a, void *b, int size)
{
    for (int i = 0; i < size; i++)
    {
        char t = ((char *)a)[i];
        ((char *)a)[i] = ((char *)b)[i];
        ((char *)b)[i] = t;
    }
}