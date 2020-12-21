#include <iostream>
#include <algorithm>
#include <cstring>

void print(const char *str) { std::cout << str << " "; }

int main()
{
    char str[] = "ala;ma kota;i;dwa psy";
    char *arr[20] = {nullptr};

    int len = 0;
    char *token = std::strtok(str, ";");
    while (token)
    {
        arr[len++] = token;
        token = std::strtok(NULL, ";");
    }

    std::for_each(arr, arr + len, print);

    return 0;
}