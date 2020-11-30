#include <iostream>
#include <cstdlib>
#include <ctime>

void func(double *, int *, int, int);

double randomDouble(double, double);

int main()
{
    srand(time(NULL));

    int n1 = 10;
    int n2 = 5;

    double *arr1 = new double[n1];
    int *arr2 = new int[n2];

    for (int i = 0; i < n1; i++)
    {
        arr1[i] = randomDouble(-10.0, 11);
    }

    for (int i = 0; i < n2; i++)
    {
        arr2[i] = rand() % 21;
    }

    for (int i = 0; i < n1; i++)
    {
        printf("%.3f ", arr1[i]);
    }

    printf("\n");

    for (int i = 0; i < n2; i++)
    {
        printf("%d ", arr2[i]);
    }

    printf("\n");

    func(arr1, arr2, n1, n2);

    delete[] arr1;
    arr1 = nullptr;
    delete[] arr2;
    arr2 = nullptr;
    return 0;
}

void func(double *arr1, int *arr2, int n1, int n2)
{
    for (int i = 0; i < n2; i++)
    {
        if (arr2[i] >= 0 && arr2[i] < n1)
        {
            printf("%.3f ", arr1[arr2[i]]);
        }
        else
        {
            std::cout << "NAN ";
        }
    }
}

double randomDouble(double min, double max)
{
    return min + ((double)rand() / RAND_MAX) * (max - min);
}