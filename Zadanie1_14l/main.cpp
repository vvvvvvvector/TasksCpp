#include <iostream>
#include <cstdio>

int main()
{
    FILE *pf = fopen("text.txt", "r");
    
    const int n = 8;
    int arr[n];
    int i = 0;

    if(pf)
    {
        int num;
        while(fscanf(pf, "%d", &num) > 0)
        {
            arr[i] = num;
            i++;
        }
        fclose(pf);
    }

    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }

    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }

    std::cout << "max = " << max << " min = " << min << std::endl;
    
    return 0;
}