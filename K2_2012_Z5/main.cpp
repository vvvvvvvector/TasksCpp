#include <iostream>
#include <ctime>

void func(int **arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] > 0)
            {
                sum += arr[i][j];
            }
        }
        if (sum > 100)
        {
            for (int j = 0; j < m; j++)
            {
                printf("%d, ", arr[i][j]);
            }
            printf("\n");
        }
    }
}

int main()
{
    srand(time(NULL));
    int n = 4;
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
            arr[i][j] = rand() % 101 - 50;
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

    func(arr, n, m);

    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}