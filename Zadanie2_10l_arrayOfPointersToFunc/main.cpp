#include <iostream>

double sum(double x, double y) { return x + y; }
double sub(double x, double y) { return x - y; }
double mul(double x, double y) { return x * y; }
double div(double x, double y) { return x / y; }

int main()
{
    double x, y;
    int z;
    std::cin >> x >> y >> z;

    double (*pfunc[4])(double, double) = {sum, sub, mul, div};

    std::cout << pfunc[z](x, y);

    return 0;
}