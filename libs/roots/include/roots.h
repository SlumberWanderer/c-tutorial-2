#include <math.h>
#include <stdlib.h>

#ifndef ROOTS_H
#define ROOTS_H

typedef double (*func_t)(double);

double bisect(double a, double b, func_t f, double eps);
double newton(double x0, func_t f, func_t df, int max_iter, double eps);
double chord(double a, double b, func_t f, double eps);

#endif
