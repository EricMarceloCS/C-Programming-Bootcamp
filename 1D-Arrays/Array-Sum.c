#include <stdio.h>
#include <stdlib.h>

int sumOfArray(int *pArray, int size) {
    int sum = 0;

    for(int i = 0; i < size; i++) {
        sum += pArray[i];
    }

    return sum;
}

int main() {

    int size;
    int sum = 0;
    printf("Enter a size of the array: ");
    scanf("%d", &size);

    int elements[size];
    for(int i = 0; i < size; i++) {
        printf("Enter an array value: ");
        scanf("%d", &elements[i]);
    }

    sum = sumOfArray(&elements, size);
    printf("Sum: %d\n", sum);


    return 0;
}
