#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));

    int n, m, o;
    std::cin >> n >> m >> o;

    int ***arr = new int **[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int *[m];
        for (int j = 0; j < o; j++)
        {
            arr[i][j] = new int[o];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < o; k++)
            {
                arr[i][j][k] = rand() % 11;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            delete[] arr[i][j];
        }
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}