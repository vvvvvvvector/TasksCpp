#include <iostream>
#include <ctime>

#define MIN2(a, b) (((a) < (b)) ? (a) : (b))
#define MIN6(a, b, c, d, e, f) MIN2(MIN2(MIN2(a, b), MIN2(c, d)), MIN2(e, f))

int main()
{
    srand(time(NULL));
    
    const int n = 6;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 21 - 11;
        // arr[i] = rand() % 21;
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    std::cout << MIN6(arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);

    return 0;
}