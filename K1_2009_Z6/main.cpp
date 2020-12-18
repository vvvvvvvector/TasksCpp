#include <iostream>
#include <ctime>
#include <algorithm>

void func(int *, int *, int *, int);
void print(int);

int main()
{
    srand(time(NULL));

    const int n = 3;
    int t1[n];
    int t2[n];
    int t3[2 * n];

    for (int i = 0; i < n; i++)
    {
        t1[i] = rand() % 11;
        t2[i] = rand() % 11;
    }

    std::for_each(t1, t1 + n, print);
    std::cout << std::endl;

    std::for_each(t2, t2 + n, print);
    std::cout << std::endl;

    func(t1, t2, t3, n);

    std::for_each(t3, t3 + 2 * n, print);

    return 0;
}

void func(int *t1, int *t2, int *t3, int n)
{
    for (int i = 0; i < n; i++)
    {
        t3[i * 2] = t1[i];
        t3[i * 2 + 1] = t2[i];
    }
}

void print(int i) { printf("%d ", i); }
