#include <iostream>

class Identifier
{
    unsigned int m_id;

public:
    Identifier()
    {
        m_id = 0;
        std::cout << "constuctor" << std::endl; 
    }
    ~Identifier()
    {
        std::cout << "destructor" << std::endl;
    }
    unsigned int id()
    {
        m_id++;
        return m_id;
    }
};

int main()
{
    Identifier id;
    std::cout << id.id() << std::endl;
    std::cout << id.id() << std::endl;
    std::cout << id.id() << std::endl;

    return 0;
}