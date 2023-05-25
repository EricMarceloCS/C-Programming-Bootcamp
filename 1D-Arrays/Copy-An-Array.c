#include <stdio.h>
#define SIZE 3

int main() {

    int date[] = {1, 2, 2000};
    int dateCopy[SIZE];

    for(int i = 0; i < SIZE; i++) {
        dateCopy[i] = date[i];
    }

    for(int i = 0; i < SIZE; i++) {
        printf("Date: %d\n", date[i]);
        printf("Date Copy: %d\n", dateCopy[i]);
    }

    return 0;
}
