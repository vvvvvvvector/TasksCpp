#include <iostream>
#include <algorithm>
#include <ctime>

void print(int i) { std::cout << i << " "; }

int comp1(const void *a, const void *b)
{
    return *((const int *)a) - *((const int *)b);
}

int comp2(const void *a, const void *b)
{
    return *((const int *)b) - *((const int *)a);
}

bool compSort1(const int &a, const int &b)
{
    return a > b;
}

bool compSort2(const int &a, const int &b)
{
    return a < b;
}

int main()
{
    srand(time(NULL));

    const int size = 7;
    int arr1[size];
    int arr2[size];

    for (int i = 0; i < size; i++)
    {
        arr1[i] = rand() % 21 - 10;
    }

    for (int i = 0; i < size; i++)
    {
        arr2[i] = rand() % 21 - 10;
    }

    printf("arr2:\n");

    std::for_each(arr1, arr1 + size, print);
    printf("\n");

    std::qsort(arr1, size, sizeof(arr1[0]), comp1); //min -> max

    std::for_each(arr1, arr1 + size, print);
    printf("\n");

    std::qsort(arr1, size, sizeof(arr1[0]), comp2); //max -> min

    std::for_each(arr1, arr1 + size, print);

    printf("\narr2:\n");

    std::for_each(arr2, arr2 + size, print);
    printf("\n");

    std::sort(arr2, arr2 + size, compSort1); // max -> min

    std::for_each(arr2, arr2 + size, print);
    printf("\n");

    std::sort(arr2, arr2 + size, compSort2); // min -> max
    std::for_each(arr2, arr2 + size, print);

    return 0;
}