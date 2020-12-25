#include <iostream>

int *func(int n, int m)
{
    int *sum = new int;
    *sum = n + m;
    return sum;
}

int main()
{
    int *sum = func(5, 4);

    std::cout << sum << " " << *sum;

    delete sum;
    return 0;
}