#include <iostream>

int *func(int *tab1, int *tab2, int *tab3, int n)
{
    int *tab4 = new int[n];
    for (int i = 0; i < n; i++)
    {
        tab4[i] = tab1[i] >= 0 ? tab2[i] : tab3[i];
    }
    return tab4;
}

int main()
{
    const int n = 5;
    int tab1[n] = {-1, 0, 3, -4, 10};
    int tab2[n] = {1, 2, 3, 4, 5};
    int tab3[n] = {10, 11, 12, 13, 14};

    int *tab4 = func(tab1, tab2, tab3, n);

    for (int i = 0; i < n; i++)
    {
        std::cout << tab4[i] << " ";
    }

    delete[] tab4;
    return 0;
}