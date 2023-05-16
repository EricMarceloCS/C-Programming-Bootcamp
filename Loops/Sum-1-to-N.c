#include <stdio.h>
#include <stdlib.h>

int main(){

    int number;
    int sum = 0;

    printf("Enter the maximum number to sum all previous integers: ");
    scanf("%d", &number);

    for(int i = 0; i <= number; i++){
        sum += i;
    }

    printf("The sum of all integers to %d is: %d\n", number, sum);
    return 0;
}
