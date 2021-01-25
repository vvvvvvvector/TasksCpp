#include <iostream>
#include <ctime>

void *func(void **arr, int n, int sizen, int x, int y)
{
    char **p = (char **)arr;
    return (void *)&p[y][x * sizen];
}

int main()
{
    srand(time(NULL));

    int n = 5;

    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n - i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            arr[i][j] = rand() % 11;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    void *ptr = func((void **)arr, n, sizeof(int), 2, 1);

    std::cout << *(int *)ptr << std::endl;

    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}