#include <iostream>
#include <cstdio>
#include <ctime>

void write_bin_mat(const char *path, int **mat, int n, int m)
{
    FILE *fp = fopen(path, "wb");

    if (fp)
    {
        fwrite(&n, sizeof(int), 1, fp);
        fwrite(&m, sizeof(int), 1, fp);
        fwrite(mat, sizeof(int), n * m, fp);
    }

    fclose(fp);
}

int read_bin_mat(const char *path, int **new_mat)
{
    FILE *fp = fopen(path, "rb");
    int read = 0;
    if (fp)
    {
        int n, m;
        //std::cout << "ftell_1: " << ftell(fp) << std::endl;
        read += fread(&n, sizeof(int), 1, fp);
        fseek(fp, 4, SEEK_SET);
        //std::cout << "ftell_2: " << ftell(fp) << std::endl;
        read += fread(&m, sizeof(int), 1, fp);
        read += fread(new_mat, sizeof(int), n * m, fp);
        fclose(fp);
    }
    return read;
}

int main()
{
    srand(time(NULL));

    int n = 2;
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

    write_bin_mat("numbers_bin.txt", mat, n, m);
    int read = read_bin_mat("numbers_bin.txt", new_mat);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << new_mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "successfully readed element: " << read << std::endl;

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