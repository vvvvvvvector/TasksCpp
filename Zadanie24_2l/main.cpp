#include <iostream>

int main()
{
    int x1, y1, x2, y2;
    double k, b;
    std::cin >> k >> b;
    int width = 1000, height = 1000;
    x1 = -500;
    x2 = 500;
    y1 = k * x1 + b;
    y2 = k * x2 + b;

    std::cout << "<!DOCTYPE html>\n<html>\n<body>\n";
    std::cout << "<svg height=\"" << height << "\" width=\"" << width << "\">" << std::endl;
    std::cout << "<line x1=\"" << 0 << "\" y1=\"" << 500 << "\" x2=\"" << 1000 << "\" y2=\"" << 500 << "\" style=\"stroke:black\" />" << std::endl;
    std::cout << "<line x1=\"" << 500 << "\" y1=\"" << 0 << "\" x2=\"" << 500 << "\" y2=\"" << 1000 << "\" style=\"stroke:black\" />" << std::endl;
    std::cout << "<line x1=\"" << 500 + x1 << "\" y1=\"" << 500 - y1 << "\" x2=\"" << 500 + x2 << "\" y2=\"" << 500 - y2 << "\" style=\"stroke:blue\" />" << std::endl;
    std::cout << "</svg>" << std::endl;
    std::cout << "</body>\n</html>";

    return 0;
}
