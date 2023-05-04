#include <stdio.h>

int main() {

    int num;
    int hundreds;
    int tens;
    int ones;

    printf("Enter a 3-digit number to calculate sum: ");
    scanf("%d", &num);

    hundreds = num / 100;
    tens = (num / 10) % 10;
    ones = num % 10;

    printf("Triple Digit Sum of %d is %d\n", num, hundreds + tens + ones);

    return 0;
}
