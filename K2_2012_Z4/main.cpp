#include <iostream>
#include <cstring>

void func(const char *w1, const char *w2, char *w3)
{
    for (int i = 0; w1[i]; i++)
    {
        w3[i * 2] = w1[i];
        w3[i * 2 + 1] = w2[i];
    }
    w3[strlen(w1) * 2] = '\0';
}

int main()
{
    char *w1 = "abcd";
    char *w2 = "efghijk";

    char *w3 = new char[strlen(w1) * 2 + 1];

    func(w1, w2, w3);

    std::cout << w3;
    
    delete[] w3;
    return 0;
}