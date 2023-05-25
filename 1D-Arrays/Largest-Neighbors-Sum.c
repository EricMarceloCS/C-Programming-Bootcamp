#include <stdio.h>
#define SIZE 5

int main() {
    int i;
    int neighbors[SIZE] = {1, 4, 3, 7, 1};
    int max = 0;

    for(int i = 1; i < SIZE; i++) {
        int current = neighbors[i] + neighbors[i-1];
        if(current > max) {
            max = current;
        }
    }

    printf("Maximum Neighbors Sum: %d\n", max);

    return 0;
}
