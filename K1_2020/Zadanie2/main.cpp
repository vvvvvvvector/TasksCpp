#include <iostream>

int func(const int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != max && arr[i] != min)
        {
            sum += arr[i];
        }
    }
    return sum;
}

int main()
{
    const int size = 4;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    std::cout << func(arr, size);

    return 0;
}