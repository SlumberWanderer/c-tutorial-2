#include <app.h>

// Рівняння кіл: (x + 1)^2 + y^2 = 1 і x^2 + y^2 = 1
int main() {
    float x, y;

    printf("Введіть координати точки M(x, y): ");
    scanf("%f %f", &x, &y);

    int t1= pow(x + 1, 2) + pow(y, 2) <= 1;
    int t2 = pow(x, 2) + pow(y, 2) <= 1;

    if (t1 && t2)
        printf("Точка (%.2f, %.2f) належить області перетину кіл.\n", x, y);
    else
        printf("Точка (%.2f, %.2f) не належить області перетину кіл.\n", x, y);

    return 0;
}

