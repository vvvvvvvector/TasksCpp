#include <iostream>
#include <cstdio>
#include <ctime>

void write_mat(const char *str, int **mat, int n, int m)
{
    FILE *pf = fopen(str, "w");
    if (pf)
    {
        fprintf(pf, "%d %d\n", n, m);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                fprintf(pf, "%d ", mat[i][j]);
            }
            fprintf(pf, "\n");
        }
    }
    fclose(pf);
}

void read_mat(const char *str, int **new_arr)
{
    FILE *pf = fopen(str, "r");

    int n, m;

    if (pf)
    {
        fscanf(pf, "%d %d\n", &n, &m);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                fscanf(pf, "%d", &new_arr[i][j]);
            }
        }
        fclose(pf);
    }
}

int main()
{
    srand(time(NULL));

    int n = 4;
    int m = 4;

    int **mat = new int *[n];
    for (int i = 0; i < n; i++)
    {
        mat[i] = new int[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mat[i][j] = rand() % 11;
        }
    }
    std::cout << "mat:" << std::endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "new_mat: " << std::endl;

    int **new_mat = new int *[n];
    for (int i = 0; i < n; i++)
    {
        new_mat[i] = new int[m];
    }

    write_mat("numbers.txt", mat, n, m);
    read_mat("numbers.txt", new_mat);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << new_mat[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete[] mat[i];
    }
    delete[] mat;

    for (int i = 0; i < n; i++)
    {
        delete[] new_mat[i];
    }
    delete[] new_mat;

    return 0;
}