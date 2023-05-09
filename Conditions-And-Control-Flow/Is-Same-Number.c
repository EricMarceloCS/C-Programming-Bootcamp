#include <stdio.h>
#include <stdlib.h>

int main() {

    double num1, num2;

    printf("Enter to numbers for equality comparison: ");
    scanf("%lf %lf", &num1, &num2);

    if(num1 == num2)
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;

}
