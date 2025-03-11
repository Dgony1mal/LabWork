//Write a Program to Swap the values of two variables.
#include <stdio.h>

int main() {
    int a = 578, b = 550, temp;

    // Swapping values of a and  b
    temp = a;
    a = b;
    b = temp;

    printf("a = %d, b = %d\n", a, b);
    return 0;
}