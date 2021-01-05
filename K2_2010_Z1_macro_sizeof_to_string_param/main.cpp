#include <iostream>

#define PRINT_SIZE(type) printf("Typ %s zajmuje %dB", #type, sizeof(type));

int main()
{
    PRINT_SIZE(float);
    std::cout << std::endl;
    PRINT_SIZE(int);
    std::cout << std::endl;
    PRINT_SIZE(char);
    std::cout << std::endl;
    PRINT_SIZE(double);

    return 0;
}