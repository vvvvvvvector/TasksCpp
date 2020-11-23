#include <iostream>

void cyfry(unsigned int);
void cyfry(unsigned int, char[]);

int main()
{
    char str[11] = {0};
    
    cyfry(12340, str);

    printf("%s", str);
    
    return 0;
}

void cyfry(unsigned int num, char str[])
{
    int len = 0;
    while (num)
    {
        str[len++] = num % 10 + '0'; // ???
        num /= 10;
    }
    str[len] = '\0';  
}

void cyfry(unsigned int num)
{
    while (num)
    {
        printf("%d\n", num % 10);
        num /= 10;
    }
}
