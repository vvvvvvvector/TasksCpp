#include <iostream>
#include <ctime>
#include <algorithm>

void k_max(const int *, int, int, int *);
void print(int);
bool comp(const int &, const int &);

int main()
{
    srand(time(NULL));

    int n = 7;
    int k = 4;

    int *arr = new int[n];
    int *result = new int[k];

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 21 - 10;
    }

    std::for_each(arr, arr + n, print);
    std::cout << std::endl;

    k_max(arr, n, k, result);

    std::for_each(result, result + k, print);

    delete[] arr;
    delete[] result;
    return 0;
}

void k_max(const int *arr, int n, int k, int *result)
{
    int *arr_copy = new int[n];
    std::copy(arr, arr + n, arr_copy);
    std::sort(arr_copy, arr_copy + n, comp);
    std::copy(arr_copy, arr_copy + k, result);
    delete[] arr_copy;
}

void print(int i) { std::cout << i << " "; }

bool comp(const int &a, const int &b) { return a > b; }