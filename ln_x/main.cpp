#include <iostream>
#include <cmath>

double my_pow(double x, int n)
{
    double result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= x;
    }
    return result;
}

double func(double x)
{
    double sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += my_pow(-1, i + 1) * my_pow(x - 1, i) / i;
    }
    return sum;
}

int main()
{
    std::cout << func(1.5) << std::endl;
    std::cout << std::log(1.5);

    return 0;
}