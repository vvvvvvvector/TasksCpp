#include <iostream>

const char sa[6] = {'a', 'e', 'y', 'i', 'o', 'u'};
const char sp[20] = {'q', 'w', 'r', 't', 'p', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'z', 'x', 'c', 'v', 'b', 'n', 'm'};

void func(const char *str, int &num_sa, int &num_sp)
{
    num_sa = 0;
    num_sp = 0;
    //count num_sa
    for (int i = 0; str[i]; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (str[i] == sa[j] || str[i] == sa[j] - 32)
            {
                num_sa++;
            }
        }
    }
    //count num_sp
    for (int i = 0; i < str[i]; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (str[i] == sp[j] || str[i] == sp[j] - 32)
            {
                num_sp++;
            }
        }
    }
}

int main()
{
    char str[255] = {'\0'};
    std::cin.getline(str, 255);
    int num_sa, num_sp;

    std::cout << str << std::endl;

    func(str, num_sa, num_sp);

    std::cout << "num_sa: " << num_sa << "\n" << "num_sp: " << num_sp << std::endl;

    return 0;
}