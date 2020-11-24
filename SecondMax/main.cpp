#include <iostream>
#include <ctime>

int secondMax(int arr[], int len);

int main()
{
    srand(time(NULL));
    const int size = 7;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 21 - 10;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nsecond max = %d", secondMax(arr, size));

    return 0;
}

int secondMax(int arr[], int len)
{
    int max;
    int secondMax;
    if (arr[0] > arr[1])
    {
        secondMax = arr[1];
        max = arr[0];
    }
    else
    {
        secondMax = arr[0];
        max = arr[1];
    }
    for (int i = 2; i < len; i++)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }
    return secondMax;
}