#include <stdio.h>

int main() {

    double data;
    double decimal;

    printf("Enter a decimal number: ");
    scanf("%lf", &data);

    decimal = data - (int) data;

    printf("Decimal: %lf\n", decimal);

    return 0;
}
