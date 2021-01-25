#include <iostream>
#include <ctime>
#include <algorithm>

int func(int *arr, int r, int c, int &second_min)
{
    int wiersz = 0;
    int *copy_arr = new int[r * c];
    std::copy(arr, arr + r * c, copy_arr);
    std::sort(copy_arr, copy_arr + r * c);
    std::unique(copy_arr, copy_arr  + r * c);
    second_min = copy_arr[1];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[c * i + j] == second_min)
            {
                wiersz = i;
                return wiersz;
            }
        }
    }
    delete[] copy_arr;
    return wiersz;
}

int main()
{
    srand(time(NULL));

    int r = 3;
    int c = 4;
    int second_min;

    int *arr = new int[r * c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[c * i + j] = rand() % 21;
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            std::cout << arr[c * i + j] << " ";
        }
        std::cout << std::endl;
    }

    int wiersz = func(arr, r, c, second_min);

    std::cout << "second min = " << second_min << std::endl;
    std::cout << "wiersz = " << wiersz << std::endl;

    delete[] arr;
    return 0;
}