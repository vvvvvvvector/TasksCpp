#include <iostream>

int main()
{
    double a1, b1, c1, a2, b2, c2, w, wx, wy;
    std::cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    w = a1 * b2 - a2 * b1;
    wx = c1 * b2 - c2 * b1;
    wy = a1 * c2 - a2 * c1;

    printf("%.3fx + %.3fy = %.3f\n%.3fx + %.3fy = %.3f\n", a1, b1, c1, a2, b2, c2);

    if (w)
    {
        double x = wx / w; 
        double y = wy / w; 
        printf("w != 0, wiec uklad ma dokladnie jedno rozwiazanie\nx = %f\ny = %f", x, y);
    }
    else if (w == 0 && wx == 0 && wy == 0)
    {
        printf("w = %.0f wx = %.0f wy = %.0f\nwiec uklad rownan ma nieskonczenie wiele rozwiazan", w, wx, wy);
    }
    else // (w == 0 && (wx != 0 || wy != 0))
    {
        printf("w = %.0f wx = %.0f wy = %.0f\nwiec uklad rownan jest sprzeczny i nie ma rozwiazan", w, wx, wy);
    }
    
    return 0;
}
