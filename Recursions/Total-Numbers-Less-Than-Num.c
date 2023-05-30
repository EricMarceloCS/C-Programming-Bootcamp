#include <stdio.h>

int getTotalNumberLess(int num) {

    int value;

    printf("Enter a value: ");
    scanf("%d", &value);

    if(value == -1) {
        return 0;
    } else if(value < num) {
        return 1 + getTotalNumberLess(num);
    } else {
        return getTotalNumberLess(num);
    }
}

int main() {

    int number;
    int result;

    printf("Enter a limit value: ");
    scanf("%d", &number);

    result = getTotalNumberLess(number);
    printf("The total numbers entered less than %d id %d.\n", number, result);

    return 0;
}
