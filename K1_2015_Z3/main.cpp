#include <iostream>

int rec(unsigned int);

int main()
{
    int b;
    std::cin >> b;

    std::cout << rec(b);
    
    return 0;
}

int rec(unsigned int b)
{
    if (b == 0)
    {
        return 0;
    }
    else if(b == 1)
    {
        return 6;
    }
    else
    {
        return 3 + rec(b - 1);
    }
}