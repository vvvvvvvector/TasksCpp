#include <iostream>
#include <cstdlib>

int main()
{
    char num[10] = {'\0'};
    std::cin >> num;

    int x = atoi(num);
    x += 10;
    std::cout << x;

    return 0;
}