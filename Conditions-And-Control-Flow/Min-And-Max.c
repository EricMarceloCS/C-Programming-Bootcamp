#include <stdio.h>
#include <stdlib.h>

int main() {

    double num1;
    double num2;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    if(num1 > num2)
        printf("Maximum: %lf \nMinimum: %lf\n", num1, num2);
    else
        printf("Maximum: %lf \nMinimum: %lf\n", num2, num1);

    return 0;
}
