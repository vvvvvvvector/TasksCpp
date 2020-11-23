#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));

    const int n = 5;
    const int m = 3;

    int arr[n];
    int arr1[m];
    int arr2[n + m];

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 21 - 10;
    }

    for (int i = 0; i < m; i++)
    {
        arr1[i] = rand() % 21 - 10;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    for (int i = 0; i < m; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[i];
    }

    for (int i = n + m - 1, j = 0; i >= n; --i, j++)
    {
        arr2[i] = arr1[j];
    }

    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}