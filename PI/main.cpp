#include <iostream>
#include <ctime>
#include <math.h>

double randomDouble(double, double);

int main()
{
    srand(time(NULL));

    int inCircle = 0;
    int allDots = 1e8;

    for (int i = 0; i < allDots; i++)
    {
        double x = randomDouble(-1.0, 1.0);
        double y = randomDouble(-1.0, 1.0);
        if ((x * x) + (y * y) <= 1.0)
        {
            inCircle++;
        }
    }

    printf("pi = %f\n", 4 * inCircle / (double)allDots);
    printf("pi = %f", 3.141592653589793238463);

    return 0;
}

double randomDouble(double min, double max)
{
    return min + ((double)rand() / RAND_MAX) * (max - min);
}