#include <iostream>
#include <cmath>

struct Osoba
{
    char nazwisko[50];
    int plec;
    int wiek;
};

void func(Osoba *arr, int n)
{
    int sredni_wiek = 0;
    for (int i = 0; i < n; i++)
    {
        sredni_wiek += arr[i].wiek;
    }

    sredni_wiek /= n;
    std::cout << "sredni wiek: " << sredni_wiek << std::endl;

    int min = fabs(sredni_wiek - arr[0].wiek);
    int index_osoba = 0;
    for (int i = 0; i < n; i++)
    {
        if (min > fabs(sredni_wiek - arr[i].wiek))
        {
            min = fabs(sredni_wiek - arr[i].wiek);
            index_osoba = i;
        }
    }

    for (int i = n; i >= 0 ; --i)
    {
        if (arr[index_osoba].wiek == arr[i].wiek)
        {
            std::cout << "nazwisko - " << arr[i].nazwisko << "\nwiek = " << arr[i].wiek;
            break;
        }
    }
}

int main()
{
    //Osoba os1 = {"Zhdan0", 1, 22};
    //Osoba os2 = {"Zhdan1", 0, 22};
    //Osoba os3 = {"Zhdan2", 1, 22};
    //Osoba os4 = {"Zhdan3", 0, 25};

    Osoba os1 = {"Zhdan0", 1, 15};
    Osoba os2 = {"Zhdan1", 0, 20};
    Osoba os3 = {"Zhdan2", 1, 14};
    Osoba os4 = {"Zhdan3", 0, 76};

    const int n = 4;
    Osoba arr[n] = {os1, os2, os3, os4};

    func(arr, n);

    return 0;
}