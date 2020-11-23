#include <iostream>

int fibIt(int);
int fibRek(int);

int main()
{
    unsigned int index;
    std::cin >> index;

    printf("%d\n", fibIt(index));
    printf("%d", fibRek(index));
    return 0;
}

int fibRek(int idx)
{
    if (idx == 0)
    {
        return 0;
    }
    if (idx < 3)
    {
        return 1;
    }
    return fibRek(idx - 1) + fibRek(idx - 2);
}

int fibIt(int idx)
{
    int n1 = 0;
    int n2 = 1;
    int n3;
    if (idx == 1)
        return n1;
    for (int i = 1; i < idx - 1; i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    return n3;
}