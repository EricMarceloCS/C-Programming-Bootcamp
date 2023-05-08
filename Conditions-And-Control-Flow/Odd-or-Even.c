#include <stdio.h>
#include <stdlib.h>

int main() {

    int number;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    if((number % 2) != 0 )
        printf("%d is odd.\n", number);
    else
        printf("%d is even.\n", number);

    return 0;
}
