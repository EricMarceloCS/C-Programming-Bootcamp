#include <stdio.h>

int main() {

    double farenheight;
    double celsius;

    printf("Enter temperature in Farenheight: ");
    scanf("%lf", &farenheight);
    celsius = (farenheight - 32) / 1.8;
    printf("Celsuis : %.1lf", celsius);

    return 0;
}
