#include <iostream>
#include <ctime>

int func(int[], int);

int main()
{
    srand(time(NULL));

    const int size = 5;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 11;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nmax = %d", func(arr, size));

    return 0;
}

int func(int arr[], int n)
{
    int max = arr[1] - arr[0];
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] > max) // arr[i] - arr[i + 1]?
        {
            max = arr[i + 1] - arr[i];
        }
    }
    return max;
}
