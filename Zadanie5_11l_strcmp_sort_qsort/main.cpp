#include <iostream>
#include <algorithm>
#include <cstring>

void print(const char *str) { std::cout << str << std::endl; }

bool comp_sort(const char *s1, const char *s2)
{
    return std::strcmp(s1, s2) > 0;
}

int comp_qsort(const void *a, const void *b)
{
    char *pa = *(char **)a;
    char *pb = *(char **)b;
    return pa[strlen(pa) - 1] - pb[strlen(pb) - 1]; //last letter comp
}

int main()
{
    const int n = 4;
    const char *strings[n] = {"alf", "bartea", "clowo", "zosiz"};

    std::for_each(strings, strings + n, print);
    std::cout << std::endl;

    // std::sort(strings, strings + n, comp_sort);
    std::qsort(strings, n, sizeof(strings[0]), comp_qsort);

    std::for_each(strings, strings + n, print);

    return 0;
}