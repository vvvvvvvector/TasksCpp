#include <iostream>
#include <algorithm>
#include <ctime>

int func(double[], double[], int, double, double);

double randomDouble(double, double);

void print(double);

int main()
{
    srand(time(NULL));

    const int n = 7;
    double t1[n];
    double t2[n] = {0.0};

    for (int i = 0; i < n; i++)
    {
        t1[i] = randomDouble(-5.0, 5.0);
    }

    std::for_each(t1, t1 + n, print);
    printf("\n");
    std::for_each(t2, t2 + n, print);
    printf("\n");

    int k = func(t1, t2, n, -3.0, 3.0);

    std::for_each(t1, t1 + n, print);
    printf("\n");
    std::for_each(t2, t2 + k, print);

    return 0;
}

int func(double t1[], double t2[], int n, double min, double max)
{
    int count = 0;
    for (int i = 0, k = 0; i < n; i++)
    {
        if (t1[i] <= max && t1[i] >= min)
        {
            t2[k] = t1[i];
            k++;
            count++;
        }
    }
    return count;
}

double randomDouble(double min, double max)
{
    return min + ((double)rand() / RAND_MAX) * (max - min);
}

void print(double i) { printf("%.3f ", i); }