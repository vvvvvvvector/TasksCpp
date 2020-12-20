#include <iostream>
#include <cmath>
#include <ctime>

int a(int *, int);

int main()
{
    srand(time(NULL));

    const int size = 10;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 101;
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    std::cout << a(arr, 4);
    
    return 0;
}

int a(int *arr, int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return sqrt(2 * pow(arr[n % 10], 3)) + a(arr, n - 1);
    }
}