#include <stdio.h>
#include <stdlib.h>

long getNineSequenceLength(int length) {

    long number = 0;
    for (int i = 0; i < length; i++) {
        number = number * 10 + 9;
    }

    return number;
}

int main() {

    int length;
    long number;

    printf("Enter a length sequence of 9s: ");
    scanf("%d", &length);

    number = getNineSequenceLength(length);
    printf("%ld", number);

    return 0;
}
