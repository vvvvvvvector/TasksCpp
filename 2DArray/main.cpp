#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));

    int row;
    int col;

    std::cin >> row >> col;

    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = rand() % 100 - 50;
            //std::cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            //std::cout << arr[i][j] << " ";
            printf("%d ", arr[i][j]);
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cout << arr[i][j] << " ";
            //printf("%d ", arr[i][j]);
        }
        std::cout << std::endl;
    }

    return 0;
}