#include <iostream>
#include <ctime>

class Student
{
    int index;
    int wynik1;
    int wynik2;
    int poprawa;

public:
    void set_wynik1(int wynik1) { this->wynik1 = wynik1; }
    int get_wynik1() { return this->wynik1; }

    void set_wynik2(int wynik2) { this->wynik2 = wynik2; }
    int get_wynik2() { return this->wynik2; }

    void set_poprawa(int poprawa) { this->poprawa = poprawa; }
    int get_poprawa() { return this->poprawa; }

    Student(int index, int wynik1, int wynik2)
    {
        this->index = index;
        this->wynik1 = wynik1;
        this->wynik2 = wynik2;
    }
};

void func(Student *students, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (students[i].get_wynik1() + students[i].get_wynik2() > 50)
        {
            sum += students[i].get_wynik1() + students[i].get_wynik2();
        }
        else
        {
            int max = students[i].get_wynik1() > students[i].get_wynik2() ? students[i].get_wynik1() : students[i].get_wynik2();
            while (max + students[i].get_poprawa() < 51)
            {
                students[i].set_poprawa(rand() % 51);
            }
            sum += 51;
        }
    }
    double srednia = sum / (double)n;
    if (srednia > 50.0 && srednia < 60.0)
    {
        std::cout << "Srednia ocena - dostateczna" << std::endl;
    }
    else if (srednia > 60.0 && srednia <= 70.0)
    {
        std::cout << "Srednia ocena - dostateczna+" << std::endl;
    }
    else if (srednia > 70.0 && srednia <= 80.0)
    {
        std::cout << "Srednia ocena - dobra" << std::endl;
    }
    else if (srednia > 80.0 && srednia <= 90.0)
    {
        std::cout << "Srednia ocena - dobra+" << std::endl;
    }
    else
    {
        std::cout << "Srednia ocena - bardzo dobra" << std::endl;
    }
}

int main()
{
    srand(time(NULL));
    
    const int n = 3;

    Student students[n] = {Student(1, 40, 40), Student(2, 35, 35), Student(3, 40, 10)};

    func(students, n);

    return 0;
}