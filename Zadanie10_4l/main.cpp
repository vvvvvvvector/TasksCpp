#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));

    const int size = 7;
    int arr[size];

    for (int i = 0; i < size; ++i)
    {
        *(arr + i) = rand() % 21 - 10;
    }

    for (int i = 0; i < size; ++i)
    {
        printf("%d ", *(arr + i));
    }

    int k = arr[size - 1];
    for (int i = size; i > 0; --i)
    {
        arr[i - 1] = arr[i - 2]; 
    }
    arr[0] = k;

    printf("\n");

    for (int i = 0; i < size; ++i)
    {
        printf("%d ", *(arr + i));
    }

    return 0;
}