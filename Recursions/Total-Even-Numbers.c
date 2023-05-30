#include <stdio.h>

int getTotalEven() {
    int number;
    printf("Enter a number or -1: ");
    scanf("%d", &number);

    if(number == -1) {
        return 0;
    } else if (number % 2 == 0) {
        return 1 + getTotalEven();
    } else {
        return getTotalEven();
    }
}

int main() {

    int result = getTotalEven();

    printf("The total number of even numbers was: %d\n", result);

    return 0;
}
