#include <iostream>
#include <fstream>

int main()
{
    std::ifstream kod;
    kod.open("main.cpp", std::ios::in);

    // std::string buf;
    char buf[255] = {'\0'};

    if (kod.is_open())
    {
        while (kod.good())
        {
            kod.getline(buf, 254, '\n');
            //std::getline(kod, buf, '\n');
            std::cout << buf << std::endl;
        }
    }

    return 0;
}