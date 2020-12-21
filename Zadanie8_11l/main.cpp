#include <iostream>

struct Rect
{
    double a, b;
};

// void print_vec(Rect r)
// {
//     printf("a = %f b = %f\n", r.a, r.b);
// }

// double area(Rect r)
// {
//     return r.a * r.b;
// }

void print_vec(Rect *r)
{
    printf("a = %f b = %f\n", (*r).a, (*r).b);
}

double area(Rect *r)
{
    // return (*r).a * (*r).b;
    return r->a * r->b;
}

int main()
{
    // Rect r = {2.0, 12.0};
    Rect *r = new Rect{2.0, 12.0};

    print_vec(r);
    std::cout << area(r);

    // print_vec(r);
    // std::cout << area(r);
    delete r;
    return 0;
}