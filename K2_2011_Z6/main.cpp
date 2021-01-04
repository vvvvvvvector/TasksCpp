#include <iostream>

struct dane_osobowe
{
    char imie[50];
    char nazwisko[50];
    int wiek;
};

void najmlodszy(dane_osobowe *data, int n)
{
    int min = data[0].wiek;
    for (int i = 0; i < n; i++)
    {
        if (min > data[i].wiek)
        {
            min = data[i].wiek;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (min == data[i].wiek)
        {
            printf("imie: %s\nnazwisko: %s\nwiek: %d\n", data[i].imie, data[i].nazwisko, data[i].wiek);
        }
    }
}

int main()
{
    dane_osobowe osoba1 = {"Lil", "Krystalll", 21};
    dane_osobowe osoba2 = {"OG", "Buda", 26};
    dane_osobowe osoba3 = {"Robert", "Platina", 21};
    dane_osobowe osoba4 = {"Aarne", "AALanguage", 23};

    const int n = 4;
    dane_osobowe data[n] = {osoba1, osoba2, osoba3, osoba4};

    najmlodszy(data, n);

    return 0;
}