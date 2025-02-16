#include <stdio.h>
#include <math.h>

int main() {

  double a, b, c;
  double d, x1, x2;

  a = 1.0;
  b = 5.0;
  c = 6.0;

  d = b * b - 4 * a * c;

  if (d >= 0) {
 
    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);

    printf("К x1 = %.2lf\n", x1);
    printf("К x2 = %.2lf\n", x2);
  } else {

    printf("К нет, д отрицательный.\n");
  }

  return 0;
}

