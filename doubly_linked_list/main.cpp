#include <iostream>

struct doubly_l
{
    int data;
    doubly_l *next;
    doubly_l *prev;
};

void push_first(doubly_l **begin, doubly_l **end, int d)
{
    doubly_l *q = new doubly_l;
    q->data = d;
    q->next = q->prev = nullptr;
    *begin = *end = q;
}

void push_begin(doubly_l **begin, int d)
{
    doubly_l *q = new doubly_l;
    q->data = d;
    q->next = *begin;
    q->prev = nullptr;
    (*begin)->prev = q;
    *begin = q;
}

void push_end(doubly_l **end, int d)
{
    doubly_l *q = new doubly_l;
    q->data = d;
    q->next = nullptr;
    q->prev = *end;
    (*end)->next = q;
    *end = q;
}

void view_begin(doubly_l *begin)
{
    doubly_l *q = begin;
    while (q)
    {
        std::cout << q->data << " ";
        q = q->next;
    }
    std::cout << std::endl;
}

void view_end(doubly_l *end)
{
    doubly_l *q = end;
    while (q)
    {
        std::cout << q->data << " ";
        q = q->prev;
    }
    std::cout << std::endl;
}

void delete_all(doubly_l **begin, doubly_l **end)
{
    doubly_l *q = (*begin)->next;
    while (q != *end)
    {
        int temp = q->data;
        q->prev->next = q->next;
        q->next->prev = q->prev;
        delete q;
        q = (*begin)->next;
    }
    delete *begin;
    *begin = nullptr;
    delete *end;
    *end = nullptr;
}

int main()
{
    doubly_l *begin = nullptr;
    doubly_l *end = nullptr;

    push_first(&begin, &end, 10);
    push_begin(&begin, 5);
    push_begin(&begin, 15);
    push_end(&end, 7);

    std::cout << "view_begin: " << std::endl;
    view_begin(begin);
    std::cout << "view_end: " << std::endl;
    view_end(end);

    delete_all(&begin, &end);

    return 0;
}