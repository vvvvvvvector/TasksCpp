#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));

    const int size = 10;
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

    for (int i = 0; i < size; ++i)
    {
        if (arr[i] % 2)
        {
            for (int j = i + 1; j < size; ++j)
            {
                if (arr[j] % 2 == 0)
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}