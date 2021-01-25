#include <iostream>

class Mutex
{
    bool stan = 1; // 1 - wolny 0 - zajety
public:
    void lock()
    {
        stan = 0;
    }
    void release()
    {
        stan = 1;
    }
    bool state()
    {
        return stan;
    }
    ~Mutex()
    {
        std::cout << "destructor" << std::endl;
    }
};

int main()
{
    const int n = 3;
    Mutex **tab = new Mutex *[n];

    for (int i = 0; i < n; i++)
    {
        tab[i] = new Mutex[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << tab[i][j].state() << " ";
        }
        std::cout << std::endl;
    }

    tab[1][1].lock();
    std::cout << std::endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << tab[i][j].state() << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete[] tab[i];
    }
    delete[] tab;

    return 0;
}
