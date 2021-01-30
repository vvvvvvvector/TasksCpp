#include <iostream>
#include <cstdio>

int main()
{
    FILE *pf = fopen("numbers.txt", "r");

    const int n = 8;
    int numbers[n];
    int i = 0;

    if(pf)
    {
        int num;
        while(fscanf(pf, "%d", &num) > 0)
        {
            numbers[i] = num;
            i++;
        }
    }

    pf = fopen("numbers.txt", "w");
    for (int i = 0; i < n; i++)
    {
        fprintf(pf, "%d ", ++numbers[i]);
    }
    fclose(pf);

    return 0;
}