#include <iostream>
#include <math.h>

int bin2dec(char str[])
{
    int v = 0;
    int l = 0;
    while(str[l]) l++; 
    for (int i = 0; str[i]; i++)
    {
        v += (str[i] - '0') << (l - i - 1);
    }
    return v;
}

int main()
{
    char str[] = "00001010";

    std::cout << bin2dec(str);

    return 0;
}
