//Write a Program to find the largest number among three numbers.
#include <stdio.h>

int main()
{
    int c = 101, b = 21, a = 99;

    if (a >= b) {
        if (a >= c)
            printf("%d is the largest number.", a);
        else
            printf("%d is the largest number.", c);
    }
    else {
        if (b >= c)
            printf("%d is the largest number.", b);
        else
            printf("%d is the largest number.", c);
    }

    return 0;
}