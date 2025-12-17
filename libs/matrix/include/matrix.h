#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef MATRIX_UTILS_H
#define MATRIX_UTILS_H

#define ROWS 5
#define COLS 5

void fill_random(double m[ROWS][COLS]);
void print_matrix(double m[ROWS][COLS]);
void find_min_max_rows(double m[ROWS][COLS]);
void process_sums(double m[ROWS][COLS]);

#endif
