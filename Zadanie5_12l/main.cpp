#include <iostream>

class Matrix
{
private:
    double mat[9];

public:
    double &at(int i, int j)
    {
        return mat[i + 3 * j];
    }
    void print()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                std::cout << mat[i + j * 3] << " ";
            }
            std::cout << std::endl;
        }
    }
    Matrix add(int num) // mozemy zwrocic tablice
    {
        Matrix new_mat;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                new_mat.mat[i + 3 * j] = mat[i + 3 * j] + num;
            }
        }
        return new_mat;
    }
};

int main()
{
    Matrix m;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m.at(i, j) = i + j;
        }
    }

    m.print();

    Matrix new_mat = m.add(5);

    m.add(5).print();
    std::cout << sizeof(m);

    // new_mat.print();

    return 0;
}