#include <stdio.h>

int countDigits(int num) {

    int n = num / 10;
    if(n == 0) {
        return 1;
    } else {
        return 1 + countDigits(n);
    }
}

int main() {
    int digits = 0;
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    digits = countDigits(number);
    printf("The number of digits in %d is %d.\n", number, digits);

    return 0;
}
