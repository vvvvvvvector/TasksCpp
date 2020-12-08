#include <iostream>

int sum(int, int);
int sub(int, int);

int (*pfunc)(int, int);

int main()
{
    pfunc = sum;

    printf("sum = %d\n", (*pfunc)(5, 7));

    pfunc = sub;

    printf("sub = %d", pfunc(5, 7));

    return 0;
}

int sum(int a, int b) { return a + b; }

int sub(int a, int b) { return a - b; }