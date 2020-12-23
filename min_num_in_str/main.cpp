#include <iostream>

int func(char *str)
{
    char num[30] = {'\0'};
    for (int i = 0, k = 0; str[i]; i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            num[k] = str[i];
            k++;
        }
    }
    for (int i = 0; num[i]; i++)
    {
        for (int j = i + 1; num[j]; j++)
        {
            if(num[i] > num[j])
            {
                char temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    if(num[0] == '0')
    {
        char temp = num[0];
        num[0] = num[1];
        num[1] = temp;
    }
    return atoi(num);
}

int main()
{
    char *str = "A02m3";
    char *str1 = "A120m3";

    std::cout << func(str) << std::endl;
    std::cout << func(str1); 

    return 0;
}