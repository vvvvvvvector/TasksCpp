#include <iostream>
#include <ctime>

void func(int **arr, int rows, int cols, int **arr1)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr1[j][i] = arr[i][j];
        }
    }
}

int main()
{
    srand(time(NULL));
    
    int row = 3;
    int col = 5;

    int **arr = new int *[row];
    int **arr1 = new int *[col];

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    for (int i = 0; i < col; i++)
    {
        arr1[i] = new int[row];
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = rand() % 11;
        }
    }

    func(arr, row, col, arr1);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            std::cout << arr1[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    for (int i = 0; i < col; i++)
    {
        delete[] arr1[i];
    }
    delete[] arr1;

    return 0;
}