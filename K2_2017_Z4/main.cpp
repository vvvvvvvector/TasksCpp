#include <iostream>

int **func(int **tab1, int n, int m)
{
    int **tab2 = new int *[n];
    for (int i = 0; i < n; i++)
    {
        tab2[i] = new int[m];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (tab1[i][j] & 1)
            {
                tab2[i][j] = ++tab1[i][j];
            }
            else
            {
                tab2[i][j] = tab1[i][j] * 3;
            }
        }
    }
    return tab2;
}

int main()
{
    const int n = 3;
    const int m = 3;
    int **tab1 = new int *[n];
    for (int i = 0; i < n; i++)
    {
        tab1[i] = new int[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> tab1[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << tab1[i][j] << " ";
        }
        std::cout << std::endl;
    }

    int **tab2 = func(tab1, n, m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << tab2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete[] tab1[i];
    }
    delete[] tab1;

    for (int i = 0; i < n; i++)
    {
        delete[] tab2[i];
    }
    delete[] tab2;

    return 0;
}