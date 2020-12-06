#include <iostream>

int main()
{
    int arr[100]; // double
    std::cin >> arr[0] >> arr[1];
    int maxRoznica = arr[1] - arr[0];
    int idxsize = 2;

    int i;
    if (arr[0] == arr[1])
    {
        while (scanf("%d", &i)) // staly
        {
            if (i != arr[0])
            {
                printf("to byl ciag staly\nmax roznica = %d", maxRoznica);
                break;
            }
            arr[idxsize++] = i;
        }
    }
    else if (arr[0] < arr[1]) //rosnacy
    {
        while (scanf("%d", &i))
        {
            if (i <= arr[idxsize - 1])
            {
                printf("to byl ciag rosnacy\nmax roznica = %d", maxRoznica);
                break;
            }
            arr[idxsize++] = i;
            if (maxRoznica < arr[idxsize - 1] - arr[idxsize - 2])
            {
                maxRoznica = arr[idxsize - 1] - arr[idxsize - 2];
            }
        }
    }
    else if (arr[0] > arr[1]) //malejacy
    {
        while (scanf("%d", &i))
        {
            if (i >= arr[idxsize - 1])
            {
                printf("to byl ciag malejacy\nmax roznica = %d", maxRoznica);
                break;
            }
            arr[idxsize++] = i;
            if (maxRoznica < arr[idxsize - 1] - arr[idxsize - 2])
            {
                maxRoznica = arr[idxsize - 1] - arr[idxsize - 2];
            }
        }
    }

    return 0;
}