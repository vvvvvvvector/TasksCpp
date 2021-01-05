#include <iostream>

double abs_diff(const double *a, const double *b)
{
    return ((*a - *b) < 0) ? (-1) * (*a - *b) : (*a - *b);
}

int main()
{
    double a = 5.0;
    double b = 7.0;
    
    std::cout << abs_diff(&a, &b) << std::endl;
    std::cout << abs_diff(&b, &a);

    return 0;
}