#include <iostream>
#include <string>
#include <fstream>

struct City
{
    std::string miasto;
    int ilosc;
    double x, y;
};

std::ostream &operator<<(std::ostream &os, City &c)
{
    os << "City: " << c.miasto << " ilosc: " << c.ilosc << " x: " << c.x << " y: " << c.y;
    return os;
}

int main()
{
    std::fstream file;
    file.open("data.txt", std::ios::in);

    const int n = 3;
    std::string tab[n];
    City data[n];
    int i = 0;

    if (file.is_open())
    {
        while (file.good())
        {
            file >> tab[i];
            i++;
        }
        file.close();
    }

    for (int i = 0; i < n; i++)
    {
        int n = tab[i].find(',');
        data[i].miasto = tab[i].substr(0, n);
        int n1 = tab[i].find(',', n + 1);
        data[i].ilosc = stoi(tab[i].substr(n + 1, n1 - n - 1));
        int n2 = tab[i].find(',', n1 + 1);
        data[i].x = stod(tab[i].substr(n1 + 1, n2 - n1 - 1));
        int n3 = tab[i].find('\n', n2 + 1);
        data[i].y = stod(tab[i].substr(n2 + 1, n3 - n2 - 1));
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << data[i] << std::endl;
    }

    std::ofstream wyj;
    wyj.open("data_bin.txt", std::ios::out);

    if (wyj.is_open())
    {
        for (int i = 0; i < n; i++)
        {
            wyj.write(data[i].miasto.c_str(), 20);
            wyj.write((char *)&data[i].ilosc, 4);
            wyj.write((char *)&data[i].x, 8);
            wyj.write((char *)&data[i].y, 8);
        }
        wyj.close();
    }

    std::ifstream wej;
    wej.open("data_bin.txt", std::ios::in);

    if (wej.is_open())
    {
        for (int i = 0; i < n; i++)
        {
            char str[21] = {0};
            wej.read(str, 20);
            std::cout << str << std::endl;

            int a;
            wej.read((char *)&a, 4);
            std::cout << a << std::endl;

            double x;
            wej.read((char *)&x, 8);
            std::cout << x << std::endl;

            double y;
            wej.read((char *)&y, 8);
            std::cout << y << std::endl;
        }
        wej.close();
    }

    return 0;
}