#include <iostream>
#include <cstdlib>
#include <ctime>

void func(int*, int);

int main()
{
    srand(time(NULL));

    const int size = 7;
    int arr[size];
    
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = rand() % 11;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
    
    printf("\n");
    
    func(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }

    return 0;
}

void func(int *arr, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = *(arr + i); 
        *(arr + i) = *(arr + n - 1 - i);
        *(arr + n - 1 - i) = temp;
    }
}