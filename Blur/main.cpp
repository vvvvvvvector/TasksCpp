#include <iostream>
#include <cstdlib>
#include <ctime>

void conv(double begin[][4], double end[][4], int row, int col)
{
    for (int x = 0; x < row; x++)
    {
        for (int y = 0; y < col; y++)
        {
            end[x][y] = begin[x][y];
            if (x - 1 >= 0)
            {
                end[x][y] += begin[x - 1][y];
            }
            if (x + 1 < row)
            {
                end[x][y] += begin[x + 1][y];
            }
            if (y - 1 >= 0)
            {
                end[x][y] += begin[x][y - 1];
            }
            if (y + 1 < col)
            {
                end[x][y] += begin[x][y + 1];
            }
            end[x][y] /= 5;
        }
    }
}

int main()
{
    srand(time(NULL));

    const int row = 4;
    const int col = 4;

    double begin[row][col];
    double end[row][col] = {0};

    for (int x = 0; x < row; x++)
    {
        for (int y = 0; y < col; y++)
        {
            begin[x][y] = rand() % 255;
        }
    }

    for (int x = 0; x < row; x++)
    {
        for (int y = 0; y < col; y++)
        {
            printf("%.3f ", begin[x][y]);
        }
        printf("\n");
    }

    printf("\n");

    conv(begin, end, row, col);

    for (int x = 0; x < row; x++)
    {
        for (int y = 0; y < col; y++)
        {
            printf("%.3f ", end[x][y]);
        }
        printf("\n");
    }

    return 0;
}