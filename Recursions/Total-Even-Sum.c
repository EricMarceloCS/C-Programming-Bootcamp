#include <stdio.h>

int getTotalEvenSum() {
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    if(input == -1) {
        return 0;
    } else if (input % 2 == 0) {
        return input + getTotalEvenSum();
    } else {
        return getTotalEvenSum();
    }
}

int main() {

    int result = getTotalEvenSum();

    printf("The total even sum of entries: %d\n", result);
    return 0;
}
