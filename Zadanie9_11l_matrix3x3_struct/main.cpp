#include <iostream>
#include <ctime>

struct Matrix
{
    int matrix3x3[9];
};

void print_mat(Matrix mat)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", mat.matrix3x3[i + 3 * j]);
        }
        printf("\n");
    }
}

Matrix add_mat(Matrix mat, int num)
{
    Matrix new_mat;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           new_mat.matrix3x3[i + 3 * j] = mat.matrix3x3[i + 3 * j] += num;
        }
    }
    return new_mat;
}

int main()
{
    srand(time(NULL));

    Matrix mat;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat.matrix3x3[i + 3 * j] = rand() % 21;
        }
    }

    print_mat(mat);
    std::cout << std::endl;

    Matrix new_mat = add_mat(mat, 5);

    print_mat(new_mat);

    return 0;
}