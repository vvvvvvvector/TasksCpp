#include <iostream>

void func(char *, int *);

int main()
{
    const int n = 11;
    char str[] = "Ala ma kota";
    int occ[n];

    func(str, occ);

    for (int i = 0; i < n; i++)
    {
        std::cout << occ[i] << " ";
    }

    return 0;
}

void func(char *str, int *occ)
{
    int counter = 0;
    for (int i = 0; str[i]; i++)
    {
        char c = str[i];
        for (int j = 0; str[j]; j++)
        {
            if(c == str[j] || c + 32 == str[j] || c - 32 == str[j])
            {
                counter++;
            }
        }
        occ[i] = counter;
        counter = 0;
    }
}