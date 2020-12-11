#include <iostream>
#include <ctime>
#include <algorithm>

void print(int);
int func(int *, int);

int main()
{
    srand(time(NULL));
    
    const int size = 9;
    // int arr[size] = {2, 14, 3, 26, 5, 34, 33, 13, 65};
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 41;
    }

    std::for_each(arr, arr + size, print);

    printf("\n%d", func(arr, size));

    return 0;
}

void print(int i) { std::cout << i << " "; }

int func(int *arr, int n)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 3 || arr[i] % 10 == 3)
        {
            result++;
        }
    }
    return result;
}