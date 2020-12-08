#include <iostream>
#include <ctime>
#include <algorithm>

void print(int i) { std::cout << i << " "; }

int main()
{
    srand(time(NULL));

    int size = 7;
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 21 - 10; // [-10, 10]?
    }

    std::for_each(arr, arr + size, print);

    delete[] arr;

    return 0;
}