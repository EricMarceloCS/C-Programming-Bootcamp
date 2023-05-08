#include <stdio.h>
#include <stdlib.h>

int main() {

    double num1;
    double num2;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    if(num1 > num2)
        printf("max = %lf!\n", num1);
    else
        printf("max = %lf!\n", num2);

    return 0;
}
