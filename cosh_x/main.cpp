#include <iostream>
#include <cmath>

int my_rek(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * my_rek(n - 1);
    }
}

double my_pow(double x, int n)
{
    double result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= x;
    }
    return result;
}

double cosh(double x)
{
    double sum = 0;
    for (int i = 0; i <= 5; i++)
    {
        sum += my_pow(x, 2 * i) / my_rek(2 * i);
    }
    return sum;
}

int main()
{
    std::cout << cosh(1.5);
    
    return 0;
}