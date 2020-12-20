#include <iostream>

int func(int *, int, int);

int main()
{
    // int arr[] = {5, 2, 3, 6, 24, 21, -1, 2, 3};
    int arr[] = {1, 6, 3, 5, 6, 7};

    std::cout << func(arr, 2, 3);

    return 0;
}

int func(int *t, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        bool sorted = true;
        for (int j = 0; j < m - 1 && sorted; j++)
        {
            if (t[i * m + j] >= t[i * m + j + 1])
            {
                sorted = false;
            }
        }
        if (sorted)
        {
            return i;
        }
    }
    return -1;
}