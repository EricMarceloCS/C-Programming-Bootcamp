#include <stdio.h>

int getSum(int num) {
    int n = num / 10;
    if(n == 0) {
        return num % 10;
    } else {
        return (num % 10) + getSum(n);
    }
}

int getEvenOne(int num) {
    int sum = getSum(num);

    if(sum % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {

    int num;
    int result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = getEvenOne(num);

    printf("Even Sum: 1 Odd Sum: 0 Result: %d\n", result);
    return 0;
}
