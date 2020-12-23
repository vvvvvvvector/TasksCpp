#include <iostream>

void sort(unsigned char *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int len1 = 0;
            int len2 = 0;
            unsigned char arr1 = arr[i];
            unsigned char arr2 = arr[j];
            while (arr1)
            {
                len1 += arr1 & 1;
                arr1 = arr1 >> 1;
            }
            while (arr2)
            {
                len2 += arr2 & 1;
                arr2 = arr2 >> 1;
            }
            if (len1 > len2)
            {
                unsigned char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    const int n = 6;
    unsigned char arr[n] = {1, 7, 3, 4, 5, 64};

    // const int n = 3;
    // unsigned char arr[n] = {15, 3, 1};

    sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        std::cout << (int)arr[i]<< " ";
    }

    return 0;
}