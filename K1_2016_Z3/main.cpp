#include <iostream>

int a(int n)
{
    if(n < 6)
    {
        return n;
    }
    else if(n >= 6)
    {
        return a(n - 2) + a(n - 4) + a(n - 6); 
    }
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << a(n);
    
    return 0;
}