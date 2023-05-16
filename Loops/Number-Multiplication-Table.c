#include <stdio.h>
#include <stdlib.h>

int main() {

    int number, maxMultiple;

    printf("Enter a number to see it's multiplication table: ");
    scanf("%d", &number);
    printf("Enter the maximum number of multiplications: ");
    scanf("%d", &maxMultiple);

    for(int i = 1; i <= maxMultiple; i++){
        printf("%d ", i * number);
    }
    printf("\n");

    return 0;
}
