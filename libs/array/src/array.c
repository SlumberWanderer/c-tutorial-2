#include "array.h"

void fill_random(int *a, int size)
{
    for (int i = 0; i < size; ++i)
    {
        a[i] = rand() % 100;
    }
}

void print_array(const int *a, int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void swap_pairs(int *a, int size)
{
    for (int i = 0; i < size - 1; i += 2)
    {
        int temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
    }
}
