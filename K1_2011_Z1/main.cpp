#include <iostream>

int main()
{
    int n, m;
    std::cin >> n >> m;

    for (int i = n; i <= m; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            std::cout << i << " ";
    }

    return 0;
}
