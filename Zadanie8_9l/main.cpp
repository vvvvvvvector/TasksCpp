#include <iostream>

int main()
{
    int n = 5;

    int **arr = new int *[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n - i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            arr[i][j] = j;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
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