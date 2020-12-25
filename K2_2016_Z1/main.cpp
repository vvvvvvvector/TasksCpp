#include <iostream>
#define FUNC(x) (x % 10 == 0)

int main()
{
    std::cout << FUNC(219) << std::endl;
    std::cout << FUNC(220);
    
    return 0;
}