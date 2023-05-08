#include <stdio.h>
#include <stdlib.h>

int main() {

    int input, hundreds, tens, ones;

    printf("Enter a three digit ascending test number: ");
    scanf("%d", &input);

    hundreds = input / 100;
    tens = (input / 10) % 10;
    ones = input % 10;

    if ( hundreds < tens && tens < ones)
        printf("ASCENDING\n");
    else
        printf("NOT ASCENDING\n");
    return 0;
}
