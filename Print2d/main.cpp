#include <iostream>

void print2d(int *arr, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[j + c * i]);
        }
        printf("\n");
    }
}

int main()
{
    const int row = 3;
    const int col = 3;

    int arr[row][col] = {11, 22, 10, 45, 56, 63, 71, 823, 96};
    int arr1[row][col] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    print2d(*arr1, row, col);
    std::cout << *(*(arr + 2) + 2) << " " << arr[2][2] << std::endl;
    std::cout << *(arr[1] + 1) << " " << arr[1][1];
    return 0;
}