#include "app.h"

#define N 10

int main()
{
    srand(time(NULL));

    int a[N];

    fill_random(a, N);

    printf("Array:\n");
    print_array(a, N);

    swap_pairs(a, N);

    printf("Modified array:\n");
    print_array(a, N);

    return 0;
}
