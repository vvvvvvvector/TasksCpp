#include <iostream>

void func(unsigned char t, unsigned char s)
{
    unsigned char l = s << 4;
    unsigned char r = s >> 4;

    unsigned char newNum = l ^ r;

    int n = t % 8;
    unsigned char mask = 1 << n;
    newNum = newNum  ^ mask;

    std::cout << (int)newNum;
}

int main()
{
    func(214, 93);

    return 0;
}