#include <iostream>
#include <ctime>

double randomDouble(double, double);

int main()
{
    srand(time(NULL));

    for (int i = 0; i < 100; i++)
    {
        printf("%f\n", randomDouble(-5.0, 3.0));
    }

    return 0;
}

double randomDouble(double min, double max)
{
    return min + ((double)rand() / RAND_MAX) * (max - min);
}