#include <iostream>

void fun(int arr[], int len, int a, int b);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    fun(arr, len, 5, 10);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void fun(int arr[], int len, int a, int b) // {1,2,3,4,5,6,7} [5, 10]
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > b || arr[i] < a)
        {
            arr[i] = 0;
        }
    }
}
