#include <iostream>
#include <cstring>

class Person
{
private:
    char *name;
    int age;

public:
    void set_age(int a) { age = a; }
    int get_age() { return age; }

    void set_name(char *new_name)
    {
        int len = strlen(new_name);
        name = new char[len + 1];
        strcpy(name, new_name);
    }
    char *get_name() { return name; }

    void print()
    {
        printf("name = %s\nage = %d\n", name, age);
    }
};

int main()
{
    Person *p = new Person;
    Person *p1 = new Person;

    p->set_age(15);
    p->set_name("Vector");

    // p1 = p; ///!!!!!!!!!!!!!!!!

    p1->set_age(p->get_age());
    p1->set_name(p->get_name());

    p->print();
    p1->print();

    p->set_name("LUK");
    p1->set_name("qqqqq");

    p->print();
    p1->print();

    // Person p;
    // Person p1;

    // p.set_age(15);
    // p.set_name("Vector");

    // p1 = p;

    // p1.set_name("Vasya");

    // p1.print();
    // p.print();

    delete p;
    delete p1;

    return 0;
}