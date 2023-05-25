#include <stdio.h>
#define SIZE 10

int main() {

    int elements[SIZE];
    int elementCount[SIZE] = {0};
    int nonUnique = 0;

    for(int i = 0; i < SIZE; i++) {
        printf("Enter element in array from 0-9: ");
        scanf("%d", &elements[i]);
        elementCount[elements[i]] += 1;
    }

    for(int i = 0; i <= SIZE; i++) {
        if(elementCount[i] > 1) {
            nonUnique++;
        }
    }

    printf("Number of non-unique elements: %d\n", nonUnique);

    return 0;
}
