#include <iostream>
#include <cstring>

void func(char *str)
{
    char *result = new char[strlen(str)]{'\0'};
    int result_i = 0;

    for (int i = 0; str[i]; i++)
    {
        int counter = 0;
        for (int j = 0; str[j]; j++)
        {
            if (str[i] == str[j])
            {
                counter++;
            }
        }
        if (counter > 1)
        {
            bool in_result = false;
            for (int k = 0; result[k]; k++)
            {
                if (str[i] == result[k])
                {
                    in_result = true;
                    break;
                }
            }
            if (!in_result)
            {
                result[result_i] = str[i];
                result_i++;
            }
        }
    }

    for (int i = 0; result[i]; i++)
    {
        std::cout << result[i] << " ";
    }

    delete[] result;
}

int main()
{
    char *str = "a bea1bbb1a";

    func(str);

    return 0;
}