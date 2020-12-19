#include <iostream>

// void func(unsigned int a1, unsigned int a2, unsigned int b1, unsigned int b2)
void func(int a1, int a2, int b1, int b2)
{
    for (int i = a1; i <= b2; i++)
    {
        if ((i >= a1 && i <= a2) && (i >= b1 && i <= b2))
        {
            std::cout << i << " ";
        }
    }
}

int main()
{
    func(-10, 5, -3, 10);
    std::cout << std::endl;

    return 0;
}