#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));
    
    const int size = 100;
    unsigned int arr[size];
    
    unsigned int n, max, min;

    std::cin >> n >> max >> min;

    for (int i = 0; i < n; i++)
    {
        arr[i] = min + (rand() % (max - min + 1)); 
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int n_i = 0;
            int n_j = 0;
            unsigned int num_i = arr[i];
            unsigned int num_j = arr[j];
            while (num_i)
            {
                n_i += num_i & 1;
                num_i = num_i >> 1;
            }
            while (num_j)
            {
                n_j += num_j & 1;
                num_j = num_j >> 1;
            }
            if(n_i > n_j)
            {
                unsigned int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}