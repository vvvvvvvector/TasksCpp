#include <iostream>

bool parzystosc(unsigned int num)
{
    if (num & 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int num;
    std::cin >> num;

    printf("%s", parzystosc(num)? "Parzysta" : "Nieparzysta");
    
    return 0;
}