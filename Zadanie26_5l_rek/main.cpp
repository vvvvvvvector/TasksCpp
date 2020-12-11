#include <iostream>

int a(int);

int main()
{
    std::cout << a(4);
    
    return 0;
}

int a(int k)
{
    if(k == 0 || k == 1 || k == 2)
    {
        return 1;
    }
    else if(k % 3 == 0)
    {
        return a(k - 1) + a(k - 2);
    }
    else if(k % 3 != 0)
    {
        return 5 * a(k - 1) + 4;
    }
    else
    {
        return a(k - 1);
    }
}