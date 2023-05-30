#include <stdio.h>

int sumOfDigits(int num) {

    if(num / 10 == 0) {
        return num % 10;
    } else {
        return (num % 10) + sumOfDigits(num / 10);
    }
}

int main() {
    int sum = 0;
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    sum = sumOfDigits(number);
    printf("The sum of %d is %d.\n", number, sum);

    return 0;
}
