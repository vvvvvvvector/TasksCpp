#include <iostream>

#define MACRO(type, w, k) ((sizeof(type) * w) * k) //???

int main()
{
    std::cout << MACRO(int, 5, 2) << std::endl;
    std::cout << MACRO(float, 5, 2) << std::endl;
    std::cout << MACRO(double, 5, 2) << std::endl;
    std::cout << MACRO(char, 5, 2);
    
    return 0;
}