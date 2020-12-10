#include <iostream>
#include <algorithm>

void func(int *, int *, int *, int);
void print(int);

int main()
{
    const int size = 7;
    int tab1[size] = {1, 2, 4, 5, 7, 8, 2};
    int tab2[size] = {0};
    int tab3[size] = {0};

    std::for_each(tab1, tab1 + size, print);
    std::cout << std::endl;

    func(tab1, tab2, tab3, size);
    
    std::for_each(tab2, tab2 + size, print);
    std::cout << std::endl;
    std::for_each(tab3, tab3 + size, print);
    
    return 0;
}

void func(int *tab1, int *tab2, int *tab3, int n)
{
    for (int i = 0, k2 = 0, k3 = 0; i < n; i++)
    {
        if(tab1[i] & 1)
        {
            tab2[k2] = tab1[i];
            k2++;
        }
        else
        {
            tab3[k3] = tab1[i];
            k3++;
        }
    }
}

void print(int i) { std::cout << i << " "; }