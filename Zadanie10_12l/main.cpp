#include <iostream>
#include <algorithm>
#include <ctime>

class Task
{
public:
    char *nazwa;
    int priorytet;

    void (*run)(const char *, int);

    Task(char *nazwa, int priorytet)
    {
        this->nazwa = nazwa;
        this->priorytet = priorytet;
    }
};

void print(const char *nazwa, int priorytet)
{
    printf("nazwa - %s  priorytet - %d\n", nazwa, priorytet);
}

void print_task(Task *task)
{
    task->run(task->nazwa, task->priorytet);
}

bool predicate(Task *t1, Task *t2)
{
    return t1->priorytet < t2->priorytet;
}

int main()
{
    srand(time(NULL));
    
    const int n = 3;
    Task **task = new Task *[n];

    for (int i = 0; i < n; i++)
    {
        task[i] = new Task("nazwa", rand());
        task[i]->run = print;
    }
    
    std::for_each(task, task + n, print_task);

    std::sort(task, task + n, predicate);
    std::cout << std::endl;

    std::for_each(task, task + n, print_task);

    return 0;
}