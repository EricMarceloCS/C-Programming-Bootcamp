#include <stdio.h>
#define SIZE 5

int main() {

    int input[SIZE];
    int sorted = 0;
    int current, previous;

    for(int i = 0; i < SIZE; i++) {
        printf("Enter a value: ");
        scanf("%d", &input[i]);
    }

    for(int i = 1; i < SIZE; i++) {
        previous = input[i-1];
        current = input[i];
        if(current > previous) {

        }else if( current == previous) {
            sorted = 1;
        }else if( current < previous) {
            sorted = 2;
            break;
        }
    }

    switch(sorted) {
        case 0:
            printf("Really Sorted\n");
            break;
        case 1:
            printf("Sorted\n");
            break;
        case 2:
            printf("Not Sorted\n");
            break;
        default:
            printf("Error");
    }


    return 0;
}
