#include <iostream>

int factorialRek(unsigned int n);
int factorialPet(unsigned int n);

int main()
{
    unsigned int n;
    std::cin >> n;

    printf("%d\n", factorialRek(n));
    printf("%d", factorialPet(n));
    return 0;
}

int factorialPet(unsigned int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int factorialRek(unsigned int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorialRek(n - 1);
    }
}