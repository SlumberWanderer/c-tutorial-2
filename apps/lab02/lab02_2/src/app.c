#include "app.h"

int main()
{
    double a = -5.0, b = 5.0, h = 0.1, x;

    printf("x\t\ty\n");

    for (x = a; x <= b; x += h)
    {
        double y;

        if (x < 0)
        {
            y = x - 2;
        }
        else if (x >= 0 && x <= 3)
        {
            y = fabs(x - 3) / (4 + x);
        }
        else
        {
            y = -x + 3;
        }

        printf("%.3f\t%.3f\n", x, y);
    }

    return 0;
}

