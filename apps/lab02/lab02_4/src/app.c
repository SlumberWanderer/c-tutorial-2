#include "app.h"

// Variant 29

int main()
{
    double a = -3.0, b = 5.0, h = 0.2, x;
    
    printf("x\t\ty\n");

    for (x = a; x <= b; x += h)
    {
        double y;

        if (x < -2)
        {
            y = exp(-x) * x;
        }
        else if (x >= 2 && x <= 4)
        {
            y = exp(2 - x) + exp(x);
        }
        else
        {
            y = 4 - x * exp(1 - 3 * x);
        }

        printf("%.3f\t%.3f\n", x, y);
    }

    return 0;
}
