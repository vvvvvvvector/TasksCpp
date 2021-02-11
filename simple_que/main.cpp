#include <iostream>

struct que
{
    int data;
    que *next;
};

void push(que **begin, que **end, int d)
{
    que *q = new que;
    q->data = d;
    q->next = nullptr;
    if (*begin == nullptr)
    {
        *begin = *end = q;
    }
    else
    {
        (*end)->next = q;
        *end = q;
    }
}

void view(que *begin)
{
    que *q = begin;
    while (q)
    {
        std::cout << q->data << " ";
        q = q->next;
    }
    std::cout << std::endl;
}

void delete_all(que **begin)
{
    que *temp;
    while (*begin)
    {
        temp = *begin;
        *begin = (*begin)->next;
        delete temp;
    }
}

int main()
{
    que *begin = nullptr;
    que *end = nullptr;
    // for (int i = 0; i < 5; i++)
    // {
    //     int num;
    //     std::cin >> num;
    //     push(&begin, &end, num);
    // }

    push(&begin, &end, 6);
    push(&begin, &end, 10);
    push(&begin, &end, 11);

    std::cout << "que: " << std::endl;
    view(begin);

    delete_all(&begin);

    return 0;
}