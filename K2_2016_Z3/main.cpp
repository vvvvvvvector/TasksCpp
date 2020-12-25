#include <iostream>
#include <ctime>
#include <algorithm>

double *func(int *arr, int n)
{
    double *arr1 = new double[n];
    for (int i = 0; i < n; i++)
    {
        arr1[i] = arr[i] != 0 ? 1 / (double)arr[i] : 0.0;
    }
    return arr1;
}

int main()
{
    srand(time(NULL));

    const int size = 7;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 21;
    }

    std::for_each(arr, arr + size, [](int i) { std::cout << i << " "; });
    std::cout << std::endl;

    double *arr1 = func(arr, size);

    std::for_each(arr1, arr1 + size, [](double i) { printf("%.4f ", i); });

    delete[] arr1;
    return 0;
}