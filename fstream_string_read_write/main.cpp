#include <iostream>
#include <fstream>

int main()
{
    std::fstream file;
    file.open("words.txt", std::ios::in);

    const int n = 6;
    std::string tab[n];
    int i = 0;

    if (file.is_open())
    {
        while (i < n && file >> tab[i])
        {
            i++;
        }
        // while (file.good())
        // {
        //     file >> tab[i];
        //     i++;
        // }
        file.close();
    }

    file.open("words.txt", std::ios::out);
    for (int i = 0; i < n; i++)
    {
        file << tab[i].append("_new") << std::endl;
    }

    return 0;
}