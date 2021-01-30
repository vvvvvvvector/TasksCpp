#include <iostream>
#include <cstdio>
#include <string>

int main()
{
    FILE *fp = fopen("word.txt", "r");

    std::string arr[200];
    int n = 0;

    if (fp)
    {
        char str[200] = {0};
        while (fscanf(fp, "%s", str) > 0)
        {
            arr[n].assign(str);
            n++;
        }
        fclose(fp);
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}