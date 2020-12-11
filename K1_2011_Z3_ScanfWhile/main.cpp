#include <iostream>

int main()
{
    int sum = 0;

    unsigned int i;
    while (sum < 100)
    {
        scanf("%d", &i);
        sum += i;
    }

    std::cout << sum << " - 100 = " << sum - 100;

    return 0;
}