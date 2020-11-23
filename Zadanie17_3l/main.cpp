#include <iostream>

int main()
{
    unsigned int n;
    std::cin >> n;

    for (int i = 2; i <= n; i++)
    {
        bool pierwsza = true;
        for (int j = 2; j < i && pierwsza; j++)
        {
            if (i % j == 0)
            {
                pierwsza = false;
            }
        }
        if (pierwsza)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}