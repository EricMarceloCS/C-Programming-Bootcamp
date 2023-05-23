#include <stdio.h>
#define SIZE 13

int main() {

    int matrix[SIZE][SIZE];

    for(int i = 1; i < SIZE; i++)
        for(int j = 1; j < SIZE; j++)
            matrix[i][j] = i * j;

    for(int i = 1; i < SIZE; i++){
        for(int j = 1; j < SIZE; j++) {
            printf("%5d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
