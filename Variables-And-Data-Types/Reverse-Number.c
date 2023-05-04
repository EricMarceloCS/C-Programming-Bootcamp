#include <stdio.h>

int main() {

    int num;
    int hundreds;
    int tens;
    int ones;

    printf("Enter a 3-digit number to reverse: ");
    scanf("%d", &num);

    hundreds = num / 100;
    tens = (num / 10) % 10;
    ones = num % 10;

    printf("Reverse of %d is %d%d%d\n", num, ones, tens, hundreds);
    return 0;
}
