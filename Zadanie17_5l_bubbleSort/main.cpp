#include <iostream>
#include <ctime>

void sort(int[], int);

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

    printf("\n");

    sort(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

void sort(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}