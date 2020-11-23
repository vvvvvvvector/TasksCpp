#include <iostream>

bool czyPierwsza(int);

int main()
{
    int num;
    std::cin >> num;

    printf("%s", czyPierwsza(num) ? "True" : "False");

    return 0;
}

bool czyPierwsza(int n)
{
    if(n <= 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
