#include <stdio.h>

void resetArray(int *pArray, int size) {

    for(int i = 0; i < size; i++) {
        pArray[i] = 0;
    }
}

int main() {

    int size;
    printf("Enter a size of the array: ");
    scanf("%d", &size);

    int elements[size];
    for(int i = 0; i < size; i++) {
        printf("Enter an array value: ");
        scanf("%d", &elements[i]);
    }

    printf("Before Reset: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", elements[i]);
    }
    printf("\n");

    resetArray(&elements, size);
    printf("After Reset: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", elements[i]);
    }
    printf("\n");

    return 0;
}
