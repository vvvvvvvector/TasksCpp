#include <iostream>
#include <ctime>
#include <iomanip>

int main()
{
    srand(time(NULL));

    std::cout << "dec: " << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << std::setfill(' ') << std::right << std::setw(4) << rand() % 1501 << '\n'
                  << std::right << std::setw(4) << rand() % 1501 << std::endl;
    }

    std::cout << "hex: " << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << std::setfill(' ') << std::right << std::setw(4) << std::hex << rand() % 1501 << '\n'
                  << std::right << std::setw(4) << std::hex << rand() % 1501 << std::endl;
    }

    return 0;
}