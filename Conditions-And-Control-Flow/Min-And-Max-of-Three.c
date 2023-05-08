#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {

    int num1, num2, num3;
    int min = INT_MIN;
    int max = INT_MAX;

    printf("Enter three space separated integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 >= num2) {
        max = num1;
        min = num2;
    } else {
        max = num2;
        min = num2;
    }

    if(num3 > max)
        max = num3;

    if (num3 < min)
        min = num3;

    printf("Maximum: %d \nMinimum: %d: \n", max, min);

    return 0;
}
