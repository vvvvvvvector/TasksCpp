#include <iostream>

bool func(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                k++;
            }
        }
        if (k != arr[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {4, 4, 4, 4, 1, 2, 2};

    std::cout << func(arr, 7);

    return 0;
}