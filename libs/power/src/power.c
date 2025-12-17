#include "power.h"

double power_recursive(double x, int n)
{
    if (n == 0)
    {
        return 1.0;
    }

    if (n < 0)
    {
        return 1.0 / power_recursive(x, -n);
    }

    if (n % 2 == 0)
    {
        double half = power_recursive(x, n / 2);
        return half * half;
    }
    else
    {
        return x * power_recursive(x, n - 1);
    }
}

double power_iterative(double x, int n)
{
    double result = 1.0;
    long long exp = n;

    if (exp < 0)
    {
        x = 1.0 / x;
        exp = -exp;
    }

    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            result *= x;
        }
        x *= x;
        exp /= 2;
    }

    return result;
}
