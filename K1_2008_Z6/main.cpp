#include <iostream>
#include <ctime>
#include <algorithm>

void func(int *, int *, int);
void print(int);

int main()
{
    srand(time(NULL));

    const int n = 5;
    int t1[n];
    int t2[n];

    for (int i = 0; i < n; i++)
    {
        t1[i] = rand() % 31;
    }

    std::for_each(t1, t1 + n, print);
    std::cout << std::endl;

    func(t1, t2, n);

    std::for_each(t2, t2 + n, print);

    return 0;
}

void print(int i) { printf("%d ", i); }

void func(int *t1, int *t2, int n)
{
    for (int i = 0; i < n; i++)
    {
        t2[i] = t1[n - 1 - i];
    }
}