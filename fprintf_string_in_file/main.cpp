#include <iostream>
#include <cstdio>
#include <string>

int main()
{
    FILE *pf = fopen("words.txt", "w");

    const int n = 5;

    std::string str_arr[n] = {"hello", "world", "github", "lol", "lul"};

    if(pf)
    {
        for (int i = 0; i < n; i++)
        {
            fprintf(pf, "%s\n", str_arr[i].c_str());
        }
        fclose(pf);
    }

    return 0;
}