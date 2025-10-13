#include "app.h"

///* Variant 1
//   sin(bx)
//   ------ * e^(-ax)
//     x
//   a = 2.1, b = 3.9, x = 0.1
//*/

int main()
{
    double a = 2.1, b = 3.9, x = 0.1;

    double t1 = sin(b * x);
    double t2 = exp(-a * x);

    double result = (t1 / x) * t2;

    printf("sin(%.3f * %.3f)\n------------------- * e^-(%.3f * %.3f) = %.3f\n", b, x, a, x, result);
    printf("%.3f\n", x);

    return 0;
}
