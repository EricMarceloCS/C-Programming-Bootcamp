#include <stdio.h>
#include <stdlib.h>

int main() {

    int number;

    printf("Enter a size for the triangle: ");
    scanf("%d", &number);

    for(int i = 1; i <= number; i++){
        for(int n = 1; n <= i; n++){
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
