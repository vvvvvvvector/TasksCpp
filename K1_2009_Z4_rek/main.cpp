#include <iostream>

int func(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else if (x == 0)
    {
        return y;
    }
    else
    {
        return func(x - 1, y) + func(x, y - 1);
    }
}

int main()
{
    std::cout << func(3, 3);

    return 0;
}