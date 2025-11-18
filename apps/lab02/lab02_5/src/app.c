#include "app.h"

// Variant 29

int main()
{
    double a = -4.0, b = 4.0, hx = 0.1, c = -4.0, d = 4.0, hy = 0.1;
    
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
            z = cbrt(x * y);
            printf("%.3f\t", z);
        }

        printf("\n");
    }

    return 0;
}
