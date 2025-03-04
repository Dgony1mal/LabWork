//Write programm for sum of two numbers entered by the user
#include <stdio.h>

int main() {
    int a, b, sum = 0;
    printf("Vvedite dva chisla: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum: %d", sum);
    return 0;
}