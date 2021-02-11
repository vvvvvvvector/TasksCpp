#include <iostream>

bool predicate(int a, int b, int c)
{
    return a < b + c && b < a + c && c < a + b;
}

int arr_fun(int *begin, int *end, int **new_arr, bool (*pfunc)(int, int, int))
{
    int arr_size = end - begin;
    int new_size = 0;
    int j = 0;
    for (int *i = begin; j < arr_size - 2; i++, j++)
    {
        if (pfunc(*i, *(i + 1), *(i + 2)))
        {
            new_size++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        delete[] new_arr[i];
    }
    delete[] new_arr;
    new_arr = new int *[new_size];
    for (int i = 0; i < new_size; i++)
    {
        new_arr[i] = new int;
    }
    j = 0;
    int k = 0;
    for (int *i = begin; j < arr_size - 2; i++, j++)
    {
        if (pfunc(*i, *(i + 1), *(i + 2)))
        {
            new_arr[k] = i;
            k++;
        }
    }
    return new_size;
}

int main()
{
    const int n = 10;
    int arr[n] = {8, 4, 9, 6, 2, 1, 3, 4, 3, 5};
    int **new_arr = new int *[3];

    int new_size = arr_fun(arr, arr + n, new_arr, predicate);

    for (int i = 0; i < new_size; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << *(*(new_arr + i) + j);
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < new_size; i++)
    {
        delete[] new_arr[i];
    }
    delete[] new_arr;

    return 0;
}