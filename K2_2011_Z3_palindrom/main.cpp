#include <iostream>
#include <cstring>

//bool palindrom(char *str)
//{
//    char *reverse_str = new char[strlen(str)]{'\0'};
//    for (int i = strlen(str) - 1, k = 0; i >= 0; --i, ++k)
//    {
//        reverse_str[k] = str[i];
//    }
//    bool is_palidrom = reverse_str == str;
//    delete[] reverse_str;
//    return is_palidrom;
//}

bool palindrom_1(char *str)
{
    bool is_palindrom = true;
    for (int i = 0; str[i] && is_palindrom; i++)
    {
        if (str[i] != str[strlen(str) - 1 - i])
        {
            is_palindrom = false;
        }
    }
    return is_palindrom;
}

int main()
{
    char *str = "anna";
    char *str1 = "12321";
    char *str2 = "123";

    std::cout << palindrom_1(str) << std::endl;
    std::cout << palindrom_1(str1) << std::endl;
    std::cout << palindrom_1(str2) << std::endl;

    return 0;
}