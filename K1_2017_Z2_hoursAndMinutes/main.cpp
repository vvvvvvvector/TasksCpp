#include <iostream>

int main()
{
    int odl, sp, hours, minutes;

    std::cin >> odl >> sp >> hours >> minutes;

    double t = odl / (double)sp + ((odl / 200) * 10) / 60.0;

    int ht = (int)t;
    int min = (t - ht) * 60;

    printf("hours = %d, minutes = %d\n", ht, min);
    printf("start: %d h, %d min\n", hours, minutes);

    hours += ht;
    hours %= 24;

    if (minutes + min >= 60)
    {
        hours++;
        minutes += min;
        minutes %= 60;
    }
    else
    {
        minutes += min;
    }

    printf("end: %d h, %d min", hours, minutes);

    return 0;
}