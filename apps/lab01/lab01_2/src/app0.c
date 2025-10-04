#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Variant 26
// e^(a * |1 - 2*cos(b*x)|)
// a = 7.23, b = 3.43, x = 5.22

int main()
{
	double a, b, x;

	printf("Enter a, b, x:");

	int ret = scanf("%lf %lf %lf", &a, &b, &x);

	if (ret != 3)
	{
		printf("Error! Cannot read 3 arguments but only %d\n", ret);
		return -1;
	}

	printf("\n");

    double t1 = sin(b*x);

    double t2 = exp(-a*x);

    double result = (t1 / x) * t2;

    printf("sin(%.3f*%.3f)\n--------------  *e^-((%.3f*%.3f) = %.3f", b, x, a, x, result);
    printf("\n%.3f\n", x);

    return 0;
}
