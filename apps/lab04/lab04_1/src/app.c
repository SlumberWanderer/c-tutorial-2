#include "app.h"

#define N 10

int main()
{
    srand(time(NULL));

    int a[N];
    int i;

    for (i = 0; i < N; ++i) {
        a[i] = rand() % 100;
    }

    printf("Array:\n");
    for (i = 0; i < N; ++i) {
        printf("%d\t", a[i]);
    }
    printf("\n");

    for (i = 0; i < N - 1; i += 2) {
        int temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
    }

    printf("Modified array:\n");
    for (i = 0; i < N; ++i) {
        printf("%d\t", a[i]);
    }
    return 0;
}
