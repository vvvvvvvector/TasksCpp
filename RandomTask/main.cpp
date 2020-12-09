#include <iostream>
#include <algorithm>

int *func(int *, int *, int);
void print(int);

int main()
{
    const int size = 4;
    int arr1[size] = {2, 3, 1, 6};
    int arr2[size] = {1, 9, 3, 2};

    int *arr3 = func(arr1, arr2, size);

    std::for_each(arr3, arr3 + size, print);

    delete[] arr3;
    arr3 = nullptr;
    return 0;
}

void print(int i) { std::cout << i << " "; }

int *func(int *arr1, int *arr2, int n)
{
    int *result = new int[n];
    for (int i = 0; i < n; i++)
    {
        result[i] = arr1[i] > arr2[i] ? arr1[i] : arr2[i];
    }
    return result;
}