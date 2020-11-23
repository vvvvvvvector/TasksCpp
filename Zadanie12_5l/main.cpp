#include <iostream>
#include <ctime>

bool func(int arr[][3], int row);

int main()
{
    srand(time(NULL));
    const int row = 3;
    const int col = 3;

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = rand() % 5;
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("%s", func(arr, row) ? "True" : "False");

    return 0;
}

bool func(int arr[][3], int row)
{
    int sum[3] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < row; j++)
        {
            sum[i] += arr[j][i];
        }
        printf("sum[%d] = %d\n", i, sum[i]);
    }
    for (int i = 0; i < 2; i++)
    {
        if (sum[i] <= sum[i + 1])
        {
            return false;
        }
    }
    return true;
}
