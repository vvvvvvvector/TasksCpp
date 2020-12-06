#include <iostream>
#include <cmath>

int main()
{
    double x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    double a = fabs(x1 - x2);
    double b = fabs(y1 - y2);

    std::cout << a * b;
    
    return 0;
}