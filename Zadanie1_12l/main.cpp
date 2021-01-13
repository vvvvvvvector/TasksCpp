#include <iostream>
#include <cmath>
#include <ctime>

class Point
{
private:
    float x, y;

public:
    void setX(float x) { this->x = x; }
    void setY(float y) { this->y = y; }

    float getX() const { return x; }
    float getY() const { return y; }

    void print()
    {
        std::cout << "x = " << x << "  y = " << y << std::endl;
    }
};

void copy_tab(const Point *points1, Point *points2, int n)
{
    for (int i = 0; i < n; i++)
    {
        points2[i].setX(points1[i].getX());
        points2[i].setY(points1[i].getY());
    }
}

double dist(Point p1, Point p2)
{
    double dx = pow(p1.getX() - p2.getX(), 2);
    double dy = pow(p1.getY() - p2.getY(), 2);
    return sqrt(dx + dy);
}

double func(const Point *points, int n)
{
    double min = dist(points[0], points[1]);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (min > dist(points[i], points[j]))
            {
                min = dist(points[i], points[j]);
            }
        }
    }
    return min;
}

int pointsInCircle(Point *points, int n, double a, double b, double r, Point **result, int max_n_result)
{
    int len = 0;
    for (int i = 0; i < n; i++)
    {
        if (pow(points[i].getX() - a, 2) + pow(points[i].getY() - b, 2) <= r * r)
        {
            result[len++] = &points[i];
        }
        if(len > max_n_result)
        {
            break;
        }
    }
    return len;
}

int main()
{
    srand(time(NULL));
    
    const int n = 10;
    Point arr[n];
    Point *result[n];

    for (int i = 0; i < n; i++)
    {
        arr[i].setX(rand() / (double)RAND_MAX);
        arr[i].setY(rand() / (double)RAND_MAX);
    }

    for (int i = 0; i < n; i++)
    {
        arr[i].print();
    }
    
    std::cout << std::endl;

    int len = pointsInCircle(arr, n, 0, 0, 1, result, n);

    for (int i = 0; i < len; i++)
    {
        result[i]->print();
    }

    return 0;
}