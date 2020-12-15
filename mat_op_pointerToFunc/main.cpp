#include <iostream>
#include <algorithm>

int plus(int, int);
int minus(int, int);
void mat_operation(int *, int *, int, int (*op)(int, int));
void print(int);

int main()
{
    int n = 2;

    int m1[] = {1, 2, 5, 6};
    int m2[] = {2, 5, 1, 8};

    // mat_operation(m1, m2, n, plus);
    mat_operation(m1, m2, n, minus);

    std::for_each(m1, m1 + n * 2, print);
    
    return 0;
}

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }

void mat_operation(int *t1, int *t2, int n, int (*op)(int, int))
{
    for (int i = 0; i < n * n; i++)
    {
        t1[i] = op(t1[i], t2[i]);
    }
}

void print(int i) { std::cout << i << " "; }