#include <iostream>
#include <cstdio>

void write_array(const char *str, float *arr, int n)
{
    FILE *pf = fopen(str, "wb");
    fwrite(arr, sizeof(float), n, pf);
    fclose(pf);
}

void read_array(const char *str, float *arr, int n)
{
    FILE *pf = fopen(str, "rb");
    fread(arr, sizeof(float), n, pf);
    fclose(pf);
}

int main()
{
    const int n = 4;
    float arr[n] = {123.12, 3.14, 2.28, 11.231};
    float read_arr[n];

    write_array("numbers.txt", arr, n);
    read_array("numbers.txt", read_arr, n);

    for (int i = 0; i < n; i++)
    {
        std::cout << read_arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}