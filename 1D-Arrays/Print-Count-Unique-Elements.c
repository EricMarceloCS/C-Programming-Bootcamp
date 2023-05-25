#include <stdio.h>
#define SIZE 10
int main() {

    int elements[SIZE]; // = {8, 7, 3, 4, 5, 6, 8, 9, 10, 3};
    int count = 0;
    int unique;

    for(int i = 0; i < SIZE; i++) {
        printf("Enter an array element: " );
        scanf("%d", &elements[i]);
    }

    for(int elm = 0; elm < SIZE; elm++) {
        unique = 0;
        for(int index = 0; index < SIZE; index++) {
            if(elm == index)
                continue;
            if(elements[elm] == elements[index]) {
                unique = 1;
                break;
            }
        }

        if(unique == 0) {
            printf("%d ", elements[elm]);
            count++;
        }
    }

    printf("\nUnique Element Count: %d\n", count);

    return 0;
}
