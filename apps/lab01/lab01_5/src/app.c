#include "app.h"

/* Variant 1
   sin(bx)
   ------ * e^(-ax)
    x
   a = 2.1, b = 3.9, x = 0.1 */

#define T1(b, x) (sin((b)*(x)))
#define T2(a, x) (exp(-(a)*(x)))
#define RESULT(a, b, x) ((T1(b, x) / (x)) * T2(a, x))

int main()
{
    double a, b, x;

    printf("Enter a, b, x: ");
    int ret = scanf("%lf %lf %lf", &a, &b, &x);

    if (ret != 3)
    {
        printf("Error! Cannot read 3 arguments but only %d\n", ret);
        return -1;
    }

    double result = RESULT(a, b, x);

    printf("sin(%.3f*%.3f)\n--------------  *e^-((%.3f*%.3f) = %.3f", b, x, a, x, result);
    printf("\n%.3f\n", x);

    return 0;
}
