#include <stdio.h>
#include <stdlib.h>

long getNineSequenceLength(int length) {

    long number = 0;
    for (int i = 0; i < length; i++) {
        number = number * 10 + 9;
    }

    return number;
}

long getSequenceLength(int length) {

    long number = 0;

    for(int i = 1; i <= length; i++) {
        number = number * 10 + i;
    }

    return number;
}

int main() {

    int length;
    long number;

    printf("Enter a length sequence of 9s: ");
    scanf("%d", &length);

    if(length <= 9) {
        number = getSequenceLength(length);
        printf("%ld\n", number);
    } else {
        number = getNineSequenceLength(length);
        printf("%ld\n", number);
    }





    return 0;
}
