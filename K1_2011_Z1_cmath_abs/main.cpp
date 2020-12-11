#include <iostream>
#include <cmath>

int main()
{
    int x, y;
    std::cin >> x >> y;

    printf("(|%d| + |%d|)/2 = %f", x, y, (abs(x) + abs(y)) / (double)2);

    return 0;
}