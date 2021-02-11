#include <iostream>

class stack
{
    int data;
    stack *next;

public:
    int pop_data() { return this->data; }
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
        while (top)
        {
            q = top;
            top = top->next;
            delete q;
        }
        return nullptr;
    }
    int stack_size(stack *top)
    {
        stack *q = top;
        int size = 0;
        while (q)
        {
            size++;
            q = q->next;
        }
        return size;
    }
};

int main()
{
    stack *top = nullptr;
    stack my_stack;

    my_stack.push(&top, 5);
    my_stack.push(&top, 6);
    my_stack.push(&top, 7);
    my_stack.push(&top, 8);
    my_stack.push(&top, 10);

    std::cout << "my_stack: " << std::endl;
    my_stack.view(top);

    my_stack.delete_all(top);

    return 0;
}