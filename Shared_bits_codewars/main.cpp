#include <iostream>

bool shared_bits(long a, long b)
{
    int count = 0;
    while (a || b)
    {
        if (a & 1 && b & 1)
        {
            count++;
        }
        a = a >> 1;
        b = b >> 1;
    }
    return count >= 2;
}
int main()
{
    std::cout << shared_bits(7, 10) << std::endl;
    std::cout << shared_bits(7, 15) << std::endl;
    std::cout << shared_bits(10, 15) << std::endl;

    return 0;
}