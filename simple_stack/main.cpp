#include <iostream>

struct stack
{
    int data;
    stack *next;
};

void push(stack **top, int d)
{
    stack *q = new stack;
    q->data = d;
    if (top == nullptr)
    {
        *top = q;
    }
    else
    {
        q->next = *top;
        *top = q;
    }
}

void view(stack *top)
{
    stack *q = top;
    while (q)
    {
        std::cout << q->data << std::endl;
        q = q->next;
    }
}

stack *delete_all(stack *top)
{
    stack *q = top;
    while (top != nullptr)
    {
        q = top;
        top = top->next;
        delete q;
    }
    return nullptr;
}

int main()
{
    stack *top = nullptr;
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        int num;
        std::cin >> num;
        push(&top, num);
    }
    
    std::cout << "stack: " << std::endl;
    view(top);

    delete_all(top);
    
    return 0;
}