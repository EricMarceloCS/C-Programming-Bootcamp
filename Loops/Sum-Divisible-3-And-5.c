#include <stdio.h>
#include <stdlib.h>

int main() {

    int number;
    int fiveAndThree = 15;
    int sum = 0;

    printf("Enter a number to sum: ");
    scanf("%d", &number);

    while(fiveAndThree <= number){
        sum += fiveAndThree;
        fiveAndThree += 15;
    }

    printf("Sum: %d\n", sum);

    return 0;
}
