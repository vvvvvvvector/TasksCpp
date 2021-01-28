#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>

struct City
{
    std::string nazwa_miasta;
    int ilosc;
    double dlugosc;
    double szerokosc;
};

int main()
{
    FILE *pf = fopen("csv.txt", "r");

    City city[3];
    std::string tab[3];
    char str[255] = {'\0'};
    int i = 0;

    if (pf)
    {
        while (fscanf(pf, "%s,%s,%s,%s", &str) > 0)
        {
            tab[i] = str;
            i++;
        }
        fclose(pf);
    }

    for (int i = 0; i < 3; i++)
    {
        int n = tab[i].find(',');
        city[i].nazwa_miasta = tab[i].substr(0, n);
        int n1 = tab[i].find(',', n + 1);
        city[i].ilosc = stoi(tab[i].substr(n + 1, n1 - n - 1), NULL);
        int dlg = tab[i].find(',', n1 + 1);
        city[i].dlugosc = stod(tab[i].substr(n1 + 1, dlg - n1 - 1), NULL);
        int szer = tab[i].find(',', dlg + 1);
        city[i].szerokosc = stod(tab[i].substr(dlg + 1, szer - dlg - 1), NULL);
    }

    for (int i = 0; i < 3; i++)
    {   
        std::cout << city[i].nazwa_miasta << " " << city[i].ilosc << " "<< city[i].dlugosc << " " << city[i].szerokosc << std::endl;
    }
    
    return 0;
}