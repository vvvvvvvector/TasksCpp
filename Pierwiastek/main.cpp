#include <iostream>
#include <math.h>

int main()
{
    const double eps = 1e-8;
    double n, x0;
    std::cin >> n >> x0;

    while (1)
    {
        double xn = 0.5 * (x0 + n / x0);
        printf("%f\n", xn);
        if (fabs(xn - x0) < eps)
        {
            break;
        }
        x0 = xn;
    }

    std::cout << x0 << std::endl;

    return 0;
}