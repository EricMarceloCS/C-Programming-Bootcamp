#include <stdio.h>
#define SIZE 4
#define N 2

int main() {

int element;
    int elements[SIZE] = {5, 4, 7, 3};
    int count = 0;

    printf("Before Rotation: ");
    for(int i = 0; i < SIZE; i++) {
        printf("%d ", elements[i]);
    }
    printf("\n");

    while(count < N) {
        element = elements[0];
        for(int i = 1; i < SIZE; i++) {
            elements[i-1] = elements[i];
        }
        elements[SIZE-1] = element;
        count++;
    }

    printf("After Rotation: ");
    for(int i = 0; i < SIZE; i++) {
        printf("%d ", elements[i]);
    }
    printf("\n");


    return 0;
}
