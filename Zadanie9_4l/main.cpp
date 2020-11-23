#include <iostream>
#include <ctime>
#include <math.h>

int main()
{
    srand(time(NULL));

    const int size = 7;
    int arr[size];
    int sum = 0;
    double srednia = 0;
    int thisNum = 0;

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 21;
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << *(arr + i) << " ";
    }

    printf("\n");

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    srednia = sum / (double)size;

    double min = fabs(srednia - arr[0]);
    thisNum = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (fabs(srednia - arr[i]) < min)
        {
            min = fabs(srednia - arr[i]);
            thisNum = arr[i];
        }
    }

    printf("srednia = %f\nThat Number = %d", srednia, thisNum);

    return 0;
}