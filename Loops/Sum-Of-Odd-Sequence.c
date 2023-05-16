#include <stdio.h>
#include <stdlib.h>

int main() {

    int number, current = 1, value, sum = 0;

    printf("Enter the number of values in the sequence: ");
    scanf("%d", &number);

    while(current <= number){
        printf("Enter a value: ");
        scanf("%d", &value);
        if(value % 2 != 0){
            sum += value;
        }
        current++;
    }

    printf("Sum: %d\n", sum);

    return 0;
}
