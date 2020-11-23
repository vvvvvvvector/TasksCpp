#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));

    const int size = 5;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 21 - 10;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    for (int i = size - 1; i >= 0; --i)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
