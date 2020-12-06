#include <iostream>
#include <ctime>

int **mul(int **, int, int, int **, int, int);
void print_matrix(int **, int, int);

int main()
{
    srand(time(NULL));

    int r1 = 2;
    int c1 = 2;
    int r2 = 2;
    int c2 = 3;

    int **m1 = new int *[r1];
    for (int i = 0; i < r1; i++)
    {
        m1[i] = new int[c1];
    }
    int **m2 = new int *[r2];
    for (int i = 0; i < r2; i++)
    {
        m2[i] = new int[c2];
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            m1[i][j] = rand() % 11;
        }
    }

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            m2[i][j] = rand() % 11;
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            std::cout << m1[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            std::cout << m2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    int **m3 = mul(m1, r1, c1, m2, r2, c2);

    if (m3 != nullptr)
    {
        print_matrix(m3, r1, c2);
        for (int i = 0; i < r1; i++)
        {
            delete[] m3[i];
        }
        delete[] m3;
    }

    for (int i = 0; i < r1; i++)
    {
        delete[] m1[i];
    }
    delete[] m1;

    for (int i = 0; i < r2; i++)
    {
        delete[] m2[i];
    }
    delete[] m2;

    return 0;
}

int **mul(int **m1, int r1, int c1, int **m2, int r2, int c2)
{
    if (c1 != r2)
    {
        printf("nie da sie pomnozyc");
        return nullptr;
    }
    int **m3 = new int *[r1];
    for (int i = 0; i < r1; i++)
    {
        m3[i] = new int[c2];
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            int sum = 0;
            for (int k = 0; k < c1; k++)
            {
                sum += m1[i][k] * m2[k][j];
            }
            m3[i][j] = sum;
        }
    }
    return m3;
}

void print_matrix(int **m3, int r1, int c2)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            std::cout << m3[i][j] << " ";
        }
        std::cout << std::endl;
    }
}