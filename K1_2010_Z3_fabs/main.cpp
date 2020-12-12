#include <iostream>
#include <cmath>

int func(int);

int main()
{
    int n;
    std::cin >> n;

    std::cout << func(n);

    return 0;
}

int func(int n)
{
    double result = pow(n, 1 / 2.0);
    int c = result;
    double u = fabs(result - c);
    // std::cout << result << " " << c << " " << u << std::endl;
    if (u >= 0.5)
        return ++c;
    else
        return c;
}