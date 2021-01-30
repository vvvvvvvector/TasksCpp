#include <iostream>
#include <cstdio>
#include <ctime>

int main()
{
    srand(time(NULL));

    FILE *pf = fopen("text.txt", "w");

    int n = 5;
    for (int i = 0; i < n; i++)
    {
        fprintf(pf, "%d ", rand() % 101 - 50);
    }
    fclose(pf);

    return 0;
}