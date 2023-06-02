#include <stdio.h>

int getEvenOdd(int num, int digit) {
    int count = 0;

    if(num / 10 == 0) {
        if(num % 10 == digit) {
            return 1;
        } else {
            return 0;
        }
    }

    if(num % 10 == digit) {
        return 1 + getEvenOdd(num / 10, digit);
    } else {
        return getEvenOdd(num / 10, digit);
    }

}

int isEvenOrOdd(int num, int digit) {
    int result = getEvenOdd(num, digit);
    if(result % 2 == 0) {
        return 1;
    } else {
        return  0;
    }
}

int main() {

    int number, digit;
    int result;

    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter a search digit: ");
    scanf("%d", &digit);

    result = isEvenOrOdd(number, digit);

    printf("Even: 1\nOdd: 0\nResult of %d in %d: %d\n", digit, number, result);
    return 0;
}
