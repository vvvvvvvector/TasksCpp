#include <iostream>
#include <cstdlib>
#include <ctime>

int *func(int *, int, int);

int main()
{
    srand(time(NULL));

    const int size = 7;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        *(arr + i) = rand() % 21;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }

    int *pnum = func(arr, size, 10);

    printf("\naddress = %p\nvalue = %d", pnum, *pnum);

    return 0;
}

int *func(int *arr, int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) == num)
        {
            return arr + i;
        }
    }
    return nullptr;
}