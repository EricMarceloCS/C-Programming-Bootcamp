#include <stdio.h>

int getAscending(int number) {

    int num1, num2;

    if(number / 10 == 0) {
        return 1;
    }

    num1 = number % 10;
    num2 = number / 10 % 10;

    if(num1 > num2) {
        return getAscending(number / 10);
    } else {
        return 0;
    }

}

int getDescending(int number) {
    int num1, num2;

    if(number / 10 == 0) {
        return -1;
    }

    num1 = number % 10;
    num2 = number / 10 % 10;

    if(num1 < num2) {
        return getDescending(number / 10);
    } else {
        return 0;
    }

}

int getAscendOrDescendOrNot(int number) {

    int num1 = number % 10;
    int num2 = number / 10 % 10;

    if(num1 > num2) {
        return getAscending(number);
    } else if (num1 < num2) {
        return getDescending(number);
    } else {
        return 0;
    }
}
int main() {

    int number;
    int result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = getAscendOrDescendOrNot(number);

    printf("%d RESULT: %d\n", number, result);

    return 0;
}
