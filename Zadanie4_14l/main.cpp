#include <iostream>
#include <cstdio>

int main()
{
    FILE *pf = fopen("text.txt", "r");

    const int size = 100;
    int arr[size];
    int i = 0;
    int num;

    if (pf)
    {
        while (fscanf(pf, "%d", &num) > 0)
        {
            arr[i] = num + 1;
            i++;
        }
        fclose(pf);
    }

    pf = fopen("text.txt", "w");
    
    for (int j = 0; j < i; j++)
    {
        fprintf(pf, "%d ", arr[j]);
    }
    fclose(pf);
    
    
    return 0;
}