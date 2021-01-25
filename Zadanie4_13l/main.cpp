#include <iostream>
#include <cstring>

class String
{
    char *str;
    int len;

public:
    String()
    {
        this->str = "";
        this->len = 0;
    }
    String(const char *str)
    {
        this->str = new char[strlen(str) + 1]{'\0'};
        strcpy(this->str, str);
        this->len = strlen(this->str);
    }
    String(const String &str)
    {
        delete[] this->str;
        this->str = new char[strlen(str.str) + 1]{'\0'};
        strcpy(this->str, str.str);
        this->len = str.len;
    }
    ~String()
    {
        delete[] this->str;
    }
    void clear()
    {
        delete[] this->str;
        this->len = 0;
    }
    bool empty() const
    {
        return this->str == nullptr || this->len == 0;
    }
    int length() const
    {
        return this->len;
    }
    const char *cstring()
    {
        return this->str; // ?
    }
    void append(const char *str_plus)
    {
        int plus_len = 0;
        while (str_plus[plus_len])
            plus_len++;
        char *new_str = new char[this->len + plus_len + 1]{'\0'};
        for (int i = 0; this->str[i]; i++)
        {
            new_str[i] = this->str[i];
        }
        for (int i = 0; str_plus[i]; i++)
        {
            new_str[this->len + i] = str_plus[i];
        }
        delete[] this->str;
        this->str = new char[this->len + plus_len + 1]{'\0'};
        this->len += plus_len;
        for (int i = 0; new_str[i]; i++)
        {
            this->str[i] = new_str[i];
        }
        delete[] new_str;
    }
    void print() const
    {
        std::cout << this->str << std::endl;
    }
    String &operator=(const String &str)
    {
        delete[] this->str;
        this->str = new char[strlen(str.str) + 1]{'\0'};
        strcpy(this->str, str.str);
        this->len = str.len;
        return *this;
    }
};

int main()
{
    String str = String("Hello");

    String str1 = str;

    str1.append(" world");

    str.print();
    str1.print();
    std::cout << str1.length() << std::endl;

    return 0;
}