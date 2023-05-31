#include <stdio.h>

int getMin(int num) {

    int min = 2000000000;
    int input;

    if(num >= 1) {
        printf("Enter a value to the sequence: ");
        scanf("%d", &input);
        min = getMin(num - 1);
        if(input < min) {
            min = input;
            return input;
        } else {
            return min;
        }
    }

    return min;
}

int main() {

    int num;
    int min;

    printf("Enter the number of sequence values: ");
    scanf("%d", &num);

    min = getMin(num);
    printf("The minimum value of the sequence is %d.\n", min);
    return 0;
}
