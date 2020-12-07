#include <iostream>
#include <math.h>

int main()
{
    int Ax, Ay, Bx, By, Cx, Cy;
    std::cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;

    double AB = sqrt(pow(Bx - Ax, 2) + pow(By - Ay, 2));
    double AC = sqrt(pow(Cx - Ax, 2) + pow(Cy - Ay, 2));
    double BC = sqrt(pow(Cx - Bx, 2) + pow(Cy - By, 2));

    printf("AB = %f, AC = %f, BC = %f\n", AB, AC, BC);

    double max, min;
    if (AB > AC)
    {
        if (AB > BC)
        {
            max = AB;
            min = AC;
        }
        else
        {
            max = BC;
            min = AC;
        }
    }
    else
    {
        if (AC > BC)
        {
            max = AC;
            min = AB;
        }
        else
        {
            max = BC;
            min = AB;
        }
    }

    printf("max = %f, min = %f\nmin/max = %f", max, min, min / max);

    return 0;
}