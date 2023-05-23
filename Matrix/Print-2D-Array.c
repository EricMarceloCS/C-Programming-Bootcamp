#include <stdio.h>

int main() {

    int matrix[2][3] = {{1, 5, 9}, {2, 6, 10}};

    for(int row = 0; row < 2; row++) {
        for(int col = 0; col < 3; col++) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}
