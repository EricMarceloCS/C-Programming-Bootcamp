#include <stdio.h>

int main() {

    double celsius;
    double farenheight;

    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    // T(C) x 1.8 + 32 = T(F)
    farenheight = celsius * 1.8 + 32;
    printf("Farenheit: %.1lf", farenheight);

    return 0;
}
