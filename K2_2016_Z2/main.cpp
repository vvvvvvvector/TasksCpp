#include <iostream>

int **func(int n)
{
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[i + 1];
        for (int j = 0; j < i + 1; j++)
        {
            arr[i][j] = 0;
        }
    }
    return arr;
}

int main()
{
    int n = 5;
    int **arr = func(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
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