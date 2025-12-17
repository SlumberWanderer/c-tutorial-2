#include "roots.h"

double bisect(double a, double b, func_t f, double eps)
{
    while (fabs(b - a) > eps)
    {
        double c = (a + b) / 2.0;
        if (f(a) * f(c) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    }
    return (a + b) / 2.0;
}

double newton(double x, func_t f, func_t df, int max_iter, double eps)
{
    int iter = 0;
    double x0;
    
    do {
        x0 = x;
        double div = df(x0);
        if (fabs(div) < 1e-9) break;
        
        x = x0 - f(x0) / div;
        iter++;
    } while (fabs(x - x0) > eps && iter < max_iter);

    return x;
}

double chord(double a, double b, func_t f, double eps)
{
    double x1 = a;
    double x2 = b;
    double x = 0;
    double x0;

    do {
        x0 = x;
        x = x1 - f(x1) * (x2 - x1) / (f(x2) - f(x1));

        if (f(x1) * f(x) < 0)
        {
            x2 = x;
        }
        else
        {
            x1 = x;
        }
        
        if (x0 == 0 && x != 0) x0 = x + eps * 10.0; 

    } while (fabs(x - x0) > eps);

    return x;
}

double equation(double x)
{
    return sqrt(x) - cos(0.387 * x);
}

double derivative(double x)
{
    return (1.0 / (2.0 * sqrt(x))) + (0.387 * sin(0.387 * x));
}
