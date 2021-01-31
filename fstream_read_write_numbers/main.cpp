#include <iostream>
#include <fstream>

int main()
{
    const int n = 5;
    int arr[n];
    int i = 0;

    std::fstream file;
    file.open("numbers.txt", std::ios::in);

    if (file.is_open())
    {
        // while (i < n && file >> arr[i])
        // {
        //     i++;
        // }
        while (file.good())
        {
            file >> arr[i];
            i++;
        }
        file.close();
    }

    file.open("numbers.txt", std::ios::out);
    for (int i = 0; i < n; i++)
    {
        file << ++arr[i] << " ";
    }
    file.close();
    
    return 0;
}