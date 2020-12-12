#include <iostream>
#include <ctime>
#include <algorithm>

void func(int *, int *, int *, int);
void func1(int *, int *, int *, int);
void print(int);

int main()
{
    srand(time(NULL));

    const int n = 5;

    int tab1[2 * n];
    int tab2[n] = {0};
    int tab3[n] = {0};

    for (int i = 0; i < 2 * n; i++)
    {
        tab1[i] = rand() % 11;
    }

    std::for_each(tab1, tab1 + 2 * n, print);
    printf("\n");
    std::for_each(tab2, tab2 + n, print);
    printf("\n");
    std::for_each(tab3, tab3 + n, print);
    printf("\n\n");

    func(tab1, tab2, tab3, n);

    std::for_each(tab1, tab1 + 2 * n, print);
    printf("\n");
    std::for_each(tab2, tab2 + n, print);
    printf("\n");
    std::for_each(tab3, tab3 + n, print);
    printf("\n\n");

    func1(tab1, tab2, tab3, n);

    std::for_each(tab1, tab1 + 2 * n, print);
    printf("\n");
    std::for_each(tab2, tab2 + n, print);
    printf("\n");
    std::for_each(tab3, tab3 + n, print);

    return 0;
}

void func(int *tab1, int *tab2, int *tab3, int n)
{
    for (int i = 0; i < n; i++)
    {
        tab2[i] = tab1[2 * i];
        tab3[i] = tab1[2 * i + 1];
    }
}

void func1(int *tab1, int *tab2, int *tab3, int n)
{
    for (int i = 0, i2 = 0, i3 = 0; i < n; i++)
    {
        if (!(i & 1))
        {
            tab2[i2] = tab1[i];
            i2++;
        }
        else
        {
            tab3[i3] = tab1[i];
            i3++;
        }
    }
}

void print(int i) { std::cout << i << " "; }