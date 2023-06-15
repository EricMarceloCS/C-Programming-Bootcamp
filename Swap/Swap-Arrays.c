#include <stdio.h>
#define SIZE 5

void swap(int* val1, int* val2) {
    int temp;
    temp = *val1;
    *val1 = *val2;
    *val2 = temp;

}

void swapArray(int* array1, int* array2) {

    for(int i = 0; i < SIZE; i++) {
        swap(&array1[i], &array2[i]);
    }
}

void printArray(int* array) {

    for(int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void swapArrayAddress(int** ptr1, int** ptr2) {
    int *temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main() {
    int array1[SIZE] = {1, 3, 6, 8, 10};
    int array2[SIZE] = {2, 2, 4, 11, 17};

    printf("Before swap...\n");
    printArray(&array1);
    printArray(&array2);
    swapArray(&array1, &array2);

    printf("After swap...\n");
    printArray(&array1);
    printArray(&array2);

    printf("Before swap...\n");
    printArray(&array1);
    printArray(&array2);
    swapArrayAddress(&array1, &array2);

    printf("After swap...\n");
    printArray(&array1);
    printArray(&array2);

    return 0;
}
