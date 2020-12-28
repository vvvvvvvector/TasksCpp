#include <iostream>
#include <cmath>

void draw_a_circle(int r)
{
    for (int x = -r; x <= r; x++)
    {
        for (int y = r; y >= -r; --y)
        {
            if (sqrt(x * x + y * y) <= r)
            {
                std::cout << "#";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

int main()
{
    draw_a_circle(1);
    std::cout<< std::endl;
    draw_a_circle(2);
    std::cout<< std::endl;
    draw_a_circle(3);

    return 0;
}