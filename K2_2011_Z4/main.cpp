#include <iostream>
#include <ctime>

void func(int **arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        if (i & 1)
        {
            for (int j = 0; j < m; j++)
            {
                arr[i][j] = 0;
            }
        }
    }
}

int main()
{
    srand(time(NULL));

    int n = 10;
    int m = 5;

    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = rand() % 21 - 10;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
    func(arr, n, m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}