#include <iostream>
#include <cstring>

void func(char *napis, char *sms)
{
    for (int i = 0, j = 0; napis[i]; i++)
    {
        if (napis[i] == ' ')
        {
            sms[j] = napis[i + 1] - 32;
            i++;
            j++;
        }
        else
        {
            sms[j] = napis[i];
            j++;
        }
    }
}

int main()
{
    char *napis = "It is not a bug, it is a feature";
    char *sms = new char[strlen(napis)]{'\0'};

    func(napis, sms);

    std::cout << sms;

    delete[] sms;
    return 0;
}