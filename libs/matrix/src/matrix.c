#include "matrix.h"

void fill_random(double m[ROWS][COLS])
{
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            m[i][j] = (rand() % 90) + 10;
        }
    }
}

void print_matrix(double m[ROWS][COLS])
{
    printf("Matrix:\n");
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            printf("%6.0f\t", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void find_min_max_rows(double m[ROWS][COLS])
{
    printf("Min and Max per row:\n");
    for (int i = 0; i < ROWS; ++i) {
        double min = m[i][0];
        double max = m[i][0];
        for (int j = 1; j < COLS; ++j) {
            if (m[i][j] < min) min = m[i][j];
            if (m[i][j] > max) max = m[i][j];
        }
        printf("Row %d: Min = %3.0f, Max = %3.0f\n", i + 1, min, max);
    }
}

void process_sums(double m[ROWS][COLS])
{
    double initial_val = m[0][0];
    double initial_log = log(initial_val);
    double current_sum = initial_log;
    double target = 5 * initial_log; 
    int found = 0;

    printf("\nElement [0][0] = %.0f, ln(%.0f) = %.3f\n", initial_val, initial_val, initial_log);
    printf("Target sum = %.3f\n", target);

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (i == 0 && j == 0) continue;

            current_sum += m[i][j];
            
            if (current_sum > target) {
                printf("Process end at index: [%d][%d] (Row %d, Col %d)\n", i, j, i+1, j+1);
                printf("Final sum: %.3f\n", current_sum);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
}
