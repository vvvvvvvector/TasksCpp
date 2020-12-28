#include <iostream>
#include <ctime>

struct Tab
{
    float *a;
    int b;
};

Tab *func(int *rozmiary, int n)
{
    Tab *tab = new Tab[n];

    for (int i = 0; i < n; i++)
    {
        tab[i].a = new float[rozmiary[i]];
        tab[i].b = rozmiary[i];
    }

    return tab;
}

void del(Tab *tab, int n)
{
    for (int i = 0; i < n; i++)
    {
        delete[] tab[i].a;
    }
    delete[] tab;
}

int main()
{
    srand(time(NULL));

    const int n = 4;
    int rozmiary[n] = {3, 5, 7, 8};

    Tab *tab = func(rozmiary, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < rozmiary[i]; j++)
        {
            tab[i].a[j] = rand() / (double)RAND_MAX;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < rozmiary[i]; j++)
        {
            std::cout << tab[i].a[j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << tab[i].b << " ";
    }

    del(tab, n);

    return 0;
}