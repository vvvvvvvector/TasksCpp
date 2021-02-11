#include <iostream>
#include <ctime>

class vecn
{
    int el_num;
    double *vec;

public:
    vecn(int n)
    {
        this->el_num = n;
        this->vec = new double[n];
    }
    ~vecn()
    {
        delete[] this->vec;
    }
    double &at(int i)
    {
        return vec[i];
    }
    int size()
    {
        return this->el_num;
    }
};

class matrix
{
    int wymiar;
    double *mat;

public:
    matrix(int n)
    {
        this->wymiar = n;
        mat = new double[n * n];
    }
    ~matrix()
    {
        delete[] this->mat;
    }
    double &at(int i, int j)
    {
        return this->mat[i + wymiar * j];
    }
    int size()
    {
        return this->wymiar;
    }
};

void mul(matrix &m, vecn &v, vecn &new_v)
{
    for (int i = 0; i < v.size(); i++)
    {
        double sum = 0;
        for (int j = 0; j < v.size(); j++)
        {
            sum += m.at(i, j) * v.at(j);
        }
        new_v.at(i) = sum;
    }
}

int main()
{
    srand(time(NULL));

    vecn *v = new vecn(3);
    matrix *m = new matrix(3);
    vecn new_v = vecn(3);

    for (int i = 0; i < 3; i++)
    {
        v->at(i) = rand() % 11;
    }

    std::cout << "vec: " << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << v->at(i) << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < m->size(); i++)
    {
        for (int j = 0; j < m->size(); j++)
        {
            m->at(i, j) = rand() % 11;
        }
    }

    std::cout << "matrix: " << std::endl;
    for (int i = 0; i < m->size(); i++)
    {
        for (int j = 0; j < m->size(); j++)
        {
            std::cout << m->at(i, j) << " ";
        }
        std::cout << std::endl;
    }

    mul(*m, *v, new_v);

    std::cout << "new_vec: " << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << new_v.at(i) << " ";
    }
    std::cout << std::endl;

    delete v;
    delete m;

    return 0;
}