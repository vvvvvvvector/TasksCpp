#include <iostream>
#include <algorithm>

int func(int *, int);
void print(int);

int main()
{
    int n;
    std::cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    std::for_each(arr, arr + n, print);
    std::cout << std::endl;

    std::cout << func(arr, n);

    delete[] arr;
    return 0;
}

void print(int i) { printf("%d ", i); }

int func(int *arr, int n)
{
    int num = 1;
    int max = num;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            num++;
        }
        else
        {
            if (num > max)
            {
                max = num;
            }
            num = 1;
        }
    }
    return max;
}