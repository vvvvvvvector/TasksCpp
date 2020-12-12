#include <iostream>

void func(int *, int);

int main()
{
    const int size = 8;
    int arr[] = {-3, -3, 4, 5, 4, 5, -3, 0};

    func(arr, size);

    return 0;
}

void func(int *arr, int n)
{
    int sumU = 0;
    int nU = 0;
    int sumNieU = 0;
    int nNieU = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            nNieU++;
            sumNieU += arr[i];
        }
        else
        {
            nU++;
            sumU += arr[i];
        }
    }
    printf("sr nieujemnych = %.3f\nsr ujemnych = %.3f", sumNieU / (double)nNieU, sumU / (double)nU);
}