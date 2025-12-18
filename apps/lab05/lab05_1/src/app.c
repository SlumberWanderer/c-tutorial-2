#include "app.h"

int main()
{
    run_test_case(2.0, 10);
    run_test_case(3.0, 5);
    run_test_case(2.0, -3);

    return 0;
}

void run_test_case(double x, int n)
{
    printf("Base: %.3lf, Exponent: %d\n", x, n);
    printf("Recursive: %.3lf\n", power_recursive(x, n));
    printf("Iterative: %.3lf\n", power_iterative(x, n));
    printf("Standard:  %.3lf\n\n", pow(x, n)); // \n\n додає пустий рядок між тестами
}
