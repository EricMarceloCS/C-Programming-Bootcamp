#include <stdio.h>

int getMax(int num) {

    int max;
    int input;

    if(num >= 1) {
        printf("Enter a value: ");
        scanf("%d", &input);
        max = getMax(num -1);

        if(input > max) {
            return input;
        } else {
            return max;
        }
    }
    return max;
}

int main() {

    int max;
    int num;

    printf("Enter the number of values to be evaluated: ");
    scanf("%d", &num);
    max = getMax(num);
    printf("The maximum of the sequence is %d.\n", max);

    return 0;
}
