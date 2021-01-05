#include <iostream>
#include <cstring>

void func(const char *s1, char *s2)
{
    for (int i = strlen(s1) - 1, k = 0; i >= 0; --i, ++k)
    {
        s2[k] = s1[i];
    }
    s2[strlen(s1)] = '\0';
}

int main()
{
    char *s1 = "Hello World";
    char *s2 = new char[strlen(s1) + 1];

    func(s1, s2);

    std::cout << s2;

    delete[] s2;
    return 0;
}