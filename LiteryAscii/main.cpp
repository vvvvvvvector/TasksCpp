#include <iostream>

int main()
{
    char c;
    std::cin >> c;

    if (c <= 122 && c >= 97)
    {
        std::cout << "mala\n";
        c -= 32;
        std::cout << c << std::endl;
        std::cout << "juz wielka";
    }
    else if (c <= 90 && c >= 65)
    {
        std::cout << "wielka\n";
        c += 32;
        std::cout << c << std::endl;
        std::cout << "juz mala";
    }
    else
    {
        std::cout << "Nie litera";
    }

    return 0;
}