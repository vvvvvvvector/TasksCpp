#include <iostream>
#include <cstring>

char *hello(char *imie, char *nazwisko)
{
    int imie_len = 0;
    int nazwisko_len = 0;

    while (imie[imie_len])
    {
        imie_len++;
    }

    while (nazwisko[nazwisko_len])
    {
        nazwisko_len++;
    }

    if (imie[imie_len - 1] == 'a')
    {
        char *result = new char[14 + imie_len + nazwisko_len + 2]{'S', 'z', 'a', 'n', 'o', 'w', 'n', 'a', ' ', 'P', 'a', 'n', 'i', ' '};
        for (int i = 14, k = 0; k < imie_len; i++, k++)
        {
            result[i] = imie[k];
        }
        result[14 + imie_len] = ' ';
        for (int i = 14 + imie_len + 1, k = 0; k < nazwisko_len; i++, k++)
        {
            result[i] = nazwisko[k];
        }
        // result[14 + imie_len + nazwisko_len + 1] = '\0'; ???
        return result;
    }
    else
    {
        char *result = new char[13 + imie_len + nazwisko_len + 2]{'S', 'z', 'a', 'n', 'o', 'w', 'n', 'y', ' ', 'P', 'a', 'n', ' '};
        for (int i = 13, k = 0; k < imie_len; i++, k++)
        {
            result[i] = imie[k];
        }
        result[13 + imie_len] = ' ';
        for (int i = 13 + imie_len + 1, k = 0; k < nazwisko_len; i++, k++)
        {
            result[i] = nazwisko[k];
        }
        // result[13 + imie_len + nazwisko_len + 1] = '\0'; ???
        return result;
    }
}

int main()
{
    char *male = hello("Viktar", "Lul");
    char *female = hello("Katya", "Some");

    std::cout << male << '\n'
              << male[strlen(male) - 1] << std::endl;
    std::cout << female << '\n'
              << female[strlen(female) - 1];

    delete[] male;
    delete[] female;
    return 0;
}