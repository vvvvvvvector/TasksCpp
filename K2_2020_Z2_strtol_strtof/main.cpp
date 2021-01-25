#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>

void func(const char *str)
{
    if (strtof(str, NULL) == (int)(strtof(str, NULL)))
    {
        long a = strtol(str, NULL, 10);
        unsigned int mask = 1 << 2;
        bool bit = (a & mask) > 0;
        std::cout << bit << std::endl;
    }
    else
    {
        char *end = NULL;
        strtof(str, &end);
        if(*end == '\0')
        {
            char *new_end = NULL; 
            strtol(str, &new_end, 10);
            std::cout << new_end + 1 << std::endl;
        }
        else
        {
            std::cout << end << std::endl;
        }
    }
}

int main()
{
    func("33.1415");
    func("213");
    func("3.14abc8");

    return 0;
}