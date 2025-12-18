#include "app.h"

int main()
{
    srand(time(NULL));

    double m[ROWS][COLS];

    fill_random(m);
    print_matrix(m);
    find_min_max_rows(m);
    process_sums(m);

    return 0;
}
