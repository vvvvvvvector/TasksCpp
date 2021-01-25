#include <iostream>
#include <algorithm>

void print(float i) { std::cout << i << " "; }

float sum(float a, float b)
{
    return a + b;
}

float mul(float a, float b)
{
    return a * b;
}

void reduce(float *a0, float *an, float *b0, float (*pf)(float, float))
{
    while (a0 != an)
    {
        *a0 = pf(*a0, *b0);
        a0++;
        b0++;
    }
}

int main()
{
    const int size = 4;
    float tab1[size] = {3.0, 5.0, 7.0, 2.0};
    float tab2[size] = {7.0, 4.0, 9.0, 1.0};

    std::for_each(tab1, tab1 + size, print);
    std::cout << std::endl;

    reduce(tab1, tab1 + size, tab2, mul);

    std::for_each(tab1, tab1 + size, print);
    std::cout << std::endl;

    return 0;
}