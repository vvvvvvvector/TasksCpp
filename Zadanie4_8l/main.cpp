#include <iostream>
#include <cstdlib>
#include <ctime>

double randomDouble(double min, double max)
{
    return min + ((double)rand() / RAND_MAX) * (max - min);
}

double *func(const double *arr, int len, double min, double max, int *n_out)
{
    *n_out = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] >= min && arr[i] < max)
        {
            (*n_out)++;
        }
    }
    double *result = new double[*n_out];
    for (int i = 0, j = 0; i < len; i++)
    {
        if (arr[i] >= min && arr[i] < max)
        {
            result[j] = arr[i];
            j++;
        }
    }
    return result;
}

int main()
{
    srand(time(NULL));

    int size = 7;
    double *arr = new double[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = randomDouble(-5, 5);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%f ", arr[i]);
    }

    printf("\n");

    int newsize;

    double *newArr = func(arr, size, 1, 4, &newsize);

    for (int i = 0; i < newsize; i++)
    {
        std::cout << newArr[i] << " ";
    }

    delete[] arr;
    arr = nullptr;
    delete[] newArr;
    newArr = nullptr;
    return 0;
}
