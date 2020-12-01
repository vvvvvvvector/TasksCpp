#include <iostream>

//x = -b / a

int main()
{
    double a;
    double b;
    
    std::cin >> a >> b;

    if (a == 0)
    {
        std::cout << "Brak miejsca zerowego";
    }
    else
    {
        std::cout << "x = " << -b / a;
    }

    return 0;
}