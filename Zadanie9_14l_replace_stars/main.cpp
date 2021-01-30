#include <iostream>
#include <cstdio>

void func(const char *path, const char *word)
{
    FILE *pf = fopen(path, "r");

    std::string read_string;

    if (pf)
    {
        char str[200] = {0};
        while (fscanf(pf, "%s", str) > 0)
        {
            read_string.append(str);
            read_string.append(" ");
        }
        fclose(pf);
    }

    pf = fopen(path, "w");

    if (pf)
    {
        while(read_string.find("*****") != std::string::npos)
        {
            read_string.replace(read_string.find("*****"), 5, word).c_str();
        }
        fprintf(pf, "%s", read_string.c_str());
        fclose(pf);
    }
}

int main()
{
    func("words.txt", "Vitya");

    return 0;
}