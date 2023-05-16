#include <stdio.h>
#include <stdlib.h>

int main() {

    int number;

    printf("Enter the number of results: ");
    scanf("%d", &number);

    for(int i = 1; i <= number; i++){
        printf("%d ", i * 2);
    }

    printf("\n");
    return 0;
}
