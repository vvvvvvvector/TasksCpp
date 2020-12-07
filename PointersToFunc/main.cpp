#include <iostream>
#include <ctime>

int min(int a, int b)
{
    return a < b? a : b;
}

int max(int a, int b)
{
    return a > b? a : b;
}

int func(int arr[], int n, int (*pf)(int, int))
{
    int ex = arr[0];
    for (int i = 1; i < n; i++)
    {
        ex = pf(ex, arr[i]);
    }
    return ex;
}

int main()
{
    srand(time(NULL));

    const int size = 7;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 11;
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    
    std::cout << std::endl;
    int ex = func(arr, size, max);
    std::cout << "max = " << ex << std::endl;
    ex = func(arr, size, min);
    std::cout << "min = " << ex;
    
    return 0;
}