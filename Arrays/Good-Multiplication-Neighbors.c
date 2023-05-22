#include <stdio.h>
#define SIZE 5

int main() {

    int neighbors[SIZE];

    for(int i = 0; i < SIZE; i++) {
        printf("Enter neighbor value: ");
        scanf("%d", &neighbors[i]);
    }

    for(int i = 1; i < SIZE - 1 ; i++){
        if(neighbors[i] == neighbors[i-1] * neighbors[i+1]) {
            printf("This Array has good neighbors!!\n");
            break;
        }
        if(i == SIZE -2 && neighbors[i-1] * neighbors[i+1] != neighbors[i]) {
            printf("This Array does not have good neighbors.\n");
        }
    }
    return 0;
}
