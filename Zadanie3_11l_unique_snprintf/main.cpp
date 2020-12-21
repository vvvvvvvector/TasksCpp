#include <iostream>
#include <algorithm>

void print(int);

bool condition(int);

void action(int &);

void modify_array(int *, int, bool (*pcond)(int), void (*pact)(int &));

int main()
{
    const int size = 4;
    int arr[size] = {1234, 2311, 5556, 412};

    modify_array(arr, size, condition, action);

    std::for_each(arr, arr + size, print);

    return 0;
}

void modify_array(int *t1, int n, bool (*pcond)(int), void (*pact)(int &))
{
    for (int i = 0; i < n; i++)
    {
        if (pcond(t1[i]))
        {
            pact(t1[i]);
        }
    }
}

bool condition(int a)
{
    bool cond = true;
    int n = snprintf(NULL, 0, "%d", a);
    char *a_str = new char[n + 1];
    sprintf(a_str, "%d", a);
    
    std::sort(a_str, a_str + n);
    char *c = std::unique(a_str, a_str + n);

    if (c == a_str + n)
    {
        cond = false;
    }
    
    delete[] a_str;
    return cond;
}

void action(int &a)
{
    int n = snprintf(NULL, 0, "%d", a);
    char *a_str = new char[n + 1];
    sprintf(a_str, "%d", a);
    std::reverse(a_str, a_str + n);
    a = atoi(a_str);
    delete[] a_str;
}

void print(int i) { std::cout << i << " "; }