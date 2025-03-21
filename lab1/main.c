#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double a, b, c;
    double x1, x2, d;
    char choice;

    do {
        printf("Введите коэффициенты a, b, c: ");
        scanf("%lf %lf %lf", &a, &b, &c);

        d = pow(b, 2) - 4 * a * c;

        if (d > 0) {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            printf("x1 = %lf\n", x1);
            printf("x2 = %lf\n", x2);
        } else if (d == 0) {
            x1 = -b / (2 * a);
            printf("x = %lf\n", x1);
        } else {
            printf("Корней нет, дискриминант меньше нуля.\n");
        }

        printf("Решить снова? (y/n): ");
        while (getchar() != '\n');
        scanf("%c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
