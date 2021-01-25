#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));

    int n, m;
    std::cin >> n >> m;

    int **arr2d = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr2d[i] = new int[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr2d[i][j] = rand() % 11 - 5;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << arr2d[i][j] << " ";
        }
        std::cout << std::endl;
    }

    int **b_arr2d = new int *[n];
    int *b_sizes = new int[n];

    for (int i = 0; i < n; i++)
    {
        int count_num = 0;
        for (int j = 0; j < m; j++)
        {
            if (arr2d[i][j] <= 0)
                count_num++;
        }
        int size_b = ((m - count_num) * 3 + count_num);
        b_sizes[i] = size_b;
        b_arr2d[i] = new int[size_b];
        for (int j = 0, k = 0; j < m; j++)
        {
            if (arr2d[i][j] > 0)
            {   
                for (int l = 0; l < 3; l++)
                {
                    int m = 1 << l;
                    b_arr2d[i][k] = ((arr2d[i][j] & m) > 0) ? 1 : 0;
                    k++;
                }
            }
            else
            {
                b_arr2d[i][k] = arr2d[i][j];
                k++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < b_sizes[i]; j++)
        {
            std::cout << b_arr2d[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete[] arr2d[i];
    }
    delete[] arr2d;

    for (int i = 0; i < n; i++)
    {
        delete[] b_arr2d[i];
    }
    delete[] b_arr2d;

    delete[] b_sizes;

    return 0;
}