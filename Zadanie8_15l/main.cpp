#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    std::string data = "Ala 12 162.527 52.2857";
    // std::getline(std::cin, data);

    int n = data.find(' ');
    std::string name = data.substr(0, n);
    int n1 = data.find(' ', n + 1);
    int age = stoi(data.substr(n + 1, n1 - n - 1));
    int n2 = data.find(' ', n1 + 1);
    double height = stod(data.substr(n1 + 1, n2 - n1 - 1));
    int n3 = data.find('\n', n2 + 1);
    double weight = stod(data.substr(n2 + 1, n3 - n2 - 1));

    std::cout << name << std::endl;
    std::cout << std::hex << age << std::endl;
    std::cout << std::setprecision(5) << height << std::endl;
    std::cout << std::setprecision(5) << weight << std::endl;

    return 0;
}