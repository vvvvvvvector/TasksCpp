#include <iostream>

int words_count(char *str)
{
    int count = 0;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] != ' ')
        {
            for (i;; i++)
            {
                if (str[i] == ' ')
                {
                    break;
                }
                else if (str[i] == '\0')
                {
                    i--;
                    break;
                }
            }
            count++;
        }
    }
    return count;
}

void func(char arr[][30], int n)
{
    int words_num = 0;
    int chars_num = 0;
    for (int i = 0; i < n; i++)
    {
        words_num += words_count(arr[i]);
        int len = 0;
        for (int j = 0; arr[i][j]; j++)
        {
            if(arr[i][j] == ' ')
            {
                continue;
            }
            else
            {
                len++;
            }
        }
        chars_num += len;
    }
    printf("liczba slow = %d\nliczba znakow = %d", words_num, chars_num);
}

int main()
{
    const int n = 3;
    const int m = 30;
    char tab[n][m] = {"Ale fajnie", "Zdobede 50 punktow", "z kolosa!!"};

    func(tab, n);

    return 0;
}