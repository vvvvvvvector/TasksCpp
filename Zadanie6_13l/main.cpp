#include <iostream>

typedef int NodeType;

class List
{
    int m_size;

public:
    struct Node
    {
        NodeType data;
        Node *next;
    };
    NodeType &at(int i)
    {
        Node *q = &top;
        for (int j = 0; j < i; j++)
        {
            q = q->next;
        }
        return q->data;
    }
    List()
    {
        m_size = 0;
        top.next = nullptr;
    }
    void append(NodeType i)
    {
        if (m_size == 0)
        {
            top.data = i;
            m_size++;
            top.next = nullptr;
        }
        else
        {
            Node *q = &top;
            while (q->next != nullptr)
            {
                q = q->next;
            }
            Node *nowy_element = new Node;
            nowy_element->next = nullptr;
            nowy_element->data = i;
            q->next = nowy_element;
            m_size++;
        }
    }
    int size()
    {
        return this->m_size;
    }

private:
    Node top;
};

int main()
{
    List list;
    list.append(5);
    list.append(3);
    list.append(4);
    list.append(1);

    for (int i = 0; i < list.size(); i++)
    {
        std::cout << list.at(i) << std::endl;
    }

    return 0;
}