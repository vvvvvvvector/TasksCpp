#include <iostream>
#include <cstdio>

int main()
{
    FILE *pf = fopen("text.txt", "r");

    const int n = 4;
    double arr[n];
    int i = 0;

    if (pf)
    {
        double num;
        while(fscanf(pf, "%lf", &num) > 0)
        {
            arr[i] = num;
            i++;
        }
        fclose(pf);
    }

    for (int i = 0; i < n; i++)
    {
        // printf("%.3f ", arr[i]);
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    

    return 0;
}