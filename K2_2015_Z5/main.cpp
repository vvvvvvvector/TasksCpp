#include <iostream>

struct Student
{
    int *oceny;
    int ilosc;
};

void func(Student *tab, int n)
{
    for (int i = 0; i < n; i++)
    {
        int srednia = 0;
        for (int j = 0; j < tab[i].ilosc; j++)
        {
            srednia += tab[i].oceny[j];
        }
        if (srednia / (double)tab[i].ilosc >= 4.0)
        {
            printf("%d - %f\n", i, srednia / (double)tab[i].ilosc);
        }
    }
}

int main()
{
    Student s1;
    s1.ilosc = 2;
    s1.oceny = new int[s1.ilosc]{5, 4};

    Student s2;
    s2.ilosc = 4;
    s2.oceny = new int[s2.ilosc]{3, 5, 2, 5};

    Student s3;
    s3.ilosc = 1;
    s3.oceny = new int[s3.ilosc]{5};

    Student *students = new Student[3]{s1, s2, s3};

    func(students, 3);

    delete[] s1.oceny;
    delete[] s2.oceny;
    delete[] s3.oceny;
    delete[] students;
    return 0;
}