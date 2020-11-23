#include <iostream>

using namespace std;

int main()
{
    unsigned int n, m;
    std::cin >> n >> m;

    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; ++j)
            {
                if (j % 2 == 0)
                {
                    std::cout << "# ";
                }
                else
                {
                    std::cout << "o ";
                }
            }
        }
        else
        {
            for (int j = 0; j < m; ++j)
            {
                if (j % 2 == 0)
                {
                    std::cout << "o ";
                }
                else
                {
                    std::cout << "# ";
                }
            }
        }
        std::cout << "\n";
    }
    return 0;
}