#include <iostream>

void func(int *arr, int n)
{
    int elBeforeZero = 0;
    int sumBeforeZero = 0;
    int elAfterZero = 0;
    int sumAfterZero = 0;
    for (int i = 0; arr[i] != 0; i++)
    {
        elBeforeZero++;
        sumBeforeZero += arr[i];
    }
    for (int i = elBeforeZero + 1; i < n; i++)
    {
        elAfterZero++;
        sumAfterZero += arr[i];
    }
    printf("before = %.3f\n", sumBeforeZero / (double)elBeforeZero);
    printf("after = %.3f", sumAfterZero / (double)elAfterZero);
}

int main()
{
    const int size = 8;
    int arr[8] = {5, 3, 1, 0, 3, 3, 4, 4};

    func(arr, size);

    return 0;
}