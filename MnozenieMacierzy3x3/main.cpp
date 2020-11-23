#include <iostream>
#include <cstdlib>
#include <ctime>

void mnozenie(int *A, int *B, int *C)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[3 * i + j] = A[3 * i] * B[j] + A[3 * i + 1] * B[j + 3] +  A[3 * i + 2] * B[j + 6];
        }
    }
}

int main()
{
    srand(time(NULL));

    int A[9];
    int B[9];
    int C[9] = {0};

    for (int i = 0; i < 9; i++)
    {
        A[i] = rand() % 11;
        B[i] = rand() % 11;
    }

    for (int i = 0; i < 9; i++)
    {
        if (i % 3 == 0 && i != 0)
        {
            std::cout << std::endl;
        }
        printf("%d ", A[i]);
    }

    printf("\n\n");

    for (int i = 0; i < 9; i++)
    {
        if (i % 3 == 0 && i != 0)
        {
            std::cout << std::endl;
        }
        printf("%d ", B[i]);
    }

    printf("\n\n");

    mnozenie(A, B, C);

    for (int i = 0; i < 9; i++)
    {
        if (i % 3 == 0 && i != 0)
        {
            std::cout << std::endl;
        }
        printf("%d ", C[i]);
    }

    return 0;
}