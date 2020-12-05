#include <iostream>
#include <ctime>

void func(int **arr, int row)
{
    int *temp = arr[row - 1];
    for (int i = 0; i < row; i++)
    {
        arr[row - 1 - i] = arr[row - 2 - i];
    }
    arr[0] = temp;
}

int main()
{
    srand(time(NULL));

    int row = 3;
    int col = 5;

    int **arr = new int *[row];

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = i;
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    func(arr, row);
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}