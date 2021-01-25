#include <iostream>
#include <cstdio>

int main()
{
    FILE *pf = fopen("text.txt", "a+");

    const int size = 7;
    int arr[size];
    int i = 0;

    int num;
    if (pf)
    {
        while (fscanf(pf, "%d", &num) > 0)
        {
            arr[i] = num;
            i++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
    

    return 0;
}