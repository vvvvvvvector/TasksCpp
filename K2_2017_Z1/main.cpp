#include <iostream>

int *func(double *, double *);

int main()
{
    double a = 5.3;
    double b = 3.5;

    int *c = func(&a, &b);

    std::cout << *c;

    delete c; // ???
    return 0;
}

int *func(double *a, double *b)
{
    int *c = new int;
    *c = *a * *b;
    return c;
}