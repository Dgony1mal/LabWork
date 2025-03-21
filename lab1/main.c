#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double a, b, c;
    double x1, x2, d;
    char choice;

    do {
        // Ввод коэффициентов квадратного уравнения
        printf("Введите коэффициенты a, b, c: ");
        scanf("%lf %lf %lf", &a, &b, &c);

        // Вычисление дискриминанта
        d = b * b - 4 * a * c;

        // Проверка значения дискриминанта
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

        // Запрос на повторное решение
        printf("Решить снова? (y/n): ");
        while (getchar() != '\n'); // Очистка буфера ввода
        scanf("%c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}