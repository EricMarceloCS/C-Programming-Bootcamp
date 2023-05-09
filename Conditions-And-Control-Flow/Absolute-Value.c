#include <stdio.h>
#include <stdlib.h>

int main() {

    int input;
    int result;

    printf("Enter a number to get the absolute value: ");
    scanf("%d", &input);

    result = input;
    if(result < 0)
        result = result * -1;

    printf("Absolute value of %d is %d.\n", input, result);
    return 0;
}
