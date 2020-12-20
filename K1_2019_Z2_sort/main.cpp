#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>

void dist(double *coords, int n, double x, double y)
{
    for (int i = 0; i < n / 2 - 1; i++)
    {
        for (int j = i + 1; j < n / 2; j++)
        {
            if (sqrt(pow(coords[2 * i] - x, 2) + pow(coords[2 * i + 1] - y, 2)) > sqrt(pow(coords[2 * j] - x, 2) + pow(coords[2 * j + 1] - y, 2)))
            {
                double temp = coords[2 * i];
                coords[2 * i] = coords[2 * j];
                coords[2 * j] = temp;

                temp = coords[2 * i + 1];
                coords[2 * i + 1] = coords[2 * j + 1];
                coords[2 * j + 1] = temp;
            }
        }
    }
}

double randomDouble(double min, double max)
{
    return min + (rand() / (double)RAND_MAX) * (max - min);
}

void print(double i) { std::cout << i << " "; }

int main()
{
    srand(time(NULL));
    const int n = 8;

    double coords[n];

    for (int i = 0; i < n; i++)
    {
        coords[i] = randomDouble(-10.0, 10.0);
    }

    std::for_each(coords, coords + n, print);
    std::cout << std::endl;

    dist(coords, n, 2.0, 2.0);

    std::for_each(coords, coords + n, print);

    return 0;
}