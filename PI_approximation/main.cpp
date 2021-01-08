#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <iomanip>

#define MATH_PI 3.14159265358979323846

class PiApprox
{
public:
    static std::string iterPi(double epsilon)
    {
        int n = 0;
        double pi_4 = 0;

        for (int k = 0;; k++)
        {
            if (fabs(MATH_PI - 4.0 * pi_4) < epsilon)
                break;
            pi_4 += pow(-1, k) / ((double)(2 * k + 1));
            ++n;
        }

        std::stringstream result;
        result << "[" << n << ", " << std::setprecision(11) << 4 * pi_4 << "]";
        return result.str();
    }
};

int main()
{
    PiApprox a;

    std::cout << a.iterPi(0.1) << std::endl;
    std::cout << a.iterPi(0.001) << std::endl;

    return 0;
}