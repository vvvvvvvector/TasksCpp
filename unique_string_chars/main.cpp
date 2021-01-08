#include <iostream>
#include <string>

std::string solve(std::string a, std::string b) 
{
    std::string result;
    for (int i = 0; i < a.length(); i++)
    {
        bool in_b = false;
        for (int j = 0; j < b.length(); j++)
        {
            if(a[i] == b[j])
            {
                in_b = true;
            }
        }
        if(!in_b)
        {
            result.push_back(a[i]);
        }
    }
    for (int i = 0; i < b.length(); i++)
    {
        bool in_a = false;
        for (int j = 0; j < a.length(); j++)
        {
            if(b[i] == a[j])
            {
                in_a = true;
            }
        }
        if(!in_a)
        {
            result.push_back(b[i]);
        }
    }
    return result;
}

int main()
{
    std::cout << solve("xyabb", "xzca") << std::endl;   
    
    return 0;
}