#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));

    const int row = 3;
    const int col = 3;

    int arr[row][col];
    double average[row] = {0.0};

    for (int x = 0; x < row; x++)
    {
        for (int y = 0; y < col; y++)
        {
            arr[x][y] = rand() % 21;
        }
    }

    for (int x = 0; x < row; x++)
    {
        for (int y = 0; y < col; y++)
        {
            std::cout << arr[x][y] << " ";
        }
        std::cout << std::endl;
    }

    for (int x = 0; x < row; x++)
    {
        for (int y = 0; y < col; y++)
        {
            average[x] += arr[x][y];
        }
        average[x] = average[x] / (double)row;
    }

    int max = average[0];
    int index;
    for (int i = 0; i < row; i++)
    {
        if (average[i] > max)
        {
            max = average[i];
            index = i;
        }
    }

    for (int i = 0; i < row; i++)
    {
        std::cout << average[i] << " ";
    }
    
    std::cout << std::endl << "Index = " << index;

    return 0;
}