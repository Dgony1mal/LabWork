#include <stdio.h>

int main() {
    double matrix[3][3];
    double sumMainDiagonal = 0.0, sumSideDiagonal = 0.0;

    printf("Введите значения матрицы 3х3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Элемент [%d][%d]: ", i, j);
            scanf("%lf", &matrix[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        sumMainDiagonal += matrix[i][i];
    }
    for (int i = 0; i < 3; i++) {
        sumMainDiagonal += matrix[i][2-i];
    }
    printf("Сумма элементов на главной диагонали:%.2f\n", sumMainDiagonal);
    printf("Сумма элементов на побочной диагонали:%.2f\n", sumSideDiagonal);

    return 0;
}