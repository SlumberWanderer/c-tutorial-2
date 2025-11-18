#include "app.h"

int main()
{
    double a = -10.0, b = 10.0, hx = 0.2, c = -3.0,  d = 3.0,  hy = 0.3;

    double x, y, z;

    printf("y\\x\t");

    for (x = a; x <= b; x += hx)
    {
        printf("%.3f\t", x);
    }

    printf("\n");

    for (y = c; y <= d; y += hy)
    {
        printf("%.3f\t", y);

        for (x = a; x <= b; x += hx)
        {
            z = exp(x - y) * cos(x + y);
            printf("%.3f\t", z);
        }

        printf("\n");
    }

    return 0;
}


