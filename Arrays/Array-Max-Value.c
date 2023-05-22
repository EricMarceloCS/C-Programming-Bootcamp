#include <stdio.h>
#include <stdlib.h>
#define SIZE 7

void printMaxDigit(int phoneNumber[]) {

    int max = 0;

    for(int i = 0; i < SIZE;  i++) {
        printf("%d \r", phoneNumber[i]);
        if(max < phoneNumber[i]){
            max = phoneNumber[i];
        }
    }

    printf("The largest digit in your phone number is: %d.\n", max);
}

int main() {

    int phoneNumber[] = {1, 4, 0, 2, 9, 4, 5};

    printMaxDigit(phoneNumber);

    return 0;
}
