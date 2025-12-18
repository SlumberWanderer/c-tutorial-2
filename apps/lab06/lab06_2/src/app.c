#include "app.h"


int main()
{
    double eps = 0.001;
    double start = 0.1;
    double end = 20.0;
    double step = 0.5;

    printf("Equation: sqrt(x) - cos(0.387x) = 0\n");
    printf("Range: [%.1lf; %.1lf], step: %.1lf\n\n", start, end, step);

    double x = start;
    while (x < end)
    {
        double a = x;
        double b = x + step;
        
        if (equation(a) * equation(b) < 0)
        {
            printf("Interval [%.2lf, %.2lf]:\n", a, b);
            
            double r1 = bisect(a, b, equation, eps);
            double r2 = chord(a, b, equation, eps);
            double r3 = newton((a + b) / 2.0, equation, derivative, 100, eps);

            printf("  Bisect: %.3lf\n", r1);
            printf("  Chord:  %.3lf\n", r2);
            printf("  Newton: %.3lf\n\n", r3);
        }
        
        x += step;
    }

    return 0;
}


