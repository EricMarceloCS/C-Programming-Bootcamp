#include <stdio.h>

int main() {

    double a = 10;
    double b = 20;
    double temp;

    printf("a = %.2lf\n", a);
    printf("b = %.2lf\n", b);

    temp = a;
    a = b;
    b = temp;

    printf("a = %.2lf\n", a);
    printf("b = %.2lf\n", b);

    return 0;
}
