#include <iostream>

int digital_root(int n)
{
    int sum = 0;
    int n_digits = 0;
    while (n)
    {
        ++n_digits;
        sum += n % 10;
        n /= 10;
    }
    if (n_digits > 1)
        return digital_root(sum);
    else
        return sum;
}

int main()
{
    std::cout << digital_root(16) << std::endl;
    std::cout << digital_root(942) << std::endl;
    std::cout << digital_root(132189) << std::endl;
    std::cout << digital_root(493193) << std::endl;

    return 0;
}