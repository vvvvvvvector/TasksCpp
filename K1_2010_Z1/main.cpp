#include <iostream>

int main()
{
    const int size = 3;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
        if (arr[i] < 0)
            arr[i] *= -1;
    }

    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    std::cout << max;

    return 0;
}