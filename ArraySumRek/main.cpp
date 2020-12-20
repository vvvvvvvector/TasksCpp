#include <iostream>

int func(int arr[], int n)
{
    if (n == 0)
    {
        return arr[n];
    }
    else if (n % 2 == 0)
    {
        return arr[n] + func(arr, n - 1);
    }
    else
    {
        return func(arr, n - 1);
    }
}

int main()
{
    const int size = 7;
    int arr[size] = {1, 2, 3, 10, 15};

    std::cout << func(arr, size - 1);

    return 0;
}