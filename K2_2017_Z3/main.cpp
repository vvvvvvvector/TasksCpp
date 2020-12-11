#include <iostream>
#include <ctime>

int func(int **, int, int);

int main()
{
    srand(time(NULL));

    int n = 4;
    int m = 5;

    int **tab = new int *[n]; // int -> double
    for (int i = 0; i < n; i++)
    {
        tab[i] = new int[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            tab[i][j] = rand() % 11;
            // std::cin >> tab[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << tab[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << func(tab, n, m);

    for (int i = 0; i < n; i++)
    {
        delete[] tab[i];
    }
    delete[] tab;

    return 0;
}

int func(int **tab, int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
            {
                sum += tab[i][j];
            }
        }
    }
    return sum;
}
