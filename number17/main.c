//Write a program to Print Half half-pyramid pattern.
#include <stdio.h>

int main() {
    int n = 5;

    // Outer loop is for printing the rows
    for (int i = 0; i < n; i++) {

        // First inner loop for printing leading whitespaces
        for (int j = 0; j < 2 * (n - i - 1); j++)
            printf(" ");

        // Second inner loop for printing * character
        for (int k = 0; k <= i; k++)
            printf("%d ", k + 1);
        printf("\n");
    }
    return 0;
}