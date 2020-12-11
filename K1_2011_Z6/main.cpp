#include <iostream>
#include <algorithm>

void func(int *, int *, int);
void print(int);

int main()
{
    const int size = 5;
    int t1[size] = {1, 5, -1, 12, 6};
    int t2[size] = {2, 4, -6, 8, 10};

    std::for_each(t1, t1 + size, print);
    std::cout << std::endl;
    std::for_each(t2, t2 + size, print);
    
    printf("\n\n");
    func(t1, t2, size);

    std::for_each(t1, t1 + size, print);
    std::cout << std::endl;
    std::for_each(t2, t2 + size, print);

    return 0;
}

void print(int i) { std::cout << i << " "; }

void func(int *t1, int *t2, int n)
{
    for (int i = 0; i < n; i++)
    {
        if(t2[i] > t1[i])
        {
            int temp = t2[i];
            t2[i] = t1[i];
            t1[i] = temp;
        }
    }
}