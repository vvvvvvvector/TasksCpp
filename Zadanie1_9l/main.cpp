#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));

    int n;
    std::cin >> n;

    int **arr = new int *[n];
    int *arr1 = new int[n];

    for (int i = 0; i < n; i++)
        std::cin >> arr1[i];

    for (int i = 0; i < n; i++)
        arr[i] = new int[arr1[i]];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < arr1[i]; j++)
            arr[i][j] = rand() % 11;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < arr1[i]; j++)
            std::cout << arr[i][j] << " ";
        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++)
        delete[] arr[i];

    delete[] arr;
    delete[] arr1;

    return 0;
}