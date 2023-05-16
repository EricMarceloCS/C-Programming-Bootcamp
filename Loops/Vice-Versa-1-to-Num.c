#include <stdlib.h>
#include <stdio.h>

int main() {

    int number;
    int current = 1;

    printf("Enter A Number To Print Vice Versa: ");
    scanf("%d", &number);

    while(current <= number){
        printf("%d ", current);
        current++;
    }

    printf("\n");

    while(--current > 0){
        printf("%d ", current);
    }
    printf("\n");

    return 0;
}
