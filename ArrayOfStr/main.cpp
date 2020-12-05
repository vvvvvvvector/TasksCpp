#include <iostream>
#include <cstring>

void func(char **arr, int n);

int main()
{
    int n = 5;
    char **arr = new char *[n];

    arr[0] = new char[6]{'a', 'b', 'c', 'd', 'u', '\0'};
    arr[1] = nullptr;
    arr[2] = new char[5]{'1', '2', '3', '4', '\0'};
    arr[3] = nullptr;
    arr[4] = nullptr;

    func(arr, n);

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}

void func(char **arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == nullptr)
        {
            int newLen = (strlen(arr[i - 1]) / 2) + 1;
            arr[i] = new char[newLen];
            for (int j = 0; j < newLen; j++)
            {
                arr[i][j] = arr[i - 1][j * 2];
            }
            arr[i][newLen] = '\0';
        }
    }
}