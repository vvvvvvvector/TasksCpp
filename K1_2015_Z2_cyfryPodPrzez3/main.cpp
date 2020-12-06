#include <iostream>

int func(unsigned int);

int main()
{
    int num;
    std::cin >> num;
    
    std::cout << func(num);
    
    return 0;
}

int func(unsigned int a)
{
    int n = 0;
    while (a)
    {
        int b = a % 10;
        if(b % 3 == 0) n++;
        a /= 10;
    }
    return n;
}