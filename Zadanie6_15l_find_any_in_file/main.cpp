#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::fstream file;
    file.open("text.txt", std::ios::in);

    if (file.is_open())
    {
        while (file.good())
        {
            std::string str;
            file >> str;
            if(str.find("any") != std::string::npos)
            {
                std::cout << str << std::endl;
            }
        }
        file.close();
    }
    
    
    return 0;
}