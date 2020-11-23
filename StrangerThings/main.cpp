#include <iostream>

void string_copy(const char *src, char *dst)
{
    int i = 0;
    for (; src[i] != '\0'; i++)
        dst[i] = src[i];
    dst[i] = '\0';
}

void string_copy2(const char *src, char *dst)
{
    while (*dst++ = *src++);
}

int main()
{
    char str1[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    // char str1[] = "Hello world";
    char str2[sizeof(str1) / sizeof(str1[0])];

    string_copy2(str1, str2);

    std::cout << str2;

    return 0;
}