#include <iostream>
#include <ctime>
#include <fstream>
#include <iomanip>

int main()
{
    const std::time_t now = std::time(nullptr);
    const std::tm calendar_time = *std::localtime(std::addressof(now));

    int year = calendar_time.tm_year + 1900;
    int m = calendar_time.tm_mon + 1;
    int d = calendar_time.tm_mday;
    int hh = calendar_time.tm_hour;
    int mm = calendar_time.tm_min;
    int ss = calendar_time.tm_sec;

    std::cout << std::setfill('0') << std::setw(2) << d << '-' << std::setw(2) << m << '-' << std::setw(4) << year << ' ' << std::setw(2) << hh << ':' << std::setw(2) << mm << ':' << std::setw(2) << ss << std::endl;

    std::fstream file;
    file.open("date.txt", std::ios::out);

    if (file.is_open())
    {
        file << "current date and time: " << std::setfill('0') << std::setw(2) << d << '-' << std::setw(2) << m << '-' << std::setw(4) << year << ' ' << std::setw(2) << hh << ':' << std::setw(2) << mm << ':' << std::setw(2) << ss << std::endl;
    }
    file.close();

    return 0;
}