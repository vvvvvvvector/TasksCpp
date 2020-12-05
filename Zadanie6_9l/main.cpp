#include <iostream>

int func(int **arr, int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        if (arr[0][i] != 0 || arr[row - 1][i] != 0)
        {
            return 1;
        }
    }
    for (int i = 0; i < row; i++)
    {
        if (arr[i][0] != 0 || arr[i][col - 1] != 0)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int row = 4;
    int col = 4;

    int **arr = new int *[row];

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = 0;
        }
    }

    arr[2][col - 1] = 1;
    arr[1][0] = 2;
    arr[0][1] = 3;
    arr[row - 1][2] = 4;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << func(arr, row, col);

    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}